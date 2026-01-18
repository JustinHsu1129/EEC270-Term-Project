# Chipyard Tutorial Part 5: Creating a RoCC Accelerator

This section covers **RoCC (Rocket Custom Coprocessor)**. Unlike the MMIO peripherals we built in Parts 3 and 4, which sit on the slow system bus and are accessed via memory addresses, a RoCC accelerator is tightly coupled to the CPU pipeline.

It allows you to add **custom RISC-V instructions** that execute directly on your hardware unit.

---

## 1. The Architecture (Decoupled Interface)

The RoCC interface relies on two primary `Decoupled` (ready/valid) channels:

1. **Command (`cmd`):** The CPU sends an instruction to your unit. This includes the register values (`rs1`, `rs2`) and the instruction bits (`funct`).
2. **Response (`resp`):** Your unit sends the result back to the CPU to be written into the destination register (`rd`).

**Crucial Concept:** The CPU will **stall** if it issues a custom instruction and your unit's `cmd.ready` is low.

---

## 2. Step 1: The Hardware Source

We will build a simple **"Accumulator"**: It accepts an integer, adds it to an internal running total, and returns the new total.

**File:** `generators/chipyard/src/main/scala/example/MyRoCC.scala`

```scala
package chipyard.example

import chisel3._
import chisel3.util._
import freechips.rocketchip.tile._
import freechips.rocketchip.config._
import freechips.rocketchip.diplomacy._

// 1. The RoCC Class
// Must extend LazyRoCC to participate in negotiation
class MyAccumulator(opcodes: OpcodeSet)(implicit p: Parameters) 
    extends LazyRoCC(opcodes) {
  
  override lazy val module = new MyAccumulatorImp(this)
}

// 2. The Implementation
class MyAccumulatorImp(outer: MyAccumulator)(implicit p: Parameters) 
    extends LazyRoCCModuleImp(outer) {

  // --- LOGIC START ---
  
  // The internal register
  val accumulator = RegInit(0.U(64.W))

  // Decode the command
  // cmd.bits includes: inst (instruction bits), rs1, rs2
  val cmd = io.cmd
  val funct = cmd.bits.inst.funct
  val addend = cmd.bits.rs1

  // State machine logic
  // We accept a command if we are ready (which we always are in this simple example)
  // But we only proceed if 'cmd.valid' is true.
  
  when (cmd.fire()) {
    // "funct" is a 7-bit field in the instruction we can use for sub-commands
    // funct 0 = Read Accumulator
    // funct 1 = Add to Accumulator
    // funct 2 = Write/Reset Accumulator
    switch (funct) {
        is (0.U) { /* Do nothing to acc, just read */ }
        is (1.U) { accumulator := accumulator + addend }
        is (2.U) { accumulator := addend }
    }
  }

  // --- RESPONSE LOGIC ---
  
  // Return the value of the accumulator to the CPU
  io.resp.bits.data := accumulator
  
  // We drive the destination register index (rd) back to the core
  io.resp.bits.rd := cmd.bits.inst.rd

  // Handshaking:
  // 1. We are always ready to accept commands (simple logic)
  cmd.ready := io.resp.ready 
  
  // 2. We send a response only when we have a valid command that expects a writeback
  // (cmd.bits.inst.xd means "Expects Destination Writeback")
  io.resp.valid := cmd.valid && cmd.bits.inst.xd
  
  // --- BUSY SIGNAL ---
  // Tell the CPU we aren't doing any long-running background tasks
  io.busy := false.B
  
  // Tie off unused interrupt line
  io.interrupt := false.B
}

```

---

## 3. Step 2: The Config Fragment

Connecting a RoCC accelerator is different from MMIO. You must attach it to a specific **Tile** (Core).

**File:** `generators/chipyard/src/main/scala/config/RoCCConfigs.scala`

```scala
import freechips.rocketchip.config._
import freechips.rocketchip.tile._

class WithMyAccumulator extends Config((site, here, up) => {
  // We verify if we are configuring a "BuildRoCC" parameter
  case BuildRoCC => Seq(
    (p: Parameters) => {
      // Use Opcode "Custom0" (Standard RISC-V Custom Opcode 0)
      val accumulator = LazyModule(new MyAccumulator(OpcodeSet.custom0)(p))
      accumulator
    }
  )
})

```

**Combined Config:**

```scala
class MyRoCCSoC extends Config(
  new WithMyAccumulator ++        // Add the accelerator
  new freechips.rocketchip.subsystem.WithNBigCores(1) ++ // 1 Rocket Core
  new chipyard.config.AbstractConfig
)

```

---

## 4. Software Interaction (Inline Assembly)

To use this hardware, you cannot use standard C `+` operators. You must use inline assembly to invoke the specific `custom0` opcode.

**C Code (`rocc_test.c`):**

```c
#include <stdio.h>
#include "rocc.h" // Standard header provided in chipyard/tests

int main() {
    unsigned long result;
    unsigned long input = 10;

    // 1. Reset Accumulator to 10 (Funct 2)
    // format: ROCC_INSTRUCTION_R_R(opcode, rd, rs1, rs2, funct)
    // opcode 0 = custom0
    ROCC_INSTRUCTION_R_R(0, result, input, 0, 2); 
    printf("Set Acc to 10. Result: %lu\n", result);

    // 2. Add 5 to Accumulator (Funct 1)
    input = 5;
    ROCC_INSTRUCTION_R_R(0, result, input, 0, 1);
    printf("Added 5. Result: %lu\n", result); // Should be 15

    return 0;
}

```

---

## 5. Syntax Guide: RoCC

| Object / Signal | Description | Usage |
| --- | --- | --- |
| `LazyRoCC` | Base class for the accelerator wrapper. | `class X(op: OpcodeSet) extends LazyRoCC(op)` |
| `LazyRoCCModuleImp` | Base class for the actual logic module. | `class XImp(outer: X) extends LazyRoCCModuleImp` |
| `OpcodeSet.customX` | Selects which RISC-V opcode maps to this unit. | `custom0`, `custom1`, `custom2`, `custom3` |
| `io.cmd` | Input bundle from Core to Accelerator. | `io.cmd.bits.rs1`, `io.cmd.bits.inst.funct` |
| `io.resp` | Output bundle from Accelerator to Core. | `io.resp.bits.data` (result), `io.resp.bits.rd` |
| `io.busy` | Signal telling Core not to issue new instructions. | Set `false.B` for combinational units. |
| `cmd.bits.inst.xd` | "Expects Destination". | Boolean. True if the instruction writes to a register. |
| `ROCC_INSTRUCTION_x` | C macros for calling custom opcodes. | `ROCC_INSTRUCTION_R_R` (Register-Register) |

### RoCC vs. MMIO Summary

* **Use MMIO (Part 3) when:** You are controlling a slow peripheral (LEDs, Motors), need large configuration registers, or want standard driver support (Linux).
* **Use RoCC (Part 5) when:** You are offloading a computation (Encryption, Matrix Math) that needs to run very fast and share data frequently with the CPU registers.