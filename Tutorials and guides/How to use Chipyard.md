# EEC270-Term-Project
Using Chipyard to generate a custom multicore SoC

[Chipyard Documentation](https://chipyard.readthedocs.io/en/latest/)

[Chipyard Github](https://github.com/ucb-bar/chipyard)

[Chipyard Youtube tutorial](https://youtube.com/playlist?list=PL-YKJjRMRb9xe1RP4uoM69CRyXZZFy2ta&si=LbPL8957UIgLzosR)

Below is a comprehensive, step-by-step tutorial to generating a custom heterogeneous SoC and taking it through a physical design flow.

---

### **Phase 1: The Environment (Do not skip this)**

Chipyard is a "generator of generators." It relies on a complex web of dependencies (Java, Verilator, Conda, etc.). Attempting to install these manually is a trap.

**1. Clone and Setup**
Do this on a Linux machine (or robust WSL2 instance).

```bash
git clone https://github.com/ucb-bar/chipyard.git
cd chipyard
./scripts/init-submodules-no-riscv-tools.sh

```

**2. The "One Script to Rule Them All"**
Chipyard provides a setup script that creates a Conda environment with the correct tool versions. Run this and go get coffee—it takes a while.

```bash
./build-setup.sh riscv-tools

```

**3. The Golden Rule of Chipyard**
Every time you open a new terminal, you **must** run this. If commands fail, it is usually because you forgot this line.

```bash
source env.sh

```

---

### **Phase 2: Designing Your SoC (The "Config")**

Chipyard uses a "Mix-in" pattern. Think of it like building a sandwich. You start with a base (Rocket Chip) and "mix in" ingredients (Big Cores, Accelerators, Caches).

You will edit files in: `generators/chipyard/src/main/scala/config/`

#### **Example 1: The Heterogeneous "Big.Little" SoC**

Let's create an SoC with **1 Big Core (BOOM)** for performance and **1 Little Core (Rocket)** for efficiency.

1. Create a new file `generators/chipyard/src/main/scala/config/MyCustomConfigs.scala`.
2. Paste the following:

```scala
package chipyard

import org.chipsalliance.cde.config.{Config}
import freechips.rocketchip.diplomacy.{AsynchronousCrossing}

// "Big.Little" Configuration
class BigLittleConfig extends Config(
  // The Order Matters! (Applied from bottom to top)

  // 1. Add a large BOOM core (The "Big" core)
  new boom.common.WithNLargeBooms(1) ++
  
  // 2. Add a standard Rocket core (The "Little" core)
  new freechips.rocketchip.subsystem.WithNBigCores(1) ++
  
  // 3. System Components (Bus, memory, etc.)
  new chipyard.config.AbstractConfig
)

```

#### **Example 2: Adding a Custom Accelerator**

Chipyard uses the **RoCC (Rocket Custom Coprocessor)** interface. We will use the `SHA3` crypto accelerator (included in Chipyard) as an example.

Add this class to the same file:

```scala
class BigLittleSha3Config extends Config(
  // Add SHA3 accelerator to the BOOM core
  new sha3.WithSha3Accel ++  
  
  // Define cores
  new boom.common.WithNLargeBooms(1) ++
  new freechips.rocketchip.subsystem.WithNBigCores(1) ++
  
  // Base configuration
  new chipyard.config.AbstractConfig
)

```

*Note: The `WithSha3Accel` mixin usually attaches the accelerator to the most recently added core (in this case, the BOOM core).*

---

### **Phase 3: Verifying with Simulation**

Before going to layout, you must prove the RTL works. We will use Verilator (open-source Verilog simulator).

**1. Navigate to the simulator directory**

```bash
cd sims/verilator

```

**2. Run the Simulation**
This command generates the Verilog, compiles the simulator, and runs a standard RISC-V benchmark (`rv64ui-p-simple`) against your custom config.

```bash
make CONFIG=BigLittleSha3Config BINARY=$RISCV/riscv64-unknown-elf/share/riscv-tests/isa/rv64ui-p-simple run-binary

```

**What to look for:**

* **Compilation:** It will take 5–10 minutes the first time.
* **Success:** Look for `[UART] UART0 is here.` followed eventually by `PASSED`.
* **Generated Verilog:** You can find the raw Verilog for your SoC in:
`generated-src/chipyard.TestHarness.BigLittleSha3Config/`

---

### **Phase 4: The VLSI Flow (Hammer)**

You mentioned "carry through layout." Chipyard uses **Hammer**, a tool that abstracts away the specific commands of tools like Cadence Innovus or Synopsys ICC2.

**Prerequisite:** Real physical design requires a PDK (Process Design Kit). Since you are a student, you likely don't have NDA access to TSMC/Intel PDKs on your personal machine. We will use **SkyWater 130nm (Sky130)**, which is open-source.

**1. Initialize VLSI Plugins**
Go back to the root of Chipyard and install the Sky130 plugin.

```bash
cd chipyard
./scripts/init-vlsi.sh sky130

```

**2. Synthesis (Turning Verilog into Gates)**
Move to the VLSI directory.

```bash
cd vlsi

```

Run synthesis. This uses open-source tools (Yosys) if you configured the OpenROAD flow, or commercial tools (Genus/Design Compiler) if you have the environment set up. Assuming you want the educational/open path:

```bash
make syn tech_name=sky130 CONFIG=BigLittleSha3Config

```

**3. Place and Route (The Layout)**
This takes the gates and physically places them on the chip.

```bash
make par tech_name=sky130 CONFIG=BigLittleSha3Config

```

**4. Viewing the Result**
If the run succeeds, your final GDS (the layout file) will be in the `build/` directory. You can view it using **KLayout** (an open-source GDS viewer):

```bash
klayout build/chipyard.TestHarness.BigLittleSha3Config-ChipTop/par-rundir/chipyard.TestHarness.BigLittleSha3Config-ChipTop.gds

```
---

This is one of the most powerful features of Chipyard. You can mix "Big" out-of-order cores (BOOM), "Little" in-order cores (Rocket), and even third-party cores (CVA6, Ibex) on the same bus.

Here is the step-by-step guide to generating a **Heterogeneous SoC**.

### **Step 1: The "Secret" Preparation**

By default, Chipyard does *not* download the code for third-party cores like CVA6 (Ariane) or Ibex to save space. If you want to use them, you must initialize them first.

**Run this in your Chipyard root:**

```bash
./scripts/init-submodules-no-riscv-tools.sh --cva6 --ibex

```

*If you skip this, the CVA6/Ibex Scala code will be missing, and your build will fail.*

---

### **Step 2: The Logic of "Mixing"**

Chipyard uses the `++` operator to combine configurations.

* **Think of it like a stack:** The config at the **top** (left-most in syntax) is applied last (highest priority).
* **The "Append" Rule:** Core mixins like `WithNBigCores` usually *add* to the list of tiles. If you say "1 BOOM" `++` "1 Rocket", you get 2 cores total.
* **The "Hart ID" Trap:** By default, every generator thinks it is the only one, so they all try to be "Core 0". You **must** use a renumbering mixin to prevent ID conflicts.

---

### **Step 3: The "Kitchen Sink" Example**

We will build an SoC with **Three Different Architectures**:

1. **1x Large BOOM Core** (Performance node)
2. **1x CVA6 Core** (Efficiency/Application node)
3. **1x Rocket Core** (Control/OS node)

Create or edit `generators/chipyard/src/main/scala/config/HeteroConfigs.scala`:

```scala
package chipyard

import org.chipsalliance.cde.config.{Config}
import freechips.rocketchip.diplomacy.{AsynchronousCrossing}

class TriCoreHeteroConfig extends Config(
  // ============================================================
  // 1. The Core Definitions (Applied Top-to-Bottom)
  // ============================================================
  
  // Core #0: Large BOOM
  new boom.common.WithNLargeBooms(1) ++
  
  // Core #1: CVA6 (Ariane)
  // Note: Ensure you ran the init script with --cva6!
  new cva6.WithNCVA6Cores(1) ++ 
  
  // Core #2: Rocket (Big Core = Standard In-Order 64-bit)
  new freechips.rocketchip.subsystem.WithNBigCores(1) ++

  // ============================================================
  // 2. The Glue Logic (CRITICAL)
  // ============================================================
  
  // IMPORTANT: Renumber Hart IDs so they don't all claim to be "Hart 0"
  // This ensures they are mapped to 0, 1, 2 respectively.
  new chipyard.config.WithRenumberHarts ++

  // ============================================================
  // 3. System Components
  // ============================================================
  
  // Connect them to a shared memory bus
  new freechips.rocketchip.subsystem.WithInclusiveCache ++
  
  // Base Chipyard plumbing
  new chipyard.config.AbstractConfig
)

```

### **Step 4: Verify and Build**

To verify this works, we will simulate it.

**1. Go to the simulator directory:**

```bash
cd sims/verilator

```

**2. Run the build:**

```bash
make CONFIG=TriCoreHeteroConfig

```

**3. Test it:**
The best way to verify you actually have different cores is to look at the boot log. When the simulation starts, the BootROM usually prints a device tree or core info.

```bash
./simulator-chipyard-TriCoreHeteroConfig

```

You should see output indicating multiple Harts (Hardware Threads) starting up.

---

### **Step 5: Common Pitfalls & Fixes**

#### **1. The "RenumberHarts" Error**

If you forget `new chipyard.config.WithRenumberHarts`, the generator might crash with an error saying "HartId 0 already exists." Always include this mixin when mixing different *types* of cores.

#### **2. Memory Coherence**

If you are mixing cores, you generally want them to share memory coherently (so Core A can read what Core B wrote).

* **The Mixin:** `new freechips.rocketchip.subsystem.WithInclusiveCache`
* **Why:** This adds a shared L2 cache that manages the coherence protocol (TileLink) between the different cores. Without this, your cores might be isolated or require manual software cache flushing.

#### **3. The "Small" Core**

If you want a truly tiny controller core (like for managing interrupts), swap the Rocket core for a "Small" Rocket:

* **Replace:** `WithNBigCores(1)`
* **With:** `new freechips.rocketchip.subsystem.WithNSmallCores(1)` (This is a 32-bit or minimal 64-bit core without an FPU).

### **Why is this relevant for your class?**

This setup allows you to run **real architectural experiments**:

* *Experiment:* "Does running the OS kernel on a simple Rocket core while running the application on a BOOM core improve overall throughput?"
* *Experiment:* "Compare the Instructions Per Clock (IPC) of CVA6 vs. Rocket on the same benchmark."

This video provides an excellent visual walkthrough of the config system and how these pieces fit together.

[Chipyard Basics + Building Custom RISC-V SoCs](https://www.youtube.com/watch?v=EXbs5VSv19c)

This video is relevant because it is the official ASPLOS tutorial from the Chipyard developers, specifically covering the "Mix-in" configuration system and how to combine different generators like BOOM and Rocket into a single design.

---

### **Additional "Pro Tips"**

**1. The "Clean" Command**
If you change Scala code and it doesn't seem to update, or if you get weird Java errors:

```bash
cd sims/verilator
make clean

```

*Warning: This deletes your compiled simulator, so the next build will take 10+ minutes.*

**2. Speeding up Build Times**
Building the simulator (compiling Verilog to C++) is slow. If you have a multi-core machine, use `-j`:

```bash
make -j8 CONFIG=BigLittleSha3Config ...

```

**3. "Where is my Verilog?"**
Sometimes you just want to see the generated Verilog to inspect how your accelerator is connected.

```bash
cd sims/verilator
make verilog CONFIG=BigLittleSha3Config

```

Look in `generated-src/`. The file `*.top.v` is your SoC.

**4. Java Heap Space Errors**
Generating complex SoCs (like BOOM) requires a lot of RAM. If `sbt` crashes with an OutOfMemory error, you need to increase the Java heap size.

* Edit the `env.sh` file (or your `.bashrc`) and add:
```bash
export JAVA_OPTS="-Xmx8G -Xss8M"

```


(Set `-Xmx` to roughly 75% of your system RAM).

---

### **Phase 5: Adding Your Own Custom Accelerator**

In Chipyard, accelerators usually attach via the **RoCC (Rocket Custom Coprocessor)** interface. This interface allows your hardware to accept instructions directly from the CPU pipeline.

For this example, we will build a simple **"Accumulator" accelerator** that takes two numbers, adds them, and stores the running total.

#### **1. The Hardware Code (Chisel)**

You need to define the logic. Create a file `generators/chipyard/src/main/scala/example/MyAccumulator.scala`.

```scala
package chipyard.example

import chisel3._
import chisel3.util._
import freechips.rocketchip.tile._
import freechips.rocketchip.config._
import freechips.rocketchip.diplomacy._

// 1. The Accelerator Logic
class MyAccumulator(opcodes: OpcodeSet)(implicit p: Parameters) extends LazyRoCC(opcodes) {
  override lazy val module = new LazyRoCCModuleImp(this) {
    // Input: cmd (the instruction from the CPU)
    // Output: resp (the answer back to the CPU)

    val cmd = io.cmd
    val funct = cmd.bits.inst.funct
    val rs1 = cmd.bits.rs1
    val rs2 = cmd.bits.rs2

    // Our internal register
    val accumulator = RegInit(0.U(64.W))

    // Logic: If funct is 0, ADD. If funct is 1, READ.
    when (cmd.fire()) {
      when (funct === 0.U) {
        accumulator := accumulator + rs1 + rs2
      }
    }

    // Wiring up the response
    // We are "ready" to accept a command if the CPU sends one
    cmd.ready := true.B 
    
    // We respond only when the CPU expects a response (xd bit set)
    io.resp.valid := cmd.valid && cmd.bits.inst.xd
    io.resp.bits.rd := cmd.bits.inst.rd
    io.resp.bits.data := accumulator
    
    // Busy signal (we are never "busy" in this simple example)
    io.busy := false.B
    io.interrupt := false.B
  }
}

// 2. The Configuration Mixin
// This tells Chipyard how to attach your module to the system
class WithMyAccumulator extends Config((site, here, up) => {
  case BuildRoCC => up(BuildRoCC) ++ Seq(
    (p: Parameters) => {
      // "Custom0" corresponds to opcode 0x0B
      val accumulator = LazyModule(new MyAccumulator(OpcodeSet.custom0)(p))
      accumulator
    }
  )
})

```

#### **2. Add it to your Config**

Go back to `generators/chipyard/src/main/scala/config/MyCustomConfigs.scala` and update your config:

```scala
class AccumulatorSoCConfig extends Config(
  new chipyard.example.WithMyAccumulator ++ // Add your new accelerator
  new freechips.rocketchip.subsystem.WithNBigCores(1) ++
  new chipyard.config.AbstractConfig
)

```

---

### **Phase 6: Writing Software for Your SoC**

You have hardware, but your standard Linux/C code doesn't know it exists. You need to use **inline assembly** to invoke the custom opcode.

#### **1. The C Code (`test_accum.c`)**

Create a C file in a working directory (e.g., `tests/`).

```c
#include <stdio.h>
#include "rocc.h" // Helper macros provided by Chipyard/Rocket

int main() {
    unsigned long result;
    unsigned long input_a = 10;
    unsigned long input_b = 20;

    printf("Starting Accumulator Test...\n");

    // Funct 0: Add inputs to accumulator
    // ROCC_INSTRUCTION_SS(opcode_index, rs1, rs2, funct)
    // 0 = Custom0 opcode
    ROCC_INSTRUCTION_SS(0, input_a, input_b, 0);

    // Funct 1: Read accumulator into variable 'result'
    // ROCC_INSTRUCTION_D(opcode_index, rd, funct)
    ROCC_INSTRUCTION_D(0, result, 1);

    if (result == 30) {
        printf("PASS: Result is %lu\n", result);
    } else {
        printf("FAIL: Expected 30, got %lu\n", result);
    }

    return 0;
}

```

#### **2. Compiling the Code**

You must compile this using the RISC-V toolchain you installed in Phase 1.

```bash
riscv64-unknown-elf-gcc -fno-common -fno-builtin-printf -specs=htif_nano.specs -c test_accum.c
riscv64-unknown-elf-gcc -static -specs=htif_nano.specs test_accum.o -o test_accum.riscv

```

#### **3. Running Your Custom Binary**

Now, run this binary on the simulator you built.

```bash
cd sims/verilator
make CONFIG=AccumulatorSoCConfig BINARY=../../tests/test_accum.riscv run-binary

```

---

### **Phase 7: Debugging with Waveforms (GTKWave)**

When your accelerator hangs or gives the wrong answer (and it will), `printf` debugging isn't enough. You need to see the digital signals.

**1. Build the Debug Simulator**
The standard simulator optimizes away the signals to run fast. You need the "debug" version.

```bash
make debug CONFIG=AccumulatorSoCConfig

```

**2. Run with Waveform Output**
This generates a `.vcd` (Value Change Dump) file.

```bash
./simulator-chipyard-AccumulatorSoCConfig-debug +vcdplusfile=output.vcd +max-cycles=10000 ../../tests/test_accum.riscv

```

*Note: We limit cycles because VCD files grow massive very quickly.*

**3. View the Waveform**
Open the generated `output.vcd` in GTKWave (you can install this on your local machine and copy the file over, or run it via X11 forwarding).

* Look for `Wait for Reset` signals to go low.
* Find your module: `Top -> System -> Tile -> RoCC`.
* Watch `io_cmd_valid` (Did the CPU send the instruction?) and `io_resp_valid` (Did you answer back?).

---

### **Phase 8: Easy Architecture Tuning (Quick Wins)**

For a class project, you often need to compare configurations (e.g., "Effect of L1 Cache Size on Performance"). You don't need to write new code for this; just use existing Mixins in your config.

**Modify `generators/chipyard/src/main/scala/config/MyCustomConfigs.scala`:**

```scala
class LargeCacheConfig extends Config(
  // 32KB L1 Data Cache (Default is usually 16KB)
  new freechips.rocketchip.subsystem.WithL1DCacheSets(64) ++ 
  new freechips.rocketchip.subsystem.WithL1DCacheWays(8) ++
  
  // 32KB L1 Instruction Cache
  new freechips.rocketchip.subsystem.WithL1ICacheSets(64) ++
  new freechips.rocketchip.subsystem.WithL1ICacheWays(8) ++

  new chipyard.config.AbstractConfig
)

```

**Common Mixins to know:**

* `WithNBigCores(n)`: Change core count.
* `WithL2Cache(capacity_bytes)`: Add a shared L2 cache.
* `WithInclusiveCache`: Essential if you are using multicore and want coherence.

### **Summary Checklist for Your Class Project**

1. **Start simple:** Build the `AbstractConfig` first to ensure tools work.
2. **Add logic:** Write your Chisel accelerator (`MyAccumulator`).
3. **Simulate:** Run the C test on Verilator.
4. **Visualize:** Use `make debug` and GTKWave when it breaks.
5. **Synthesize:** Run the Hammer flow (`make syn`) to get area/power estimates for your report.

---

# Example

## Custom SoC-4 BOOM Cores, 2 Rocket Cores, 2 Gemmini Accerlators

This is a "Power User" configuration. You are asking for a massive heterogeneous system: high-performance out-of-order cores (BOOM), efficient in-order cores (Rocket), and domain-specific ML accelerators (Gemmini).

To achieve this, we must be careful with the **ordering** of our configuration mixins. In Chipyard, configurations are applied from **top to bottom** (or left to right in the `++` syntax), and mixins "see" the definitions below them.

Here is how to generate the **"4-BOOM, 2-Rocket, 2-Gemmini"** SoC.

### **1. The Configuration File**

Create or edit `generators/chipyard/src/main/scala/config/MegaSoCConfig.scala`.

We will structure this carefully. By default, adding a `WithGemmini` mixin makes the accelerator available to *all* cores that support the RoCC interface. To keep things simple for a tutorial, we will apply the Gemmini configuration such that it attaches to the cores defined in the stack.

```scala
package chipyard

import org.chipsalliance.cde.config.{Config}
import freechips.rocketchip.diplomacy.{AsynchronousCrossing}

class MegaHeteroGemminiConfig extends Config(
  // =================================================================
  // 1. GLOBAL SYSTEM FIXES (Must be at the top)
  // =================================================================
  // Renumber harts (hardware threads) so we don't have ID conflicts.
  // This essentially says: "Take all cores defined below and number them 0, 1, 2, 3..."
  new chipyard.config.WithRenumberHarts ++

  // =================================================================
  // 2. THE COMPUTE COMPLEX
  // =================================================================
  
  // --- Group A: 4x Large BOOM Cores ---
  // These are your "Performance" nodes.
  new boom.common.WithNLargeBooms(4) ++

  // --- Group B: 2x Rocket Cores with Gemmini ---
  // The Gemmini config is applied here. 
  // Note: Depending on the exact version of Chipyard, this might attach 
  // Gemmini to the BOOMs as well. This is usually acceptable for 
  // research, but strictly speaking, we are defining the "Accelerator Tier" here.
  new gemmini.DefaultGemminiConfig ++ 
  new freechips.rocketchip.subsystem.WithNBigCores(2) ++

  // =================================================================
  // 3. MEMORY & SYSTEM BUS
  // =================================================================
  // A multi-core system MUST have a shared L2 cache for coherency.
  new freechips.rocketchip.subsystem.WithInclusiveCache ++
  
  // Base configuration
  new chipyard.config.AbstractConfig
)

```

### **2. Breakdown of the Architecture**

* **`WithNLargeBooms(4)`:** Adds 4 instances of the BOOM (Berkeley Out-of-Order Machine) tile. These are 3-wide issue, deep pipeline cores suitable for running an OS or heavy computation.
* **`WithNBigCores(2)`:** Adds 2 instances of the standard Rocket core (in-order, 5-stage pipeline).
* **`DefaultGemminiConfig`:** This sets up the Gemmini systolic array parameters (mesh size, dataflow, scratchpad size). By combining it with the Rocket cores, we enable the RoCC (Rocket Custom Coprocessor) interface on them.
* **`WithInclusiveCache`:** This is non-negotiable. You have 6 cores (plus accelerators) fighting for memory. The Inclusive L2 Cache manages the **TileLink** coherence protocol so that when a BOOM core writes to address `0x1000`, the Gemmini accelerator on the Rocket core sees the new data.

### **3. How to Verify "Who has the Gemmini?"**

Because Chipyard configs are flat, there is a risk that the `DefaultGemminiConfig` might attach an accelerator to the BOOM cores as well (giving you 6 accelerators).

To verify exactly what you built, you need to check the **Boot ROM Device Tree** during simulation.

1. **Build the Simulator:**
```bash
cd sims/verilator
make CONFIG=MegaHeteroGemminiConfig

```


*(Warning: This build will take 20+ minutes and require ~16GB+ of RAM).*
2. **Run a Dummy Test:**
```bash
./simulator-chipyard-MegaHeteroGemminiConfig none

```


3. **Read the Output:**
The simulator will print the Device Tree (DTS) at the start. Look for entries like:
```text
L0: cpu@0 { ... }       <-- Hart 0 (Likely BOOM)
L1: cpu@1 { ... }       <-- Hart 1 (Likely BOOM)
...
L4: cpu@4 { ... }       <-- Hart 4 (Rocket)
   rocc@0 {             <-- Look for this!
      compatible = "ucb-bar,gemmini";
   }

```


If you see `rocc@0` under `cpu@0` (BOOM), it means the accelerator was attached to the BOOMs too. If you only see it under `cpu@4` and `cpu@5`, you have successfully isolated them.

### **4. Programming the Gemmini (Software Stack)**

Having the hardware is only half the battle. You cannot just use standard C code; you need the **Gemmini Software Development Kit (SDK)**.

**1. Include the Library**
In your C code, you need to include the Gemmini headers which provide the `gemmini_mvin` (move in), `gemmini_mvout` (move out), and `gemmini_preload` (matmul) intrinsics.

```c
#include "gemmini_testutils.h"

int main() {
    // 1. Initialize the accelerator
    gemmini_flush(0); 

    // 2. Move data from Main Memory -> Gemmini Scratchpad
    // mvin( destination_address, source_pointer )
    gemmini_mvin(MyScratchpadAddr, MyMainMemoryMatrix);

    // 3. Compute (Matrix Multiply)
    // preload( weights, output_addr )
    // compute_preloaded( input, bias )
    gemmini_preload(MyWeights, MyOutputAddr);
    gemmini_compute_preloaded(MyInput, MyBias);

    // 4. Move result back
    gemmini_mvout(MyResultMatrix, MyOutputAddr);
}

```

**2. Where to find examples**
Chipyard comes with a bare-metal software suite for Gemmini. You can find robust examples in:
`generators/gemmini/software/gemmini-rocc-tests/`

You have successfully defined a complex "Mega SoC" in Chisel. Now, we need to address two critical realities of working with such a large design:

1. **Architectural Tuning:** How to change the "shape" of your accelerator (Gemmini) to trade off area vs. performance.
2. **Physical Floorplanning:** How to prevent your layout tools from failing when placing 6 cores and 2 accelerators.

---

### **Phase 9: Tuning the Accelerator (The "Architecture" Part)**

Using `DefaultGemminiConfig` is fine for testing, but in a computer architecture class, you likely need to explore design space. (e.g., *"How does doubling the systolic array size affect area?"*)

You can override the default parameters to create a custom Gemmini instance.

**Edit `generators/chipyard/src/main/scala/config/MegaSoCConfig.scala`:**

Instead of `DefaultGemminiConfig`, use a custom configuration class:

```scala
import gemmini._

class BigGemminiConfig extends Config((site, here, up) => {
  case GemminiKey => Some(GemminiParams(
    // 1. Mesh Dimensions (The "Shape")
    meshRows = 32, // Default is 16. We are making it bigger.
    meshColumns = 32,
    
    // 2. Data Flow
    dataflow = Dataflow.WS, // Weight-Stationary (vs Output-Stationary)
    
    // 3. Memory & Buffers
    sp_capacity = CapacityInKilobytes(512), // Scratchpad size
    acc_capacity = CapacityInKilobytes(128), // Accumulator size
    
    // 4. Data Types (Quantization)
    inputType = SInt(8.W), // 8-bit Integer (common for Inference)
    accType = SInt(32.W)   // 32-bit Accumulator to prevent overflow
  ))
})

// Now use this in your SoC config:
class TunedMegaSoCConfig extends Config(
  new BigGemminiConfig ++ 
  new freechips.rocketchip.subsystem.WithNBigCores(1) ++ 
  new chipyard.config.AbstractConfig
)

```

**Why this matters:**

* **Area:** A 32x32 array is 4x larger than a 16x16. Does it fit in your floorplan?
* **Power:** Weight-Stationary dataflow minimizes energy spent reading weights but requires larger weight buffers.

---

### **Phase 10: Physical Design (Floorplanning Strategies)**

You mentioned "carry through layout." This is the hardest part.
When you throw 4 BOOM cores and 2 Gemmini accelerators at an automated placement tool (Place & Route), it will often fail or produce a "spaghetti" layout with bad timing.

You must provide a **Floorplan**—a map telling the tool roughly where to put the big blocks.

In Chipyard/Hammer, you define this in a YAML file (e.g., `vlsi/example-sky130.yml`).

#### **1. The Challenge: Macro Placement**

Your SoC is full of "Macros"—large blocks of SRAM (memory) for the Caches and the Gemmini Scratchpad. Standard cells (logic gates) flow around them. If you don't place these macros intelligently, they will block routing channels.

#### **2. Example Floorplan Fragment**

You need to define placement constraints for your specific hierarchical blocks.

```yaml
# vlsi/example-sky130.yml (Snippet)

vlsi.inputs.placement_constraints:
  - path: "Top/System/Tile_0" # This is likely your first BOOM core
    type: "toplevel"
    x: 100
    y: 100
    width: 800
    height: 600
    margins: {left: 10, right: 10, top: 10, bottom: 10}

  - path: "Top/System/Tile_4" # This is likely a Rocket Core
    type: "toplevel"
    x: 1000
    y: 100
    width: 400
    height: 300

  - path: "Top/System/Tile_4/gemmini" # The Gemmini inside the Rocket Tile
    type: "hard_macro"
    x: 1050
    y: 150
    orientation: "r0" # No rotation

```

**Key Strategy:**

* **Cluster Tiles:** Keep the L1 cache macros *near* the core logic they belong to.
* **Bank the L2:** The L2 cache is usually banked. Place L2 banks in the center or distributed along the edges of the cores.

---

### **Phase 11: Managing the Software (FireMarshal)**

You have a 6-core machine. Running bare-metal C code is painful because you have to manually manage stack pointers for 6 cores. You want **Linux**.

Chipyard uses a tool called **FireMarshal** to build Linux images.

**1. Initialize FireMarshal**

```bash
./software/firemarshal/init-submodules.sh

```

**2. Build a Linux Image**
We will build a standard "Bronto" (Buildroot-based) Linux image.

```bash
cd software/firemarshal
./marshal build bronto.json

```

*This generates a binary file (`bronto-bin`) containing the Kernel + Root Filesystem.*

**3. Run Linux on your SoC**
Go back to the simulator directory and point it to your new image.

```bash
cd sims/verilator
./simulator-chipyard-MegaHeteroGemminiConfig ../../software/firemarshal/images/firechip/bronto/bronto-bin

```

**4. Pinning Threads (The "Big.Little" Experiment)**
Once Linux boots (login: `root`, pass: `berke1ey`), you can use the `taskset` command to force programs to run on specific cores.

* **Scenario:** You want to run a heavy benchmark on the BOOM core (Hart 0) and a background task on the Rocket core (Hart 4).

```bash
# On the simulated RISC-V Linux terminal:

# Run 'matrix_mul' on Core 0 (BOOM)
taskset -c 0 ./matrix_mul &

# Run 'logger' on Core 4 (Rocket)
taskset -c 4 ./logger &

```

**Why this is relevant:**
This proves your heterogeneous architecture actually works. If you run the matrix multiply on Core 4 (Rocket), it should be significantly slower than on Core 0 (BOOM).

---

### **Phase 12: Debugging the Layout (The "Hammer" Visualizer)**

When your layout fails (and it will), staring at text logs is useless. Hammer provides a visualizer to see *why* it failed (e.g., "Placement overlaps" or "Routing congestion").

**1. Generate the Python database**
After a failed (or successful) run:

```bash
cd vlsi
make syn-to-par CONFIG=MegaHeteroGemminiConfig

```

**2. Launch the GUI**
Ideally, use the commercial tool GUI if you have access (Innovus/ICC2). If using OpenROAD:

```bash
openroad -gui build/chipyard.TestHarness.MegaHeteroGemminiConfig-ChipTop/par-rundir/openroad_placed.odb

```

* Look for **Red Areas**: These are congestion hotspots.
* **Solution:** Move the Placement Constraints in your YAML file to spread out the macros in that red area.

### **Final Pro-Tip: The "Trace" Check**

Before you spend 12 hours running a layout, verify your cores are actually executing what you think they are.

Use **TracerV** (an architectural tracer mixed into the hardware).

* Add `new chipyard.config.WithTracegen` to your config.
* Run simulation.
* It produces a log file showing exactly which instruction was executed by which core at which cycle.
* *Check:* Is Core 4 executing instructions? Or is it stuck in a "Wait for Interrupt" (WFI) loop?



Would you like me to focus the next step on **generating the specific YAML constraints** for the Gemmini macros, or would you prefer to look at **how to get this design onto an FPGA** for faster simulation?