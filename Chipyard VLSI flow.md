# VLSI Flow Tutorial Part 1: Hammer Overview & Setup

This tutorial covers the VLSI (Very Large Scale Integration) flow in Chipyard. Chipyard uses a framework called **Hammer** to abstract physical design. Instead of writing specific scripts for Cadence (Genus/Innovus) or Synopsys (DC/ICC2), you write high-level configurations in YAML / JSON, and Hammer generates the tool-specific Tcl scripts for you.

## 1. The Hammer Philosophy

Hammer separates concerns into three distinct layers. This allows you to swap technologies or tools without rewriting your entire flow.

1. **Base (Design):** What are you building? (Verilog source, Top module name, Clock frequencies).
2. **Technology (Tech):** How is it built? (PDK paths, Standard Cell Libraries, Metal layers).
3. **Tool (Environment):** What software generates it? (License paths, executable locations for Genus, Innovus, Design Compiler, OpenROAD).

---

## 2. Directory Structure

All VLSI operations happen in the `vlsi/` directory.

```text
chipyard/
  ├── vlsi/
  │    ├── Makefile         # The central command runner
  │    ├── build/           # Where all outputs (logs, netlists, GDS) go
  │    ├── hammer/          # The core Hammer python source
  │    └── example-vlsi     # Example configuration files

```

---

## 3. Step 1: Configuration (The YAML Files)

You need to tell Hammer what to build. We use YAML files for this.

**Create a file:** `vlsi/my-design.yml`

### A. Defining the RTL & Inputs

This file tells Hammer where to find your Verilog (generated from Chipyard) and how to constrain it.

```yaml
# vlsi/my-design.yml

# 1. Input Source
# Hammer usually expects a single pickled verilog file or a list of files.
synthesis.inputs:
  input_files:
    - "chipyard.MyConfig.top.v" # This is usually auto-filled by the Makefile
  top_module: "ChipTop"

# 2. Clock Constraints
# Define the target frequency for the main system clock
vlsi.inputs.clocks: [
  {name: "clock", period: "1ns", uncertainty: "0.1ns"} # 1GHz Target
]

# 3. Power Straps (Optional for Synthesis, Critical for P&R)
par.power_straps_mode: generate
par.generate_power_straps_method: by_tracks
par.blockage_spacing: 2.0

```

### B. Defining the Technology & Tools

Usually, you don't write these from scratch. You include existing plugins.

* **Open Source:** Skywater 130 (`sky130`), ASAP7 (`asap7`).
* **Commercial:** TSMC, Intel, GF (requires NDA and specific Hammer plugins).

**Example `Makefile` setup (using ASAP7 as an example):**
You rarely edit the YAML for tech manually; you select it via the Makefile variables.

---

## 4. Step 2: The Makefile Wrapper

The `vlsi/Makefile` wraps the Hammer Python executable. It automatically pulls the Verilog from the `generators` directory.

### Syntax Guide: The Make Command

`make <Action> CONFIG=<ConfigName> TECH=<TechName> TOOL=<ToolName>`

| Variable | Description | Example |
| --- | --- | --- |
| `CONFIG` | The Chipyard Config used to generate the RTL. | `SixCoreHeteroConfig` |
| `TECH` | The PDK to use. | `asap7` (7nm educational), `sky130` (130nm open) |
| `VLSI_TOP` | The Top Module Name (default is ChipTop). | `DigitalTop` (if you want partial flow) |

---

## 5. Example: Initializing the Project

Before running synthesis, we need to initialize the build area and map the technology.

```bash
cd vlsi

# Initialize the build directory for our 6-core config
# Using the ASAP7 educational PDK
make build-init CONFIG=SixCoreHeteroConfig TECH=asap7

```

**Output:** This creates a folder `vlsi/build/chipyard.SixCoreHeteroConfig-asap7/`. Inside, you will find auto-generated Makefiles and Hammer configs.

# VLSI Flow Tutorial Part 2: Synthesis (RTL to Gates)

Synthesis is the process of translating your high-level Verilog (RTL) into a structural netlist of standard cells (AND, OR, Flip-Flops) provided by your technology library (PDK).

## 1. The Challenge: Memories (SRAMs)

Before we can synthesize, we must address the "Elephant in the Room": **RAMs**.

* **The Problem:** Your Chisel code requests generic behavioral memories. If you send these directly to a synthesis tool, it will try to build your Mega-Byte L2 cache out of individual flip-flops. This will explode your area usage and fail timing.
* **The Solution:** Hammer automates **Macro Mapping**. It scans your RTL, finds memory structures, and replaces them with "Black Boxes" that match the SRAM macros available in your PDK (or generates them if you have a memory compiler).

## 2. Step 1: Generate the RTL & Mapping

When you run the VLSI command, the underlying system (SBT) automatically runs the `tapeout` generator. This produces:

1. `ChipTop.v`: The flattened Verilog.
2. `ChipTop.mems.conf`: A list of all memories required by your design.
3. `hammer-sram-mapping.json`: A map connecting those requirements to actual PDK SRAM instances.

## 3. Step 2: Running Synthesis

The syntax follows the same pattern as Part 1. We generally use the `syn` target.

**Command:**

```bash
cd vlsi

# Run synthesis for our 6-core config
# TECH=asap7 uses a fake educational technology (good for testing flow without NDA)
make syn CONFIG=SixCoreHeteroConfig TECH=asap7

```

**What happens under the hood?**

1. **Translation:** Hammer reads the YAML inputs.
2. **Script Gen:** It generates a Tcl script specific to your tool (e.g., `synthesis.tcl` for Genus or Design Compiler).
3. **Execution:** It launches the synthesis tool.
4. **Export:** It saves the netlist and constraints.

## 4. Step 3: Analyzing Outputs

Once synthesis completes (which can take 1-20 hours depending on core count), results are stored in the build directory.

**Directory:** `vlsi/build/chipyard.SixCoreHeteroConfig-asap7/syn-rundir/`

**Key Files:**
| File | Description | Usage |
| :--- | :--- | :--- |
| `rtls.v` | The Gate-Level Netlist | Input for Place & Route (Part 3) |
| `rtls.sdc` | Synopsys Design Constraints | Timing rules (Clock definition) |
| `reports/` | Directory of logs | **Check this first!** |

### Reading Reports

Look into the `reports/` folder for these standard files:

* **`final_qor.rpt` (Quality of Results):** The most important summary. It tells you:
* **Timing Slack:** Is it positive? (Positive = Met frequency / Negative = Too slow).
* **Total Power:** Leakage vs. Dynamic power.
* **Cell Area:** Total silicon area used.


* **`final_timing.rpt`:** Detailed paths of the worst timing violations.

## 5. Syntax & Troubleshooting Guide

| Issue | Solution / Command |
| --- | --- |
| **Change Tool** | Use `HAMMER_SYN_TOOL` variable. <br>

<br> `make syn ... HAMMER_SYN_TOOL=genus` (Cadence) <br>

<br> `make syn ... HAMMER_SYN_TOOL=dc` (Synopsys) |
| **Override Config** | Use `HAMMER_EXTRA_ARGS` to inject YAML overrides on the fly. <br>

<br> `make syn ... HAMMER_EXTRA_ARGS="--config-strings 'synthesis.inputs.top_module: MyCustomTop'"` |
| **Clean Start** | If parameters changed, wipe the build folder. <br>

<br> `make clean-build-dir` |
| **Dry Run** | Generate the scripts without running the heavy tool. <br>

<br> `make syn-to-step STEP=init_environment ...` |

### Synthesis YAML Reference

You can add these to your `my-design.yml` to tune results:

```yaml
# Control Optimization Level
synthesis.inputs:
  preserve_modules: ["MyBlackBox"] # Don't optimize inside these modules

# specific tool settings (e.g., Design Compiler)
vlsi.core.synthesis_tool: "hammer.synthesis.dc"
synthesis.dc.clock_gating: true   # Enable automatic clock gating to save power

```

# VLSI Flow Tutorial Part 3: Place & Route (P&R)

Place and Route (P&R) is the physical realization of your design. It takes the abstract gate-level netlist from Synthesis and maps it onto the physical dimensions of the silicon die, connecting the miles of metal wiring required to make the chip function.

## 1. The P&R Stages

Hammer automates the complex P&R tool flow (e.g., Cadence Innovus or Synopsys IC Compiler II) into five distinct steps:

1. **Floorplanning:** Defining the chip size (`width` x `height`) and placing input/output pins and macro blocks (SRAMs).
2. **Placement:** Arranging the millions of standard cells (gates) into rows to minimize wire length.
3. **CTS (Clock Tree Synthesis):** Building a balanced buffer tree so the clock signal reaches every flip-flop at the exact same time.
4. **Routing:** connecting all the pins with metal wires while obeying Design Rule Checks (DRC).
5. **Signoff:** Final verification and generating the GDSII file (the manufacturing blueprint).

---

## 2. Step 1: Floorplan Configuration (YAML)

Before running the tool, you **must** define the physical constraints. Unlike synthesis, the tool cannot guess how big your chip should be.

Add these to your `vlsi/my-design.yml` (or create a `par.yml`):

```yaml
# par.yml

# 1. Dimensions (Width x Height)
# You must estimate area based on cell count from synthesis reports.
par.inputs:
  top_module: "ChipTop"
  floorplan_mode: "auto" # or "manual" for specific macro placement

# 2. Pin Placement
# Defines where the IO pins (Clock, Reset, UART) sit on the boundary.
par.inputs.pin_assignments:
  - pins: "clock"
    side: "bottom"
    layer: "M4"
  - pins: "reset"
    side: "bottom"
    layer: "M4"

# 3. Power Distribution Network (Power Straps)
# This defines the grid of VDD/VSS metal wires.
par.power_straps_mode: "generate"
par.generate_power_straps_options:
  by_tracks:
    strap_layers:
      - M3
      - M4
      - M5
    pin_layers:
      - M5

```

---

## 3. Step 2: Running P&R

Use the `par` target in the Makefile.

```bash
cd vlsi

# Run P&R for the 6-core config
make par CONFIG=SixCoreHeteroConfig TECH=asap7

```

**Common Variables:**

* `HAMMER_PAR_TOOL`: Override the tool (e.g., `innovus`, `icc2`).
* `HAMMER_EXTRA_ARGS`: Add config without editing files (e.g., `-p par.yml`).

---

## 4. Step 3: Analyzing Outputs

P&R produces the final artifacts for manufacturing.

**Directory:** `vlsi/build/chipyard.SixCoreHeteroConfig-asap7/par-rundir/`

| File Extension | Name | Description | Use Case |
| --- | --- | --- | --- |
| **.gds** | GDSII Stream | The binary database of geometry (polygons). | Sent to the Foundry for Fab. |
| **.def** | Design Exchange Format | ASCII representation of placement/wiring. | Debugging layout in viewers. |
| **.lef** | Library Exchange Format | Abstract view of the block (pin locations/obstructions). | Using this chip as a macro in a larger chip. |
| **.spef** | Parasitics | Resistance/Capacitance of wires. | Precise timing analysis. |

---

## 5. Visualization (Looking at the Chip)

You cannot read a GDS file with a text editor. You need a layout viewer.

1. **KLayout (Open Source):**
* Install KLayout.
* Open `design.gds`.
* *Tip:* It may look messy without a "Layer Map" file (`.lyp`) which colors the layers (Metal1 vs Metal2) correctly. This file is usually in the PDK.


2. **Commercial GUI (Innovus/ICC2):**
* Hammer usually exits the tool after the script finishes.
* To view the design interactively *inside* the commercial tool, navigate to the run directory and launch the tool with the generated database script.



---

## 6. Syntax & Troubleshooting Guide

| Issue | Cause | Solution |
| --- | --- | --- |
| **Placement density too high** | The chip is too small for the number of gates. | Increase width/height in YAML or lower utilization target (`par.innovus.design_flow_effort: standard`). |
| **Pin Access Violation** | Pins are blocked by internal routing. | Change pin layers in YAML (e.g., move from M3 to M5). |
| **Timing Violations (Setup)** | Data arrives too slow. | Synthesis was not aggressive enough, or clock is too fast. Relax clock period in `my-design.yml`. |
| **Timing Violations (Hold)** | Data arrives too fast. | P&R tool failed to add delay buffers. Check `par.inputs.hold_fixing: true`. |

# VLSI Flow Tutorial Part 4: DRC & LVS Verification

Physical Verification is the final "spell check" before you send your chip to be manufactured. It ensures your design can actually be built (DRC) and that the physical layout matches your logic (LVS).

## 1. The Concepts

### DRC (Design Rule Check)

**"Can we print this?"**
Foundries have strict rules about geometry (e.g., "Metal 1 wires must be at least 20nm wide" or "Polysilicon cannot be closer than 40nm to Diffusion"). DRC checks your GDSII file against thousands of these geometric constraints.

* **Pass:** The chip can be manufactured.
* **Fail:** The features are too small/close; the fab machine will likely print a blob instead of a wire.

### LVS (Layout vs. Schematic)

**"Is this what we designed?"**
During P&R, the tool might swap gates, optimize logic, or insert buffers. LVS extracts the transistor-level connectivity from your GDSII polygons and compares it against your source netlist.

* **Pass:** The layout is electrically identical to the logic.
* **Fail:** You have a "short" (wires touching that shouldn't) or an "open" (broken wire).

---

## 2. Step 1: Configuration (YAML)

Most commercial technology plugins (TSMC, Intel) for Hammer come with the paths to the DRC/LVS rule decks pre-configured. However, you can explicitly set the tool engines in your `my-design.yml`.

**Common Tools:**

* **Siemens Calibre:** The industry gold standard for verification.
* **Cadence Pegasus:** Integrated with Innovus.
* **Synopsys IC Validator:** Integrated with ICC2.
* **Magic:** Open-source (used for Sky130).

```yaml
# verification.yml

# Select the Verification Tools
vlsi.core.drc_tool: "hammer.drc.calibre"
vlsi.core.lvs_tool: "hammer.lvs.calibre"

# (Optional) specific runset overrides if not using defaults
drc.inputs:
  additional_drc_text_mode: "append"
  additional_drc_text: |
    // Exclude certain non-critical checks
    EXCLUDE CELL "LOGO_BLOCK"

```

---

## 3. Step 2: Running DRC

The command follows the standard Hammer Makefile syntax.

```bash
cd vlsi

# Run DRC on the output of the previous P&R run
make drc CONFIG=SixCoreHeteroConfig TECH=asap7

```

**Outputs:**

* **Directory:** `vlsi/build/chipyard.../drc-rundir/`
* **Results Database:** `drc_results.rdb` (Load this into your layout viewer).
* **Report:** `drc.summary` (Text file showing total violation count).

**Interpreting Results:**
If you see **0 Violations**, you are golden. If you see violations, you must open the Layout Viewer (e.g., Calibre RVE), load the `.rdb` file, and click through the errors to see exactly where the geometry is too small.

---

## 4. Step 3: Running LVS

LVS requires two inputs: the layout (GDS) and the source netlist (Verilog/SPICE). Hammer handles the export of these automatically.

```bash
make lvs CONFIG=SixCoreHeteroConfig TECH=asap7

```

**Outputs:**

* **Directory:** `vlsi/build/chipyard.../lvs-rundir/`
* **Report:** `lvs.report` or `lvs.sum`.

**The "Smiley Face" Check:**
LVS reports are notoriously difficult to read. Look for the "Comparison Results" section. You want to see:

> **#     #   # #   # #   #   # #   # #   # #   #**
> **#     #  #   #  # #   #  #   #  # #   # #   #**
> **####### #     # # #   # #     # # #   # #   #**
> **#     # ####### #  # #  ####### #  # #  #   #**
> **#     # #     # #   #   #     # #   #    ###**
> ** CORRECT**

If you see **INCORRECT**, the report will list "Nets matched: 99.9%". You must find the specific net (often Power/Ground or Clock) that is disconnected.

---

## 5. Syntax & Debugging Guide

| Issue | Cause | Solution |
| --- | --- | --- |
| **LVS Mismatch: Port Count** | The top-level pins in layout don't match the Verilog. | Check if P&R dropped unused pins. Use `.v` from P&R as LVS source, not synthesis `.v`. |
| **LVS Mismatch: Power** | VDD/VSS often aren't in the Verilog (they are global). | Ensure `lvs.power_ground_ports` is defined in YAML (usually `["VDD", "VSS"]`). |
| **DRC: Off-Grid Errors** | Gates are placed on coordinates like 1.005nm instead of 1.000nm. | Check manufacturing grid settings in P&R Config. |
| **Tool Not Found** | Hammer can't find `calibre` executable. | Check your `$PATH` or set `drc.calibre.calibre_drc_bin` in YAML. |

---

## 6. VLSI Flow Summary Checklist

You have now completed the full VLSI Flow! Here is the cheat sheet for the entire process:

| Step | Command (in `vlsi/`) | Input | Output |
| --- | --- | --- | --- |
| **0. Init** | `make build-init ...` | Config + Tech | Build Dir Structure |
| **1. Synthesis** | `make syn ...` | Chisel RTL | Gate Netlist (`rtls.v`) |
| **2. P&R** | `make par ...` | Gate Netlist | Layout (`design.gds`) |
| **3. DRC** | `make drc ...` | Layout (`design.gds`) | Rule Check DB (`.rdb`) |
| **4. LVS** | `make lvs ...` | Layout + Netlist | Pass/Fail Report |