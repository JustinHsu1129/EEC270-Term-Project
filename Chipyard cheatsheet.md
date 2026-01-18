# Chipyard Development Cheat Sheet

## 1. Core Generation (Configuration)

**File:** `generators/chipyard/src/main/scala/config/HeteroConfigs.scala`
**Precedence:** **Right-to-Left** (Leftmost overrides Rightmost).

| Core Type | Config Fragment | Description |
| --- | --- | --- |
| **Rocket** | `new freechips.rocketchip.subsystem.WithNBigCores(n)` | High perf, In-order |
|  | `new freechips.rocketchip.subsystem.WithNSmallCores(n)` | Embedded, No FPU |
| **BOOM** | `new boom.common.WithNLargeBooms(n)` | Out-of-Order, High perf |
|  | `new boom.common.WithNMediumBooms(n)` | Balanced OOO |
| **CVA6** | `new cva6.WithNCVA6Cores(n)` | Application class, In-order |
| **Ibex** | `new chipyard.config.WithNIbexCores(n)` | 32-bit Microcontroller |

### Example Composition

```scala
class MySoC extends Config(
  new WithNLargeBooms(1) ++       // Hart 0
  new WithNBigCores(1) ++         // Hart 1
  new chipyard.config.AbstractConfig
)

```

---

## 2. Simulation & Debugging

**Directory:** `sims/verilator` (Open Source) or `sims/vcs` (Commercial)

| Action | Command |
| --- | --- |
| **Compile Simulator** | `make CONFIG=MySoC` |
| **Run Binary (Fast)** | `make CONFIG=MySoC run-binary BINARY=path/to/elf` |
| **Compile Debug Sim** | `make CONFIG=MySoC debug` |
| **Generate Waveforms** | `make CONFIG=MySoC run-binary-debug BINARY=path/to/elf` |
| **Generate Verilog** | `make CONFIG=MySoC verilog` |
| **Clean Build** | `make clean` |

**Waveform Location:** `output/chipyard.MySoC/binary_name/binary_name.vcd`

---

## 3. Custom MMIO Peripheral (TileLink)

**Use Case:** Slow control registers, LEDs, settings.

### Hardware Template

```scala
class MyPWM(p: MyParams)(implicit p: Parameters) extends TLRegisterRouter(
  base = p.address, devname = "pwm", beatBytes = 4)(
  new LazyModuleImp(_) {
    val threshold = RegInit(0.U(32.W))
    regmap(
      0x00 -> Seq(RegField(32, threshold)) // Offset 0x00
    )
})

```

### Integration Trait

```scala
trait CanHaveMyPWM { this: BaseSubsystem =>
  val pwm = LazyModule(new MyPWM(MyParams(0x2000)))
  pbus.coupleTo("pwm") { pwm.regnode := TLFragmenter(pbus) := _ }
}

```

### Software Driver (C)

```c
#define PWM_REG ((volatile uint32_t *) 0x2000)
*PWM_REG = 100; // Write

```

---

## 4. Custom RoCC Accelerator

**Use Case:** Fast computation, tight CPU coupling, custom instructions.

### Hardware Template

```scala
class MyAcc(op: OpcodeSet)(implicit p: Parameters) extends LazyRoCC(op) {
  override lazy val module = new LazyRoCCModuleImp(this) {
    val cmd = io.cmd
    io.resp.valid := cmd.valid // Simple echo example
    io.resp.bits.data := cmd.bits.rs1
    io.resp.bits.rd := cmd.bits.inst.rd
    cmd.ready := io.resp.ready
    io.busy := false.B
  }
}

```

### Interface Signals

| Signal | Direction | Purpose |
| --- | --- | --- |
| `io.cmd.bits.inst` | Input | Instruction bits (includes `funct7`) |
| `io.cmd.bits.rs1` | Input | Value of Source Register 1 |
| `io.cmd.bits.rs2` | Input | Value of Source Register 2 |
| `io.resp.bits.data` | Output | Data to write back to Core |
| `io.resp.bits.rd` | Output | Destination register index (pass from `inst.rd`) |

### Software Driver (C)

```c
#include "rocc.h"
// ROCC_INSTRUCTION_R_R(opcode, dest, src1, src2, funct)
unsigned long y;
ROCC_INSTRUCTION_R_R(0, y, 10, 0, 1); // Opcode 0 = custom0

```

---

## 5. Blackboxing (Verilog Integration)

**Use Case:** Using existing Verilog/SystemVerilog modules.

### Wrapper Template

```scala
class MyVerilogMod extends BlackBox with HasBlackBoxResource {
  val io = IO(new Bundle {
    val clk = Input(Clock())
    val rst = Input(Bool())
    val d_in = Input(UInt(32.W))
  })
  addResource("/vsrc/MyVerilogMod.v") // Path inside main/resources
}

```

---

## 6. Directory Structure Map

| File Type | Location |
| --- | --- |
| **Configs** | `generators/chipyard/src/main/scala/config/` |
| **Top System** | `generators/chipyard/src/main/scala/DigitalTop.scala` |
| **New Chisel** | `generators/chipyard/src/main/scala/example/` |
| **Verilog Src** | `generators/chipyard/src/main/resources/vsrc/` |
| **Sim Builds** | `sims/verilator/generated-src/` |

---

# Chipyard & VLSI Master Reference Guide

This document consolidates the tutorials on core generation, simulation, hardware customization, and the VLSI physical design flow into a single reference.

---

# Part I: Core Generation & Configuration

**Location:** `generators/chipyard/src/main/scala/config/`

### 1. The Configuration System

Chipyard configs are built right-to-left. The leftmost fragment overrides the rightmost.

```scala
class MySoC extends Config(
  new TopLevelOverride ++  // Highest Priority
  new CoreConfig ++
  new BaseConfig           // Lowest Priority
)

```

### 2. Core Config Fragments

These fragments accept an integer `n` for the number of cores.

| Architecture | Fragment Class | Use Case |
| --- | --- | --- |
| **Rocket** | `freechips.rocketchip.subsystem.WithNBigCores(n)` | High-Perf In-Order |
|  | `freechips.rocketchip.subsystem.WithNSmallCores(n)` | Embedded / IoT |
| **BOOM** | `boom.common.WithNMegaBooms(n)` | Max Perf Out-of-Order |
|  | `boom.common.WithNMediumBooms(n)` | Balanced Out-of-Order |
| **CVA6** | `cva6.WithNCVA6Cores(n)` | Application Class |
| **Ibex** | `chipyard.config.WithNIbexCores(n)` | 32-bit Microcontroller |

### 3. Example: Heterogeneous SoC

**File:** `HeteroConfigs.scala`

```scala
class SixCoreHeteroConfig extends Config(
  new boom.common.WithNLargeBooms(2) ++                  // Harts 0, 1
  new freechips.rocketchip.subsystem.WithNBigCores(2) ++ // Harts 2, 3
  new chipyard.config.WithNIbexCores(2) ++               // Harts 4, 5
  new chipyard.config.AbstractConfig
)

```

---

# Part II: Simulation & Debugging

**Location:** `sims/verilator/` (Open Source) or `sims/vcs/` (Commercial)

### Command Reference

Replace `CONFIG=MyConfig` with your specific configuration name.

| Goal | Command | Output Location |
| --- | --- | --- |
| **Build Simulator** | `make CONFIG=MyConfig` | `sims/verilator/` |
| **Run Binary** | `make CONFIG=MyConfig run-binary BINARY=<path>` | Console Output |
| **Debug Build** | `make CONFIG=MyConfig debug` | `sims/verilator/` |
| **Generate Waves** | `make CONFIG=MyConfig run-binary-debug BINARY=<path>` | `output/chipyard.MyConfig/...` |
| **View Waves** | `gtkwave output/.../binary.vcd` | GUI |

---

# Part III: Hardware Customization

### 1. Custom MMIO Peripheral

**Best for:** Slow control, status registers, LEDs.

* **Bus:** TileLink (System Bus).
* **Driver:** Standard C pointers `volatile uint32_t *ptr`.

**Template:**

```scala
// 1. Logic
class MyPWM(p: Params) extends TLRegisterRouter(base, "pwm", 4)(
  new LazyModuleImp(_) {
    regmap(0x00 -> Seq(RegField(32, RegInit(0.U))))
})

// 2. Integration
trait CanHaveMyPWM { this: BaseSubsystem =>
  pbus.coupleTo("pwm") { pwm.regnode := TLFragmenter(pbus) := _ }
}

```

### 2. Custom Verilog (Blackbox)

**Best for:** Integrating legacy IP or generated Verilog.

**Template:**

```scala
class MyBlackBox extends BlackBox with HasBlackBoxResource {
  val io = IO(new Bundle { ... })
  addResource("/vsrc/my_module.v") // Put file in src/main/resources/vsrc
}

```

### 3. RoCC Accelerator

**Best for:** High-performance compute, custom instructions.

* **Bus:** RoCC Interface (Core Pipeline).
* **Driver:** Inline Assembly (custom opcodes).

**Template:**

```scala
class MyAcc(op: OpcodeSet) extends LazyRoCC(op) {
  override lazy val module = new LazyRoCCModuleImp(this) {
    io.resp.bits.data := io.cmd.bits.rs1 + io.cmd.bits.rs2
    io.resp.valid := io.cmd.valid
    io.cmd.ready := io.resp.ready
  }
}

```

---

# Part IV: The VLSI Flow (Hammer)

**Location:** `vlsi/`
**Engine:** Hammer (Python) wraps Genus/Innovus/DC/ICC2.

### 1. Directory Structure

* `vlsi/my-design.yml`: Main configuration (clock targets, pin placement).
* `vlsi/build/`: All outputs (netlists, logs, GDS).

### 2. The Flow Steps

Execute these commands in order inside the `vlsi/` directory.

| Step | Command | Input | Output |
| --- | --- | --- | --- |
| **1. Init** | `make build-init` | Config + Tech Plugin | Build folder setup |
| **2. Synthesis** | `make syn` | Chisel RTL | Gate-level Netlist (`rtls.v`) |
| **3. P&R** | `make par` | `rtls.v` | Layout (`.gds`, `.def`) |
| **4. DRC** | `make drc` | `.gds` | Violation DB (`.rdb`) |
| **5. LVS** | `make lvs` | `.gds` + `.v` | Pass/Fail Report |

### 3. Key Variables

Append these to any `make` command to control the flow.

* `CONFIG`: The Chisel configuration class (e.g., `SixCoreHeteroConfig`).
* `TECH`: The technology PDK (e.g., `asap7`, `sky130`).
* `HAMMER_SYN_TOOL`: Override synthesis tool (e.g., `genus`, `dc`).
* `HAMMER_PAR_TOOL`: Override P&R tool (e.g., `innovus`, `icc2`).

### 4. Important YAML Settings (`my-design.yml`)

```yaml
# Synthesis Constraints
vlsi.inputs.clocks:
  - name: "clock"
    period: "1ns"
    uncertainty: "0.1ns"

# P&R Constraints
par.inputs:
  floorplan_mode: "auto" # or manual
par.power_straps_mode: "generate" # Builds VDD/VSS grid

```