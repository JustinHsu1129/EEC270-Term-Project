// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestDriver.h for the primary calling header

#include "VTestDriver__pch.h"
#include "VTestDriver__Syms.h"
#include "VTestDriver___024root.h"

extern const VlWide<17>/*543:0*/ VTestDriver__ConstPool__CONST_h3dcda146_0;
extern const VlWide<17>/*543:0*/ VTestDriver__ConstPool__CONST_h00a543f7_0;

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__667(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__667\n"); );
    // Init
    VlWide<17>/*543:0*/ __Vtemp_1;
    // Body
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)) 
                           & (~ (((0U == ((((((((((
                                                   (((((((VTestDriver__ConstPool__CONST_h3dcda146_0[0U] 
                                                          ^ 
                                                          vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT__inflight[0U]) 
                                                         | (VTestDriver__ConstPool__CONST_h3dcda146_0[1U] 
                                                            ^ 
                                                            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT__inflight[1U])) 
                                                        | (VTestDriver__ConstPool__CONST_h3dcda146_0[2U] 
                                                           ^ 
                                                           vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT__inflight[2U])) 
                                                       | (VTestDriver__ConstPool__CONST_h3dcda146_0[3U] 
                                                          ^ 
                                                          vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT__inflight[3U])) 
                                                      | (VTestDriver__ConstPool__CONST_h3dcda146_0[4U] 
                                                         ^ 
                                                         vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT__inflight[4U])) 
                                                     | (VTestDriver__ConstPool__CONST_h3dcda146_0[5U] 
                                                        ^ 
                                                        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT__inflight[5U])) 
                                                    | (VTestDriver__ConstPool__CONST_h3dcda146_0[6U] 
                                                       ^ 
                                                       vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT__inflight[6U])) 
                                                   | (VTestDriver__ConstPool__CONST_h3dcda146_0[7U] 
                                                      ^ 
                                                      vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT__inflight[7U])) 
                                                  | (VTestDriver__ConstPool__CONST_h3dcda146_0[8U] 
                                                     ^ 
                                                     vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT__inflight[8U])) 
                                                 | (VTestDriver__ConstPool__CONST_h3dcda146_0[9U] 
                                                    ^ 
                                                    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT__inflight[9U])) 
                                                | (VTestDriver__ConstPool__CONST_h3dcda146_0[0xaU] 
                                                   ^ 
                                                   vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT__inflight[0xaU])) 
                                               | (VTestDriver__ConstPool__CONST_h3dcda146_0[0xbU] 
                                                  ^ 
                                                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT__inflight[0xbU])) 
                                              | (VTestDriver__ConstPool__CONST_h3dcda146_0[0xcU] 
                                                 ^ 
                                                 vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT__inflight[0xcU])) 
                                             | (VTestDriver__ConstPool__CONST_h3dcda146_0[0xdU] 
                                                ^ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT__inflight[0xdU])) 
                                            | (VTestDriver__ConstPool__CONST_h3dcda146_0[0xeU] 
                                               ^ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT__inflight[0xeU])) 
                                           | (VTestDriver__ConstPool__CONST_h3dcda146_0[0xfU] 
                                              ^ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT__inflight[0xfU])) 
                                          | (VTestDriver__ConstPool__CONST_h3dcda146_0[0x10U] 
                                             ^ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT__inflight[0x10U]))) 
                                  | (0U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                 | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT__watchdog 
                                    < vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT__plusarg_reader__DOT__myplus))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:664: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.fixer.monitor: Assertion failed: TileLink timeout expired (connected at generators/rocket-chip/src/main/scala/subsystem/PeripheryBus.scala:54:7)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_6.sv", 664, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_6.sv:666: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.fixer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_6.sv", 666, "");
        }
    }
    VL_SHIFTR_WWI(513,513,10, __Vtemp_1, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT__inflight_1, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_source));
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_valid) 
                      & ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_2)) 
                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT____VdfgTmp_h3f6fcfea__0))) 
                     & (~ (VTestDriver__ConstPool__CONST_h00a543f7_0[0U] 
                           & __Vtemp_1[0U]))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:670: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.fixer.monitor: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at generators/rocket-chip/src/main/scala/subsystem/PeripheryBus.scala:54:7)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_6.sv", 670, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_6.sv:672: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.fixer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_6.sv", 672, "");
        }
    }
}

extern const VlWide<65>/*2079:0*/ VTestDriver__ConstPool__CONST_h614f9cb9_0;

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__668(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__668\n"); );
    // Init
    VlWide<65>/*2079:0*/ __Vtemp_1;
    VlWide<65>/*2079:0*/ __Vtemp_2;
    // Body
    VL_SHIFTR_WWI(2052,2052,12, __Vtemp_1, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes_1, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_source) 
                   << 2U));
    VL_AND_W(65, __Vtemp_2, VTestDriver__ConstPool__CONST_h614f9cb9_0, __Vtemp_1);
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_valid) 
                      & ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_2)) 
                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT____VdfgTmp_h3f6fcfea__0))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_size) 
                        != (7U & (__Vtemp_2[0U] >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:676: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.fixer.monitor: Assertion failed: 'D' channel contains improper response size (connected at generators/rocket-chip/src/main/scala/subsystem/PeripheryBus.scala:54:7)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_6.sv", 676, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_6.sv:678: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.fixer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_6.sv", 678, "");
        }
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)) 
                           & (~ (((0U == ((((((((((
                                                   (((((((VTestDriver__ConstPool__CONST_h3dcda146_0[0U] 
                                                          ^ 
                                                          vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT__inflight_1[0U]) 
                                                         | (VTestDriver__ConstPool__CONST_h3dcda146_0[1U] 
                                                            ^ 
                                                            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT__inflight_1[1U])) 
                                                        | (VTestDriver__ConstPool__CONST_h3dcda146_0[2U] 
                                                           ^ 
                                                           vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT__inflight_1[2U])) 
                                                       | (VTestDriver__ConstPool__CONST_h3dcda146_0[3U] 
                                                          ^ 
                                                          vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT__inflight_1[3U])) 
                                                      | (VTestDriver__ConstPool__CONST_h3dcda146_0[4U] 
                                                         ^ 
                                                         vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT__inflight_1[4U])) 
                                                     | (VTestDriver__ConstPool__CONST_h3dcda146_0[5U] 
                                                        ^ 
                                                        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT__inflight_1[5U])) 
                                                    | (VTestDriver__ConstPool__CONST_h3dcda146_0[6U] 
                                                       ^ 
                                                       vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT__inflight_1[6U])) 
                                                   | (VTestDriver__ConstPool__CONST_h3dcda146_0[7U] 
                                                      ^ 
                                                      vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT__inflight_1[7U])) 
                                                  | (VTestDriver__ConstPool__CONST_h3dcda146_0[8U] 
                                                     ^ 
                                                     vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT__inflight_1[8U])) 
                                                 | (VTestDriver__ConstPool__CONST_h3dcda146_0[9U] 
                                                    ^ 
                                                    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT__inflight_1[9U])) 
                                                | (VTestDriver__ConstPool__CONST_h3dcda146_0[0xaU] 
                                                   ^ 
                                                   vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT__inflight_1[0xaU])) 
                                               | (VTestDriver__ConstPool__CONST_h3dcda146_0[0xbU] 
                                                  ^ 
                                                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT__inflight_1[0xbU])) 
                                              | (VTestDriver__ConstPool__CONST_h3dcda146_0[0xcU] 
                                                 ^ 
                                                 vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT__inflight_1[0xcU])) 
                                             | (VTestDriver__ConstPool__CONST_h3dcda146_0[0xdU] 
                                                ^ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT__inflight_1[0xdU])) 
                                            | (VTestDriver__ConstPool__CONST_h3dcda146_0[0xeU] 
                                               ^ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT__inflight_1[0xeU])) 
                                           | (VTestDriver__ConstPool__CONST_h3dcda146_0[0xfU] 
                                              ^ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT__inflight_1[0xfU])) 
                                          | (VTestDriver__ConstPool__CONST_h3dcda146_0[0x10U] 
                                             ^ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT__inflight_1[0x10U]))) 
                                  | (0U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                                 | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT__watchdog_1 
                                    < vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:682: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.fixer.monitor: Assertion failed: TileLink timeout expired (connected at generators/rocket-chip/src/main/scala/subsystem/PeripheryBus.scala:54:7)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_6.sv", 682, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_6.sv:684: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.fixer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_6.sv", 684, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__669(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__669\n"); );
    // Body
    if (VL_UNLIKELY(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___buffer_auto_out_a_valid) 
                     & (IData)(vlSelf->__VdfgTmp_h216f65d9__0)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_7.sv:202: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor: Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at generators/rocket-chip/src/main/scala/subsystem/PeripheryBus.scala:53:7)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 202, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_7.sv:204: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 204, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___buffer_auto_out_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h216f65d9__0)) 
                     & (~ (((IData)((0x22180U == (0x7ffc0U 
                                                  & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]))) 
                            | (IData)(((0x20180U == 
                                        (0x7f1c0U & 
                                         vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                       & (5U > (7U 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 9U)))))) 
                           & ((0U == ((0x1fffeU & (
                                                   vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                                   << 1U)) 
                                      | (1U & (~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 0x1fU))))) 
                              | (0x10020U == (0x1ffffU 
                                              & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                                  << 1U) 
                                                 | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 0x1fU)))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_7.sv:208: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor: Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at generators/rocket-chip/src/main/scala/subsystem/PeripheryBus.scala:53:7)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 208, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_7.sv:210: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 210, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__670(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__670\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___buffer_auto_out_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h216f65d9__0)) 
                     & (~ (((~ (IData)((0U != (3U & 
                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                >> 0x11U))))) 
                            | ((0x110U == (0x3ffU & 
                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                            >> 9U))) 
                               | ((0x111U == (0x3ffU 
                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                 >> 9U))) 
                                  | (0x112U == (0x3ffU 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 9U)))))) 
                           | ((IData)(((0x20000U == 
                                        (0x7f000U & 
                                         vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                       & (5U > (7U 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 9U))))) 
                              | ((0x105U == (0x3ffU 
                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                >> 9U))) 
                                 | ((0x108U == (0x3ffU 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 9U))) 
                                    | (0x200U == (0x3ffU 
                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 9U))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_7.sv:214: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor: Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at generators/rocket-chip/src/main/scala/subsystem/PeripheryBus.scala:53:7)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 214, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_7.sv:216: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 216, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__671(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__671\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___buffer_auto_out_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h216f65d9__0)) 
                     & (2U >= (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                     >> 6U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_7.sv:220: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor: Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at generators/rocket-chip/src/main/scala/subsystem/PeripheryBus.scala:53:7)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 220, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_7.sv:222: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 222, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___buffer_auto_out_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h216f65d9__0)) 
                     & (0U != (0x3fU & ((~ ((IData)(0x3fU) 
                                            << (7U 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 6U)))) 
                                        & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                            << 0xdU) 
                                           | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                              >> 0x13U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_7.sv:226: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor: Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at generators/rocket-chip/src/main/scala/subsystem/PeripheryBus.scala:53:7)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 226, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_7.sv:228: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 228, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__672(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__672\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___buffer_auto_out_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h216f65d9__0)) 
                     & (2U < (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                    >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_7.sv:232: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor: Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at generators/rocket-chip/src/main/scala/subsystem/PeripheryBus.scala:53:7)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 232, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_7.sv:234: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 234, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___buffer_auto_out_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h216f65d9__0)) 
                     & (0xffU != (0xffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                           >> 0x10U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_7.sv:238: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor: Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at generators/rocket-chip/src/main/scala/subsystem/PeripheryBus.scala:53:7)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 238, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_7.sv:240: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 240, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__673(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__673\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___buffer_auto_out_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h216f65d9__0)) 
                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[3U] 
                        >> 0x18U)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_7.sv:244: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor: Assertion failed: 'A' channel AcquireBlock is corrupt (connected at generators/rocket-chip/src/main/scala/subsystem/PeripheryBus.scala:53:7)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 244, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_7.sv:246: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 246, "");
        }
    }
    if (VL_UNLIKELY(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___buffer_auto_out_a_valid) 
                     & (IData)(vlSelf->__VdfgTmp_h1156cc8a__0)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_7.sv:250: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor: Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at generators/rocket-chip/src/main/scala/subsystem/PeripheryBus.scala:53:7)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 250, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_7.sv:252: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 252, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__674(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__674\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___buffer_auto_out_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h1156cc8a__0)) 
                     & (~ (((IData)((0x22180U == (0x7ffc0U 
                                                  & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]))) 
                            | (IData)(((0x20180U == 
                                        (0x7f1c0U & 
                                         vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                       & (5U > (7U 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 9U)))))) 
                           & ((0U == ((0x1fffeU & (
                                                   vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                                   << 1U)) 
                                      | (1U & (~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 0x1fU))))) 
                              | (0x10020U == (0x1ffffU 
                                              & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                                  << 1U) 
                                                 | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 0x1fU)))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_7.sv:256: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor: Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at generators/rocket-chip/src/main/scala/subsystem/PeripheryBus.scala:53:7)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 256, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_7.sv:258: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 258, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__675(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__675\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___buffer_auto_out_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h1156cc8a__0)) 
                     & (~ (((~ (IData)((0U != (3U & 
                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                >> 0x11U))))) 
                            | ((0x110U == (0x3ffU & 
                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                            >> 9U))) 
                               | ((0x111U == (0x3ffU 
                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                 >> 9U))) 
                                  | (0x112U == (0x3ffU 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 9U)))))) 
                           | ((IData)(((0x20000U == 
                                        (0x7f000U & 
                                         vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                       & (5U > (7U 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 9U))))) 
                              | ((0x105U == (0x3ffU 
                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                >> 9U))) 
                                 | ((0x108U == (0x3ffU 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 9U))) 
                                    | (0x200U == (0x3ffU 
                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 9U))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_7.sv:262: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor: Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at generators/rocket-chip/src/main/scala/subsystem/PeripheryBus.scala:53:7)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 262, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_7.sv:264: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 264, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__676(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__676\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___buffer_auto_out_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h1156cc8a__0)) 
                     & (2U >= (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                     >> 6U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_7.sv:268: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor: Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at generators/rocket-chip/src/main/scala/subsystem/PeripheryBus.scala:53:7)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 268, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_7.sv:270: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 270, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___buffer_auto_out_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h1156cc8a__0)) 
                     & (0U != (0x3fU & ((~ ((IData)(0x3fU) 
                                            << (7U 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 6U)))) 
                                        & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                            << 0xdU) 
                                           | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                              >> 0x13U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_7.sv:274: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor: Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at generators/rocket-chip/src/main/scala/subsystem/PeripheryBus.scala:53:7)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 274, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_7.sv:276: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 276, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__677(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__677\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___buffer_auto_out_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h1156cc8a__0)) 
                     & (2U < (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                    >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_7.sv:280: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor: Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at generators/rocket-chip/src/main/scala/subsystem/PeripheryBus.scala:53:7)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 280, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_7.sv:282: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 282, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___buffer_auto_out_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h1156cc8a__0)) 
                     & (~ (IData)((0U != (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                >> 3U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_7.sv:286: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor: Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at generators/rocket-chip/src/main/scala/subsystem/PeripheryBus.scala:53:7)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 286, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_7.sv:288: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 288, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__678(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__678\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___buffer_auto_out_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h1156cc8a__0)) 
                     & (0xffU != (0xffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                           >> 0x10U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_7.sv:292: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor: Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at generators/rocket-chip/src/main/scala/subsystem/PeripheryBus.scala:53:7)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 292, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_7.sv:294: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 294, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___buffer_auto_out_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h1156cc8a__0)) 
                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[3U] 
                        >> 0x18U)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_7.sv:298: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor: Assertion failed: 'A' channel AcquirePerm is corrupt (connected at generators/rocket-chip/src/main/scala/subsystem/PeripheryBus.scala:53:7)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 298, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_7.sv:300: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 300, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__679(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__679\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___buffer_auto_out_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_he9fa464a__0)) 
                     & (~ ((((((~ (IData)((0U != (3U 
                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 0x11U))))) 
                               | ((0x110U == (0x3ffU 
                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                 >> 9U))) 
                                  | ((0x111U == (0x3ffU 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 9U))) 
                                     | (0x112U == (0x3ffU 
                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                      >> 9U)))))) 
                              | (IData)(((0x20000U 
                                          == (0x7f000U 
                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                         & (5U > (7U 
                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 9U)))))) 
                             | (0x105U == (0x3ffU & 
                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                            >> 9U)))) 
                            | (0x108U == (0x3ffU & 
                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                           >> 9U)))) 
                           | (0x200U == (0x3ffU & (
                                                   vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 9U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_7.sv:304: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor: Assertion failed: 'A' channel carries Get type which master claims it can't emit (connected at generators/rocket-chip/src/main/scala/subsystem/PeripheryBus.scala:53:7)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 304, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_7.sv:306: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 306, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__680(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__680\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___buffer_auto_out_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_he9fa464a__0)) 
                     & (~ ((7U != (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                         >> 6U))) & 
                           ((0U == ((0x1fffeU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                                 << 1U)) 
                                    | (1U & (~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                >> 0x1fU))))) 
                            | (0x10020U == (0x1ffffU 
                                            & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                                << 1U) 
                                               | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 0x1fU)))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_7.sv:310: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor: Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at generators/rocket-chip/src/main/scala/subsystem/PeripheryBus.scala:53:7)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 310, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_7.sv:312: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 312, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___buffer_auto_out_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_he9fa464a__0)) 
                     & (~ (((~ (IData)((0U != (3U & 
                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                >> 0x11U))))) 
                            | ((0x110U == (0x3ffU & 
                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                            >> 9U))) 
                               | ((0x111U == (0x3ffU 
                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                 >> 9U))) 
                                  | (0x112U == (0x3ffU 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 9U)))))) 
                           | ((IData)(((0x20000U == 
                                        (0x7f000U & 
                                         vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                       & (5U > (7U 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 9U))))) 
                              | ((0x105U == (0x3ffU 
                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                >> 9U))) 
                                 | ((0x108U == (0x3ffU 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 9U))) 
                                    | (0x200U == (0x3ffU 
                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 9U))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_7.sv:316: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor: Assertion failed: 'A' channel Get carries invalid source ID (connected at generators/rocket-chip/src/main/scala/subsystem/PeripheryBus.scala:53:7)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 316, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_7.sv:318: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 318, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__681(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__681\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___buffer_auto_out_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_he9fa464a__0)) 
                     & (0U != (0x3fU & ((~ ((IData)(0x3fU) 
                                            << (7U 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 6U)))) 
                                        & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                            << 0xdU) 
                                           | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                              >> 0x13U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_7.sv:322: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor: Assertion failed: 'A' channel Get address not aligned to size (connected at generators/rocket-chip/src/main/scala/subsystem/PeripheryBus.scala:53:7)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 322, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_7.sv:324: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 324, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___buffer_auto_out_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_he9fa464a__0)) 
                     & (0U != (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                     >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_7.sv:328: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor: Assertion failed: 'A' channel Get carries invalid param (connected at generators/rocket-chip/src/main/scala/subsystem/PeripheryBus.scala:53:7)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 328, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_7.sv:330: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 330, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__682(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__682\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___buffer_auto_out_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_he9fa464a__0)) 
                     & ((0xffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                  >> 0x10U)) != ((0x80U 
                                                  & (((((2U 
                                                         < 
                                                         (7U 
                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                             >> 6U))) 
                                                        | (IData)(
                                                                  (0x200080U 
                                                                   == 
                                                                   (0x2000c0U 
                                                                    & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                       | (IData)(
                                                                 (0x300040U 
                                                                  == 
                                                                  (0x3000c0U 
                                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                      | (IData)(
                                                                (0x380000U 
                                                                 == 
                                                                 (0x380000U 
                                                                  & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                     << 7U)) 
                                                 | ((0x40U 
                                                     & (((((2U 
                                                            < 
                                                            (7U 
                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                >> 6U))) 
                                                           | (IData)(
                                                                     (0x200080U 
                                                                      == 
                                                                      (0x2000c0U 
                                                                       & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                          | (IData)(
                                                                    (0x300040U 
                                                                     == 
                                                                     (0x3000c0U 
                                                                      & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                         | (IData)(
                                                                   (0x300000U 
                                                                    == 
                                                                    (0x380000U 
                                                                     & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                        << 6U)) 
                                                    | ((0x20U 
                                                        & (((((2U 
                                                               < 
                                                               (7U 
                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                   >> 6U))) 
                                                              | (IData)(
                                                                        (0x200080U 
                                                                         == 
                                                                         (0x2000c0U 
                                                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                             | (IData)(
                                                                       (0x200040U 
                                                                        == 
                                                                        (0x3000c0U 
                                                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                            | (IData)(
                                                                      (0x280000U 
                                                                       == 
                                                                       (0x380000U 
                                                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                           << 5U)) 
                                                       | ((0x10U 
                                                           & (((((2U 
                                                                  < 
                                                                  (7U 
                                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                      >> 6U))) 
                                                                 | (IData)(
                                                                           (0x200080U 
                                                                            == 
                                                                            (0x2000c0U 
                                                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                                | (IData)(
                                                                          (0x200040U 
                                                                           == 
                                                                           (0x3000c0U 
                                                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                               | (IData)(
                                                                         (0x200000U 
                                                                          == 
                                                                          (0x380000U 
                                                                           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                              << 4U)) 
                                                          | ((8U 
                                                              & (((((2U 
                                                                     < 
                                                                     (7U 
                                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                         >> 6U))) 
                                                                    | (IData)(
                                                                              (0x80U 
                                                                               == 
                                                                               (0x2000c0U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                                   | (IData)(
                                                                             (0x100040U 
                                                                              == 
                                                                              (0x3000c0U 
                                                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                                  | (IData)(
                                                                            (0x180000U 
                                                                             == 
                                                                             (0x380000U 
                                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                                 << 3U)) 
                                                             | ((4U 
                                                                 & (((((2U 
                                                                        < 
                                                                        (7U 
                                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                            >> 6U))) 
                                                                       | (IData)(
                                                                                (0x80U 
                                                                                == 
                                                                                (0x2000c0U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                                      | (IData)(
                                                                                (0x100040U 
                                                                                == 
                                                                                (0x3000c0U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                                     | (IData)(
                                                                               (0x100000U 
                                                                                == 
                                                                                (0x380000U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                                    << 2U)) 
                                                                | ((2U 
                                                                    & (((((2U 
                                                                           < 
                                                                           (7U 
                                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                               >> 6U))) 
                                                                          | (IData)(
                                                                                (0x80U 
                                                                                == 
                                                                                (0x2000c0U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                                         | (IData)(
                                                                                (0x40U 
                                                                                == 
                                                                                (0x3000c0U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                                        | (IData)(
                                                                                (0x80000U 
                                                                                == 
                                                                                (0x380000U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                                       << 1U)) 
                                                                   | (1U 
                                                                      & ((((2U 
                                                                            < 
                                                                            (7U 
                                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                                >> 6U))) 
                                                                           | (IData)(
                                                                                (0x80U 
                                                                                == 
                                                                                (0x2000c0U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                                          | (IData)(
                                                                                (0x40U 
                                                                                == 
                                                                                (0x3000c0U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                                         | (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (0x380000U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_7.sv:334: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor: Assertion failed: 'A' channel Get contains invalid mask (connected at generators/rocket-chip/src/main/scala/subsystem/PeripheryBus.scala:53:7)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 334, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_7.sv:336: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 336, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__683(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__683\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___buffer_auto_out_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_he9fa464a__0)) 
                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[3U] 
                        >> 0x18U)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_7.sv:340: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor: Assertion failed: 'A' channel Get is corrupt (connected at generators/rocket-chip/src/main/scala/subsystem/PeripheryBus.scala:53:7)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 340, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_7.sv:342: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 342, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___buffer_auto_out_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h2131fd20__0)) 
                     & (~ (((((((~ (IData)((0U != (3U 
                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                      >> 0x11U))))) 
                                | ((0x110U == (0x3ffU 
                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 9U))) 
                                   | ((0x111U == (0x3ffU 
                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 9U))) 
                                      | (0x112U == 
                                         (0x3ffU & 
                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                           >> 9U)))))) 
                               | (IData)(((0x20000U 
                                           == (0x7f000U 
                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                          & (5U > (7U 
                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                      >> 9U)))))) 
                              | (0x105U == (0x3ffU 
                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                               >> 9U)))) 
                             | (0x108U == (0x3ffU & 
                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                            >> 9U)))) 
                            | (0x200U == (0x3ffU & 
                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                           >> 9U)))) 
                           & ((7U != (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                            >> 6U))) 
                              & ((0U == ((0x1fffeU 
                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                             << 1U)) 
                                         | (1U & (~ 
                                                  (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 0x1fU))))) 
                                 | (0x10020U == (0x1ffffU 
                                                 & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                                     << 1U) 
                                                    | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                       >> 0x1fU))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_7.sv:346: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor: Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at generators/rocket-chip/src/main/scala/subsystem/PeripheryBus.scala:53:7)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 346, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_7.sv:348: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 348, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__684(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__684\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___buffer_auto_out_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h2131fd20__0)) 
                     & (~ (((~ (IData)((0U != (3U & 
                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                >> 0x11U))))) 
                            | ((0x110U == (0x3ffU & 
                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                            >> 9U))) 
                               | ((0x111U == (0x3ffU 
                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                 >> 9U))) 
                                  | (0x112U == (0x3ffU 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 9U)))))) 
                           | ((IData)(((0x20000U == 
                                        (0x7f000U & 
                                         vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                       & (5U > (7U 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 9U))))) 
                              | ((0x105U == (0x3ffU 
                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                >> 9U))) 
                                 | ((0x108U == (0x3ffU 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 9U))) 
                                    | (0x200U == (0x3ffU 
                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 9U))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_7.sv:352: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor: Assertion failed: 'A' channel PutFull carries invalid source ID (connected at generators/rocket-chip/src/main/scala/subsystem/PeripheryBus.scala:53:7)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 352, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_7.sv:354: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 354, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__685(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__685\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___buffer_auto_out_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h2131fd20__0)) 
                     & (0U != (0x3fU & ((~ ((IData)(0x3fU) 
                                            << (7U 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 6U)))) 
                                        & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                            << 0xdU) 
                                           | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                              >> 0x13U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_7.sv:358: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor: Assertion failed: 'A' channel PutFull address not aligned to size (connected at generators/rocket-chip/src/main/scala/subsystem/PeripheryBus.scala:53:7)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 358, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_7.sv:360: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 360, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___buffer_auto_out_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h2131fd20__0)) 
                     & (0U != (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                     >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_7.sv:364: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor: Assertion failed: 'A' channel PutFull carries invalid param (connected at generators/rocket-chip/src/main/scala/subsystem/PeripheryBus.scala:53:7)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 364, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_7.sv:366: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 366, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__686(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__686\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___buffer_auto_out_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h2131fd20__0)) 
                     & ((0xffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                  >> 0x10U)) != ((0x80U 
                                                  & (((((2U 
                                                         < 
                                                         (7U 
                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                             >> 6U))) 
                                                        | (IData)(
                                                                  (0x200080U 
                                                                   == 
                                                                   (0x2000c0U 
                                                                    & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                       | (IData)(
                                                                 (0x300040U 
                                                                  == 
                                                                  (0x3000c0U 
                                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                      | (IData)(
                                                                (0x380000U 
                                                                 == 
                                                                 (0x380000U 
                                                                  & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                     << 7U)) 
                                                 | ((0x40U 
                                                     & (((((2U 
                                                            < 
                                                            (7U 
                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                >> 6U))) 
                                                           | (IData)(
                                                                     (0x200080U 
                                                                      == 
                                                                      (0x2000c0U 
                                                                       & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                          | (IData)(
                                                                    (0x300040U 
                                                                     == 
                                                                     (0x3000c0U 
                                                                      & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                         | (IData)(
                                                                   (0x300000U 
                                                                    == 
                                                                    (0x380000U 
                                                                     & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                        << 6U)) 
                                                    | ((0x20U 
                                                        & (((((2U 
                                                               < 
                                                               (7U 
                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                   >> 6U))) 
                                                              | (IData)(
                                                                        (0x200080U 
                                                                         == 
                                                                         (0x2000c0U 
                                                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                             | (IData)(
                                                                       (0x200040U 
                                                                        == 
                                                                        (0x3000c0U 
                                                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                            | (IData)(
                                                                      (0x280000U 
                                                                       == 
                                                                       (0x380000U 
                                                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                           << 5U)) 
                                                       | ((0x10U 
                                                           & (((((2U 
                                                                  < 
                                                                  (7U 
                                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                      >> 6U))) 
                                                                 | (IData)(
                                                                           (0x200080U 
                                                                            == 
                                                                            (0x2000c0U 
                                                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                                | (IData)(
                                                                          (0x200040U 
                                                                           == 
                                                                           (0x3000c0U 
                                                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                               | (IData)(
                                                                         (0x200000U 
                                                                          == 
                                                                          (0x380000U 
                                                                           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                              << 4U)) 
                                                          | ((8U 
                                                              & (((((2U 
                                                                     < 
                                                                     (7U 
                                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                         >> 6U))) 
                                                                    | (IData)(
                                                                              (0x80U 
                                                                               == 
                                                                               (0x2000c0U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                                   | (IData)(
                                                                             (0x100040U 
                                                                              == 
                                                                              (0x3000c0U 
                                                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                                  | (IData)(
                                                                            (0x180000U 
                                                                             == 
                                                                             (0x380000U 
                                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                                 << 3U)) 
                                                             | ((4U 
                                                                 & (((((2U 
                                                                        < 
                                                                        (7U 
                                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                            >> 6U))) 
                                                                       | (IData)(
                                                                                (0x80U 
                                                                                == 
                                                                                (0x2000c0U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                                      | (IData)(
                                                                                (0x100040U 
                                                                                == 
                                                                                (0x3000c0U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                                     | (IData)(
                                                                               (0x100000U 
                                                                                == 
                                                                                (0x380000U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                                    << 2U)) 
                                                                | ((2U 
                                                                    & (((((2U 
                                                                           < 
                                                                           (7U 
                                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                               >> 6U))) 
                                                                          | (IData)(
                                                                                (0x80U 
                                                                                == 
                                                                                (0x2000c0U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                                         | (IData)(
                                                                                (0x40U 
                                                                                == 
                                                                                (0x3000c0U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                                        | (IData)(
                                                                                (0x80000U 
                                                                                == 
                                                                                (0x380000U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                                       << 1U)) 
                                                                   | (1U 
                                                                      & ((((2U 
                                                                            < 
                                                                            (7U 
                                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                                >> 6U))) 
                                                                           | (IData)(
                                                                                (0x80U 
                                                                                == 
                                                                                (0x2000c0U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                                          | (IData)(
                                                                                (0x40U 
                                                                                == 
                                                                                (0x3000c0U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                                         | (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (0x380000U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_7.sv:370: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor: Assertion failed: 'A' channel PutFull contains invalid mask (connected at generators/rocket-chip/src/main/scala/subsystem/PeripheryBus.scala:53:7)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 370, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_7.sv:372: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 372, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__687(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__687\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___buffer_auto_out_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h210ddd23__0)) 
                     & (~ (((((((~ (IData)((0U != (3U 
                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                      >> 0x11U))))) 
                                | ((0x110U == (0x3ffU 
                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 9U))) 
                                   | ((0x111U == (0x3ffU 
                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 9U))) 
                                      | (0x112U == 
                                         (0x3ffU & 
                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                           >> 9U)))))) 
                               | (IData)(((0x20000U 
                                           == (0x7f000U 
                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                          & (5U > (7U 
                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                      >> 9U)))))) 
                              | (0x105U == (0x3ffU 
                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                               >> 9U)))) 
                             | (0x108U == (0x3ffU & 
                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                            >> 9U)))) 
                            | (0x200U == (0x3ffU & 
                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                           >> 9U)))) 
                           & ((7U != (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                            >> 6U))) 
                              & ((0U == ((0x1fffeU 
                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                             << 1U)) 
                                         | (1U & (~ 
                                                  (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 0x1fU))))) 
                                 | (0x10020U == (0x1ffffU 
                                                 & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                                     << 1U) 
                                                    | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                       >> 0x1fU))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_7.sv:376: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor: Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at generators/rocket-chip/src/main/scala/subsystem/PeripheryBus.scala:53:7)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 376, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_7.sv:378: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 378, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__688(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__688\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___buffer_auto_out_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h210ddd23__0)) 
                     & (~ (((~ (IData)((0U != (3U & 
                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                >> 0x11U))))) 
                            | ((0x110U == (0x3ffU & 
                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                            >> 9U))) 
                               | ((0x111U == (0x3ffU 
                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                 >> 9U))) 
                                  | (0x112U == (0x3ffU 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 9U)))))) 
                           | ((IData)(((0x20000U == 
                                        (0x7f000U & 
                                         vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                       & (5U > (7U 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 9U))))) 
                              | ((0x105U == (0x3ffU 
                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                >> 9U))) 
                                 | ((0x108U == (0x3ffU 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 9U))) 
                                    | (0x200U == (0x3ffU 
                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 9U))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_7.sv:382: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor: Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at generators/rocket-chip/src/main/scala/subsystem/PeripheryBus.scala:53:7)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 382, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_7.sv:384: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 384, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__689(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__689\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___buffer_auto_out_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h210ddd23__0)) 
                     & (0U != (0x3fU & ((~ ((IData)(0x3fU) 
                                            << (7U 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 6U)))) 
                                        & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                            << 0xdU) 
                                           | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                              >> 0x13U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_7.sv:388: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor: Assertion failed: 'A' channel PutPartial address not aligned to size (connected at generators/rocket-chip/src/main/scala/subsystem/PeripheryBus.scala:53:7)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 388, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_7.sv:390: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 390, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___buffer_auto_out_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h210ddd23__0)) 
                     & (0U != (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                     >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_7.sv:394: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor: Assertion failed: 'A' channel PutPartial carries invalid param (connected at generators/rocket-chip/src/main/scala/subsystem/PeripheryBus.scala:53:7)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 394, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_7.sv:396: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 396, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__690(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__690\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___buffer_auto_out_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h210ddd23__0)) 
                     & (0U != (0xffU & (((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                          << 0x10U) 
                                         | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                            >> 0x10U)) 
                                        & (~ ((0x80U 
                                               & (((((2U 
                                                      < 
                                                      (7U 
                                                       & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                          >> 6U))) 
                                                     | (IData)(
                                                               (0x200080U 
                                                                == 
                                                                (0x2000c0U 
                                                                 & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                    | (IData)(
                                                              (0x300040U 
                                                               == 
                                                               (0x3000c0U 
                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                   | (IData)(
                                                             (0x380000U 
                                                              == 
                                                              (0x380000U 
                                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                  << 7U)) 
                                              | ((0x40U 
                                                  & (((((2U 
                                                         < 
                                                         (7U 
                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                             >> 6U))) 
                                                        | (IData)(
                                                                  (0x200080U 
                                                                   == 
                                                                   (0x2000c0U 
                                                                    & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                       | (IData)(
                                                                 (0x300040U 
                                                                  == 
                                                                  (0x3000c0U 
                                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                      | (IData)(
                                                                (0x300000U 
                                                                 == 
                                                                 (0x380000U 
                                                                  & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                     << 6U)) 
                                                 | ((0x20U 
                                                     & (((((2U 
                                                            < 
                                                            (7U 
                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                >> 6U))) 
                                                           | (IData)(
                                                                     (0x200080U 
                                                                      == 
                                                                      (0x2000c0U 
                                                                       & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                          | (IData)(
                                                                    (0x200040U 
                                                                     == 
                                                                     (0x3000c0U 
                                                                      & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                         | (IData)(
                                                                   (0x280000U 
                                                                    == 
                                                                    (0x380000U 
                                                                     & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                        << 5U)) 
                                                    | ((0x10U 
                                                        & (((((2U 
                                                               < 
                                                               (7U 
                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                   >> 6U))) 
                                                              | (IData)(
                                                                        (0x200080U 
                                                                         == 
                                                                         (0x2000c0U 
                                                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                             | (IData)(
                                                                       (0x200040U 
                                                                        == 
                                                                        (0x3000c0U 
                                                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                            | (IData)(
                                                                      (0x200000U 
                                                                       == 
                                                                       (0x380000U 
                                                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                           << 4U)) 
                                                       | ((8U 
                                                           & (((((2U 
                                                                  < 
                                                                  (7U 
                                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                      >> 6U))) 
                                                                 | (IData)(
                                                                           (0x80U 
                                                                            == 
                                                                            (0x2000c0U 
                                                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                                | (IData)(
                                                                          (0x100040U 
                                                                           == 
                                                                           (0x3000c0U 
                                                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                               | (IData)(
                                                                         (0x180000U 
                                                                          == 
                                                                          (0x380000U 
                                                                           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                              << 3U)) 
                                                          | ((4U 
                                                              & (((((2U 
                                                                     < 
                                                                     (7U 
                                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                         >> 6U))) 
                                                                    | (IData)(
                                                                              (0x80U 
                                                                               == 
                                                                               (0x2000c0U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                                   | (IData)(
                                                                             (0x100040U 
                                                                              == 
                                                                              (0x3000c0U 
                                                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                                  | (IData)(
                                                                            (0x100000U 
                                                                             == 
                                                                             (0x380000U 
                                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                                 << 2U)) 
                                                             | ((2U 
                                                                 & (((((2U 
                                                                        < 
                                                                        (7U 
                                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                            >> 6U))) 
                                                                       | (IData)(
                                                                                (0x80U 
                                                                                == 
                                                                                (0x2000c0U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                                      | (IData)(
                                                                                (0x40U 
                                                                                == 
                                                                                (0x3000c0U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                                     | (IData)(
                                                                               (0x80000U 
                                                                                == 
                                                                                (0x380000U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                                    << 1U)) 
                                                                | (1U 
                                                                   & ((((2U 
                                                                         < 
                                                                         (7U 
                                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                             >> 6U))) 
                                                                        | (IData)(
                                                                                (0x80U 
                                                                                == 
                                                                                (0x2000c0U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                                       | (IData)(
                                                                                (0x40U 
                                                                                == 
                                                                                (0x3000c0U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                                      | (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (0x380000U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]))))))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_7.sv:400: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor: Assertion failed: 'A' channel PutPartial contains invalid mask (connected at generators/rocket-chip/src/main/scala/subsystem/PeripheryBus.scala:53:7)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 400, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_7.sv:402: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 402, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__691(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__691\n"); );
    // Body
    if (VL_UNLIKELY(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___buffer_auto_out_a_valid) 
                     & (IData)(vlSelf->__VdfgTmp_h21391d46__0)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_7.sv:406: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor: Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at generators/rocket-chip/src/main/scala/subsystem/PeripheryBus.scala:53:7)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 406, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_7.sv:408: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 408, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___buffer_auto_out_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h21391d46__0)) 
                     & (~ (((~ (IData)((0U != (3U & 
                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                >> 0x11U))))) 
                            | ((0x110U == (0x3ffU & 
                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                            >> 9U))) 
                               | ((0x111U == (0x3ffU 
                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                 >> 9U))) 
                                  | (0x112U == (0x3ffU 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 9U)))))) 
                           | ((IData)(((0x20000U == 
                                        (0x7f000U & 
                                         vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                       & (5U > (7U 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 9U))))) 
                              | ((0x105U == (0x3ffU 
                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                >> 9U))) 
                                 | ((0x108U == (0x3ffU 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 9U))) 
                                    | (0x200U == (0x3ffU 
                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 9U))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_7.sv:412: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor: Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at generators/rocket-chip/src/main/scala/subsystem/PeripheryBus.scala:53:7)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 412, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_7.sv:414: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 414, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__692(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__692\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___buffer_auto_out_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h21391d46__0)) 
                     & (0U != (0x3fU & ((~ ((IData)(0x3fU) 
                                            << (7U 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 6U)))) 
                                        & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                            << 0xdU) 
                                           | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                              >> 0x13U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_7.sv:418: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor: Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at generators/rocket-chip/src/main/scala/subsystem/PeripheryBus.scala:53:7)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 418, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_7.sv:420: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 420, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___buffer_auto_out_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h21391d46__0)) 
                     & (4U < (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                    >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_7.sv:424: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor: Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at generators/rocket-chip/src/main/scala/subsystem/PeripheryBus.scala:53:7)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 424, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_7.sv:426: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 426, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__693(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__693\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___buffer_auto_out_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h21391d46__0)) 
                     & ((0xffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                  >> 0x10U)) != ((0x80U 
                                                  & (((((2U 
                                                         < 
                                                         (7U 
                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                             >> 6U))) 
                                                        | (IData)(
                                                                  (0x200080U 
                                                                   == 
                                                                   (0x2000c0U 
                                                                    & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                       | (IData)(
                                                                 (0x300040U 
                                                                  == 
                                                                  (0x3000c0U 
                                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                      | (IData)(
                                                                (0x380000U 
                                                                 == 
                                                                 (0x380000U 
                                                                  & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                     << 7U)) 
                                                 | ((0x40U 
                                                     & (((((2U 
                                                            < 
                                                            (7U 
                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                >> 6U))) 
                                                           | (IData)(
                                                                     (0x200080U 
                                                                      == 
                                                                      (0x2000c0U 
                                                                       & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                          | (IData)(
                                                                    (0x300040U 
                                                                     == 
                                                                     (0x3000c0U 
                                                                      & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                         | (IData)(
                                                                   (0x300000U 
                                                                    == 
                                                                    (0x380000U 
                                                                     & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                        << 6U)) 
                                                    | ((0x20U 
                                                        & (((((2U 
                                                               < 
                                                               (7U 
                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                   >> 6U))) 
                                                              | (IData)(
                                                                        (0x200080U 
                                                                         == 
                                                                         (0x2000c0U 
                                                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                             | (IData)(
                                                                       (0x200040U 
                                                                        == 
                                                                        (0x3000c0U 
                                                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                            | (IData)(
                                                                      (0x280000U 
                                                                       == 
                                                                       (0x380000U 
                                                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                           << 5U)) 
                                                       | ((0x10U 
                                                           & (((((2U 
                                                                  < 
                                                                  (7U 
                                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                      >> 6U))) 
                                                                 | (IData)(
                                                                           (0x200080U 
                                                                            == 
                                                                            (0x2000c0U 
                                                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                                | (IData)(
                                                                          (0x200040U 
                                                                           == 
                                                                           (0x3000c0U 
                                                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                               | (IData)(
                                                                         (0x200000U 
                                                                          == 
                                                                          (0x380000U 
                                                                           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                              << 4U)) 
                                                          | ((8U 
                                                              & (((((2U 
                                                                     < 
                                                                     (7U 
                                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                         >> 6U))) 
                                                                    | (IData)(
                                                                              (0x80U 
                                                                               == 
                                                                               (0x2000c0U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                                   | (IData)(
                                                                             (0x100040U 
                                                                              == 
                                                                              (0x3000c0U 
                                                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                                  | (IData)(
                                                                            (0x180000U 
                                                                             == 
                                                                             (0x380000U 
                                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                                 << 3U)) 
                                                             | ((4U 
                                                                 & (((((2U 
                                                                        < 
                                                                        (7U 
                                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                            >> 6U))) 
                                                                       | (IData)(
                                                                                (0x80U 
                                                                                == 
                                                                                (0x2000c0U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                                      | (IData)(
                                                                                (0x100040U 
                                                                                == 
                                                                                (0x3000c0U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                                     | (IData)(
                                                                               (0x100000U 
                                                                                == 
                                                                                (0x380000U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                                    << 2U)) 
                                                                | ((2U 
                                                                    & (((((2U 
                                                                           < 
                                                                           (7U 
                                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                               >> 6U))) 
                                                                          | (IData)(
                                                                                (0x80U 
                                                                                == 
                                                                                (0x2000c0U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                                         | (IData)(
                                                                                (0x40U 
                                                                                == 
                                                                                (0x3000c0U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                                        | (IData)(
                                                                                (0x80000U 
                                                                                == 
                                                                                (0x380000U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                                       << 1U)) 
                                                                   | (1U 
                                                                      & ((((2U 
                                                                            < 
                                                                            (7U 
                                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                                >> 6U))) 
                                                                           | (IData)(
                                                                                (0x80U 
                                                                                == 
                                                                                (0x2000c0U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                                          | (IData)(
                                                                                (0x40U 
                                                                                == 
                                                                                (0x3000c0U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                                         | (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (0x380000U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_7.sv:430: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor: Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at generators/rocket-chip/src/main/scala/subsystem/PeripheryBus.scala:53:7)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 430, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_7.sv:432: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 432, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__694(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__694\n"); );
    // Body
    if (VL_UNLIKELY(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___buffer_auto_out_a_valid) 
                     & (IData)(vlSelf->__VdfgTmp_h22d9ab8e__0)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_7.sv:436: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor: Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at generators/rocket-chip/src/main/scala/subsystem/PeripheryBus.scala:53:7)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 436, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_7.sv:438: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 438, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___buffer_auto_out_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h22d9ab8e__0)) 
                     & (~ (((~ (IData)((0U != (3U & 
                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                >> 0x11U))))) 
                            | ((0x110U == (0x3ffU & 
                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                            >> 9U))) 
                               | ((0x111U == (0x3ffU 
                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                 >> 9U))) 
                                  | (0x112U == (0x3ffU 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 9U)))))) 
                           | ((IData)(((0x20000U == 
                                        (0x7f000U & 
                                         vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                       & (5U > (7U 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 9U))))) 
                              | ((0x105U == (0x3ffU 
                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                >> 9U))) 
                                 | ((0x108U == (0x3ffU 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 9U))) 
                                    | (0x200U == (0x3ffU 
                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 9U))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_7.sv:442: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor: Assertion failed: 'A' channel Logical carries invalid source ID (connected at generators/rocket-chip/src/main/scala/subsystem/PeripheryBus.scala:53:7)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 442, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_7.sv:444: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 444, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__695(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__695\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___buffer_auto_out_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h22d9ab8e__0)) 
                     & (0U != (0x3fU & ((~ ((IData)(0x3fU) 
                                            << (7U 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 6U)))) 
                                        & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                            << 0xdU) 
                                           | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                              >> 0x13U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_7.sv:448: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor: Assertion failed: 'A' channel Logical address not aligned to size (connected at generators/rocket-chip/src/main/scala/subsystem/PeripheryBus.scala:53:7)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 448, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_7.sv:450: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 450, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___buffer_auto_out_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h22d9ab8e__0)) 
                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                        >> 5U)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_7.sv:454: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor: Assertion failed: 'A' channel Logical carries invalid opcode param (connected at generators/rocket-chip/src/main/scala/subsystem/PeripheryBus.scala:53:7)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 454, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_7.sv:456: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 456, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__696(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__696\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___buffer_auto_out_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h22d9ab8e__0)) 
                     & ((0xffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                  >> 0x10U)) != ((0x80U 
                                                  & (((((2U 
                                                         < 
                                                         (7U 
                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                             >> 6U))) 
                                                        | (IData)(
                                                                  (0x200080U 
                                                                   == 
                                                                   (0x2000c0U 
                                                                    & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                       | (IData)(
                                                                 (0x300040U 
                                                                  == 
                                                                  (0x3000c0U 
                                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                      | (IData)(
                                                                (0x380000U 
                                                                 == 
                                                                 (0x380000U 
                                                                  & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                     << 7U)) 
                                                 | ((0x40U 
                                                     & (((((2U 
                                                            < 
                                                            (7U 
                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                >> 6U))) 
                                                           | (IData)(
                                                                     (0x200080U 
                                                                      == 
                                                                      (0x2000c0U 
                                                                       & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                          | (IData)(
                                                                    (0x300040U 
                                                                     == 
                                                                     (0x3000c0U 
                                                                      & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                         | (IData)(
                                                                   (0x300000U 
                                                                    == 
                                                                    (0x380000U 
                                                                     & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                        << 6U)) 
                                                    | ((0x20U 
                                                        & (((((2U 
                                                               < 
                                                               (7U 
                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                   >> 6U))) 
                                                              | (IData)(
                                                                        (0x200080U 
                                                                         == 
                                                                         (0x2000c0U 
                                                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                             | (IData)(
                                                                       (0x200040U 
                                                                        == 
                                                                        (0x3000c0U 
                                                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                            | (IData)(
                                                                      (0x280000U 
                                                                       == 
                                                                       (0x380000U 
                                                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                           << 5U)) 
                                                       | ((0x10U 
                                                           & (((((2U 
                                                                  < 
                                                                  (7U 
                                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                      >> 6U))) 
                                                                 | (IData)(
                                                                           (0x200080U 
                                                                            == 
                                                                            (0x2000c0U 
                                                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                                | (IData)(
                                                                          (0x200040U 
                                                                           == 
                                                                           (0x3000c0U 
                                                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                               | (IData)(
                                                                         (0x200000U 
                                                                          == 
                                                                          (0x380000U 
                                                                           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                              << 4U)) 
                                                          | ((8U 
                                                              & (((((2U 
                                                                     < 
                                                                     (7U 
                                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                         >> 6U))) 
                                                                    | (IData)(
                                                                              (0x80U 
                                                                               == 
                                                                               (0x2000c0U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                                   | (IData)(
                                                                             (0x100040U 
                                                                              == 
                                                                              (0x3000c0U 
                                                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                                  | (IData)(
                                                                            (0x180000U 
                                                                             == 
                                                                             (0x380000U 
                                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                                 << 3U)) 
                                                             | ((4U 
                                                                 & (((((2U 
                                                                        < 
                                                                        (7U 
                                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                            >> 6U))) 
                                                                       | (IData)(
                                                                                (0x80U 
                                                                                == 
                                                                                (0x2000c0U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                                      | (IData)(
                                                                                (0x100040U 
                                                                                == 
                                                                                (0x3000c0U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                                     | (IData)(
                                                                               (0x100000U 
                                                                                == 
                                                                                (0x380000U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                                    << 2U)) 
                                                                | ((2U 
                                                                    & (((((2U 
                                                                           < 
                                                                           (7U 
                                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                               >> 6U))) 
                                                                          | (IData)(
                                                                                (0x80U 
                                                                                == 
                                                                                (0x2000c0U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                                         | (IData)(
                                                                                (0x40U 
                                                                                == 
                                                                                (0x3000c0U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                                        | (IData)(
                                                                                (0x80000U 
                                                                                == 
                                                                                (0x380000U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                                       << 1U)) 
                                                                   | (1U 
                                                                      & ((((2U 
                                                                            < 
                                                                            (7U 
                                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                                >> 6U))) 
                                                                           | (IData)(
                                                                                (0x80U 
                                                                                == 
                                                                                (0x2000c0U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                                          | (IData)(
                                                                                (0x40U 
                                                                                == 
                                                                                (0x3000c0U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                                         | (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (0x380000U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_7.sv:460: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor: Assertion failed: 'A' channel Logical contains invalid mask (connected at generators/rocket-chip/src/main/scala/subsystem/PeripheryBus.scala:53:7)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 460, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_7.sv:462: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 462, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__697(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__697\n"); );
    // Body
    if (VL_UNLIKELY(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___buffer_auto_out_a_valid) 
                     & (IData)(vlSelf->__VdfgTmp_he9c6a528__0)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_7.sv:466: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor: Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at generators/rocket-chip/src/main/scala/subsystem/PeripheryBus.scala:53:7)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 466, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_7.sv:468: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 468, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___buffer_auto_out_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_he9c6a528__0)) 
                     & (~ (((~ (IData)((0U != (3U & 
                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                >> 0x11U))))) 
                            | ((0x110U == (0x3ffU & 
                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                            >> 9U))) 
                               | ((0x111U == (0x3ffU 
                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                 >> 9U))) 
                                  | (0x112U == (0x3ffU 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 9U)))))) 
                           | ((IData)(((0x20000U == 
                                        (0x7f000U & 
                                         vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                       & (5U > (7U 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 9U))))) 
                              | ((0x105U == (0x3ffU 
                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                >> 9U))) 
                                 | ((0x108U == (0x3ffU 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 9U))) 
                                    | (0x200U == (0x3ffU 
                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 9U))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_7.sv:472: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor: Assertion failed: 'A' channel Hint carries invalid source ID (connected at generators/rocket-chip/src/main/scala/subsystem/PeripheryBus.scala:53:7)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 472, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_7.sv:474: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 474, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__698(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__698\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___buffer_auto_out_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_he9c6a528__0)) 
                     & (0U != (0x3fU & ((~ ((IData)(0x3fU) 
                                            << (7U 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 6U)))) 
                                        & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                            << 0xdU) 
                                           | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                              >> 0x13U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_7.sv:478: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor: Assertion failed: 'A' channel Hint address not aligned to size (connected at generators/rocket-chip/src/main/scala/subsystem/PeripheryBus.scala:53:7)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 478, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_7.sv:480: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 480, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___buffer_auto_out_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_he9c6a528__0)) 
                     & (0U != (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                     >> 4U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_7.sv:484: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor: Assertion failed: 'A' channel Hint carries invalid opcode param (connected at generators/rocket-chip/src/main/scala/subsystem/PeripheryBus.scala:53:7)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 484, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_7.sv:486: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 486, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__699(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__699\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___buffer_auto_out_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_he9c6a528__0)) 
                     & ((0xffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                  >> 0x10U)) != ((0x80U 
                                                  & (((((2U 
                                                         < 
                                                         (7U 
                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                             >> 6U))) 
                                                        | (IData)(
                                                                  (0x200080U 
                                                                   == 
                                                                   (0x2000c0U 
                                                                    & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                       | (IData)(
                                                                 (0x300040U 
                                                                  == 
                                                                  (0x3000c0U 
                                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                      | (IData)(
                                                                (0x380000U 
                                                                 == 
                                                                 (0x380000U 
                                                                  & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                     << 7U)) 
                                                 | ((0x40U 
                                                     & (((((2U 
                                                            < 
                                                            (7U 
                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                >> 6U))) 
                                                           | (IData)(
                                                                     (0x200080U 
                                                                      == 
                                                                      (0x2000c0U 
                                                                       & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                          | (IData)(
                                                                    (0x300040U 
                                                                     == 
                                                                     (0x3000c0U 
                                                                      & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                         | (IData)(
                                                                   (0x300000U 
                                                                    == 
                                                                    (0x380000U 
                                                                     & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                        << 6U)) 
                                                    | ((0x20U 
                                                        & (((((2U 
                                                               < 
                                                               (7U 
                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                   >> 6U))) 
                                                              | (IData)(
                                                                        (0x200080U 
                                                                         == 
                                                                         (0x2000c0U 
                                                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                             | (IData)(
                                                                       (0x200040U 
                                                                        == 
                                                                        (0x3000c0U 
                                                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                            | (IData)(
                                                                      (0x280000U 
                                                                       == 
                                                                       (0x380000U 
                                                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                           << 5U)) 
                                                       | ((0x10U 
                                                           & (((((2U 
                                                                  < 
                                                                  (7U 
                                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                      >> 6U))) 
                                                                 | (IData)(
                                                                           (0x200080U 
                                                                            == 
                                                                            (0x2000c0U 
                                                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                                | (IData)(
                                                                          (0x200040U 
                                                                           == 
                                                                           (0x3000c0U 
                                                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                               | (IData)(
                                                                         (0x200000U 
                                                                          == 
                                                                          (0x380000U 
                                                                           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                              << 4U)) 
                                                          | ((8U 
                                                              & (((((2U 
                                                                     < 
                                                                     (7U 
                                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                         >> 6U))) 
                                                                    | (IData)(
                                                                              (0x80U 
                                                                               == 
                                                                               (0x2000c0U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                                   | (IData)(
                                                                             (0x100040U 
                                                                              == 
                                                                              (0x3000c0U 
                                                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                                  | (IData)(
                                                                            (0x180000U 
                                                                             == 
                                                                             (0x380000U 
                                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                                 << 3U)) 
                                                             | ((4U 
                                                                 & (((((2U 
                                                                        < 
                                                                        (7U 
                                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                            >> 6U))) 
                                                                       | (IData)(
                                                                                (0x80U 
                                                                                == 
                                                                                (0x2000c0U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                                      | (IData)(
                                                                                (0x100040U 
                                                                                == 
                                                                                (0x3000c0U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                                     | (IData)(
                                                                               (0x100000U 
                                                                                == 
                                                                                (0x380000U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                                    << 2U)) 
                                                                | ((2U 
                                                                    & (((((2U 
                                                                           < 
                                                                           (7U 
                                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                               >> 6U))) 
                                                                          | (IData)(
                                                                                (0x80U 
                                                                                == 
                                                                                (0x2000c0U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                                         | (IData)(
                                                                                (0x40U 
                                                                                == 
                                                                                (0x3000c0U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                                        | (IData)(
                                                                                (0x80000U 
                                                                                == 
                                                                                (0x380000U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                                       << 1U)) 
                                                                   | (1U 
                                                                      & ((((2U 
                                                                            < 
                                                                            (7U 
                                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                                >> 6U))) 
                                                                           | (IData)(
                                                                                (0x80U 
                                                                                == 
                                                                                (0x2000c0U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                                          | (IData)(
                                                                                (0x40U 
                                                                                == 
                                                                                (0x3000c0U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                                         | (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (0x380000U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_7.sv:490: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor: Assertion failed: 'A' channel Hint contains invalid mask (connected at generators/rocket-chip/src/main/scala/subsystem/PeripheryBus.scala:53:7)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 490, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_7.sv:492: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 492, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__700(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__700\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___buffer_auto_out_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_he9c6a528__0)) 
                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[3U] 
                        >> 0x18U)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_7.sv:496: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor: Assertion failed: 'A' channel Hint is corrupt (connected at generators/rocket-chip/src/main/scala/subsystem/PeripheryBus.scala:53:7)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 496, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_7.sv:498: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 498, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_valid) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset))) 
                     & (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_opcode))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_7.sv:502: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor: Assertion failed: 'D' channel has invalid opcode (connected at generators/rocket-chip/src/main/scala/subsystem/PeripheryBus.scala:53:7)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 502, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_7.sv:504: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 504, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__701(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__701\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_valid) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT____VdfgTmp_h3f6fcfea__0)) 
                     & (~ ((0U == (3U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_source) 
                                         >> 8U))) | 
                           ((0x110U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_source)) 
                            | ((0x111U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_source)) 
                               | ((0x112U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_source)) 
                                  | ((IData)(((0x100U 
                                               == (0x3f8U 
                                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_source))) 
                                              & (5U 
                                                 > 
                                                 (7U 
                                                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_source))))) 
                                     | ((0x105U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_source)) 
                                        | ((0x108U 
                                            == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_source)) 
                                           | (0x200U 
                                              == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_source))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_7.sv:508: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor: Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at generators/rocket-chip/src/main/scala/subsystem/PeripheryBus.scala:53:7)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 508, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_7.sv:510: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 510, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_valid) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT____VdfgTmp_h3f6fcfea__0)) 
                     & (3U > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_size))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_7.sv:514: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor: Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at generators/rocket-chip/src/main/scala/subsystem/PeripheryBus.scala:53:7)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 514, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_7.sv:516: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 516, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__702(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__702\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_opcode)))) 
                     & (~ ((0U == (3U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_source) 
                                         >> 8U))) | 
                           ((0x110U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_source)) 
                            | ((0x111U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_source)) 
                               | ((0x112U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_source)) 
                                  | ((IData)(((0x100U 
                                               == (0x3f8U 
                                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_source))) 
                                              & (5U 
                                                 > 
                                                 (7U 
                                                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_source))))) 
                                     | ((0x105U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_source)) 
                                        | ((0x108U 
                                            == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_source)) 
                                           | (0x200U 
                                              == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_source))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_7.sv:520: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor: Assertion failed: 'D' channel Grant carries invalid source ID (connected at generators/rocket-chip/src/main/scala/subsystem/PeripheryBus.scala:53:7)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 520, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_7.sv:522: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 522, "");
        }
    }
    if (VL_UNLIKELY(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_valid) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                        & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_opcode)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_7.sv:526: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor: Assertion failed: 'D' channel Grant carries invalid sink ID (connected at generators/rocket-chip/src/main/scala/subsystem/PeripheryBus.scala:53:7)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 526, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_7.sv:528: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 528, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__703(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__703\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_opcode)))) 
                     & (3U > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_size))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_7.sv:532: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor: Assertion failed: 'D' channel Grant smaller than a beat (connected at generators/rocket-chip/src/main/scala/subsystem/PeripheryBus.scala:53:7)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 532, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_7.sv:534: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 534, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_opcode)))) 
                     & (~ ((0U == (3U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_source) 
                                         >> 8U))) | 
                           ((0x110U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_source)) 
                            | ((0x111U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_source)) 
                               | ((0x112U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_source)) 
                                  | ((IData)(((0x100U 
                                               == (0x3f8U 
                                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_source))) 
                                              & (5U 
                                                 > 
                                                 (7U 
                                                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_source))))) 
                                     | ((0x105U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_source)) 
                                        | ((0x108U 
                                            == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_source)) 
                                           | (0x200U 
                                              == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_source))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_7.sv:538: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor: Assertion failed: 'D' channel GrantData carries invalid source ID (connected at generators/rocket-chip/src/main/scala/subsystem/PeripheryBus.scala:53:7)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 538, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_7.sv:540: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 540, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__704(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__704\n"); );
    // Body
    if (VL_UNLIKELY(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_valid) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                        & (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_opcode)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_7.sv:544: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor: Assertion failed: 'D' channel GrantData carries invalid sink ID (connected at generators/rocket-chip/src/main/scala/subsystem/PeripheryBus.scala:53:7)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 544, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_7.sv:546: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 546, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_opcode)))) 
                     & (3U > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_size))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_7.sv:550: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor: Assertion failed: 'D' channel GrantData smaller than a beat (connected at generators/rocket-chip/src/main/scala/subsystem/PeripheryBus.scala:53:7)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 550, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_7.sv:552: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 552, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__705(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__705\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_valid) 
                       & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset))) 
                     & (~ ((0U == (3U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_source) 
                                         >> 8U))) | 
                           ((0x110U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_source)) 
                            | ((0x111U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_source)) 
                               | ((0x112U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_source)) 
                                  | ((IData)(((0x100U 
                                               == (0x3f8U 
                                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_source))) 
                                              & (5U 
                                                 > 
                                                 (7U 
                                                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_source))))) 
                                     | ((0x105U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_source)) 
                                        | ((0x108U 
                                            == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_source)) 
                                           | (0x200U 
                                              == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_source))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_7.sv:556: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor: Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at generators/rocket-chip/src/main/scala/subsystem/PeripheryBus.scala:53:7)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 556, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_7.sv:558: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 558, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_valid) 
                       & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset))) 
                     & (~ ((0U == (3U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_source) 
                                         >> 8U))) | 
                           ((0x110U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_source)) 
                            | ((0x111U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_source)) 
                               | ((0x112U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_source)) 
                                  | ((IData)(((0x100U 
                                               == (0x3f8U 
                                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_source))) 
                                              & (5U 
                                                 > 
                                                 (7U 
                                                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_source))))) 
                                     | ((0x105U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_source)) 
                                        | ((0x108U 
                                            == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_source)) 
                                           | (0x200U 
                                              == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_source))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_7.sv:562: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor: Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at generators/rocket-chip/src/main/scala/subsystem/PeripheryBus.scala:53:7)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 562, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_7.sv:564: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 564, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__706(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__706\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_valid) 
                       & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset))) 
                     & (~ ((0U == (3U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_source) 
                                         >> 8U))) | 
                           ((0x110U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_source)) 
                            | ((0x111U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_source)) 
                               | ((0x112U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_source)) 
                                  | ((IData)(((0x100U 
                                               == (0x3f8U 
                                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_source))) 
                                              & (5U 
                                                 > 
                                                 (7U 
                                                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_source))))) 
                                     | ((0x105U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_source)) 
                                        | ((0x108U 
                                            == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_source)) 
                                           | (0x200U 
                                              == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_source))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_7.sv:568: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor: Assertion failed: 'D' channel HintAck carries invalid source ID (connected at generators/rocket-chip/src/main/scala/subsystem/PeripheryBus.scala:53:7)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 568, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_7.sv:570: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 570, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___buffer_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__a_first_counter)))) 
                     & ((7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]) 
                        != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__opcode))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_7.sv:574: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor: Assertion failed: 'A' channel opcode changed within multibeat operation (connected at generators/rocket-chip/src/main/scala/subsystem/PeripheryBus.scala:53:7)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 574, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_7.sv:576: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 576, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__707(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__707\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___buffer_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__a_first_counter)))) 
                     & ((7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                               >> 3U)) != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__param))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_7.sv:580: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor: Assertion failed: 'A' channel param changed within multibeat operation (connected at generators/rocket-chip/src/main/scala/subsystem/PeripheryBus.scala:53:7)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 580, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_7.sv:582: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 582, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___buffer_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__a_first_counter)))) 
                     & ((7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                               >> 6U)) != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__size))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_7.sv:586: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor: Assertion failed: 'A' channel size changed within multibeat operation (connected at generators/rocket-chip/src/main/scala/subsystem/PeripheryBus.scala:53:7)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 586, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_7.sv:588: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 588, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__708(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__708\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___buffer_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__a_first_counter)))) 
                     & ((0x3ffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                   >> 9U)) != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__source))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_7.sv:592: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor: Assertion failed: 'A' channel source changed within multibeat operation (connected at generators/rocket-chip/src/main/scala/subsystem/PeripheryBus.scala:53:7)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 592, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_7.sv:594: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 594, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___buffer_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__a_first_counter)))) 
                     & ((0x1fffffffU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                         << 0xdU) | 
                                        (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                         >> 0x13U))) 
                        != vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__address)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_7.sv:598: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor: Assertion failed: 'A' channel address changed with multibeat operation (connected at generators/rocket-chip/src/main/scala/subsystem/PeripheryBus.scala:53:7)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 598, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_7.sv:600: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 600, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__709(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__709\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter)))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_opcode) 
                        != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__opcode_1))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_7.sv:604: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor: Assertion failed: 'D' channel opcode changed within multibeat operation (connected at generators/rocket-chip/src/main/scala/subsystem/PeripheryBus.scala:53:7)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 604, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_7.sv:606: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 606, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter)))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_size) 
                        != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__size_1))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_7.sv:610: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor: Assertion failed: 'D' channel size changed within multibeat operation (connected at generators/rocket-chip/src/main/scala/subsystem/PeripheryBus.scala:53:7)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 610, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_7.sv:612: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 612, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__710(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__710\n"); );
    // Init
    VlWide<17>/*543:0*/ __Vtemp_1;
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter)))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_source) 
                        != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__source_1))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_7.sv:616: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor: Assertion failed: 'D' channel source changed within multibeat operation (connected at generators/rocket-chip/src/main/scala/subsystem/PeripheryBus.scala:53:7)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 616, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_7.sv:618: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 618, "");
        }
    }
    VL_SHIFTR_WWI(513,513,10, __Vtemp_1, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__inflight, 
                  (0x3ffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                             >> 9U)));
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___GEN_0) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset))) 
                     & (VTestDriver__ConstPool__CONST_h00a543f7_0[0U] 
                        & __Vtemp_1[0U])))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_7.sv:622: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor: Assertion failed: 'A' channel re-used a source ID (connected at generators/rocket-chip/src/main/scala/subsystem/PeripheryBus.scala:53:7)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 622, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_7.sv:624: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 624, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__711(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__711\n"); );
    // Init
    VlWide<17>/*543:0*/ __Vtemp_1;
    // Body
    VL_SHIFTR_WWI(513,513,10, __Vtemp_1, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__inflight, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_source));
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___GEN_29) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset))) 
                     & (~ ((VTestDriver__ConstPool__CONST_h00a543f7_0[0U] 
                            & __Vtemp_1[0U]) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__same_cycle_resp)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_7.sv:628: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at generators/rocket-chip/src/main/scala/subsystem/PeripheryBus.scala:53:7)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 628, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_7.sv:630: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 630, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___GEN_29) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__same_cycle_resp))) 
                     & (~ (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_opcode) 
                            == ((0x17U >= (0x1fU & 
                                           ((IData)(3U) 
                                            * (7U & 
                                               vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]))))
                                 ? (7U & (0x911240U 
                                          >> (0x1fU 
                                              & ((IData)(3U) 
                                                 * 
                                                 (7U 
                                                  & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))))
                                 : 0U)) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_opcode) 
                                           == ((0x17U 
                                                >= 
                                                (0x1fU 
                                                 & ((IData)(3U) 
                                                    * 
                                                    (7U 
                                                     & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]))))
                                                ? (7U 
                                                   & (0x951240U 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(3U) 
                                                          * 
                                                          (7U 
                                                           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))))
                                                : 0U))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_7.sv:634: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor: Assertion failed: 'D' channel contains improper opcode response (connected at generators/rocket-chip/src/main/scala/subsystem/PeripheryBus.scala:53:7)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 634, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_7.sv:636: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 636, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__712(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__712\n"); );
    // Init
    VlWide<65>/*2079:0*/ __Vtemp_1;
    VlWide<65>/*2079:0*/ __Vtemp_2;
    VlWide<65>/*2079:0*/ __Vtemp_3;
    VlWide<65>/*2079:0*/ __Vtemp_4;
    VlWide<65>/*2079:0*/ __Vtemp_5;
    VlWide<65>/*2079:0*/ __Vtemp_6;
    VlWide<65>/*2079:0*/ __Vtemp_7;
    VlWide<65>/*2079:0*/ __Vtemp_8;
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___GEN_29) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__same_cycle_resp))) 
                     & ((7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                               >> 6U)) != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_size))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_7.sv:640: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor: Assertion failed: 'D' channel contains improper response size (connected at generators/rocket-chip/src/main/scala/subsystem/PeripheryBus.scala:53:7)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 640, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_7.sv:642: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 642, "");
        }
    }
    VL_SHIFTR_WWI(2052,2052,12, __Vtemp_1, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__inflight_opcodes, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_source) 
                   << 2U));
    VL_AND_W(65, __Vtemp_2, VTestDriver__ConstPool__CONST_h614f9cb9_0, __Vtemp_1);
    VL_SHIFTR_WWI(2052,2052,12, __Vtemp_3, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__inflight_opcodes, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_source) 
                   << 2U));
    VL_AND_W(65, __Vtemp_4, VTestDriver__ConstPool__CONST_h614f9cb9_0, __Vtemp_3);
    VL_SHIFTR_WWI(2052,2052,12, __Vtemp_5, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__inflight_opcodes, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_source) 
                   << 2U));
    VL_AND_W(65, __Vtemp_6, VTestDriver__ConstPool__CONST_h614f9cb9_0, __Vtemp_5);
    VL_SHIFTR_WWI(2052,2052,12, __Vtemp_7, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__inflight_opcodes, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_source) 
                   << 2U));
    VL_AND_W(65, __Vtemp_8, VTestDriver__ConstPool__CONST_h614f9cb9_0, __Vtemp_7);
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___GEN_29) 
                      & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__same_cycle_resp)) 
                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))) 
                     & (~ (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_opcode) 
                            == ((0x17U >= (0x1fU & 
                                           ((IData)(3U) 
                                            * (7U & 
                                               (__Vtemp_2[0U] 
                                                >> 1U)))))
                                 ? (7U & (0x911240U 
                                          >> (0x1fU 
                                              & ((IData)(3U) 
                                                 * 
                                                 (7U 
                                                  & (__Vtemp_4[0U] 
                                                     >> 1U))))))
                                 : 0U)) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_opcode) 
                                           == ((0x17U 
                                                >= 
                                                (0x1fU 
                                                 & ((IData)(3U) 
                                                    * 
                                                    (7U 
                                                     & (__Vtemp_6[0U] 
                                                        >> 1U)))))
                                                ? (7U 
                                                   & (0x951240U 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(3U) 
                                                          * 
                                                          (7U 
                                                           & (__Vtemp_8[0U] 
                                                              >> 1U))))))
                                                : 0U))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_7.sv:646: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor: Assertion failed: 'D' channel contains improper opcode response (connected at generators/rocket-chip/src/main/scala/subsystem/PeripheryBus.scala:53:7)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 646, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_7.sv:648: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 648, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__713(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__713\n"); );
    // Init
    VlWide<65>/*2079:0*/ __Vtemp_1;
    VlWide<65>/*2079:0*/ __Vtemp_2;
    // Body
    VL_SHIFTR_WWI(2052,2052,12, __Vtemp_1, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__inflight_sizes, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_source) 
                   << 2U));
    VL_AND_W(65, __Vtemp_2, VTestDriver__ConstPool__CONST_h614f9cb9_0, __Vtemp_1);
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___GEN_29) 
                      & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__same_cycle_resp)) 
                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_size) 
                        != (7U & (__Vtemp_2[0U] >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_7.sv:652: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor: Assertion failed: 'D' channel contains improper response size (connected at generators/rocket-chip/src/main/scala/subsystem/PeripheryBus.scala:53:7)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 652, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_7.sv:654: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 654, "");
        }
    }
    if (VL_UNLIKELY(((((((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_valid) 
                           & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_1))) 
                          & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__a_first_counter_1))) 
                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___buffer_auto_out_a_valid)) 
                        & ((0x3ffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                      >> 9U)) == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_source))) 
                       & (6U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset))) 
                     & (~ ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___buffer_auto_out_d_ready)) 
                           | (((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                   >> 0xfU)) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___coupler_to_bootaddressreg_auto_tl_in_a_ready)) 
                              | ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                  >> 0xfU) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___coupler_to_device_named_uart_0_auto_tl_in_a_ready)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_7.sv:658: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor: Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 658, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_7.sv:660: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 660, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__714(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__714\n"); );
    // Init
    VlWide<17>/*543:0*/ __Vtemp_1;
    // Body
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)) 
                           & (~ (((0U == ((((((((((
                                                   (((((((VTestDriver__ConstPool__CONST_h3dcda146_0[0U] 
                                                          ^ 
                                                          vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__inflight[0U]) 
                                                         | (VTestDriver__ConstPool__CONST_h3dcda146_0[1U] 
                                                            ^ 
                                                            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__inflight[1U])) 
                                                        | (VTestDriver__ConstPool__CONST_h3dcda146_0[2U] 
                                                           ^ 
                                                           vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__inflight[2U])) 
                                                       | (VTestDriver__ConstPool__CONST_h3dcda146_0[3U] 
                                                          ^ 
                                                          vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__inflight[3U])) 
                                                      | (VTestDriver__ConstPool__CONST_h3dcda146_0[4U] 
                                                         ^ 
                                                         vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__inflight[4U])) 
                                                     | (VTestDriver__ConstPool__CONST_h3dcda146_0[5U] 
                                                        ^ 
                                                        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__inflight[5U])) 
                                                    | (VTestDriver__ConstPool__CONST_h3dcda146_0[6U] 
                                                       ^ 
                                                       vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__inflight[6U])) 
                                                   | (VTestDriver__ConstPool__CONST_h3dcda146_0[7U] 
                                                      ^ 
                                                      vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__inflight[7U])) 
                                                  | (VTestDriver__ConstPool__CONST_h3dcda146_0[8U] 
                                                     ^ 
                                                     vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__inflight[8U])) 
                                                 | (VTestDriver__ConstPool__CONST_h3dcda146_0[9U] 
                                                    ^ 
                                                    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__inflight[9U])) 
                                                | (VTestDriver__ConstPool__CONST_h3dcda146_0[0xaU] 
                                                   ^ 
                                                   vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__inflight[0xaU])) 
                                               | (VTestDriver__ConstPool__CONST_h3dcda146_0[0xbU] 
                                                  ^ 
                                                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__inflight[0xbU])) 
                                              | (VTestDriver__ConstPool__CONST_h3dcda146_0[0xcU] 
                                                 ^ 
                                                 vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__inflight[0xcU])) 
                                             | (VTestDriver__ConstPool__CONST_h3dcda146_0[0xdU] 
                                                ^ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__inflight[0xdU])) 
                                            | (VTestDriver__ConstPool__CONST_h3dcda146_0[0xeU] 
                                               ^ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__inflight[0xeU])) 
                                           | (VTestDriver__ConstPool__CONST_h3dcda146_0[0xfU] 
                                              ^ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__inflight[0xfU])) 
                                          | (VTestDriver__ConstPool__CONST_h3dcda146_0[0x10U] 
                                             ^ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__inflight[0x10U]))) 
                                  | (0U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                 | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__watchdog 
                                    < vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__plusarg_reader__DOT__myplus))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_7.sv:664: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor: Assertion failed: TileLink timeout expired (connected at generators/rocket-chip/src/main/scala/subsystem/PeripheryBus.scala:53:7)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 664, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_7.sv:666: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 666, "");
        }
    }
    VL_SHIFTR_WWI(513,513,10, __Vtemp_1, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__inflight_1, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_source));
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_valid) 
                      & ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_2)) 
                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT____VdfgTmp_h3f6fcfea__0))) 
                     & (~ (VTestDriver__ConstPool__CONST_h00a543f7_0[0U] 
                           & __Vtemp_1[0U]))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_7.sv:670: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at generators/rocket-chip/src/main/scala/subsystem/PeripheryBus.scala:53:7)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 670, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_7.sv:672: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 672, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__715(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__715\n"); );
    // Init
    VlWide<65>/*2079:0*/ __Vtemp_1;
    VlWide<65>/*2079:0*/ __Vtemp_2;
    // Body
    VL_SHIFTR_WWI(2052,2052,12, __Vtemp_1, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__inflight_sizes_1, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_source) 
                   << 2U));
    VL_AND_W(65, __Vtemp_2, VTestDriver__ConstPool__CONST_h614f9cb9_0, __Vtemp_1);
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_valid) 
                      & ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_2)) 
                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT____VdfgTmp_h3f6fcfea__0))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_size) 
                        != (7U & (__Vtemp_2[0U] >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_7.sv:676: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor: Assertion failed: 'D' channel contains improper response size (connected at generators/rocket-chip/src/main/scala/subsystem/PeripheryBus.scala:53:7)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 676, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_7.sv:678: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 678, "");
        }
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)) 
                           & (~ (((0U == ((((((((((
                                                   (((((((VTestDriver__ConstPool__CONST_h3dcda146_0[0U] 
                                                          ^ 
                                                          vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__inflight_1[0U]) 
                                                         | (VTestDriver__ConstPool__CONST_h3dcda146_0[1U] 
                                                            ^ 
                                                            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__inflight_1[1U])) 
                                                        | (VTestDriver__ConstPool__CONST_h3dcda146_0[2U] 
                                                           ^ 
                                                           vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__inflight_1[2U])) 
                                                       | (VTestDriver__ConstPool__CONST_h3dcda146_0[3U] 
                                                          ^ 
                                                          vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__inflight_1[3U])) 
                                                      | (VTestDriver__ConstPool__CONST_h3dcda146_0[4U] 
                                                         ^ 
                                                         vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__inflight_1[4U])) 
                                                     | (VTestDriver__ConstPool__CONST_h3dcda146_0[5U] 
                                                        ^ 
                                                        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__inflight_1[5U])) 
                                                    | (VTestDriver__ConstPool__CONST_h3dcda146_0[6U] 
                                                       ^ 
                                                       vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__inflight_1[6U])) 
                                                   | (VTestDriver__ConstPool__CONST_h3dcda146_0[7U] 
                                                      ^ 
                                                      vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__inflight_1[7U])) 
                                                  | (VTestDriver__ConstPool__CONST_h3dcda146_0[8U] 
                                                     ^ 
                                                     vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__inflight_1[8U])) 
                                                 | (VTestDriver__ConstPool__CONST_h3dcda146_0[9U] 
                                                    ^ 
                                                    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__inflight_1[9U])) 
                                                | (VTestDriver__ConstPool__CONST_h3dcda146_0[0xaU] 
                                                   ^ 
                                                   vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__inflight_1[0xaU])) 
                                               | (VTestDriver__ConstPool__CONST_h3dcda146_0[0xbU] 
                                                  ^ 
                                                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__inflight_1[0xbU])) 
                                              | (VTestDriver__ConstPool__CONST_h3dcda146_0[0xcU] 
                                                 ^ 
                                                 vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__inflight_1[0xcU])) 
                                             | (VTestDriver__ConstPool__CONST_h3dcda146_0[0xdU] 
                                                ^ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__inflight_1[0xdU])) 
                                            | (VTestDriver__ConstPool__CONST_h3dcda146_0[0xeU] 
                                               ^ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__inflight_1[0xeU])) 
                                           | (VTestDriver__ConstPool__CONST_h3dcda146_0[0xfU] 
                                              ^ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__inflight_1[0xfU])) 
                                          | (VTestDriver__ConstPool__CONST_h3dcda146_0[0x10U] 
                                             ^ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__inflight_1[0x10U]))) 
                                  | (0U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                                 | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__watchdog_1 
                                    < vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_7.sv:682: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor: Assertion failed: TileLink timeout expired (connected at generators/rocket-chip/src/main/scala/subsystem/PeripheryBus.scala:53:7)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 682, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_7.sv:684: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_7.sv", 684, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__716(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__716\n"); );
    // Body
    if (VL_UNLIKELY(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_out_0_a_valid) 
                     & (IData)(vlSelf->__VdfgTmp_h216f65d9__0)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_11.sv:201: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.coupler_to_bootaddressreg.fragmenter.monitor: Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at generators/testchipip/src/main/scala/boot/BootAddrReg.scala:26:100)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_11.sv", 201, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_11.sv:203: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.coupler_to_bootaddressreg.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_11.sv", 203, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_out_0_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h216f65d9__0)) 
                     & (~ (((IData)((0x22180U == (0x7ffc0U 
                                                  & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]))) 
                            | (IData)(((0x20180U == 
                                        (0x7f1c0U & 
                                         vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                       & (5U > (7U 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 9U)))))) 
                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                              >> 0x1fU)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_11.sv:207: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.coupler_to_bootaddressreg.fragmenter.monitor: Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at generators/testchipip/src/main/scala/boot/BootAddrReg.scala:26:100)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_11.sv", 207, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_11.sv:209: Assertion failed in %NTestDriver.testHarness.chiptop0.system.pbus.coupler_to_bootaddressreg.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_11.sv", 209, "");
        }
    }
}
