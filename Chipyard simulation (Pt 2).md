# Chipyard Tutorial Part 2: Simulation and Waveform Debugging

This section covers how to validate your custom configuration by running software binaries on the generated hardware model and how to generate waveforms for debugging logic issues.

## 1. The Simulation Environment

Chipyard primarily supports two simulation backends. You must choose one directory to work in:

* **Verilator (`sims/verilator`):** Open-source. Compiles your Chisel/Verilog into a C++ executable. It is cycle-accurate but slower than hardware. Best for general development.
* **VCS (`sims/vcs`):** Commercial (Synopsys). Faster, supports FSDB waveforms. Requires a license.

*Note: This tutorial assumes **Verilator**, as it is accessible without a license.*

---

## 2. Running Standard Simulations

Standard simulations run as fast as possible without recording signal history (waveforms). This is used to verify that a program executes correctly.

### Step 1: Build the Simulator

Before running code, you must compile the C++ model of your SoC.

```bash
cd sims/verilator
make CONFIG=SixCoreHeteroConfig

```

* **Output:** Creates an executable named `simulator-chipyard-SixCoreHeteroConfig` in the generated build folder.

### Step 2: Run a RISC-V Binary

You can run pre-compiled RISC-V binaries (bare-metal `assembly-tests` or benchmarks).

```bash
make CONFIG=SixCoreHeteroConfig run-binary BINARY=../../tests/hello.riscv

```

### Understanding the Output

When the simulation runs, it prints the UART output of the RISC-V core to your console.

```text
[UART] UART0 is here (stdin/stdout).
hello world!
Completed after 19234 cycles
[PASSED] *** PASSED ***

```

If the simulation fails (e.g., the core traps or hangs), you will see `[FAILED]` or the simulation will timeout.

---

## 3. Waveform Generation (Debugging)

If a simulation hangs or produces incorrect data, you need to "see" the wires inside the processor. This requires a **debug** build.

### Step 1: Build the Debug Simulator

The standard simulator is optimized for speed and strips out signal names. You must build a specific debug version to enable VCD (Value Change Dump) logging.

```bash
# Notice the target is 'debug', not default
make CONFIG=SixCoreHeteroConfig debug

```

* **Output:** Creates `simulator-chipyard-SixCoreHeteroConfig-debug`.

### Step 2: Run with Waveforms

Use the `run-binary-debug` target. This runs the simulation while writing every signal change to a file.

```bash
make CONFIG=SixCoreHeteroConfig run-binary-debug BINARY=../../tests/hello.riscv

```

### Step 3: Locate the Waveform File

Chipyard organizes outputs by config and binary name.

* **Directory:** `output/chipyard.SixCoreHeteroConfig/`
* **Sub-folder:** `hello.riscv/`
* **File:** `hello.riscv.vcd`

---

## 4. Analyzing Waveforms

You can view `.vcd` files using **GTKWave** (open source) or **SimVision/Verdi** (commercial).

### How to navigate the Hierarchy

When you open the VCD, the signal hierarchy will match the Chisel/Rocket Chip module structure. For the `SixCoreHeteroConfig` we created in Part 1, the hierarchy is generally:

1. **TOP**: The test harness.
2. **ChipTop**: The pad frame and top-level IO.
3. **System**: The SoC logic.
* **tile_0**: The first BOOM core.
* **tile_1**: The second BOOM core.
* **tile_2**: The first Rocket core.
* **tile_prci**: Power/Reset/Clock Interface.
* **mbus**: Memory Bus.



### Key Signals to Watch

When debugging a stuck core, look for these signals inside `tile_X -> core`:

* `reset`: Is the core stuck in reset?
* `clock`: Is the clock toggling?
* `io_interrupts`: Are there unexpected interrupts?
* **Pipeline Stages (Decoupled Interfaces):**
* `valid`: Is data attempting to move?
* `ready`: Is the next stage accepting data?
* *Rule of thumb:* If `valid` is High but `ready` is Low for many cycles, the consumer is stuck (backpressure).



---

## 5. Syntax Summary Guide

| Goal | Command (inside `sims/verilator`) |
| --- | --- |
| **Build Standard Sim** | `make CONFIG=<ConfigName>` |
| **Run Binary (Fast)** | `make CONFIG=<ConfigName> run-binary BINARY=<path/to/riscv>` |
| **Build Debug Sim** | `make CONFIG=<ConfigName> debug` |
| **Run & Save Waves** | `make CONFIG=<ConfigName> run-binary-debug BINARY=<path/to/riscv>` |
| **Clean Build Files** | `make clean` |

### Example Workflow

```bash
# 1. Enter directory
cd sims/verilator

# 2. Build the debug version of our custom 6-core config
make CONFIG=SixCoreHeteroConfig debug

# 3. Run a basic test and generate a VCD
make CONFIG=SixCoreHeteroConfig run-binary-debug BINARY=../../tests/isa/rv64ui-p-add

# 4. Open the resulting VCD (assuming you have GTKWave installed)
gtkwave output/chipyard.SixCoreHeteroConfig/rv64ui-p-add.vcd

```
