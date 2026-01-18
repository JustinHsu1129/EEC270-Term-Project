# Chipyard Tutorial Part 3: Integrating a Custom MMIO Peripheral

This section details how to create a custom hardware accelerator or peripheral (e.g., a GCD unit, LED controller, or custom crypto block) and connect it to the processor via the TileLink system bus using Memory-Mapped I/O (MMIO).

To make this digestible, we will build a **"PWM-style" Blinker**: a peripheral with a single 32-bit register. Writing a value to this register controls the speed of a counter.

---

## 1. The Architecture (Diplomacy)

Chipyard uses a negotiation framework called **Diplomacy**. You don't manually wire `clock`, `reset`, or `data` lines between the bus and your block. Instead, you create "Nodes."

* **The Bus (Manager):** Wants to send commands (Read/Write).
* **Your Peripheral (Client):** Wants to receive commands.
* **Diplomacy:** Automatically calculates the address map and wires the signals during compilation.

---

## 2. Step 1: Create the Hardware Source

Create a new file: `generators/chipyard/src/main/scala/example/MyPeripheral.scala`

We will use `TLRegisterRouter`, a helper class that handles all the complex TileLink protocol handshake logic for you, exposing a simple Register Map (`regmap`).

```scala
package chipyard.example

import chisel3._
import chisel3.util._
import freechips.rocketchip.config.{Config, Parameters}
import freechips.rocketchip.diplomacy._
import freechips.rocketchip.regmapper._
import freechips.rocketchip.tilelink._

// 1. The Parameters for your peripheral (e.g., base address)
case class MyDeviceParams(address: BigInt)

// 2. The Chisel Logic & TileLink Wrapper
// We extend TLRegisterRouter which gives us a 'regnode' to connect to the bus
class MyPWM(params: MyDeviceParams)(implicit p: Parameters) 
  extends TLRegisterRouter(
    base = params.address,      // The address in memory (e.g., 0x2000)
    devname = "mypwm",          // Name for the Device Tree (Linux)
    compat = Seq("ucb,mypwm"),  // Compatibility string for drivers
    beatBytes = 4               // Bus width (4 bytes = 32 bits)
  )(
    // This function creates the actual hardware module
    new LazyModuleImp(_) {
      // --- YOUR CUSTOM LOGIC STARTS HERE ---
      
      // A register to hold the user's input (threshold)
      // Init to 0, 32-bits wide
      val threshold = RegInit(0.U(32.W))
      
      // A counter that increments every cycle
      val counter = RegInit(0.U(32.W))
      
      // Logic: Reset counter if it hits threshold, else increment
      when (counter >= threshold) {
        counter := 0.U
      } .otherwise {
        counter := counter + 1.U
      }
      
      // (Optional) Connect counter overflow to an external pin or interrupt
      // For this tutorial, we just keep it internal.

      // --- YOUR CUSTOM LOGIC ENDS HERE ---

      // 3. The Register Map
      // Map the 'threshold' hardware register to offset 0x00 relative to base.
      // 0x00 -> Read/Write access to 'threshold'
      regmap(
        0x00 -> Seq(RegField(32, threshold))
      )
    }
  )

```

---

## 3. Step 2: The Integration Trait

Now that the hardware exists, we need a "Trait" to tell the Chipyard System (the top-level SoC) that this device *can* exist if configured.

Add this code to the bottom of the same file (`MyPeripheral.scala`) or a new file.

```scala
import freechips.rocketchip.subsystem.BaseSubsystem

// A trait that the Top-Level System will mix in
trait CanHavePeripheryMyPWM { this: BaseSubsystem =>
  // We declare an Option. If 'Some', the hardware is generated.
  // If 'None', it is optimized away.
  private val address = 0x2000 // Arbitrary free address in MMIO space
  
  // Create the LazyModule using our class from Step 1
  val myPWM = LazyModule(new MyPWM(MyDeviceParams(address)))

  // Connect the Peripheral's Node to the System's Peripheral Bus (pbus)
  // The ":=" operator performs the Diplomacy connection
  pbus.coupleTo("mypwm") { myPWM.regnode := TLFragmenter(pbus.beatBytes, pbus.blockBytes) := _ }
}

```

---

## 4. Step 3: The Config Fragment

We need a standard Config Fragment to "turn on" this trait.

```scala
// This goes in your Configuration file (e.g., HeteroConfigs.scala)

class WithMyPWM extends Config((site, here, up) => {
  case BuildTop => (p: Parameters) => new DigitalTop(p) {
    // Mix in the trait we defined in Step 2
    override lazy val module = new DigitalTopModule(this) 
      with CanHavePeripheryMyPWM 
  }
})

```

*Note: This specific syntax can vary slightly depending on the exact Chipyard version (v1.8 vs v1.10), specifically regarding how `DigitalTop` is overridden. The method above is a conceptual simplification. In strict Chipyard v1.10+, you often just add the trait to the `DigitalTop` class definition in `System.scala` rather than overriding it in Config, but the method above is valid for custom "Overlay" styles.*

**Simpler Alternative for Config:**
Typically, you add the trait to the `DigitalTop` class definition in `generators/chipyard/src/main/scala/DigitalTop.scala`:

```scala
class DigitalTop(implicit p: Parameters) extends System
  with chipyard.example.CanHavePeripheryMyPWM // <--- Add this line
  // ... other traits ...

```

Then your Config is simply default, because the logic inside `CanHavePeripheryMyPWM` will decide to instantiate it or not based on parameters.

---

## 5. Step 4: Add to Configuration

Now, update your 6-core config from Part 1 to include this peripheral. Since we hardcoded the instantiation in the Trait (for simplicity), simply recompiling `DigitalTop` is enough.

If you used the "Config Override" method:

```scala
class SixCoreHeteroWithPWM extends Config(
  new chipyard.example.WithMyPWM ++ // Adds our custom MMIO device
  new SixCoreHeteroConfig           // Our previous 6-core config
)

```

---

## 6. Software Interaction (Driver)

Once you generate this SoC (`make CONFIG=SixCoreHeteroWithPWM`), you need to write C code to talk to it.

**Address Calculation:**

* **Base:** `0x2000` (Defined in Step 2)
* **Offset:** `0x00` (Defined in `regmap` in Step 1)
* **Physical Address:** `0x2000`

**C Code (`driver.c`):**

```c
#include <stdint.h>
#include <stdio.h>

// Define a pointer to the address
// 'volatile' tells the compiler "don't cache this, always go to hardware"
#define PWM_THRESHOLD_REG ((volatile uint32_t *) 0x2000)

int main() {
    printf("Configuring PWM...\n");

    // WRITE to the hardware register
    *PWM_THRESHOLD_REG = 1000; 

    // READ back to verify
    uint32_t val = *PWM_THRESHOLD_REG;
    
    printf("PWM set to: %d\n", val);
    return 0;
}

```

## Syntax & Class Guide

| Class / Object | Purpose | Arguments |
| --- | --- | --- |
| `TLRegisterRouter` | Base class for simple MMIO slaves. Handles TileLink protocol. | `base` (address), `devname` (device tree), `beatBytes` (bus width) |
| `LazyModule` | A wrapper that allows Diplomacy to negotiate parameters *before* generating hardware. | The module class (e.g., `new MyPWM(...)`) |
| `RegField` | Defines a bit-field in the register map. | `width` (bits), `register` (Chisel Reg), `RegFieldDesc` (optional docs) |
| `regmap` | Mapping function inside `LazyModuleImp`. | Map of `Offset -> Seq(RegField)` |
| `pbus` | The Peripheral Bus. Most slow IO connects here. | N/A (It's a node in the BaseSubsystem) |
