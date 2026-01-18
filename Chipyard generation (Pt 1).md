# Chipyard Tutorial Part 1: Custom Heterogeneous Core Generation

This document details the process of generating custom RISC-V System-on-Chips (SoCs) using Chipyard. It focuses on the configuration system used to compose heterogeneous multi-core designs.

## 1. The Configuration System

Chipyard uses the Scala-based configuration system from Rocket Chip. A full SoC configuration is defined by a Scala class that extends `Config`. This class composes "Config Fragments" (traits) using the `++` operator.

**Key Rule (Right-to-Left Precedence):**
Configurations are applied from **right to left** (or bottom to top in code). The items on the left override parameters set by items on the right.

```scala
class MyConfig extends Config(
  new OverlayConfig ++    // Applied last (Highest priority)
  new BaseConfig          // Applied first (Lowest priority)
)

```

## 2. Core Generation Syntax Guide

The following tables list the standard config fragments available in Chipyard for generating specific core types. These fragments accept an integer argument `n` representing the number of cores of that type to generate.

### Rocket Chip (In-Order, High Performance)

Defined in `freechips.rocketchip.subsystem`.
| Config Fragment | Description | Use Case |
| :--- | :--- | :--- |
| `WithNBigCores(n)` | High-performance in-order cores | Main application processor |
| `WithNMediumCores(n)` | Balanced in-order cores | Power-constrained application |
| `WithNSmallCores(n)` | Minimal features, no FPU | Embedded control |
| `WithNTinyCores(n)` | Minimal area, 32-bit compatible | Microcontroller-class tasks |

### BOOM (Out-of-Order, High Performance)

Defined in `boom.common`.
| Config Fragment | Description | Use Case |
| :--- | :--- | :--- |
| `WithNMegaBooms(n)` | Maximum width/depth (very large) | High-performance computing |
| `WithNLargeBooms(n)` | Standard large OOO config | General purpose Linux host |
| `WithNMediumBooms(n)` | Reduced issue width | Area-efficient OOO |
| `WithNSmallBooms(n)` | Minimal OOO params | Educational/Verification |

### CVA6 / Ariane (In-Order, Application Class)

Defined in `cva6`.
| Config Fragment | Description | Use Case |
| :--- | :--- | :--- |
| `WithNCVA6Cores(n)` | 6-stage in-order, Linux capable | Varied architecture testing |

### Ibex (In-Order, 32-bit Embedded)

Defined in `chipyard.config` (wraps `ibex` package).
| Config Fragment | Description | Use Case |
| :--- | :--- | :--- |
| `WithNIbexCores(n)` | 2-stage in-order, 32-bit | Low-power microcontroller |

---

## 3. Example: 6-Core Heterogeneous SoC

This example creates a heterogeneous SoC satisfying the following requirements:

* **Total Cores:** 6
* **Variety:** 3 different core architectures (BOOM, Rocket, Ibex)
* **Multi-core types:** BOOM (2 cores) and Rocket (2 cores)

**File Location:** `generators/chipyard/src/main/scala/config/HeteroConfigs.scala` (or add to `TutorialConfigs.scala`).

```scala
package chipyard

import chisel3._
import freechips.rocketchip.config.{Config, Parameters}
import freechips.rocketchip.subsystem._
import boom.common._
import cva6._

// A 6-core heterogeneous configuration
// 2x Large BOOM Cores (Harts 0, 1)
// 2x Big Rocket Cores (Harts 2, 3)
// 2x Ibex Cores      (Harts 4, 5)

class SixCoreHeteroConfig extends Config(
  // --- 1. Top-Level Overrides (Left-most) ---
  // Optional: Add specific system bus widths or cache tweaks here if needed.

  // --- 2. Core Definitions ---
  // Note: Order determines Hart ID.
  // The fragment added LAST (top of list) gets the LOWEST Hart IDs.

  // Adds 2 BOOM cores (RV64 Out-of-Order)
  new boom.common.WithNLargeBooms(2) ++

  // Adds 2 Rocket cores (RV64 In-Order)
  new freechips.rocketchip.subsystem.WithNBigCores(2) ++

  // Adds 2 Ibex cores (RV32 In-Order)
  new chipyard.config.WithNIbexCores(2) ++

  // --- 3. Base Configuration (Right-most) ---
  // Sets up the system bus, memory map, interrupts, and default peripherals.
  new chipyard.config.AbstractConfig
)

```

### Understanding the Hierarchy

In the example above, the composition order dictates the Hart IDs (Hardware Thread IDs):

1. `WithNLargeBooms(2)` is applied *after* Rocket and Ibex. Therefore, BOOM cores are processed first for ID assignment in the top-down generator logic.
* **Hart 0:** Large BOOM
* **Hart 1:** Large BOOM


2. `WithNBigCores(2)`
* **Hart 2:** Big Rocket
* **Hart 3:** Big Rocket


3. `WithNIbexCores(2)`
* **Hart 4:** Ibex
* **Hart 5:** Ibex



---

## 4. Execution and Generation Syntax

To generate the Verilog or run simulations for the configuration defined above, use the standard GNU Make commands in the `sims/verilator` (for C++ simulation) or `sims/vcs` (for commercial simulation) directories.

### Syntax Structure

`make CONFIG=<ConfigClassName> <Target>`

### Common Commands

**1. Generate Verilog and Build Verilator Simulator**
This compiles the Chisel code to Verilog and builds the C++ binary for simulation.

```bash
cd sims/verilator
make CONFIG=SixCoreHeteroConfig

```

**2. Run a Test Program**
Runs a RISC-V binary (e.g., `assembly-tests`) on the generated simulator.

```bash
make CONFIG=SixCoreHeteroConfig run-binary BINARY=../../tests/hello.riscv

```

**3. Generate Verilog Only (No Simulator)**
Useful if you only need the RTL for synthesis or FPGA flows.

```bash
make CONFIG=SixCoreHeteroConfig verilog

```

**4. Debugging / Waveform Generation**
Builds a simulator with waveform dumping enabled (VCD/FSDB).

```bash
make CONFIG=SixCoreHeteroConfig debug

```

### Variable Reference

| Variable | Description | Example |
| --- | --- | --- |
| `CONFIG` | The name of the Scala class extending `Config`. | `SixCoreHeteroConfig` |
| `BINARY` | Path to the RISC-V executable to run. | `../../tests/hello.riscv` |
| `SUB_PROJECT` | The specific generator project (default: `chipyard`). | `chipyard` |
