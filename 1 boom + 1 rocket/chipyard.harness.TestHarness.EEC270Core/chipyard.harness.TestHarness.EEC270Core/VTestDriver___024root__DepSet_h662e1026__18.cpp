// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestDriver.h for the primary calling header

#include "VTestDriver__pch.h"
#include "VTestDriver__Syms.h"
#include "VTestDriver___024root.h"

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__956(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__956\n"); );
    // Body
    if (VL_UNLIKELY((((~ (IData)(vlSelf->__VdfgTmp_h163875ae__0)) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h3f6fcfea__0)) 
                     & (3U > (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                      >> 5U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_15.sv:478: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus_coupler_from_port_named_serial_tl_0_in.buffer.monitor: Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:136:77)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_15.sv", 478, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_15.sv:480: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus_coupler_from_port_named_serial_tl_0_in.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_15.sv", 480, "");
        }
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->__VdfgTmp_h163875ae__0)) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h3f6fcfea__0)) 
                     & (0U != (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                     >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_15.sv:484: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus_coupler_from_port_named_serial_tl_0_in.buffer.monitor: Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:136:77)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_15.sv", 484, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_15.sv:486: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus_coupler_from_port_named_serial_tl_0_in.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_15.sv", 486, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__957(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__957\n"); );
    // Body
    if (VL_UNLIKELY((((~ (IData)(vlSelf->__VdfgTmp_h163875ae__0)) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h3f6fcfea__0)) 
                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[2U] 
                        >> 0x15U)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_15.sv:490: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus_coupler_from_port_named_serial_tl_0_in.buffer.monitor: Assertion failed: 'D' channel ReleaseAck is corrupt (connected at generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:136:77)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_15.sv", 490, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_15.sv:492: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus_coupler_from_port_named_serial_tl_0_in.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_15.sv", 492, "");
        }
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->__VdfgTmp_h163875ae__0)) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h3f6fcfea__0)) 
                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                        >> 0x14U)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_15.sv:496: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus_coupler_from_port_named_serial_tl_0_in.buffer.monitor: Assertion failed: 'D' channel ReleaseAck is denied (connected at generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:136:77)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_15.sv", 496, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_15.sv:498: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus_coupler_from_port_named_serial_tl_0_in.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_15.sv", 498, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__958(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__958\n"); );
    // Body
    if (VL_UNLIKELY((((~ (IData)(vlSelf->__VdfgTmp_h163875ae__0)) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (4U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U])))) 
                     & (3U > (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                      >> 5U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_15.sv:502: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus_coupler_from_port_named_serial_tl_0_in.buffer.monitor: Assertion failed: 'D' channel Grant smaller than a beat (connected at generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:136:77)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_15.sv", 502, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_15.sv:504: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus_coupler_from_port_named_serial_tl_0_in.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_15.sv", 504, "");
        }
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->__VdfgTmp_h163875ae__0)) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (0x1cU == (0x1fU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U]))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_15.sv:508: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus_coupler_from_port_named_serial_tl_0_in.buffer.monitor: Assertion failed: 'D' channel Grant carries invalid cap param (connected at generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:136:77)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_15.sv", 508, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_15.sv:510: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus_coupler_from_port_named_serial_tl_0_in.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_15.sv", 510, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__959(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__959\n"); );
    // Body
    if (VL_UNLIKELY((((~ (IData)(vlSelf->__VdfgTmp_h163875ae__0)) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (0x14U == (0x1fU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U]))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_15.sv:514: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus_coupler_from_port_named_serial_tl_0_in.buffer.monitor: Assertion failed: 'D' channel Grant carries toN param (connected at generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:136:77)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_15.sv", 514, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_15.sv:516: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus_coupler_from_port_named_serial_tl_0_in.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_15.sv", 516, "");
        }
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->__VdfgTmp_h163875ae__0)) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (4U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U])))) 
                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[2U] 
                        >> 0x15U)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_15.sv:520: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus_coupler_from_port_named_serial_tl_0_in.buffer.monitor: Assertion failed: 'D' channel Grant is corrupt (connected at generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:136:77)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_15.sv", 520, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_15.sv:522: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus_coupler_from_port_named_serial_tl_0_in.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_15.sv", 522, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__960(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__960\n"); );
    // Body
    if (VL_UNLIKELY((((~ (IData)(vlSelf->__VdfgTmp_h163875ae__0)) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (5U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U])))) 
                     & (3U > (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                      >> 5U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_15.sv:526: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus_coupler_from_port_named_serial_tl_0_in.buffer.monitor: Assertion failed: 'D' channel GrantData smaller than a beat (connected at generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:136:77)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_15.sv", 526, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_15.sv:528: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus_coupler_from_port_named_serial_tl_0_in.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_15.sv", 528, "");
        }
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->__VdfgTmp_h163875ae__0)) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (0x1dU == (0x1fU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U]))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_15.sv:532: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus_coupler_from_port_named_serial_tl_0_in.buffer.monitor: Assertion failed: 'D' channel GrantData carries invalid cap param (connected at generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:136:77)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_15.sv", 532, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_15.sv:534: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus_coupler_from_port_named_serial_tl_0_in.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_15.sv", 534, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__961(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__961\n"); );
    // Body
    if (VL_UNLIKELY((((~ (IData)(vlSelf->__VdfgTmp_h163875ae__0)) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (0x15U == (0x1fU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U]))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_15.sv:538: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus_coupler_from_port_named_serial_tl_0_in.buffer.monitor: Assertion failed: 'D' channel GrantData carries toN param (connected at generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:136:77)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_15.sv", 538, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_15.sv:540: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus_coupler_from_port_named_serial_tl_0_in.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_15.sv", 540, "");
        }
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->__VdfgTmp_h163875ae__0)) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (5U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U])))) 
                     & (~ ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                               >> 0x14U)) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[2U] 
                                             >> 0x15U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_15.sv:544: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus_coupler_from_port_named_serial_tl_0_in.buffer.monitor: Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:136:77)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_15.sv", 544, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_15.sv:546: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus_coupler_from_port_named_serial_tl_0_in.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_15.sv", 546, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__962(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__962\n"); );
    // Body
    if (VL_UNLIKELY((((~ (IData)(vlSelf->__VdfgTmp_h163875ae__0)) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U])))) 
                     & (0U != (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                     >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_15.sv:550: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus_coupler_from_port_named_serial_tl_0_in.buffer.monitor: Assertion failed: 'D' channel AccessAck carries invalid param (connected at generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:136:77)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_15.sv", 550, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_15.sv:552: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus_coupler_from_port_named_serial_tl_0_in.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_15.sv", 552, "");
        }
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->__VdfgTmp_h163875ae__0)) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U])))) 
                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[2U] 
                        >> 0x15U)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_15.sv:556: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus_coupler_from_port_named_serial_tl_0_in.buffer.monitor: Assertion failed: 'D' channel AccessAck is corrupt (connected at generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:136:77)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_15.sv", 556, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_15.sv:558: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus_coupler_from_port_named_serial_tl_0_in.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_15.sv", 558, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__963(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__963\n"); );
    // Body
    if (VL_UNLIKELY((((~ (IData)(vlSelf->__VdfgTmp_h163875ae__0)) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (1U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U])))) 
                     & (0U != (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                     >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_15.sv:562: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus_coupler_from_port_named_serial_tl_0_in.buffer.monitor: Assertion failed: 'D' channel AccessAckData carries invalid param (connected at generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:136:77)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_15.sv", 562, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_15.sv:564: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus_coupler_from_port_named_serial_tl_0_in.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_15.sv", 564, "");
        }
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->__VdfgTmp_h163875ae__0)) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (1U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U])))) 
                     & (~ ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                               >> 0x14U)) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[2U] 
                                             >> 0x15U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_15.sv:568: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus_coupler_from_port_named_serial_tl_0_in.buffer.monitor: Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:136:77)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_15.sv", 568, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_15.sv:570: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus_coupler_from_port_named_serial_tl_0_in.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_15.sv", 570, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__964(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__964\n"); );
    // Body
    if (VL_UNLIKELY((((~ (IData)(vlSelf->__VdfgTmp_h163875ae__0)) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (2U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U])))) 
                     & (0U != (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                     >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_15.sv:574: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus_coupler_from_port_named_serial_tl_0_in.buffer.monitor: Assertion failed: 'D' channel HintAck carries invalid param (connected at generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:136:77)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_15.sv", 574, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_15.sv:576: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus_coupler_from_port_named_serial_tl_0_in.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_15.sv", 576, "");
        }
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->__VdfgTmp_h163875ae__0)) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (2U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U])))) 
                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[2U] 
                        >> 0x15U)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_15.sv:580: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus_coupler_from_port_named_serial_tl_0_in.buffer.monitor: Assertion failed: 'D' channel HintAck is corrupt (connected at generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:136:77)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_15.sv", 580, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_15.sv:582: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus_coupler_from_port_named_serial_tl_0_in.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_15.sv", 582, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__965(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__965\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___serial_tl_domain_auto_serdesser_client_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__a_first_counter)))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___serial_tl_domain_auto_serdesser_client_out_a_bits_opcode) 
                        != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__opcode))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_15.sv:586: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus_coupler_from_port_named_serial_tl_0_in.buffer.monitor: Assertion failed: 'A' channel opcode changed within multibeat operation (connected at generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:136:77)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_15.sv", 586, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_15.sv:588: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus_coupler_from_port_named_serial_tl_0_in.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_15.sv", 588, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___serial_tl_domain_auto_serdesser_client_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__a_first_counter)))) 
                     & ((7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_4 
                               >> 0x1bU)) != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__param))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_15.sv:592: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus_coupler_from_port_named_serial_tl_0_in.buffer.monitor: Assertion failed: 'A' channel param changed within multibeat operation (connected at generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:136:77)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_15.sv", 592, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_15.sv:594: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus_coupler_from_port_named_serial_tl_0_in.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_15.sv", 594, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__966(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__966\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___serial_tl_domain_auto_serdesser_client_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__a_first_counter)))) 
                     & ((0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_4 
                                 >> 0x13U)) != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__size))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_15.sv:598: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus_coupler_from_port_named_serial_tl_0_in.buffer.monitor: Assertion failed: 'A' channel size changed within multibeat operation (connected at generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:136:77)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_15.sv", 598, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_15.sv:600: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus_coupler_from_port_named_serial_tl_0_in.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_15.sv", 600, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___serial_tl_domain_auto_serdesser_client_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__a_first_counter)))) 
                     & ((0xffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_4 
                                  >> 0xbU)) != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__source))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_15.sv:604: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus_coupler_from_port_named_serial_tl_0_in.buffer.monitor: Assertion failed: 'A' channel source changed within multibeat operation (connected at generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:136:77)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_15.sv", 604, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_15.sv:606: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus_coupler_from_port_named_serial_tl_0_in.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_15.sv", 606, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__967(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__967\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___serial_tl_domain_auto_serdesser_client_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__a_first_counter)))) 
                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___serial_tl_domain_auto_serdesser_client_out_a_bits_address 
                        != vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__address)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_15.sv:610: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus_coupler_from_port_named_serial_tl_0_in.buffer.monitor: Assertion failed: 'A' channel address changed with multibeat operation (connected at generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:136:77)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_15.sv", 610, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_15.sv:612: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus_coupler_from_port_named_serial_tl_0_in.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_15.sv", 612, "");
        }
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->__VdfgTmp_h163875ae__0)) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__d_first_counter)))) 
                     & ((7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U]) 
                        != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__opcode_1))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_15.sv:616: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus_coupler_from_port_named_serial_tl_0_in.buffer.monitor: Assertion failed: 'D' channel opcode changed within multibeat operation (connected at generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:136:77)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_15.sv", 616, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_15.sv:618: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus_coupler_from_port_named_serial_tl_0_in.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_15.sv", 618, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__968(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__968\n"); );
    // Body
    if (VL_UNLIKELY((((~ (IData)(vlSelf->__VdfgTmp_h163875ae__0)) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__d_first_counter)))) 
                     & ((3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                               >> 3U)) != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__param_1))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_15.sv:622: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus_coupler_from_port_named_serial_tl_0_in.buffer.monitor: Assertion failed: 'D' channel param changed within multibeat operation (connected at generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:136:77)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_15.sv", 622, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_15.sv:624: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus_coupler_from_port_named_serial_tl_0_in.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_15.sv", 624, "");
        }
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->__VdfgTmp_h163875ae__0)) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__d_first_counter)))) 
                     & ((0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                 >> 5U)) != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__size_1))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_15.sv:628: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus_coupler_from_port_named_serial_tl_0_in.buffer.monitor: Assertion failed: 'D' channel size changed within multibeat operation (connected at generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:136:77)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_15.sv", 628, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_15.sv:630: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus_coupler_from_port_named_serial_tl_0_in.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_15.sv", 630, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__969(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__969\n"); );
    // Body
    if (VL_UNLIKELY((((~ (IData)(vlSelf->__VdfgTmp_h163875ae__0)) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__d_first_counter)))) 
                     & ((0xffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                  >> 9U)) != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__source_1))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_15.sv:634: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus_coupler_from_port_named_serial_tl_0_in.buffer.monitor: Assertion failed: 'D' channel source changed within multibeat operation (connected at generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:136:77)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_15.sv", 634, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_15.sv:636: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus_coupler_from_port_named_serial_tl_0_in.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_15.sv", 636, "");
        }
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->__VdfgTmp_h163875ae__0)) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__d_first_counter)))) 
                     & ((7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                               >> 0x11U)) != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__sink))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_15.sv:640: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus_coupler_from_port_named_serial_tl_0_in.buffer.monitor: Assertion failed: 'D' channel sink changed with multibeat operation (connected at generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:136:77)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_15.sv", 640, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_15.sv:642: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus_coupler_from_port_named_serial_tl_0_in.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_15.sv", 642, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__970(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__970\n"); );
    // Init
    VlWide<8>/*255:0*/ __Vtemp_1;
    // Body
    if (VL_UNLIKELY((((~ (IData)(vlSelf->__VdfgTmp_h163875ae__0)) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__d_first_counter)))) 
                     & ((1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                               >> 0x14U)) != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__denied))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_15.sv:646: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus_coupler_from_port_named_serial_tl_0_in.buffer.monitor: Assertion failed: 'D' channel denied changed with multibeat operation (connected at generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:136:77)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_15.sv", 646, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_15.sv:648: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus_coupler_from_port_named_serial_tl_0_in.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_15.sv", 648, "");
        }
    }
    VL_SHIFTR_WWI(256,256,8, __Vtemp_1, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__inflight, 
                  (0xffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_4 
                            >> 0xbU)));
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___GEN_1) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset))) 
                     & __Vtemp_1[0U]))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_15.sv:652: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus_coupler_from_port_named_serial_tl_0_in.buffer.monitor: Assertion failed: 'A' channel re-used a source ID (connected at generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:136:77)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_15.sv", 652, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_15.sv:654: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus_coupler_from_port_named_serial_tl_0_in.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_15.sv", 654, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__971(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__971\n"); );
    // Init
    VlWide<8>/*255:0*/ __Vtemp_1;
    // Body
    VL_SHIFTR_WWI(256,256,8, __Vtemp_1, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__inflight, 
                  (0xffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                            >> 9U)));
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___GEN_46) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset))) 
                     & (~ (__Vtemp_1[0U] | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__same_cycle_resp)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_15.sv:658: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus_coupler_from_port_named_serial_tl_0_in.buffer.monitor: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:136:77)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_15.sv", 658, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_15.sv:660: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus_coupler_from_port_named_serial_tl_0_in.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_15.sv", 660, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___GEN_46) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__same_cycle_resp))) 
                     & (~ (((7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U]) 
                            == ((0x17U >= (0x1fU & 
                                           ((IData)(3U) 
                                            * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___serial_tl_domain_auto_serdesser_client_out_a_bits_opcode))))
                                 ? (7U & (0x911240U 
                                          >> (0x1fU 
                                              & ((IData)(3U) 
                                                 * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___serial_tl_domain_auto_serdesser_client_out_a_bits_opcode)))))
                                 : 0U)) | ((7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U]) 
                                           == ((0x17U 
                                                >= 
                                                (0x1fU 
                                                 & ((IData)(3U) 
                                                    * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___serial_tl_domain_auto_serdesser_client_out_a_bits_opcode))))
                                                ? (7U 
                                                   & (0x951240U 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(3U) 
                                                          * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___serial_tl_domain_auto_serdesser_client_out_a_bits_opcode)))))
                                                : 0U))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_15.sv:664: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus_coupler_from_port_named_serial_tl_0_in.buffer.monitor: Assertion failed: 'D' channel contains improper opcode response (connected at generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:136:77)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_15.sv", 664, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_15.sv:666: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus_coupler_from_port_named_serial_tl_0_in.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_15.sv", 666, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__972(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__972\n"); );
    // Init
    VlWide<32>/*1023:0*/ __Vtemp_1;
    VlWide<32>/*1023:0*/ __Vtemp_2;
    VlWide<32>/*1023:0*/ __Vtemp_3;
    VlWide<32>/*1023:0*/ __Vtemp_4;
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___GEN_46) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__same_cycle_resp))) 
                     & ((0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_4 
                                 >> 0x13U)) != (0xfU 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 5U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_15.sv:670: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus_coupler_from_port_named_serial_tl_0_in.buffer.monitor: Assertion failed: 'D' channel contains improper response size (connected at generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:136:77)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_15.sv", 670, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_15.sv:672: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus_coupler_from_port_named_serial_tl_0_in.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_15.sv", 672, "");
        }
    }
    VL_SHIFTR_WWI(1024,1024,10, __Vtemp_1, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__inflight_opcodes, 
                  (0x3fcU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                             >> 7U)));
    VL_SHIFTR_WWI(1024,1024,10, __Vtemp_2, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__inflight_opcodes, 
                  (0x3fcU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                             >> 7U)));
    VL_SHIFTR_WWI(1024,1024,10, __Vtemp_3, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__inflight_opcodes, 
                  (0x3fcU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                             >> 7U)));
    VL_SHIFTR_WWI(1024,1024,10, __Vtemp_4, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__inflight_opcodes, 
                  (0x3fcU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                             >> 7U)));
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___GEN_46) 
                      & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__same_cycle_resp)) 
                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))) 
                     & (~ (((7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U]) 
                            == ((0x17U >= (0x1fU & 
                                           ((IData)(3U) 
                                            * (7U & 
                                               (__Vtemp_1[0U] 
                                                >> 1U)))))
                                 ? (7U & (0x911240U 
                                          >> (0x1fU 
                                              & ((IData)(3U) 
                                                 * 
                                                 (7U 
                                                  & (__Vtemp_2[0U] 
                                                     >> 1U))))))
                                 : 0U)) | ((7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U]) 
                                           == ((0x17U 
                                                >= 
                                                (0x1fU 
                                                 & ((IData)(3U) 
                                                    * 
                                                    (7U 
                                                     & (__Vtemp_3[0U] 
                                                        >> 1U)))))
                                                ? (7U 
                                                   & (0x951240U 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(3U) 
                                                          * 
                                                          (7U 
                                                           & (__Vtemp_4[0U] 
                                                              >> 1U))))))
                                                : 0U))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_15.sv:676: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus_coupler_from_port_named_serial_tl_0_in.buffer.monitor: Assertion failed: 'D' channel contains improper opcode response (connected at generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:136:77)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_15.sv", 676, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_15.sv:678: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus_coupler_from_port_named_serial_tl_0_in.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_15.sv", 678, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__973(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__973\n"); );
    // Init
    VlWide<64>/*2047:0*/ __Vtemp_1;
    // Body
    VL_SHIFTR_WWI(2048,2048,11, __Vtemp_1, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__inflight_sizes, 
                  (0x7f8U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                             >> 6U)));
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___GEN_46) 
                      & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__same_cycle_resp)) 
                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))) 
                     & ((0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                 >> 5U)) != (0x7fU 
                                             & (__Vtemp_1[0U] 
                                                >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_15.sv:682: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus_coupler_from_port_named_serial_tl_0_in.buffer.monitor: Assertion failed: 'D' channel contains improper response size (connected at generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:136:77)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_15.sv", 682, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_15.sv:684: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus_coupler_from_port_named_serial_tl_0_in.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_15.sv", 684, "");
        }
    }
    if (VL_UNLIKELY(((((((((~ (IData)(vlSelf->__VdfgTmp_h163875ae__0)) 
                           & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                          & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))) 
                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___serial_tl_domain_auto_serdesser_client_out_a_valid)) 
                        & ((0xffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_4 
                                     >> 0xbU)) == (0xffU 
                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                                      >> 9U)))) 
                       & (6U != (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset))) 
                     & (~ ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___serial_tl_domain_auto_serdesser_client_out_d_ready)) 
                           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___fbus_coupler_from_port_named_serial_tl_0_in_auto_buffer_in_a_ready)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_15.sv:688: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus_coupler_from_port_named_serial_tl_0_in.buffer.monitor: Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_15.sv", 688, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_15.sv:690: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus_coupler_from_port_named_serial_tl_0_in.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_15.sv", 690, "");
        }
    }
}

extern const VlWide<8>/*255:0*/ VTestDriver__ConstPool__CONST_h4e9f510d_0;
extern const VlWide<8>/*255:0*/ VTestDriver__ConstPool__CONST_h9e67c271_0;

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__974(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__974\n"); );
    // Init
    VlWide<8>/*255:0*/ __Vtemp_1;
    VlWide<8>/*255:0*/ __Vtemp_3;
    VlWide<8>/*255:0*/ __Vtemp_4;
    VlWide<8>/*255:0*/ __Vtemp_6;
    // Body
    VL_SHIFTL_WWI(256,256,8, __Vtemp_1, VTestDriver__ConstPool__CONST_h4e9f510d_0, 
                  (0xffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_4 
                            >> 0xbU)));
    __Vtemp_3[0U] = (0xffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                              >> 9U));
    __Vtemp_3[1U] = 0U;
    __Vtemp_3[2U] = 0U;
    __Vtemp_3[3U] = 0U;
    __Vtemp_3[4U] = 0U;
    __Vtemp_3[5U] = 0U;
    __Vtemp_3[6U] = 0U;
    __Vtemp_3[7U] = 0U;
    VL_SHIFTL_WWW(256,256,256, __Vtemp_4, VTestDriver__ConstPool__CONST_h4e9f510d_0, __Vtemp_3);
    VL_SHIFTL_WWI(256,256,8, __Vtemp_6, VTestDriver__ConstPool__CONST_h4e9f510d_0, 
                  (0xffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_4 
                            >> 0xbU)));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)) 
                           & (~ ((0U != ((((((((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___same_cycle_resp_T_1)
                                                  ? 
                                                 __Vtemp_1[0U]
                                                  : 
                                                 VTestDriver__ConstPool__CONST_h9e67c271_0[0U]) 
                                                ^ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___GEN_46)
                                                    ? 
                                                   __Vtemp_4[0U]
                                                    : 
                                                   VTestDriver__ConstPool__CONST_h9e67c271_0[0U])) 
                                               | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___same_cycle_resp_T_1)
                                                    ? 
                                                   __Vtemp_1[1U]
                                                    : 
                                                   VTestDriver__ConstPool__CONST_h9e67c271_0[1U]) 
                                                  ^ 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___GEN_46)
                                                    ? 
                                                   __Vtemp_4[1U]
                                                    : 
                                                   VTestDriver__ConstPool__CONST_h9e67c271_0[1U]))) 
                                              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___same_cycle_resp_T_1)
                                                   ? 
                                                  __Vtemp_1[2U]
                                                   : 
                                                  VTestDriver__ConstPool__CONST_h9e67c271_0[2U]) 
                                                 ^ 
                                                 ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___GEN_46)
                                                   ? 
                                                  __Vtemp_4[2U]
                                                   : 
                                                  VTestDriver__ConstPool__CONST_h9e67c271_0[2U]))) 
                                             | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___same_cycle_resp_T_1)
                                                  ? 
                                                 __Vtemp_1[3U]
                                                  : 
                                                 VTestDriver__ConstPool__CONST_h9e67c271_0[3U]) 
                                                ^ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___GEN_46)
                                                    ? 
                                                   __Vtemp_4[3U]
                                                    : 
                                                   VTestDriver__ConstPool__CONST_h9e67c271_0[3U]))) 
                                            | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___same_cycle_resp_T_1)
                                                 ? 
                                                __Vtemp_1[4U]
                                                 : 
                                                VTestDriver__ConstPool__CONST_h9e67c271_0[4U]) 
                                               ^ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___GEN_46)
                                                   ? 
                                                  __Vtemp_4[4U]
                                                   : 
                                                  VTestDriver__ConstPool__CONST_h9e67c271_0[4U]))) 
                                           | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___same_cycle_resp_T_1)
                                                ? __Vtemp_1[5U]
                                                : VTestDriver__ConstPool__CONST_h9e67c271_0[5U]) 
                                              ^ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___GEN_46)
                                                  ? 
                                                 __Vtemp_4[5U]
                                                  : 
                                                 VTestDriver__ConstPool__CONST_h9e67c271_0[5U]))) 
                                          | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___same_cycle_resp_T_1)
                                               ? __Vtemp_1[6U]
                                               : VTestDriver__ConstPool__CONST_h9e67c271_0[6U]) 
                                             ^ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___GEN_46)
                                                 ? 
                                                __Vtemp_4[6U]
                                                 : 
                                                VTestDriver__ConstPool__CONST_h9e67c271_0[6U]))) 
                                         | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___same_cycle_resp_T_1)
                                              ? __Vtemp_1[7U]
                                              : VTestDriver__ConstPool__CONST_h9e67c271_0[7U]) 
                                            ^ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___GEN_46)
                                                ? __Vtemp_4[7U]
                                                : VTestDriver__ConstPool__CONST_h9e67c271_0[7U])))) 
                                 | (0U == ((((((((VTestDriver__ConstPool__CONST_h9e67c271_0[0U] 
                                                  ^ 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___same_cycle_resp_T_1)
                                                    ? 
                                                   __Vtemp_6[0U]
                                                    : 
                                                   VTestDriver__ConstPool__CONST_h9e67c271_0[0U])) 
                                                 | (VTestDriver__ConstPool__CONST_h9e67c271_0[1U] 
                                                    ^ 
                                                    ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___same_cycle_resp_T_1)
                                                      ? 
                                                     __Vtemp_6[1U]
                                                      : 
                                                     VTestDriver__ConstPool__CONST_h9e67c271_0[1U]))) 
                                                | (VTestDriver__ConstPool__CONST_h9e67c271_0[2U] 
                                                   ^ 
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___same_cycle_resp_T_1)
                                                     ? 
                                                    __Vtemp_6[2U]
                                                     : 
                                                    VTestDriver__ConstPool__CONST_h9e67c271_0[2U]))) 
                                               | (VTestDriver__ConstPool__CONST_h9e67c271_0[3U] 
                                                  ^ 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___same_cycle_resp_T_1)
                                                    ? 
                                                   __Vtemp_6[3U]
                                                    : 
                                                   VTestDriver__ConstPool__CONST_h9e67c271_0[3U]))) 
                                              | (VTestDriver__ConstPool__CONST_h9e67c271_0[4U] 
                                                 ^ 
                                                 ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___same_cycle_resp_T_1)
                                                   ? 
                                                  __Vtemp_6[4U]
                                                   : 
                                                  VTestDriver__ConstPool__CONST_h9e67c271_0[4U]))) 
                                             | (VTestDriver__ConstPool__CONST_h9e67c271_0[5U] 
                                                ^ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___same_cycle_resp_T_1)
                                                    ? 
                                                   __Vtemp_6[5U]
                                                    : 
                                                   VTestDriver__ConstPool__CONST_h9e67c271_0[5U]))) 
                                            | (VTestDriver__ConstPool__CONST_h9e67c271_0[6U] 
                                               ^ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___same_cycle_resp_T_1)
                                                   ? 
                                                  __Vtemp_6[6U]
                                                   : 
                                                  VTestDriver__ConstPool__CONST_h9e67c271_0[6U]))) 
                                           | (VTestDriver__ConstPool__CONST_h9e67c271_0[7U] 
                                              ^ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___same_cycle_resp_T_1)
                                                  ? 
                                                 __Vtemp_6[7U]
                                                  : 
                                                 VTestDriver__ConstPool__CONST_h9e67c271_0[7U])))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_15.sv:694: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus_coupler_from_port_named_serial_tl_0_in.buffer.monitor: Assertion failed: 'A' and 'D' concurrent, despite minlatency > 0 (connected at generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:136:77)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_15.sv", 694, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_15.sv:696: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus_coupler_from_port_named_serial_tl_0_in.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_15.sv", 696, "");
        }
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)) 
                           & (~ (((0U == ((((((((VTestDriver__ConstPool__CONST_h9e67c271_0[0U] 
                                                 ^ 
                                                 vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__inflight[0U]) 
                                                | (VTestDriver__ConstPool__CONST_h9e67c271_0[1U] 
                                                   ^ 
                                                   vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__inflight[1U])) 
                                               | (VTestDriver__ConstPool__CONST_h9e67c271_0[2U] 
                                                  ^ 
                                                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__inflight[2U])) 
                                              | (VTestDriver__ConstPool__CONST_h9e67c271_0[3U] 
                                                 ^ 
                                                 vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__inflight[3U])) 
                                             | (VTestDriver__ConstPool__CONST_h9e67c271_0[4U] 
                                                ^ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__inflight[4U])) 
                                            | (VTestDriver__ConstPool__CONST_h9e67c271_0[5U] 
                                               ^ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__inflight[5U])) 
                                           | (VTestDriver__ConstPool__CONST_h9e67c271_0[6U] 
                                              ^ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__inflight[6U])) 
                                          | (VTestDriver__ConstPool__CONST_h9e67c271_0[7U] 
                                             ^ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__inflight[7U]))) 
                                  | (0U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                 | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__watchdog 
                                    < vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__plusarg_reader__DOT__myplus))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_15.sv:700: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus_coupler_from_port_named_serial_tl_0_in.buffer.monitor: Assertion failed: TileLink timeout expired (connected at generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:136:77)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_15.sv", 700, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_15.sv:702: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus_coupler_from_port_named_serial_tl_0_in.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_15.sv", 702, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__975(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__975\n"); );
    // Init
    VlWide<8>/*255:0*/ __Vtemp_1;
    VlWide<64>/*2047:0*/ __Vtemp_2;
    // Body
    VL_SHIFTR_WWI(256,256,8, __Vtemp_1, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__inflight_1, 
                  (0xffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                            >> 9U)));
    if (VL_UNLIKELY((((~ (IData)(vlSelf->__VdfgTmp_h163875ae__0)) 
                      & ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__d_first_counter_2)) 
                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h3f6fcfea__0))) 
                     & (~ __Vtemp_1[0U])))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_15.sv:706: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus_coupler_from_port_named_serial_tl_0_in.buffer.monitor: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:136:77)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_15.sv", 706, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_15.sv:708: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus_coupler_from_port_named_serial_tl_0_in.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_15.sv", 708, "");
        }
    }
    VL_SHIFTR_WWI(2048,2048,11, __Vtemp_2, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1, 
                  (0x7f8U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                             >> 6U)));
    if (VL_UNLIKELY((((~ (IData)(vlSelf->__VdfgTmp_h163875ae__0)) 
                      & ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__d_first_counter_2)) 
                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h3f6fcfea__0))) 
                     & ((0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                 >> 5U)) != (0x7fU 
                                             & (__Vtemp_2[0U] 
                                                >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_15.sv:712: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus_coupler_from_port_named_serial_tl_0_in.buffer.monitor: Assertion failed: 'D' channel contains improper response size (connected at generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:136:77)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_15.sv", 712, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_15.sv:714: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus_coupler_from_port_named_serial_tl_0_in.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_15.sv", 714, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__976(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__976\n"); );
    // Body
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)) 
                           & (~ (((0U == ((((((((VTestDriver__ConstPool__CONST_h9e67c271_0[0U] 
                                                 ^ 
                                                 vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__inflight_1[0U]) 
                                                | (VTestDriver__ConstPool__CONST_h9e67c271_0[1U] 
                                                   ^ 
                                                   vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__inflight_1[1U])) 
                                               | (VTestDriver__ConstPool__CONST_h9e67c271_0[2U] 
                                                  ^ 
                                                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__inflight_1[2U])) 
                                              | (VTestDriver__ConstPool__CONST_h9e67c271_0[3U] 
                                                 ^ 
                                                 vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__inflight_1[3U])) 
                                             | (VTestDriver__ConstPool__CONST_h9e67c271_0[4U] 
                                                ^ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__inflight_1[4U])) 
                                            | (VTestDriver__ConstPool__CONST_h9e67c271_0[5U] 
                                               ^ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__inflight_1[5U])) 
                                           | (VTestDriver__ConstPool__CONST_h9e67c271_0[6U] 
                                              ^ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__inflight_1[6U])) 
                                          | (VTestDriver__ConstPool__CONST_h9e67c271_0[7U] 
                                             ^ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__inflight_1[7U]))) 
                                  | (0U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                                 | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__watchdog_1 
                                    < vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_15.sv:718: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus_coupler_from_port_named_serial_tl_0_in.buffer.monitor: Assertion failed: TileLink timeout expired (connected at generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:136:77)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_15.sv", 718, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_15.sv:720: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus_coupler_from_port_named_serial_tl_0_in.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_15.sv", 720, "");
        }
    }
    if (VL_UNLIKELY(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_valid) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                        & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_opcode)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:189: Assertion failed in %NTestDriver.testHarness.chiptop0.system.chipyard_prcictrl_domain.reset_setter.monitor: Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at generators/chipyard/src/main/scala/clocking/HasChipyardPRCI.scala:79:25)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_66.sv", 189, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_66.sv:191: Assertion failed in %NTestDriver.testHarness.chiptop0.system.chipyard_prcictrl_domain.reset_setter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_66.sv", 191, "");
        }
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:193: Assertion failed in %NTestDriver.testHarness.chiptop0.system.chipyard_prcictrl_domain.reset_setter.monitor: Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at generators/chipyard/src/main/scala/clocking/HasChipyardPRCI.scala:79:25)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_66.sv", 193, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_66.sv:195: Assertion failed in %NTestDriver.testHarness.chiptop0.system.chipyard_prcictrl_domain.reset_setter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_66.sv", 195, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__977(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__977\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_opcode)))) 
                     & (0x200fU < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_source))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:199: Assertion failed in %NTestDriver.testHarness.chiptop0.system.chipyard_prcictrl_domain.reset_setter.monitor: Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at generators/chipyard/src/main/scala/clocking/HasChipyardPRCI.scala:79:25)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_66.sv", 199, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_66.sv:201: Assertion failed in %NTestDriver.testHarness.chiptop0.system.chipyard_prcictrl_domain.reset_setter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_66.sv", 201, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_opcode)))) 
                     & (~ (IData)((3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:205: Assertion failed in %NTestDriver.testHarness.chiptop0.system.chipyard_prcictrl_domain.reset_setter.monitor: Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at generators/chipyard/src/main/scala/clocking/HasChipyardPRCI.scala:79:25)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_66.sv", 205, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_66.sv:207: Assertion failed in %NTestDriver.testHarness.chiptop0.system.chipyard_prcictrl_domain.reset_setter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_66.sv", 207, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__978(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__978\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_opcode)))) 
                     & (0U != (7U & ((~ ((IData)(7U) 
                                         << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size))) 
                                     & (IData)(vlSelf->__VdfgTmp_h1a485cba__0))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:211: Assertion failed in %NTestDriver.testHarness.chiptop0.system.chipyard_prcictrl_domain.reset_setter.monitor: Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at generators/chipyard/src/main/scala/clocking/HasChipyardPRCI.scala:79:25)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_66.sv", 211, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_66.sv:213: Assertion failed in %NTestDriver.testHarness.chiptop0.system.chipyard_prcictrl_domain.reset_setter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_66.sv", 213, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_opcode)))) 
                     & (2U < (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                     ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter_1__DOT__repeater__DOT__saved_param)
                                     : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                         << 0x1dU) 
                                        | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                           >> 3U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:217: Assertion failed in %NTestDriver.testHarness.chiptop0.system.chipyard_prcictrl_domain.reset_setter.monitor: Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at generators/chipyard/src/main/scala/clocking/HasChipyardPRCI.scala:79:25)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_66.sv", 217, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_66.sv:219: Assertion failed in %NTestDriver.testHarness.chiptop0.system.chipyard_prcictrl_domain.reset_setter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_66.sv", 219, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__979(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__979\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_opcode)))) 
                     & (0xffU != ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                   ? 0xffU : (0xffU 
                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                                 >> 8U))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:223: Assertion failed in %NTestDriver.testHarness.chiptop0.system.chipyard_prcictrl_domain.reset_setter.monitor: Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at generators/chipyard/src/main/scala/clocking/HasChipyardPRCI.scala:79:25)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_66.sv", 223, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_66.sv:225: Assertion failed in %NTestDriver.testHarness.chiptop0.system.chipyard_prcictrl_domain.reset_setter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_66.sv", 225, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_opcode)))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter_1__DOT__repeater__DOT__full)
                         ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter_1__DOT__repeater__DOT__saved_corrupt)
                         : (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[3U] 
                            >> 0x10U))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:229: Assertion failed in %NTestDriver.testHarness.chiptop0.system.chipyard_prcictrl_domain.reset_setter.monitor: Assertion failed: 'A' channel AcquireBlock is corrupt (connected at generators/chipyard/src/main/scala/clocking/HasChipyardPRCI.scala:79:25)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_66.sv", 229, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_66.sv:231: Assertion failed in %NTestDriver.testHarness.chiptop0.system.chipyard_prcictrl_domain.reset_setter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_66.sv", 231, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__980(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__980\n"); );
    // Body
    if (VL_UNLIKELY(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_valid) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                        & (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_opcode)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:235: Assertion failed in %NTestDriver.testHarness.chiptop0.system.chipyard_prcictrl_domain.reset_setter.monitor: Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at generators/chipyard/src/main/scala/clocking/HasChipyardPRCI.scala:79:25)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_66.sv", 235, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_66.sv:237: Assertion failed in %NTestDriver.testHarness.chiptop0.system.chipyard_prcictrl_domain.reset_setter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_66.sv", 237, "");
        }
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:239: Assertion failed in %NTestDriver.testHarness.chiptop0.system.chipyard_prcictrl_domain.reset_setter.monitor: Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at generators/chipyard/src/main/scala/clocking/HasChipyardPRCI.scala:79:25)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_66.sv", 239, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_66.sv:241: Assertion failed in %NTestDriver.testHarness.chiptop0.system.chipyard_prcictrl_domain.reset_setter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_66.sv", 241, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_opcode)))) 
                     & (0x200fU < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_source))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:245: Assertion failed in %NTestDriver.testHarness.chiptop0.system.chipyard_prcictrl_domain.reset_setter.monitor: Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at generators/chipyard/src/main/scala/clocking/HasChipyardPRCI.scala:79:25)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_66.sv", 245, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_66.sv:247: Assertion failed in %NTestDriver.testHarness.chiptop0.system.chipyard_prcictrl_domain.reset_setter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_66.sv", 247, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__981(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__981\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_opcode)))) 
                     & (~ (IData)((3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:251: Assertion failed in %NTestDriver.testHarness.chiptop0.system.chipyard_prcictrl_domain.reset_setter.monitor: Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at generators/chipyard/src/main/scala/clocking/HasChipyardPRCI.scala:79:25)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_66.sv", 251, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_66.sv:253: Assertion failed in %NTestDriver.testHarness.chiptop0.system.chipyard_prcictrl_domain.reset_setter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_66.sv", 253, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_opcode)))) 
                     & (0U != (7U & ((~ ((IData)(7U) 
                                         << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size))) 
                                     & (IData)(vlSelf->__VdfgTmp_h1a485cba__0))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:257: Assertion failed in %NTestDriver.testHarness.chiptop0.system.chipyard_prcictrl_domain.reset_setter.monitor: Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at generators/chipyard/src/main/scala/clocking/HasChipyardPRCI.scala:79:25)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_66.sv", 257, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_66.sv:259: Assertion failed in %NTestDriver.testHarness.chiptop0.system.chipyard_prcictrl_domain.reset_setter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_66.sv", 259, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__982(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__982\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_opcode)))) 
                     & (2U < (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                     ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter_1__DOT__repeater__DOT__saved_param)
                                     : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                         << 0x1dU) 
                                        | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                           >> 3U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:263: Assertion failed in %NTestDriver.testHarness.chiptop0.system.chipyard_prcictrl_domain.reset_setter.monitor: Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at generators/chipyard/src/main/scala/clocking/HasChipyardPRCI.scala:79:25)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_66.sv", 263, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_66.sv:265: Assertion failed in %NTestDriver.testHarness.chiptop0.system.chipyard_prcictrl_domain.reset_setter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_66.sv", 265, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_opcode)))) 
                     & (~ (IData)((0U != (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter_1__DOT__repeater__DOT__saved_param)
                                                 : 
                                                ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                  << 0x1dU) 
                                                 | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 3U)))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:269: Assertion failed in %NTestDriver.testHarness.chiptop0.system.chipyard_prcictrl_domain.reset_setter.monitor: Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at generators/chipyard/src/main/scala/clocking/HasChipyardPRCI.scala:79:25)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_66.sv", 269, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_66.sv:271: Assertion failed in %NTestDriver.testHarness.chiptop0.system.chipyard_prcictrl_domain.reset_setter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_66.sv", 271, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__983(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__983\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_opcode)))) 
                     & (0xffU != ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                   ? 0xffU : (0xffU 
                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                                 >> 8U))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:275: Assertion failed in %NTestDriver.testHarness.chiptop0.system.chipyard_prcictrl_domain.reset_setter.monitor: Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at generators/chipyard/src/main/scala/clocking/HasChipyardPRCI.scala:79:25)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_66.sv", 275, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_66.sv:277: Assertion failed in %NTestDriver.testHarness.chiptop0.system.chipyard_prcictrl_domain.reset_setter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_66.sv", 277, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_opcode)))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter_1__DOT__repeater__DOT__full)
                         ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter_1__DOT__repeater__DOT__saved_corrupt)
                         : (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[3U] 
                            >> 0x10U))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:281: Assertion failed in %NTestDriver.testHarness.chiptop0.system.chipyard_prcictrl_domain.reset_setter.monitor: Assertion failed: 'A' channel AcquirePerm is corrupt (connected at generators/chipyard/src/main/scala/clocking/HasChipyardPRCI.scala:79:25)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_66.sv", 281, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_66.sv:283: Assertion failed in %NTestDriver.testHarness.chiptop0.system.chipyard_prcictrl_domain.reset_setter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_66.sv", 283, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__984(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__984\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_opcode)))) 
                     & (0x2010U <= (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_source))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:287: Assertion failed in %NTestDriver.testHarness.chiptop0.system.chipyard_prcictrl_domain.reset_setter.monitor: Assertion failed: 'A' channel carries Get type which master claims it can't emit (connected at generators/chipyard/src/main/scala/clocking/HasChipyardPRCI.scala:79:25)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_66.sv", 287, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_66.sv:289: Assertion failed in %NTestDriver.testHarness.chiptop0.system.chipyard_prcictrl_domain.reset_setter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_66.sv", 289, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_opcode)))) 
                     & (0x110U != (0x1ffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter_1__DOT___repeater_io_deq_bits_address 
                                             >> 0xcU)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:293: Assertion failed in %NTestDriver.testHarness.chiptop0.system.chipyard_prcictrl_domain.reset_setter.monitor: Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at generators/chipyard/src/main/scala/clocking/HasChipyardPRCI.scala:79:25)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_66.sv", 293, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_66.sv:295: Assertion failed in %NTestDriver.testHarness.chiptop0.system.chipyard_prcictrl_domain.reset_setter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_66.sv", 295, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__985(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__985\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_opcode)))) 
                     & (0x200fU < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_source))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:299: Assertion failed in %NTestDriver.testHarness.chiptop0.system.chipyard_prcictrl_domain.reset_setter.monitor: Assertion failed: 'A' channel Get carries invalid source ID (connected at generators/chipyard/src/main/scala/clocking/HasChipyardPRCI.scala:79:25)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_66.sv", 299, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_66.sv:301: Assertion failed in %NTestDriver.testHarness.chiptop0.system.chipyard_prcictrl_domain.reset_setter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_66.sv", 301, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_opcode)))) 
                     & (0U != (7U & ((~ ((IData)(7U) 
                                         << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size))) 
                                     & (IData)(vlSelf->__VdfgTmp_h1a485cba__0))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:305: Assertion failed in %NTestDriver.testHarness.chiptop0.system.chipyard_prcictrl_domain.reset_setter.monitor: Assertion failed: 'A' channel Get address not aligned to size (connected at generators/chipyard/src/main/scala/clocking/HasChipyardPRCI.scala:79:25)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_66.sv", 305, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_66.sv:307: Assertion failed in %NTestDriver.testHarness.chiptop0.system.chipyard_prcictrl_domain.reset_setter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_66.sv", 307, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__986(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__986\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_opcode)))) 
                     & (0U != (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                      ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter_1__DOT__repeater__DOT__saved_param)
                                      : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                          << 0x1dU) 
                                         | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                            >> 3U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:311: Assertion failed in %NTestDriver.testHarness.chiptop0.system.chipyard_prcictrl_domain.reset_setter.monitor: Assertion failed: 'A' channel Get carries invalid param (connected at generators/chipyard/src/main/scala/clocking/HasChipyardPRCI.scala:79:25)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_66.sv", 311, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_66.sv:313: Assertion failed in %NTestDriver.testHarness.chiptop0.system.chipyard_prcictrl_domain.reset_setter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_66.sv", 313, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_opcode)))) 
                     & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter_1__DOT__repeater__DOT__full)
                          ? 0xffU : (0xffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                              >> 8U))) 
                        != ((0x80U & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__reset_setter__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                         << 7U) | (0xffffff80U 
                                                   & (((2U 
                                                        == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size)) 
                                                       << 7U) 
                                                      & ((IData)(vlSelf->__VdfgTmp_h1a485cba__0) 
                                                         << 5U)))) 
                                       | (((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size)) 
                                           & (IData)(
                                                     (6U 
                                                      == 
                                                      (6U 
                                                       & (IData)(vlSelf->__VdfgTmp_h1a485cba__0))))) 
                                          << 7U)) | 
                                      ((IData)((7U 
                                                == 
                                                (7U 
                                                 & (IData)(vlSelf->__VdfgTmp_h1a485cba__0)))) 
                                       << 7U))) | (
                                                   (0x40U 
                                                    & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__reset_setter__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                          << 6U) 
                                                         | (0xffffffc0U 
                                                            & (((2U 
                                                                 == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size)) 
                                                                << 6U) 
                                                               & ((IData)(vlSelf->__VdfgTmp_h1a485cba__0) 
                                                                  << 4U)))) 
                                                        | (((1U 
                                                             == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size)) 
                                                            & (IData)(
                                                                      (6U 
                                                                       == 
                                                                       (6U 
                                                                        & (IData)(vlSelf->__VdfgTmp_h1a485cba__0))))) 
                                                           << 6U)) 
                                                       | ((IData)(
                                                                  (6U 
                                                                   == 
                                                                   (7U 
                                                                    & (IData)(vlSelf->__VdfgTmp_h1a485cba__0)))) 
                                                          << 6U))) 
                                                   | ((0x20U 
                                                       & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__reset_setter__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                             << 5U) 
                                                            | (0xffffffe0U 
                                                               & (((2U 
                                                                    == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size)) 
                                                                   << 5U) 
                                                                  & ((IData)(vlSelf->__VdfgTmp_h1a485cba__0) 
                                                                     << 3U)))) 
                                                           | (((1U 
                                                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size)) 
                                                               & (IData)(
                                                                         (4U 
                                                                          == 
                                                                          (6U 
                                                                           & (IData)(vlSelf->__VdfgTmp_h1a485cba__0))))) 
                                                              << 5U)) 
                                                          | ((IData)(
                                                                     (5U 
                                                                      == 
                                                                      (7U 
                                                                       & (IData)(vlSelf->__VdfgTmp_h1a485cba__0)))) 
                                                             << 5U))) 
                                                      | ((0x10U 
                                                          & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__reset_setter__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                                << 4U) 
                                                               | (0xfffffff0U 
                                                                  & (((2U 
                                                                       == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size)) 
                                                                      << 4U) 
                                                                     & ((IData)(vlSelf->__VdfgTmp_h1a485cba__0) 
                                                                        << 2U)))) 
                                                              | (((1U 
                                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size)) 
                                                                  & (IData)(
                                                                            (4U 
                                                                             == 
                                                                             (6U 
                                                                              & (IData)(vlSelf->__VdfgTmp_h1a485cba__0))))) 
                                                                 << 4U)) 
                                                             | ((IData)(
                                                                        (4U 
                                                                         == 
                                                                         (7U 
                                                                          & (IData)(vlSelf->__VdfgTmp_h1a485cba__0)))) 
                                                                << 4U))) 
                                                         | ((8U 
                                                             & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__reset_setter__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                                   | ((~ 
                                                                       ((IData)(vlSelf->__VdfgTmp_h1a485cba__0) 
                                                                        >> 2U)) 
                                                                      & (2U 
                                                                         == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size)))) 
                                                                  | ((1U 
                                                                      == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size)) 
                                                                     & (IData)(
                                                                               (2U 
                                                                                == 
                                                                                (6U 
                                                                                & (IData)(vlSelf->__VdfgTmp_h1a485cba__0)))))) 
                                                                 | (IData)(
                                                                           (3U 
                                                                            == 
                                                                            (7U 
                                                                             & (IData)(vlSelf->__VdfgTmp_h1a485cba__0))))) 
                                                                << 3U)) 
                                                            | ((4U 
                                                                & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__reset_setter__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                                      | ((~ 
                                                                          ((IData)(vlSelf->__VdfgTmp_h1a485cba__0) 
                                                                           >> 2U)) 
                                                                         & (2U 
                                                                            == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size)))) 
                                                                     | ((1U 
                                                                         == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size)) 
                                                                        & (IData)(
                                                                                (2U 
                                                                                == 
                                                                                (6U 
                                                                                & (IData)(vlSelf->__VdfgTmp_h1a485cba__0)))))) 
                                                                    | (IData)(
                                                                              (2U 
                                                                               == 
                                                                               (7U 
                                                                                & (IData)(vlSelf->__VdfgTmp_h1a485cba__0))))) 
                                                                   << 2U)) 
                                                               | ((2U 
                                                                   & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__reset_setter__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                                         | ((~ 
                                                                             ((IData)(vlSelf->__VdfgTmp_h1a485cba__0) 
                                                                              >> 2U)) 
                                                                            & (2U 
                                                                               == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size)))) 
                                                                        | ((1U 
                                                                            == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size)) 
                                                                           & (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (6U 
                                                                                & (IData)(vlSelf->__VdfgTmp_h1a485cba__0)))))) 
                                                                       | (IData)(
                                                                                (1U 
                                                                                == 
                                                                                (7U 
                                                                                & (IData)(vlSelf->__VdfgTmp_h1a485cba__0))))) 
                                                                      << 1U)) 
                                                                  | (1U 
                                                                     & ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__reset_setter__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                                          | ((~ 
                                                                              ((IData)(vlSelf->__VdfgTmp_h1a485cba__0) 
                                                                               >> 2U)) 
                                                                             & (2U 
                                                                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size)))) 
                                                                         | ((1U 
                                                                             == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size)) 
                                                                            & (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (6U 
                                                                                & (IData)(vlSelf->__VdfgTmp_h1a485cba__0)))))) 
                                                                        | (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (7U 
                                                                                & (IData)(vlSelf->__VdfgTmp_h1a485cba__0))))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:317: Assertion failed in %NTestDriver.testHarness.chiptop0.system.chipyard_prcictrl_domain.reset_setter.monitor: Assertion failed: 'A' channel Get contains invalid mask (connected at generators/chipyard/src/main/scala/clocking/HasChipyardPRCI.scala:79:25)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_66.sv", 317, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_66.sv:319: Assertion failed in %NTestDriver.testHarness.chiptop0.system.chipyard_prcictrl_domain.reset_setter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_66.sv", 319, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__987(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__987\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_opcode)))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter_1__DOT__repeater__DOT__full)
                         ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter_1__DOT__repeater__DOT__saved_corrupt)
                         : (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[3U] 
                            >> 0x10U))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:323: Assertion failed in %NTestDriver.testHarness.chiptop0.system.chipyard_prcictrl_domain.reset_setter.monitor: Assertion failed: 'A' channel Get is corrupt (connected at generators/chipyard/src/main/scala/clocking/HasChipyardPRCI.scala:79:25)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_66.sv", 323, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_66.sv:325: Assertion failed in %NTestDriver.testHarness.chiptop0.system.chipyard_prcictrl_domain.reset_setter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_66.sv", 325, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_opcode)))) 
                     & (~ (IData)(((0x110000U == (0x1ff000U 
                                                  & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter_1__DOT___repeater_io_deq_bits_address)) 
                                   & (0x2010U > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_source)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:329: Assertion failed in %NTestDriver.testHarness.chiptop0.system.chipyard_prcictrl_domain.reset_setter.monitor: Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at generators/chipyard/src/main/scala/clocking/HasChipyardPRCI.scala:79:25)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_66.sv", 329, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_66.sv:331: Assertion failed in %NTestDriver.testHarness.chiptop0.system.chipyard_prcictrl_domain.reset_setter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_66.sv", 331, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__988(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__988\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_opcode)))) 
                     & (0x200fU < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_source))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:335: Assertion failed in %NTestDriver.testHarness.chiptop0.system.chipyard_prcictrl_domain.reset_setter.monitor: Assertion failed: 'A' channel PutFull carries invalid source ID (connected at generators/chipyard/src/main/scala/clocking/HasChipyardPRCI.scala:79:25)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_66.sv", 335, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_66.sv:337: Assertion failed in %NTestDriver.testHarness.chiptop0.system.chipyard_prcictrl_domain.reset_setter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_66.sv", 337, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_opcode)))) 
                     & (0U != (7U & ((~ ((IData)(7U) 
                                         << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size))) 
                                     & (IData)(vlSelf->__VdfgTmp_h1a485cba__0))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:341: Assertion failed in %NTestDriver.testHarness.chiptop0.system.chipyard_prcictrl_domain.reset_setter.monitor: Assertion failed: 'A' channel PutFull address not aligned to size (connected at generators/chipyard/src/main/scala/clocking/HasChipyardPRCI.scala:79:25)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_66.sv", 341, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_66.sv:343: Assertion failed in %NTestDriver.testHarness.chiptop0.system.chipyard_prcictrl_domain.reset_setter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_66.sv", 343, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__989(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__989\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_opcode)))) 
                     & (0U != (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                      ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter_1__DOT__repeater__DOT__saved_param)
                                      : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                          << 0x1dU) 
                                         | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                            >> 3U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:347: Assertion failed in %NTestDriver.testHarness.chiptop0.system.chipyard_prcictrl_domain.reset_setter.monitor: Assertion failed: 'A' channel PutFull carries invalid param (connected at generators/chipyard/src/main/scala/clocking/HasChipyardPRCI.scala:79:25)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_66.sv", 347, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_66.sv:349: Assertion failed in %NTestDriver.testHarness.chiptop0.system.chipyard_prcictrl_domain.reset_setter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_66.sv", 349, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_opcode)))) 
                     & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter_1__DOT__repeater__DOT__full)
                          ? 0xffU : (0xffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                              >> 8U))) 
                        != ((0x80U & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__reset_setter__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                         << 7U) | (0xffffff80U 
                                                   & (((2U 
                                                        == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size)) 
                                                       << 7U) 
                                                      & ((IData)(vlSelf->__VdfgTmp_h1a485cba__0) 
                                                         << 5U)))) 
                                       | (((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size)) 
                                           & (IData)(
                                                     (6U 
                                                      == 
                                                      (6U 
                                                       & (IData)(vlSelf->__VdfgTmp_h1a485cba__0))))) 
                                          << 7U)) | 
                                      ((IData)((7U 
                                                == 
                                                (7U 
                                                 & (IData)(vlSelf->__VdfgTmp_h1a485cba__0)))) 
                                       << 7U))) | (
                                                   (0x40U 
                                                    & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__reset_setter__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                          << 6U) 
                                                         | (0xffffffc0U 
                                                            & (((2U 
                                                                 == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size)) 
                                                                << 6U) 
                                                               & ((IData)(vlSelf->__VdfgTmp_h1a485cba__0) 
                                                                  << 4U)))) 
                                                        | (((1U 
                                                             == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size)) 
                                                            & (IData)(
                                                                      (6U 
                                                                       == 
                                                                       (6U 
                                                                        & (IData)(vlSelf->__VdfgTmp_h1a485cba__0))))) 
                                                           << 6U)) 
                                                       | ((IData)(
                                                                  (6U 
                                                                   == 
                                                                   (7U 
                                                                    & (IData)(vlSelf->__VdfgTmp_h1a485cba__0)))) 
                                                          << 6U))) 
                                                   | ((0x20U 
                                                       & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__reset_setter__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                             << 5U) 
                                                            | (0xffffffe0U 
                                                               & (((2U 
                                                                    == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size)) 
                                                                   << 5U) 
                                                                  & ((IData)(vlSelf->__VdfgTmp_h1a485cba__0) 
                                                                     << 3U)))) 
                                                           | (((1U 
                                                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size)) 
                                                               & (IData)(
                                                                         (4U 
                                                                          == 
                                                                          (6U 
                                                                           & (IData)(vlSelf->__VdfgTmp_h1a485cba__0))))) 
                                                              << 5U)) 
                                                          | ((IData)(
                                                                     (5U 
                                                                      == 
                                                                      (7U 
                                                                       & (IData)(vlSelf->__VdfgTmp_h1a485cba__0)))) 
                                                             << 5U))) 
                                                      | ((0x10U 
                                                          & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__reset_setter__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                                << 4U) 
                                                               | (0xfffffff0U 
                                                                  & (((2U 
                                                                       == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size)) 
                                                                      << 4U) 
                                                                     & ((IData)(vlSelf->__VdfgTmp_h1a485cba__0) 
                                                                        << 2U)))) 
                                                              | (((1U 
                                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size)) 
                                                                  & (IData)(
                                                                            (4U 
                                                                             == 
                                                                             (6U 
                                                                              & (IData)(vlSelf->__VdfgTmp_h1a485cba__0))))) 
                                                                 << 4U)) 
                                                             | ((IData)(
                                                                        (4U 
                                                                         == 
                                                                         (7U 
                                                                          & (IData)(vlSelf->__VdfgTmp_h1a485cba__0)))) 
                                                                << 4U))) 
                                                         | ((8U 
                                                             & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__reset_setter__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                                   | ((~ 
                                                                       ((IData)(vlSelf->__VdfgTmp_h1a485cba__0) 
                                                                        >> 2U)) 
                                                                      & (2U 
                                                                         == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size)))) 
                                                                  | ((1U 
                                                                      == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size)) 
                                                                     & (IData)(
                                                                               (2U 
                                                                                == 
                                                                                (6U 
                                                                                & (IData)(vlSelf->__VdfgTmp_h1a485cba__0)))))) 
                                                                 | (IData)(
                                                                           (3U 
                                                                            == 
                                                                            (7U 
                                                                             & (IData)(vlSelf->__VdfgTmp_h1a485cba__0))))) 
                                                                << 3U)) 
                                                            | ((4U 
                                                                & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__reset_setter__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                                      | ((~ 
                                                                          ((IData)(vlSelf->__VdfgTmp_h1a485cba__0) 
                                                                           >> 2U)) 
                                                                         & (2U 
                                                                            == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size)))) 
                                                                     | ((1U 
                                                                         == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size)) 
                                                                        & (IData)(
                                                                                (2U 
                                                                                == 
                                                                                (6U 
                                                                                & (IData)(vlSelf->__VdfgTmp_h1a485cba__0)))))) 
                                                                    | (IData)(
                                                                              (2U 
                                                                               == 
                                                                               (7U 
                                                                                & (IData)(vlSelf->__VdfgTmp_h1a485cba__0))))) 
                                                                   << 2U)) 
                                                               | ((2U 
                                                                   & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__reset_setter__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                                         | ((~ 
                                                                             ((IData)(vlSelf->__VdfgTmp_h1a485cba__0) 
                                                                              >> 2U)) 
                                                                            & (2U 
                                                                               == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size)))) 
                                                                        | ((1U 
                                                                            == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size)) 
                                                                           & (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (6U 
                                                                                & (IData)(vlSelf->__VdfgTmp_h1a485cba__0)))))) 
                                                                       | (IData)(
                                                                                (1U 
                                                                                == 
                                                                                (7U 
                                                                                & (IData)(vlSelf->__VdfgTmp_h1a485cba__0))))) 
                                                                      << 1U)) 
                                                                  | (1U 
                                                                     & ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__reset_setter__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                                          | ((~ 
                                                                              ((IData)(vlSelf->__VdfgTmp_h1a485cba__0) 
                                                                               >> 2U)) 
                                                                             & (2U 
                                                                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size)))) 
                                                                         | ((1U 
                                                                             == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size)) 
                                                                            & (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (6U 
                                                                                & (IData)(vlSelf->__VdfgTmp_h1a485cba__0)))))) 
                                                                        | (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (7U 
                                                                                & (IData)(vlSelf->__VdfgTmp_h1a485cba__0))))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:353: Assertion failed in %NTestDriver.testHarness.chiptop0.system.chipyard_prcictrl_domain.reset_setter.monitor: Assertion failed: 'A' channel PutFull contains invalid mask (connected at generators/chipyard/src/main/scala/clocking/HasChipyardPRCI.scala:79:25)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_66.sv", 353, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_66.sv:355: Assertion failed in %NTestDriver.testHarness.chiptop0.system.chipyard_prcictrl_domain.reset_setter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_66.sv", 355, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__990(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__990\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_opcode)))) 
                     & (~ (IData)(((0x110000U == (0x1ff000U 
                                                  & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter_1__DOT___repeater_io_deq_bits_address)) 
                                   & (0x2010U > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_source)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:359: Assertion failed in %NTestDriver.testHarness.chiptop0.system.chipyard_prcictrl_domain.reset_setter.monitor: Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at generators/chipyard/src/main/scala/clocking/HasChipyardPRCI.scala:79:25)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_66.sv", 359, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_66.sv:361: Assertion failed in %NTestDriver.testHarness.chiptop0.system.chipyard_prcictrl_domain.reset_setter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_66.sv", 361, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_opcode)))) 
                     & (0x200fU < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_source))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:365: Assertion failed in %NTestDriver.testHarness.chiptop0.system.chipyard_prcictrl_domain.reset_setter.monitor: Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at generators/chipyard/src/main/scala/clocking/HasChipyardPRCI.scala:79:25)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_66.sv", 365, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_66.sv:367: Assertion failed in %NTestDriver.testHarness.chiptop0.system.chipyard_prcictrl_domain.reset_setter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_66.sv", 367, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__991(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__991\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_opcode)))) 
                     & (0U != (7U & ((~ ((IData)(7U) 
                                         << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size))) 
                                     & (IData)(vlSelf->__VdfgTmp_h1a485cba__0))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:371: Assertion failed in %NTestDriver.testHarness.chiptop0.system.chipyard_prcictrl_domain.reset_setter.monitor: Assertion failed: 'A' channel PutPartial address not aligned to size (connected at generators/chipyard/src/main/scala/clocking/HasChipyardPRCI.scala:79:25)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_66.sv", 371, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_66.sv:373: Assertion failed in %NTestDriver.testHarness.chiptop0.system.chipyard_prcictrl_domain.reset_setter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_66.sv", 373, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_opcode)))) 
                     & (0U != (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                      ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter_1__DOT__repeater__DOT__saved_param)
                                      : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                          << 0x1dU) 
                                         | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                            >> 3U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:377: Assertion failed in %NTestDriver.testHarness.chiptop0.system.chipyard_prcictrl_domain.reset_setter.monitor: Assertion failed: 'A' channel PutPartial carries invalid param (connected at generators/chipyard/src/main/scala/clocking/HasChipyardPRCI.scala:79:25)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_66.sv", 377, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_66.sv:379: Assertion failed in %NTestDriver.testHarness.chiptop0.system.chipyard_prcictrl_domain.reset_setter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_66.sv", 379, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__992(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__992\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_opcode)))) 
                     & (0U != (0xffU & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                          ? 0xffU : 
                                         ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                           << 0x18U) 
                                          | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                             >> 8U))) 
                                        & (~ ((0x80U 
                                               & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__reset_setter__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                     << 7U) 
                                                    | (0xffffff80U 
                                                       & (((2U 
                                                            == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size)) 
                                                           << 7U) 
                                                          & ((IData)(vlSelf->__VdfgTmp_h1a485cba__0) 
                                                             << 5U)))) 
                                                   | (((1U 
                                                        == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size)) 
                                                       & (IData)(
                                                                 (6U 
                                                                  == 
                                                                  (6U 
                                                                   & (IData)(vlSelf->__VdfgTmp_h1a485cba__0))))) 
                                                      << 7U)) 
                                                  | ((IData)(
                                                             (7U 
                                                              == 
                                                              (7U 
                                                               & (IData)(vlSelf->__VdfgTmp_h1a485cba__0)))) 
                                                     << 7U))) 
                                              | ((0x40U 
                                                  & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__reset_setter__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                        << 6U) 
                                                       | (0xffffffc0U 
                                                          & (((2U 
                                                               == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size)) 
                                                              << 6U) 
                                                             & ((IData)(vlSelf->__VdfgTmp_h1a485cba__0) 
                                                                << 4U)))) 
                                                      | (((1U 
                                                           == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size)) 
                                                          & (IData)(
                                                                    (6U 
                                                                     == 
                                                                     (6U 
                                                                      & (IData)(vlSelf->__VdfgTmp_h1a485cba__0))))) 
                                                         << 6U)) 
                                                     | ((IData)(
                                                                (6U 
                                                                 == 
                                                                 (7U 
                                                                  & (IData)(vlSelf->__VdfgTmp_h1a485cba__0)))) 
                                                        << 6U))) 
                                                 | ((0x20U 
                                                     & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__reset_setter__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                           << 5U) 
                                                          | (0xffffffe0U 
                                                             & (((2U 
                                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size)) 
                                                                 << 5U) 
                                                                & ((IData)(vlSelf->__VdfgTmp_h1a485cba__0) 
                                                                   << 3U)))) 
                                                         | (((1U 
                                                              == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size)) 
                                                             & (IData)(
                                                                       (4U 
                                                                        == 
                                                                        (6U 
                                                                         & (IData)(vlSelf->__VdfgTmp_h1a485cba__0))))) 
                                                            << 5U)) 
                                                        | ((IData)(
                                                                   (5U 
                                                                    == 
                                                                    (7U 
                                                                     & (IData)(vlSelf->__VdfgTmp_h1a485cba__0)))) 
                                                           << 5U))) 
                                                    | ((0x10U 
                                                        & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__reset_setter__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                              << 4U) 
                                                             | (0xfffffff0U 
                                                                & (((2U 
                                                                     == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size)) 
                                                                    << 4U) 
                                                                   & ((IData)(vlSelf->__VdfgTmp_h1a485cba__0) 
                                                                      << 2U)))) 
                                                            | (((1U 
                                                                 == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size)) 
                                                                & (IData)(
                                                                          (4U 
                                                                           == 
                                                                           (6U 
                                                                            & (IData)(vlSelf->__VdfgTmp_h1a485cba__0))))) 
                                                               << 4U)) 
                                                           | ((IData)(
                                                                      (4U 
                                                                       == 
                                                                       (7U 
                                                                        & (IData)(vlSelf->__VdfgTmp_h1a485cba__0)))) 
                                                              << 4U))) 
                                                       | ((8U 
                                                           & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__reset_setter__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                                 | ((~ 
                                                                     ((IData)(vlSelf->__VdfgTmp_h1a485cba__0) 
                                                                      >> 2U)) 
                                                                    & (2U 
                                                                       == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size)))) 
                                                                | ((1U 
                                                                    == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size)) 
                                                                   & (IData)(
                                                                             (2U 
                                                                              == 
                                                                              (6U 
                                                                               & (IData)(vlSelf->__VdfgTmp_h1a485cba__0)))))) 
                                                               | (IData)(
                                                                         (3U 
                                                                          == 
                                                                          (7U 
                                                                           & (IData)(vlSelf->__VdfgTmp_h1a485cba__0))))) 
                                                              << 3U)) 
                                                          | ((4U 
                                                              & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__reset_setter__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                                    | ((~ 
                                                                        ((IData)(vlSelf->__VdfgTmp_h1a485cba__0) 
                                                                         >> 2U)) 
                                                                       & (2U 
                                                                          == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size)))) 
                                                                   | ((1U 
                                                                       == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size)) 
                                                                      & (IData)(
                                                                                (2U 
                                                                                == 
                                                                                (6U 
                                                                                & (IData)(vlSelf->__VdfgTmp_h1a485cba__0)))))) 
                                                                  | (IData)(
                                                                            (2U 
                                                                             == 
                                                                             (7U 
                                                                              & (IData)(vlSelf->__VdfgTmp_h1a485cba__0))))) 
                                                                 << 2U)) 
                                                             | ((2U 
                                                                 & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__reset_setter__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                                       | ((~ 
                                                                           ((IData)(vlSelf->__VdfgTmp_h1a485cba__0) 
                                                                            >> 2U)) 
                                                                          & (2U 
                                                                             == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size)))) 
                                                                      | ((1U 
                                                                          == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size)) 
                                                                         & (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (6U 
                                                                                & (IData)(vlSelf->__VdfgTmp_h1a485cba__0)))))) 
                                                                     | (IData)(
                                                                               (1U 
                                                                                == 
                                                                                (7U 
                                                                                & (IData)(vlSelf->__VdfgTmp_h1a485cba__0))))) 
                                                                    << 1U)) 
                                                                | (1U 
                                                                   & ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__reset_setter__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                                        | ((~ 
                                                                            ((IData)(vlSelf->__VdfgTmp_h1a485cba__0) 
                                                                             >> 2U)) 
                                                                           & (2U 
                                                                              == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size)))) 
                                                                       | ((1U 
                                                                           == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size)) 
                                                                          & (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (6U 
                                                                                & (IData)(vlSelf->__VdfgTmp_h1a485cba__0)))))) 
                                                                      | (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (7U 
                                                                                & (IData)(vlSelf->__VdfgTmp_h1a485cba__0)))))))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:383: Assertion failed in %NTestDriver.testHarness.chiptop0.system.chipyard_prcictrl_domain.reset_setter.monitor: Assertion failed: 'A' channel PutPartial contains invalid mask (connected at generators/chipyard/src/main/scala/clocking/HasChipyardPRCI.scala:79:25)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_66.sv", 383, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_66.sv:385: Assertion failed in %NTestDriver.testHarness.chiptop0.system.chipyard_prcictrl_domain.reset_setter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_66.sv", 385, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__993(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__993\n"); );
    // Body
    if (VL_UNLIKELY(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_valid) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                        & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_opcode)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:389: Assertion failed in %NTestDriver.testHarness.chiptop0.system.chipyard_prcictrl_domain.reset_setter.monitor: Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at generators/chipyard/src/main/scala/clocking/HasChipyardPRCI.scala:79:25)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_66.sv", 389, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_66.sv:391: Assertion failed in %NTestDriver.testHarness.chiptop0.system.chipyard_prcictrl_domain.reset_setter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_66.sv", 391, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_opcode)))) 
                     & (0x200fU < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_source))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:395: Assertion failed in %NTestDriver.testHarness.chiptop0.system.chipyard_prcictrl_domain.reset_setter.monitor: Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at generators/chipyard/src/main/scala/clocking/HasChipyardPRCI.scala:79:25)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_66.sv", 395, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_66.sv:397: Assertion failed in %NTestDriver.testHarness.chiptop0.system.chipyard_prcictrl_domain.reset_setter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_66.sv", 397, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__994(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__994\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_opcode)))) 
                     & (0U != (7U & ((~ ((IData)(7U) 
                                         << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size))) 
                                     & (IData)(vlSelf->__VdfgTmp_h1a485cba__0))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:401: Assertion failed in %NTestDriver.testHarness.chiptop0.system.chipyard_prcictrl_domain.reset_setter.monitor: Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at generators/chipyard/src/main/scala/clocking/HasChipyardPRCI.scala:79:25)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_66.sv", 401, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_66.sv:403: Assertion failed in %NTestDriver.testHarness.chiptop0.system.chipyard_prcictrl_domain.reset_setter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_66.sv", 403, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_opcode)))) 
                     & (4U < (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                     ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter_1__DOT__repeater__DOT__saved_param)
                                     : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                         << 0x1dU) 
                                        | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                           >> 3U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:407: Assertion failed in %NTestDriver.testHarness.chiptop0.system.chipyard_prcictrl_domain.reset_setter.monitor: Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at generators/chipyard/src/main/scala/clocking/HasChipyardPRCI.scala:79:25)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_66.sv", 407, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_66.sv:409: Assertion failed in %NTestDriver.testHarness.chiptop0.system.chipyard_prcictrl_domain.reset_setter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_66.sv", 409, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__995(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__995\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_opcode)))) 
                     & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter_1__DOT__repeater__DOT__full)
                          ? 0xffU : (0xffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                              >> 8U))) 
                        != ((0x80U & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__reset_setter__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                         << 7U) | (0xffffff80U 
                                                   & (((2U 
                                                        == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size)) 
                                                       << 7U) 
                                                      & ((IData)(vlSelf->__VdfgTmp_h1a485cba__0) 
                                                         << 5U)))) 
                                       | (((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size)) 
                                           & (IData)(
                                                     (6U 
                                                      == 
                                                      (6U 
                                                       & (IData)(vlSelf->__VdfgTmp_h1a485cba__0))))) 
                                          << 7U)) | 
                                      ((IData)((7U 
                                                == 
                                                (7U 
                                                 & (IData)(vlSelf->__VdfgTmp_h1a485cba__0)))) 
                                       << 7U))) | (
                                                   (0x40U 
                                                    & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__reset_setter__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                          << 6U) 
                                                         | (0xffffffc0U 
                                                            & (((2U 
                                                                 == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size)) 
                                                                << 6U) 
                                                               & ((IData)(vlSelf->__VdfgTmp_h1a485cba__0) 
                                                                  << 4U)))) 
                                                        | (((1U 
                                                             == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size)) 
                                                            & (IData)(
                                                                      (6U 
                                                                       == 
                                                                       (6U 
                                                                        & (IData)(vlSelf->__VdfgTmp_h1a485cba__0))))) 
                                                           << 6U)) 
                                                       | ((IData)(
                                                                  (6U 
                                                                   == 
                                                                   (7U 
                                                                    & (IData)(vlSelf->__VdfgTmp_h1a485cba__0)))) 
                                                          << 6U))) 
                                                   | ((0x20U 
                                                       & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__reset_setter__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                             << 5U) 
                                                            | (0xffffffe0U 
                                                               & (((2U 
                                                                    == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size)) 
                                                                   << 5U) 
                                                                  & ((IData)(vlSelf->__VdfgTmp_h1a485cba__0) 
                                                                     << 3U)))) 
                                                           | (((1U 
                                                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size)) 
                                                               & (IData)(
                                                                         (4U 
                                                                          == 
                                                                          (6U 
                                                                           & (IData)(vlSelf->__VdfgTmp_h1a485cba__0))))) 
                                                              << 5U)) 
                                                          | ((IData)(
                                                                     (5U 
                                                                      == 
                                                                      (7U 
                                                                       & (IData)(vlSelf->__VdfgTmp_h1a485cba__0)))) 
                                                             << 5U))) 
                                                      | ((0x10U 
                                                          & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__reset_setter__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                                << 4U) 
                                                               | (0xfffffff0U 
                                                                  & (((2U 
                                                                       == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size)) 
                                                                      << 4U) 
                                                                     & ((IData)(vlSelf->__VdfgTmp_h1a485cba__0) 
                                                                        << 2U)))) 
                                                              | (((1U 
                                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size)) 
                                                                  & (IData)(
                                                                            (4U 
                                                                             == 
                                                                             (6U 
                                                                              & (IData)(vlSelf->__VdfgTmp_h1a485cba__0))))) 
                                                                 << 4U)) 
                                                             | ((IData)(
                                                                        (4U 
                                                                         == 
                                                                         (7U 
                                                                          & (IData)(vlSelf->__VdfgTmp_h1a485cba__0)))) 
                                                                << 4U))) 
                                                         | ((8U 
                                                             & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__reset_setter__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                                   | ((~ 
                                                                       ((IData)(vlSelf->__VdfgTmp_h1a485cba__0) 
                                                                        >> 2U)) 
                                                                      & (2U 
                                                                         == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size)))) 
                                                                  | ((1U 
                                                                      == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size)) 
                                                                     & (IData)(
                                                                               (2U 
                                                                                == 
                                                                                (6U 
                                                                                & (IData)(vlSelf->__VdfgTmp_h1a485cba__0)))))) 
                                                                 | (IData)(
                                                                           (3U 
                                                                            == 
                                                                            (7U 
                                                                             & (IData)(vlSelf->__VdfgTmp_h1a485cba__0))))) 
                                                                << 3U)) 
                                                            | ((4U 
                                                                & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__reset_setter__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                                      | ((~ 
                                                                          ((IData)(vlSelf->__VdfgTmp_h1a485cba__0) 
                                                                           >> 2U)) 
                                                                         & (2U 
                                                                            == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size)))) 
                                                                     | ((1U 
                                                                         == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size)) 
                                                                        & (IData)(
                                                                                (2U 
                                                                                == 
                                                                                (6U 
                                                                                & (IData)(vlSelf->__VdfgTmp_h1a485cba__0)))))) 
                                                                    | (IData)(
                                                                              (2U 
                                                                               == 
                                                                               (7U 
                                                                                & (IData)(vlSelf->__VdfgTmp_h1a485cba__0))))) 
                                                                   << 2U)) 
                                                               | ((2U 
                                                                   & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__reset_setter__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                                         | ((~ 
                                                                             ((IData)(vlSelf->__VdfgTmp_h1a485cba__0) 
                                                                              >> 2U)) 
                                                                            & (2U 
                                                                               == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size)))) 
                                                                        | ((1U 
                                                                            == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size)) 
                                                                           & (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (6U 
                                                                                & (IData)(vlSelf->__VdfgTmp_h1a485cba__0)))))) 
                                                                       | (IData)(
                                                                                (1U 
                                                                                == 
                                                                                (7U 
                                                                                & (IData)(vlSelf->__VdfgTmp_h1a485cba__0))))) 
                                                                      << 1U)) 
                                                                  | (1U 
                                                                     & ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__reset_setter__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                                          | ((~ 
                                                                              ((IData)(vlSelf->__VdfgTmp_h1a485cba__0) 
                                                                               >> 2U)) 
                                                                             & (2U 
                                                                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size)))) 
                                                                         | ((1U 
                                                                             == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size)) 
                                                                            & (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (6U 
                                                                                & (IData)(vlSelf->__VdfgTmp_h1a485cba__0)))))) 
                                                                        | (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (7U 
                                                                                & (IData)(vlSelf->__VdfgTmp_h1a485cba__0))))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:413: Assertion failed in %NTestDriver.testHarness.chiptop0.system.chipyard_prcictrl_domain.reset_setter.monitor: Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at generators/chipyard/src/main/scala/clocking/HasChipyardPRCI.scala:79:25)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_66.sv", 413, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_66.sv:415: Assertion failed in %NTestDriver.testHarness.chiptop0.system.chipyard_prcictrl_domain.reset_setter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_66.sv", 415, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__996(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__996\n"); );
    // Body
    if (VL_UNLIKELY(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_valid) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                        & (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_opcode)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:419: Assertion failed in %NTestDriver.testHarness.chiptop0.system.chipyard_prcictrl_domain.reset_setter.monitor: Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at generators/chipyard/src/main/scala/clocking/HasChipyardPRCI.scala:79:25)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_66.sv", 419, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_66.sv:421: Assertion failed in %NTestDriver.testHarness.chiptop0.system.chipyard_prcictrl_domain.reset_setter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_66.sv", 421, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_opcode)))) 
                     & (0x200fU < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_source))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:425: Assertion failed in %NTestDriver.testHarness.chiptop0.system.chipyard_prcictrl_domain.reset_setter.monitor: Assertion failed: 'A' channel Logical carries invalid source ID (connected at generators/chipyard/src/main/scala/clocking/HasChipyardPRCI.scala:79:25)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_66.sv", 425, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_66.sv:427: Assertion failed in %NTestDriver.testHarness.chiptop0.system.chipyard_prcictrl_domain.reset_setter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_66.sv", 427, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__997(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__997\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_opcode)))) 
                     & (0U != (7U & ((~ ((IData)(7U) 
                                         << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size))) 
                                     & (IData)(vlSelf->__VdfgTmp_h1a485cba__0))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:431: Assertion failed in %NTestDriver.testHarness.chiptop0.system.chipyard_prcictrl_domain.reset_setter.monitor: Assertion failed: 'A' channel Logical address not aligned to size (connected at generators/chipyard/src/main/scala/clocking/HasChipyardPRCI.scala:79:25)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_66.sv", 431, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_66.sv:433: Assertion failed in %NTestDriver.testHarness.chiptop0.system.chipyard_prcictrl_domain.reset_setter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_66.sv", 433, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_valid) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                      & (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_opcode))) 
                     & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter_1__DOT__repeater__DOT__full)
                          ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter_1__DOT__repeater__DOT__saved_param)
                          : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                              << 0x1dU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                           >> 3U))) 
                        >> 2U)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:437: Assertion failed in %NTestDriver.testHarness.chiptop0.system.chipyard_prcictrl_domain.reset_setter.monitor: Assertion failed: 'A' channel Logical carries invalid opcode param (connected at generators/chipyard/src/main/scala/clocking/HasChipyardPRCI.scala:79:25)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_66.sv", 437, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_66.sv:439: Assertion failed in %NTestDriver.testHarness.chiptop0.system.chipyard_prcictrl_domain.reset_setter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_66.sv", 439, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__998(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__998\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_opcode)))) 
                     & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter_1__DOT__repeater__DOT__full)
                          ? 0xffU : (0xffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                              >> 8U))) 
                        != ((0x80U & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__reset_setter__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                         << 7U) | (0xffffff80U 
                                                   & (((2U 
                                                        == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size)) 
                                                       << 7U) 
                                                      & ((IData)(vlSelf->__VdfgTmp_h1a485cba__0) 
                                                         << 5U)))) 
                                       | (((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size)) 
                                           & (IData)(
                                                     (6U 
                                                      == 
                                                      (6U 
                                                       & (IData)(vlSelf->__VdfgTmp_h1a485cba__0))))) 
                                          << 7U)) | 
                                      ((IData)((7U 
                                                == 
                                                (7U 
                                                 & (IData)(vlSelf->__VdfgTmp_h1a485cba__0)))) 
                                       << 7U))) | (
                                                   (0x40U 
                                                    & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__reset_setter__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                          << 6U) 
                                                         | (0xffffffc0U 
                                                            & (((2U 
                                                                 == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size)) 
                                                                << 6U) 
                                                               & ((IData)(vlSelf->__VdfgTmp_h1a485cba__0) 
                                                                  << 4U)))) 
                                                        | (((1U 
                                                             == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size)) 
                                                            & (IData)(
                                                                      (6U 
                                                                       == 
                                                                       (6U 
                                                                        & (IData)(vlSelf->__VdfgTmp_h1a485cba__0))))) 
                                                           << 6U)) 
                                                       | ((IData)(
                                                                  (6U 
                                                                   == 
                                                                   (7U 
                                                                    & (IData)(vlSelf->__VdfgTmp_h1a485cba__0)))) 
                                                          << 6U))) 
                                                   | ((0x20U 
                                                       & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__reset_setter__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                             << 5U) 
                                                            | (0xffffffe0U 
                                                               & (((2U 
                                                                    == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size)) 
                                                                   << 5U) 
                                                                  & ((IData)(vlSelf->__VdfgTmp_h1a485cba__0) 
                                                                     << 3U)))) 
                                                           | (((1U 
                                                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size)) 
                                                               & (IData)(
                                                                         (4U 
                                                                          == 
                                                                          (6U 
                                                                           & (IData)(vlSelf->__VdfgTmp_h1a485cba__0))))) 
                                                              << 5U)) 
                                                          | ((IData)(
                                                                     (5U 
                                                                      == 
                                                                      (7U 
                                                                       & (IData)(vlSelf->__VdfgTmp_h1a485cba__0)))) 
                                                             << 5U))) 
                                                      | ((0x10U 
                                                          & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__reset_setter__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                                << 4U) 
                                                               | (0xfffffff0U 
                                                                  & (((2U 
                                                                       == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size)) 
                                                                      << 4U) 
                                                                     & ((IData)(vlSelf->__VdfgTmp_h1a485cba__0) 
                                                                        << 2U)))) 
                                                              | (((1U 
                                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size)) 
                                                                  & (IData)(
                                                                            (4U 
                                                                             == 
                                                                             (6U 
                                                                              & (IData)(vlSelf->__VdfgTmp_h1a485cba__0))))) 
                                                                 << 4U)) 
                                                             | ((IData)(
                                                                        (4U 
                                                                         == 
                                                                         (7U 
                                                                          & (IData)(vlSelf->__VdfgTmp_h1a485cba__0)))) 
                                                                << 4U))) 
                                                         | ((8U 
                                                             & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__reset_setter__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                                   | ((~ 
                                                                       ((IData)(vlSelf->__VdfgTmp_h1a485cba__0) 
                                                                        >> 2U)) 
                                                                      & (2U 
                                                                         == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size)))) 
                                                                  | ((1U 
                                                                      == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size)) 
                                                                     & (IData)(
                                                                               (2U 
                                                                                == 
                                                                                (6U 
                                                                                & (IData)(vlSelf->__VdfgTmp_h1a485cba__0)))))) 
                                                                 | (IData)(
                                                                           (3U 
                                                                            == 
                                                                            (7U 
                                                                             & (IData)(vlSelf->__VdfgTmp_h1a485cba__0))))) 
                                                                << 3U)) 
                                                            | ((4U 
                                                                & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__reset_setter__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                                      | ((~ 
                                                                          ((IData)(vlSelf->__VdfgTmp_h1a485cba__0) 
                                                                           >> 2U)) 
                                                                         & (2U 
                                                                            == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size)))) 
                                                                     | ((1U 
                                                                         == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size)) 
                                                                        & (IData)(
                                                                                (2U 
                                                                                == 
                                                                                (6U 
                                                                                & (IData)(vlSelf->__VdfgTmp_h1a485cba__0)))))) 
                                                                    | (IData)(
                                                                              (2U 
                                                                               == 
                                                                               (7U 
                                                                                & (IData)(vlSelf->__VdfgTmp_h1a485cba__0))))) 
                                                                   << 2U)) 
                                                               | ((2U 
                                                                   & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__reset_setter__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                                         | ((~ 
                                                                             ((IData)(vlSelf->__VdfgTmp_h1a485cba__0) 
                                                                              >> 2U)) 
                                                                            & (2U 
                                                                               == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size)))) 
                                                                        | ((1U 
                                                                            == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size)) 
                                                                           & (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (6U 
                                                                                & (IData)(vlSelf->__VdfgTmp_h1a485cba__0)))))) 
                                                                       | (IData)(
                                                                                (1U 
                                                                                == 
                                                                                (7U 
                                                                                & (IData)(vlSelf->__VdfgTmp_h1a485cba__0))))) 
                                                                      << 1U)) 
                                                                  | (1U 
                                                                     & ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__reset_setter__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                                          | ((~ 
                                                                              ((IData)(vlSelf->__VdfgTmp_h1a485cba__0) 
                                                                               >> 2U)) 
                                                                             & (2U 
                                                                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size)))) 
                                                                         | ((1U 
                                                                             == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size)) 
                                                                            & (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (6U 
                                                                                & (IData)(vlSelf->__VdfgTmp_h1a485cba__0)))))) 
                                                                        | (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (7U 
                                                                                & (IData)(vlSelf->__VdfgTmp_h1a485cba__0))))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:443: Assertion failed in %NTestDriver.testHarness.chiptop0.system.chipyard_prcictrl_domain.reset_setter.monitor: Assertion failed: 'A' channel Logical contains invalid mask (connected at generators/chipyard/src/main/scala/clocking/HasChipyardPRCI.scala:79:25)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_66.sv", 443, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_66.sv:445: Assertion failed in %NTestDriver.testHarness.chiptop0.system.chipyard_prcictrl_domain.reset_setter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_66.sv", 445, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__999(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__999\n"); );
    // Body
    if (VL_UNLIKELY(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_valid) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                        & (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_opcode)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:449: Assertion failed in %NTestDriver.testHarness.chiptop0.system.chipyard_prcictrl_domain.reset_setter.monitor: Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at generators/chipyard/src/main/scala/clocking/HasChipyardPRCI.scala:79:25)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_66.sv", 449, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_66.sv:451: Assertion failed in %NTestDriver.testHarness.chiptop0.system.chipyard_prcictrl_domain.reset_setter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_66.sv", 451, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_opcode)))) 
                     & (0x200fU < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_source))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:455: Assertion failed in %NTestDriver.testHarness.chiptop0.system.chipyard_prcictrl_domain.reset_setter.monitor: Assertion failed: 'A' channel Hint carries invalid source ID (connected at generators/chipyard/src/main/scala/clocking/HasChipyardPRCI.scala:79:25)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_66.sv", 455, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_66.sv:457: Assertion failed in %NTestDriver.testHarness.chiptop0.system.chipyard_prcictrl_domain.reset_setter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_66.sv", 457, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1000(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1000\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_opcode)))) 
                     & (0U != (7U & ((~ ((IData)(7U) 
                                         << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size))) 
                                     & (IData)(vlSelf->__VdfgTmp_h1a485cba__0))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:461: Assertion failed in %NTestDriver.testHarness.chiptop0.system.chipyard_prcictrl_domain.reset_setter.monitor: Assertion failed: 'A' channel Hint address not aligned to size (connected at generators/chipyard/src/main/scala/clocking/HasChipyardPRCI.scala:79:25)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_66.sv", 461, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_66.sv:463: Assertion failed in %NTestDriver.testHarness.chiptop0.system.chipyard_prcictrl_domain.reset_setter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_66.sv", 463, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_opcode)))) 
                     & (0U != (3U & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                       ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter_1__DOT__repeater__DOT__saved_param)
                                       : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                           << 0x1dU) 
                                          | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                             >> 3U))) 
                                     >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:467: Assertion failed in %NTestDriver.testHarness.chiptop0.system.chipyard_prcictrl_domain.reset_setter.monitor: Assertion failed: 'A' channel Hint carries invalid opcode param (connected at generators/chipyard/src/main/scala/clocking/HasChipyardPRCI.scala:79:25)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_66.sv", 467, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_66.sv:469: Assertion failed in %NTestDriver.testHarness.chiptop0.system.chipyard_prcictrl_domain.reset_setter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_66.sv", 469, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1001(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1001\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_opcode)))) 
                     & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter_1__DOT__repeater__DOT__full)
                          ? 0xffU : (0xffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                              >> 8U))) 
                        != ((0x80U & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__reset_setter__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                         << 7U) | (0xffffff80U 
                                                   & (((2U 
                                                        == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size)) 
                                                       << 7U) 
                                                      & ((IData)(vlSelf->__VdfgTmp_h1a485cba__0) 
                                                         << 5U)))) 
                                       | (((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size)) 
                                           & (IData)(
                                                     (6U 
                                                      == 
                                                      (6U 
                                                       & (IData)(vlSelf->__VdfgTmp_h1a485cba__0))))) 
                                          << 7U)) | 
                                      ((IData)((7U 
                                                == 
                                                (7U 
                                                 & (IData)(vlSelf->__VdfgTmp_h1a485cba__0)))) 
                                       << 7U))) | (
                                                   (0x40U 
                                                    & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__reset_setter__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                          << 6U) 
                                                         | (0xffffffc0U 
                                                            & (((2U 
                                                                 == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size)) 
                                                                << 6U) 
                                                               & ((IData)(vlSelf->__VdfgTmp_h1a485cba__0) 
                                                                  << 4U)))) 
                                                        | (((1U 
                                                             == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size)) 
                                                            & (IData)(
                                                                      (6U 
                                                                       == 
                                                                       (6U 
                                                                        & (IData)(vlSelf->__VdfgTmp_h1a485cba__0))))) 
                                                           << 6U)) 
                                                       | ((IData)(
                                                                  (6U 
                                                                   == 
                                                                   (7U 
                                                                    & (IData)(vlSelf->__VdfgTmp_h1a485cba__0)))) 
                                                          << 6U))) 
                                                   | ((0x20U 
                                                       & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__reset_setter__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                             << 5U) 
                                                            | (0xffffffe0U 
                                                               & (((2U 
                                                                    == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size)) 
                                                                   << 5U) 
                                                                  & ((IData)(vlSelf->__VdfgTmp_h1a485cba__0) 
                                                                     << 3U)))) 
                                                           | (((1U 
                                                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size)) 
                                                               & (IData)(
                                                                         (4U 
                                                                          == 
                                                                          (6U 
                                                                           & (IData)(vlSelf->__VdfgTmp_h1a485cba__0))))) 
                                                              << 5U)) 
                                                          | ((IData)(
                                                                     (5U 
                                                                      == 
                                                                      (7U 
                                                                       & (IData)(vlSelf->__VdfgTmp_h1a485cba__0)))) 
                                                             << 5U))) 
                                                      | ((0x10U 
                                                          & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__reset_setter__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                                << 4U) 
                                                               | (0xfffffff0U 
                                                                  & (((2U 
                                                                       == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size)) 
                                                                      << 4U) 
                                                                     & ((IData)(vlSelf->__VdfgTmp_h1a485cba__0) 
                                                                        << 2U)))) 
                                                              | (((1U 
                                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size)) 
                                                                  & (IData)(
                                                                            (4U 
                                                                             == 
                                                                             (6U 
                                                                              & (IData)(vlSelf->__VdfgTmp_h1a485cba__0))))) 
                                                                 << 4U)) 
                                                             | ((IData)(
                                                                        (4U 
                                                                         == 
                                                                         (7U 
                                                                          & (IData)(vlSelf->__VdfgTmp_h1a485cba__0)))) 
                                                                << 4U))) 
                                                         | ((8U 
                                                             & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__reset_setter__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                                   | ((~ 
                                                                       ((IData)(vlSelf->__VdfgTmp_h1a485cba__0) 
                                                                        >> 2U)) 
                                                                      & (2U 
                                                                         == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size)))) 
                                                                  | ((1U 
                                                                      == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size)) 
                                                                     & (IData)(
                                                                               (2U 
                                                                                == 
                                                                                (6U 
                                                                                & (IData)(vlSelf->__VdfgTmp_h1a485cba__0)))))) 
                                                                 | (IData)(
                                                                           (3U 
                                                                            == 
                                                                            (7U 
                                                                             & (IData)(vlSelf->__VdfgTmp_h1a485cba__0))))) 
                                                                << 3U)) 
                                                            | ((4U 
                                                                & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__reset_setter__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                                      | ((~ 
                                                                          ((IData)(vlSelf->__VdfgTmp_h1a485cba__0) 
                                                                           >> 2U)) 
                                                                         & (2U 
                                                                            == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size)))) 
                                                                     | ((1U 
                                                                         == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size)) 
                                                                        & (IData)(
                                                                                (2U 
                                                                                == 
                                                                                (6U 
                                                                                & (IData)(vlSelf->__VdfgTmp_h1a485cba__0)))))) 
                                                                    | (IData)(
                                                                              (2U 
                                                                               == 
                                                                               (7U 
                                                                                & (IData)(vlSelf->__VdfgTmp_h1a485cba__0))))) 
                                                                   << 2U)) 
                                                               | ((2U 
                                                                   & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__reset_setter__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                                         | ((~ 
                                                                             ((IData)(vlSelf->__VdfgTmp_h1a485cba__0) 
                                                                              >> 2U)) 
                                                                            & (2U 
                                                                               == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size)))) 
                                                                        | ((1U 
                                                                            == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size)) 
                                                                           & (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (6U 
                                                                                & (IData)(vlSelf->__VdfgTmp_h1a485cba__0)))))) 
                                                                       | (IData)(
                                                                                (1U 
                                                                                == 
                                                                                (7U 
                                                                                & (IData)(vlSelf->__VdfgTmp_h1a485cba__0))))) 
                                                                      << 1U)) 
                                                                  | (1U 
                                                                     & ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__reset_setter__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                                          | ((~ 
                                                                              ((IData)(vlSelf->__VdfgTmp_h1a485cba__0) 
                                                                               >> 2U)) 
                                                                             & (2U 
                                                                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size)))) 
                                                                         | ((1U 
                                                                             == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size)) 
                                                                            & (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (6U 
                                                                                & (IData)(vlSelf->__VdfgTmp_h1a485cba__0)))))) 
                                                                        | (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (7U 
                                                                                & (IData)(vlSelf->__VdfgTmp_h1a485cba__0))))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:473: Assertion failed in %NTestDriver.testHarness.chiptop0.system.chipyard_prcictrl_domain.reset_setter.monitor: Assertion failed: 'A' channel Hint contains invalid mask (connected at generators/chipyard/src/main/scala/clocking/HasChipyardPRCI.scala:79:25)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_66.sv", 473, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_66.sv:475: Assertion failed in %NTestDriver.testHarness.chiptop0.system.chipyard_prcictrl_domain.reset_setter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_66.sv", 475, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1002(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1002\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_opcode)))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter_1__DOT__repeater__DOT__full)
                         ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter_1__DOT__repeater__DOT__saved_corrupt)
                         : (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[3U] 
                            >> 0x10U))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:479: Assertion failed in %NTestDriver.testHarness.chiptop0.system.chipyard_prcictrl_domain.reset_setter.monitor: Assertion failed: 'A' channel Hint is corrupt (connected at generators/chipyard/src/main/scala/clocking/HasChipyardPRCI.scala:79:25)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_66.sv", 479, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_66.sv:481: Assertion failed in %NTestDriver.testHarness.chiptop0.system.chipyard_prcictrl_domain.reset_setter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_66.sv", 481, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_valid) 
                       & (4U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset))) 
                     & (0x200fU < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_source))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:539: Assertion failed in %NTestDriver.testHarness.chiptop0.system.chipyard_prcictrl_domain.reset_setter.monitor: Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at generators/chipyard/src/main/scala/clocking/HasChipyardPRCI.scala:79:25)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_66.sv", 539, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_66.sv:541: Assertion failed in %NTestDriver.testHarness.chiptop0.system.chipyard_prcictrl_domain.reset_setter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_66.sv", 541, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1003(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1003\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_valid) 
                       & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset))) 
                     & (0x200fU < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_source))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:545: Assertion failed in %NTestDriver.testHarness.chiptop0.system.chipyard_prcictrl_domain.reset_setter.monitor: Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at generators/chipyard/src/main/scala/clocking/HasChipyardPRCI.scala:79:25)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_66.sv", 545, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_66.sv:547: Assertion failed in %NTestDriver.testHarness.chiptop0.system.chipyard_prcictrl_domain.reset_setter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_66.sv", 547, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__reset_setter__DOT__monitor__DOT__a_first_counter))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_opcode) 
                        != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__reset_setter__DOT__monitor__DOT__opcode))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:557: Assertion failed in %NTestDriver.testHarness.chiptop0.system.chipyard_prcictrl_domain.reset_setter.monitor: Assertion failed: 'A' channel opcode changed within multibeat operation (connected at generators/chipyard/src/main/scala/clocking/HasChipyardPRCI.scala:79:25)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_66.sv", 557, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_66.sv:559: Assertion failed in %NTestDriver.testHarness.chiptop0.system.chipyard_prcictrl_domain.reset_setter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_66.sv", 559, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1004(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1004\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__reset_setter__DOT__monitor__DOT__a_first_counter))) 
                     & ((7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter_1__DOT__repeater__DOT__saved_param)
                                : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                    << 0x1dU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                 >> 3U)))) 
                        != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__reset_setter__DOT__monitor__DOT__param))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:563: Assertion failed in %NTestDriver.testHarness.chiptop0.system.chipyard_prcictrl_domain.reset_setter.monitor: Assertion failed: 'A' channel param changed within multibeat operation (connected at generators/chipyard/src/main/scala/clocking/HasChipyardPRCI.scala:79:25)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_66.sv", 563, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_66.sv:565: Assertion failed in %NTestDriver.testHarness.chiptop0.system.chipyard_prcictrl_domain.reset_setter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_66.sv", 565, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__reset_setter__DOT__monitor__DOT__a_first_counter))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size) 
                        != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__reset_setter__DOT__monitor__DOT__size))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:569: Assertion failed in %NTestDriver.testHarness.chiptop0.system.chipyard_prcictrl_domain.reset_setter.monitor: Assertion failed: 'A' channel size changed within multibeat operation (connected at generators/chipyard/src/main/scala/clocking/HasChipyardPRCI.scala:79:25)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_66.sv", 569, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_66.sv:571: Assertion failed in %NTestDriver.testHarness.chiptop0.system.chipyard_prcictrl_domain.reset_setter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_66.sv", 571, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1005(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1005\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__reset_setter__DOT__monitor__DOT__a_first_counter))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_source) 
                        != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__reset_setter__DOT__monitor__DOT__source))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:575: Assertion failed in %NTestDriver.testHarness.chiptop0.system.chipyard_prcictrl_domain.reset_setter.monitor: Assertion failed: 'A' channel source changed within multibeat operation (connected at generators/chipyard/src/main/scala/clocking/HasChipyardPRCI.scala:79:25)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_66.sv", 575, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_66.sv:577: Assertion failed in %NTestDriver.testHarness.chiptop0.system.chipyard_prcictrl_domain.reset_setter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_66.sv", 577, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__reset_setter__DOT__monitor__DOT__a_first_counter))) 
                     & (((0x1fffc0U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter_1__DOT___repeater_io_deq_bits_address) 
                         | (IData)(vlSelf->__VdfgTmp_h1a485cba__0)) 
                        != vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__reset_setter__DOT__monitor__DOT__address)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:581: Assertion failed in %NTestDriver.testHarness.chiptop0.system.chipyard_prcictrl_domain.reset_setter.monitor: Assertion failed: 'A' channel address changed with multibeat operation (connected at generators/chipyard/src/main/scala/clocking/HasChipyardPRCI.scala:79:25)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_66.sv", 581, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_66.sv:583: Assertion failed in %NTestDriver.testHarness.chiptop0.system.chipyard_prcictrl_domain.reset_setter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_66.sv", 583, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1006(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1006\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__reset_setter__DOT__monitor__DOT__d_first_counter))) 
                     & ((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_opcode)) 
                        != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__reset_setter__DOT__monitor__DOT__opcode_1))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:587: Assertion failed in %NTestDriver.testHarness.chiptop0.system.chipyard_prcictrl_domain.reset_setter.monitor: Assertion failed: 'D' channel opcode changed within multibeat operation (connected at generators/chipyard/src/main/scala/clocking/HasChipyardPRCI.scala:79:25)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_66.sv", 587, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_66.sv:589: Assertion failed in %NTestDriver.testHarness.chiptop0.system.chipyard_prcictrl_domain.reset_setter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_66.sv", 589, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__reset_setter__DOT__monitor__DOT__d_first_counter))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size) 
                        != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__reset_setter__DOT__monitor__DOT__size_1))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:593: Assertion failed in %NTestDriver.testHarness.chiptop0.system.chipyard_prcictrl_domain.reset_setter.monitor: Assertion failed: 'D' channel size changed within multibeat operation (connected at generators/chipyard/src/main/scala/clocking/HasChipyardPRCI.scala:79:25)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_66.sv", 593, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_66.sv:595: Assertion failed in %NTestDriver.testHarness.chiptop0.system.chipyard_prcictrl_domain.reset_setter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_66.sv", 595, "");
        }
    }
}

extern const VlWide<257>/*8223:0*/ VTestDriver__ConstPool__CONST_h42b330f7_0;

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1007(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1007\n"); );
    // Init
    VlWide<257>/*8223:0*/ __Vtemp_1;
    VlWide<257>/*8223:0*/ __Vtemp_2;
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__reset_setter__DOT__monitor__DOT__d_first_counter))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_source) 
                        != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__reset_setter__DOT__monitor__DOT__source_1))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:599: Assertion failed in %NTestDriver.testHarness.chiptop0.system.chipyard_prcictrl_domain.reset_setter.monitor: Assertion failed: 'D' channel source changed within multibeat operation (connected at generators/chipyard/src/main/scala/clocking/HasChipyardPRCI.scala:79:25)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_66.sv", 599, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_66.sv:601: Assertion failed in %NTestDriver.testHarness.chiptop0.system.chipyard_prcictrl_domain.reset_setter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_66.sv", 601, "");
        }
    }
    VL_SHIFTR_WWI(8208,8208,14, __Vtemp_1, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__reset_setter__DOT__monitor__DOT__inflight, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_source));
    VL_AND_W(257, __Vtemp_2, VTestDriver__ConstPool__CONST_h42b330f7_0, __Vtemp_1);
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__reset_setter__DOT__monitor__DOT___GEN) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset))) 
                     & __Vtemp_2[0U]))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:605: Assertion failed in %NTestDriver.testHarness.chiptop0.system.chipyard_prcictrl_domain.reset_setter.monitor: Assertion failed: 'A' channel re-used a source ID (connected at generators/chipyard/src/main/scala/clocking/HasChipyardPRCI.scala:79:25)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_66.sv", 605, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_66.sv:607: Assertion failed in %NTestDriver.testHarness.chiptop0.system.chipyard_prcictrl_domain.reset_setter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_66.sv", 607, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1008(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1008\n"); );
    // Init
    VlWide<257>/*8223:0*/ __Vtemp_1;
    VlWide<257>/*8223:0*/ __Vtemp_2;
    // Body
    VL_SHIFTR_WWI(8208,8208,14, __Vtemp_1, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__reset_setter__DOT__monitor__DOT__inflight, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_source));
    VL_AND_W(257, __Vtemp_2, VTestDriver__ConstPool__CONST_h42b330f7_0, __Vtemp_1);
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__reset_setter__DOT__monitor__DOT___GEN_26) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset))) 
                     & (~ (__Vtemp_2[0U] | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__reset_setter__DOT__monitor__DOT__same_cycle_resp)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:611: Assertion failed in %NTestDriver.testHarness.chiptop0.system.chipyard_prcictrl_domain.reset_setter.monitor: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at generators/chipyard/src/main/scala/clocking/HasChipyardPRCI.scala:79:25)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_66.sv", 611, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_66.sv:613: Assertion failed in %NTestDriver.testHarness.chiptop0.system.chipyard_prcictrl_domain.reset_setter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_66.sv", 613, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__reset_setter__DOT__monitor__DOT___GEN_26) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__reset_setter__DOT__monitor__DOT__same_cycle_resp))) 
                     & (~ (((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_opcode)) 
                            == ((0x17U >= (0x1fU & 
                                           ((IData)(3U) 
                                            * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_opcode))))
                                 ? (7U & (0x911240U 
                                          >> (0x1fU 
                                              & ((IData)(3U) 
                                                 * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_opcode)))))
                                 : 0U)) | ((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_opcode)) 
                                           == ((0x17U 
                                                >= 
                                                (0x1fU 
                                                 & ((IData)(3U) 
                                                    * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_opcode))))
                                                ? (7U 
                                                   & (0x951240U 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(3U) 
                                                          * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_opcode)))))
                                                : 0U))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:617: Assertion failed in %NTestDriver.testHarness.chiptop0.system.chipyard_prcictrl_domain.reset_setter.monitor: Assertion failed: 'D' channel contains improper opcode response (connected at generators/chipyard/src/main/scala/clocking/HasChipyardPRCI.scala:79:25)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_66.sv", 617, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_66.sv:619: Assertion failed in %NTestDriver.testHarness.chiptop0.system.chipyard_prcictrl_domain.reset_setter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_66.sv", 619, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1009(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1009\n"); );
    // Init
    VlWide<1026>/*32831:0*/ __Vtemp_1;
    VlWide<1026>/*32831:0*/ __Vtemp_2;
    VlWide<1026>/*32831:0*/ __Vtemp_3;
    VlWide<1026>/*32831:0*/ __Vtemp_4;
    // Body
    VL_SHIFTR_WWI(32832,32832,16, __Vtemp_1, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__reset_setter__DOT__monitor__DOT__inflight_opcodes, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_source) 
                   << 2U));
    VL_SHIFTR_WWI(32832,32832,16, __Vtemp_2, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__reset_setter__DOT__monitor__DOT__inflight_opcodes, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_source) 
                   << 2U));
    VL_SHIFTR_WWI(32832,32832,16, __Vtemp_3, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__reset_setter__DOT__monitor__DOT__inflight_opcodes, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_source) 
                   << 2U));
    VL_SHIFTR_WWI(32832,32832,16, __Vtemp_4, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__reset_setter__DOT__monitor__DOT__inflight_opcodes, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_source) 
                   << 2U));
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__reset_setter__DOT__monitor__DOT___GEN_26) 
                      & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__reset_setter__DOT__monitor__DOT__same_cycle_resp)) 
                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))) 
                     & (~ (((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_opcode)) 
                            == ((0x17U >= (0x1fU & 
                                           ((IData)(3U) 
                                            * (7U & 
                                               (__Vtemp_1[0U] 
                                                >> 1U)))))
                                 ? (7U & (0x911240U 
                                          >> (0x1fU 
                                              & ((IData)(3U) 
                                                 * 
                                                 (7U 
                                                  & (__Vtemp_2[0U] 
                                                     >> 1U))))))
                                 : 0U)) | ((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_opcode)) 
                                           == ((0x17U 
                                                >= 
                                                (0x1fU 
                                                 & ((IData)(3U) 
                                                    * 
                                                    (7U 
                                                     & (__Vtemp_3[0U] 
                                                        >> 1U)))))
                                                ? (7U 
                                                   & (0x951240U 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(3U) 
                                                          * 
                                                          (7U 
                                                           & (__Vtemp_4[0U] 
                                                              >> 1U))))))
                                                : 0U))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:629: Assertion failed in %NTestDriver.testHarness.chiptop0.system.chipyard_prcictrl_domain.reset_setter.monitor: Assertion failed: 'D' channel contains improper opcode response (connected at generators/chipyard/src/main/scala/clocking/HasChipyardPRCI.scala:79:25)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_66.sv", 629, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_66.sv:631: Assertion failed in %NTestDriver.testHarness.chiptop0.system.chipyard_prcictrl_domain.reset_setter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_66.sv", 631, "");
        }
    }
}
