// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestDriver.h for the primary calling header

#include "VTestDriver__pch.h"
#include "VTestDriver__Syms.h"
#include "VTestDriver___024root.h"

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1256(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1256\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___l2_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__monitor__DOT__a_first_counter)))) 
                     & ((7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                               >> 6U)) != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__monitor__DOT__size))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_40.sv:961: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.cork.monitor: Assertion failed: 'A' channel size changed within multibeat operation (connected at generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Configs.scala:131:34)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_40.sv", 961, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_40.sv:963: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_40.sv", 963, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___l2_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__monitor__DOT__a_first_counter)))) 
                     & ((7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                               >> 9U)) != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__monitor__DOT__source))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_40.sv:967: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.cork.monitor: Assertion failed: 'A' channel source changed within multibeat operation (connected at generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Configs.scala:131:34)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_40.sv", 967, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_40.sv:969: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_40.sv", 969, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1257(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1257\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___l2_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__monitor__DOT__a_first_counter)))) 
                     & (((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[1U] 
                          << 0x14U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                       >> 0xcU)) != vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__monitor__DOT__address)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_40.sv:973: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.cork.monitor: Assertion failed: 'A' channel address changed with multibeat operation (connected at generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Configs.scala:131:34)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_40.sv", 973, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_40.sv:975: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_40.sv", 975, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_in_d_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__monitor__DOT__d_first_counter)))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_in_d_bits_opcode) 
                        != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__monitor__DOT__opcode_1))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_40.sv:979: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.cork.monitor: Assertion failed: 'D' channel opcode changed within multibeat operation (connected at generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Configs.scala:131:34)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_40.sv", 979, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_40.sv:981: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_40.sv", 981, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1258(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1258\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_in_d_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__monitor__DOT__d_first_counter)))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_in_d_bits_param) 
                        != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__monitor__DOT__param_1))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_40.sv:985: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.cork.monitor: Assertion failed: 'D' channel param changed within multibeat operation (connected at generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Configs.scala:131:34)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_40.sv", 985, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_40.sv:987: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_40.sv", 987, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_in_d_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__monitor__DOT__d_first_counter)))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_in_d_bits_size) 
                        != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__monitor__DOT__size_1))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_40.sv:991: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.cork.monitor: Assertion failed: 'D' channel size changed within multibeat operation (connected at generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Configs.scala:131:34)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_40.sv", 991, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_40.sv:993: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_40.sv", 993, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1259(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1259\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_in_d_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__monitor__DOT__d_first_counter)))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_in_d_bits_source) 
                        != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__monitor__DOT__source_1))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_40.sv:997: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.cork.monitor: Assertion failed: 'D' channel source changed within multibeat operation (connected at generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Configs.scala:131:34)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_40.sv", 997, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_40.sv:999: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_40.sv", 999, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_in_d_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__monitor__DOT__d_first_counter)))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_in_d_bits_sink) 
                        != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__monitor__DOT__sink))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_40.sv:1003: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.cork.monitor: Assertion failed: 'D' channel sink changed with multibeat operation (connected at generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Configs.scala:131:34)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_40.sv", 1003, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_40.sv:1005: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_40.sv", 1005, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1260(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1260\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_in_d_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__monitor__DOT__d_first_counter)))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_in_d_bits_denied) 
                        != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__monitor__DOT__denied))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_40.sv:1009: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.cork.monitor: Assertion failed: 'D' channel denied changed with multibeat operation (connected at generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Configs.scala:131:34)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_40.sv", 1009, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_40.sv:1011: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_40.sv", 1011, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___l2_auto_out_c_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__monitor__DOT__c_first_counter)))) 
                     & ((7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U]) 
                        != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__monitor__DOT__opcode_3))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_40.sv:1015: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.cork.monitor: Assertion failed: 'C' channel opcode changed within multibeat operation (connected at generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Configs.scala:131:34)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_40.sv", 1015, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_40.sv:1017: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_40.sv", 1017, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1261(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1261\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___l2_auto_out_c_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__monitor__DOT__c_first_counter)))) 
                     & ((7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U] 
                               >> 3U)) != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__monitor__DOT__param_3))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_40.sv:1021: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.cork.monitor: Assertion failed: 'C' channel param changed within multibeat operation (connected at generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Configs.scala:131:34)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_40.sv", 1021, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_40.sv:1023: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_40.sv", 1023, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___l2_auto_out_c_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__monitor__DOT__c_first_counter)))) 
                     & ((7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U] 
                               >> 6U)) != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__monitor__DOT__size_3))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_40.sv:1027: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.cork.monitor: Assertion failed: 'C' channel size changed within multibeat operation (connected at generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Configs.scala:131:34)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_40.sv", 1027, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_40.sv:1029: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_40.sv", 1029, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1262(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1262\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___l2_auto_out_c_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__monitor__DOT__c_first_counter)))) 
                     & ((7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U] 
                               >> 9U)) != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__monitor__DOT__source_3))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_40.sv:1033: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.cork.monitor: Assertion failed: 'C' channel source changed within multibeat operation (connected at generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Configs.scala:131:34)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_40.sv", 1033, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_40.sv:1035: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_40.sv", 1035, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___l2_auto_out_c_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__monitor__DOT__c_first_counter)))) 
                     & (((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[1U] 
                          << 0x14U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U] 
                                       >> 0xcU)) != vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__monitor__DOT__address_2)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_40.sv:1039: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.cork.monitor: Assertion failed: 'C' channel address changed with multibeat operation (connected at generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Configs.scala:131:34)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_40.sv", 1039, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_40.sv:1041: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_40.sv", 1041, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1263(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1263\n"); );
    // Body
    if (VL_UNLIKELY((0x1fU & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__monitor__DOT___GEN_2) 
                               & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset))) 
                              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__monitor__DOT__inflight) 
                                 >> (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                           >> 9U))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_40.sv:1045: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.cork.monitor: Assertion failed: 'A' channel re-used a source ID (connected at generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Configs.scala:131:34)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_40.sv", 1045, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_40.sv:1047: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_40.sv", 1047, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__monitor__DOT___GEN_60) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset))) 
                     & (~ ((0x1fU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__monitor__DOT__inflight) 
                                     >> (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_in_d_bits_source))) 
                           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__monitor__DOT__same_cycle_resp)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_40.sv:1051: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.cork.monitor: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Configs.scala:131:34)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_40.sv", 1051, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_40.sv:1053: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_40.sv", 1053, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1264(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1264\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__monitor__DOT___GEN_60) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__monitor__DOT__same_cycle_resp))) 
                     & (~ (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_in_d_bits_opcode) 
                            == ((0x17U >= (0x1fU & 
                                           ((IData)(3U) 
                                            * (7U & 
                                               vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U]))))
                                 ? (7U & (0x911240U 
                                          >> (0x1fU 
                                              & ((IData)(3U) 
                                                 * 
                                                 (7U 
                                                  & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U])))))
                                 : 0U)) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_in_d_bits_opcode) 
                                           == ((0x17U 
                                                >= 
                                                (0x1fU 
                                                 & ((IData)(3U) 
                                                    * 
                                                    (7U 
                                                     & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U]))))
                                                ? (7U 
                                                   & (0x951240U 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(3U) 
                                                          * 
                                                          (7U 
                                                           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U])))))
                                                : 0U))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_40.sv:1057: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.cork.monitor: Assertion failed: 'D' channel contains improper opcode response (connected at generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Configs.scala:131:34)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_40.sv", 1057, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_40.sv:1059: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_40.sv", 1059, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1265(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1265\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__monitor__DOT___GEN_60) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__monitor__DOT__same_cycle_resp))) 
                     & ((7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                               >> 6U)) != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_in_d_bits_size))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_40.sv:1063: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.cork.monitor: Assertion failed: 'D' channel contains improper response size (connected at generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Configs.scala:131:34)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_40.sv", 1063, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_40.sv:1065: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_40.sv", 1065, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__monitor__DOT___GEN_60) 
                      & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__monitor__DOT__same_cycle_resp)) 
                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))) 
                     & (~ (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_in_d_bits_opcode) 
                            == ((0x17U >= (0x1fU & 
                                           ((IData)(3U) 
                                            * (7U & 
                                               ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__monitor__DOT__inflight_opcodes 
                                                 >> 
                                                 ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_in_d_bits_source) 
                                                  << 2U)) 
                                                >> 1U)))))
                                 ? (7U & (0x911240U 
                                          >> (0x1fU 
                                              & ((IData)(3U) 
                                                 * 
                                                 (7U 
                                                  & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__monitor__DOT__inflight_opcodes 
                                                      >> 
                                                      ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_in_d_bits_source) 
                                                       << 2U)) 
                                                     >> 1U))))))
                                 : 0U)) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_in_d_bits_opcode) 
                                           == ((0x17U 
                                                >= 
                                                (0x1fU 
                                                 & ((IData)(3U) 
                                                    * 
                                                    (7U 
                                                     & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__monitor__DOT__inflight_opcodes 
                                                         >> 
                                                         ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_in_d_bits_source) 
                                                          << 2U)) 
                                                        >> 1U)))))
                                                ? (7U 
                                                   & (0x951240U 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(3U) 
                                                          * 
                                                          (7U 
                                                           & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__monitor__DOT__inflight_opcodes 
                                                               >> 
                                                               ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_in_d_bits_source) 
                                                                << 2U)) 
                                                              >> 1U))))))
                                                : 0U))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_40.sv:1069: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.cork.monitor: Assertion failed: 'D' channel contains improper opcode response (connected at generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Configs.scala:131:34)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_40.sv", 1069, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_40.sv:1071: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_40.sv", 1071, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1266(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1266\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__monitor__DOT___GEN_60) 
                      & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__monitor__DOT__same_cycle_resp)) 
                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_in_d_bits_size) 
                        != (7U & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__monitor__DOT__inflight_sizes 
                                   >> ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_in_d_bits_source) 
                                       << 2U)) >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_40.sv:1075: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.cork.monitor: Assertion failed: 'D' channel contains improper response size (connected at generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Configs.scala:131:34)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_40.sv", 1075, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_40.sv:1077: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_40.sv", 1077, "");
        }
    }
    if (VL_UNLIKELY(((((((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_in_d_valid) 
                           & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__monitor__DOT__d_first_counter_1))) 
                          & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__monitor__DOT__a_first_counter_1))) 
                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___l2_auto_out_a_valid)) 
                        & ((7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                  >> 9U)) == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_in_d_bits_source))) 
                       & (6U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_in_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset))) 
                     & (~ ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___l2_auto_out_d_ready)) 
                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__toD)
                               ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT___q_1_io_enq_ready)
                               : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___binder_auto_in_a_ready) 
                                  & ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__beatsLeft))
                                      ? (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__winner_0))
                                      : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__state_1))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_40.sv:1081: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.cork.monitor: Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_40.sv", 1081, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_40.sv:1083: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_40.sv", 1083, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1267(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1267\n"); );
    // Body
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)) 
                           & (~ ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__monitor__DOT___same_cycle_resp_T_1)
                                    ? (0x1fU & ((IData)(1U) 
                                                << 
                                                (7U 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 9U))))
                                    : 0U) != ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__monitor__DOT___GEN_60)
                                               ? (0x1fU 
                                                  & ((IData)(1U) 
                                                     << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_in_d_bits_source)))
                                               : 0U)) 
                                 | (0U == ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__monitor__DOT___same_cycle_resp_T_1)
                                            ? (0x1fU 
                                               & ((IData)(1U) 
                                                  << 
                                                  (7U 
                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                                      >> 9U))))
                                            : 0U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_40.sv:1087: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.cork.monitor: Assertion failed: 'A' and 'D' concurrent, despite minlatency > 0 (connected at generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Configs.scala:131:34)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_40.sv", 1087, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_40.sv:1089: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_40.sv", 1089, "");
        }
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)) 
                           & (~ (((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__monitor__DOT__inflight)) 
                                  | (0U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                 | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__monitor__DOT__watchdog 
                                    < vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__monitor__DOT__plusarg_reader__DOT__myplus))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_40.sv:1093: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.cork.monitor: Assertion failed: TileLink timeout expired (connected at generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Configs.scala:131:34)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_40.sv", 1093, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_40.sv:1095: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_40.sv", 1095, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1268(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1268\n"); );
    // Body
    if (VL_UNLIKELY((0x1fU & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__monitor__DOT___GEN_6) 
                               & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset))) 
                              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__monitor__DOT__inflight_1) 
                                 >> (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U] 
                                           >> 9U))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_40.sv:1099: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.cork.monitor: Assertion failed: 'C' channel re-used a source ID (connected at generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Configs.scala:131:34)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_40.sv", 1099, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_40.sv:1101: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_40.sv", 1101, "");
        }
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_in_d_valid) 
                        & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__monitor__DOT__d_first_counter_2))) 
                       & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_in_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset))) 
                     & (~ ((0x1fU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__monitor__DOT__inflight_1) 
                                     >> (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_in_d_bits_source))) 
                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__monitor__DOT___same_cycle_resp_T_3) 
                              & (IData)(((6U == (6U 
                                                 & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U])) 
                                         & ((7U & (
                                                   vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U] 
                                                   >> 9U)) 
                                            == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_in_d_bits_source)))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_40.sv:1105: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.cork.monitor: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Configs.scala:131:34)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_40.sv", 1105, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_40.sv:1107: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_40.sv", 1107, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1269(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1269\n"); );
    // Body
    if (VL_UNLIKELY(((((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_in_d_valid) 
                         & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__monitor__DOT__d_first_counter_2))) 
                        & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_in_d_bits_opcode))) 
                       & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__monitor__DOT___same_cycle_resp_T_3) 
                          & (IData)(((6U == (6U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U])) 
                                     & ((7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U] 
                                               >> 9U)) 
                                        == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_in_d_bits_source)))))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_in_d_bits_size) 
                        != (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U] 
                                  >> 6U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_40.sv:1111: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.cork.monitor: Assertion failed: 'D' channel contains improper response size (connected at generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Configs.scala:131:34)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_40.sv", 1111, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_40.sv:1113: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_40.sv", 1113, "");
        }
    }
    if (VL_UNLIKELY(((((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_in_d_valid) 
                         & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__monitor__DOT__d_first_counter_2))) 
                        & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_in_d_bits_opcode))) 
                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__monitor__DOT___same_cycle_resp_T_3) 
                             & (IData)(((6U == (6U 
                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U])) 
                                        & ((7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U] 
                                                  >> 9U)) 
                                           == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_in_d_bits_source))))))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_in_d_bits_size) 
                        != (7U & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__monitor__DOT__inflight_sizes_1 
                                   >> ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_in_d_bits_source) 
                                       << 2U)) >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_40.sv:1117: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.cork.monitor: Assertion failed: 'D' channel contains improper response size (connected at generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Configs.scala:131:34)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_40.sv", 1117, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_40.sv:1119: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_40.sv", 1119, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1270(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1270\n"); );
    // Body
    if (VL_UNLIKELY((((((((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_in_d_valid) 
                            & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__monitor__DOT__d_first_counter_2))) 
                           & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__monitor__DOT__c_first_counter_1))) 
                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___l2_auto_out_c_valid)) 
                         & ((7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U] 
                                   >> 9U)) == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_in_d_bits_source))) 
                        & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_in_d_bits_opcode))) 
                       & (~ ((4U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U])) 
                             | (5U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U]))))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset))) 
                     & (~ ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___l2_auto_out_d_ready)) 
                           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_in_c_ready)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_40.sv:1123: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.cork.monitor: Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_40.sv", 1123, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_40.sv:1125: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_40.sv", 1125, "");
        }
    }
    if (VL_UNLIKELY((((0U != (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__monitor__DOT___same_cycle_resp_T_3) 
                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__monitor__DOT___GEN_4))
                               ? (0x1fU & ((IData)(1U) 
                                           << (7U & 
                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U] 
                                                >> 9U))))
                               : 0U)) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset))) 
                     & ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__monitor__DOT___same_cycle_resp_T_3) 
                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__monitor__DOT___GEN_4))
                          ? (0x1fU & ((IData)(1U) << 
                                      (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U] 
                                             >> 9U))))
                          : 0U) == ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_in_d_valid) 
                                      & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_in_d_bits_opcode)))
                                     ? (0x1fU & ((IData)(1U) 
                                                 << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_in_d_bits_source)))
                                     : 0U))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_40.sv:1129: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.cork.monitor: Assertion failed: 'C' and 'D' concurrent, despite minlatency > 0 (connected at generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Configs.scala:131:34)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_40.sv", 1129, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_40.sv:1131: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_40.sv", 1131, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1271(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1271\n"); );
    // Body
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)) 
                           & (~ (((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__monitor__DOT__inflight_1)) 
                                  | (0U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                                 | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__monitor__DOT__watchdog_1 
                                    < vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_40.sv:1135: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.cork.monitor: Assertion failed: TileLink timeout expired (connected at generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Configs.scala:131:34)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_40.sv", 1135, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_40.sv:1137: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_40.sv", 1137, "");
        }
    }
    if (VL_UNLIKELY((0xffU & ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkD__DOT__d_q__DOT__do_enq) 
                                & ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__monitor__DOT__d_first_counter_3)) 
                                   & (IData)((4U == 
                                              (6U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_in_d_bits_opcode)))))) 
                               & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset))) 
                              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__monitor__DOT__inflight_2) 
                                 >> (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_in_d_bits_sink)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_40.sv:1141: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.cork.monitor: Assertion failed: 'D' channel re-used a sink ID (connected at generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Configs.scala:131:34)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_40.sv", 1141, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_40.sv:1143: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_40.sv", 1143, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1272(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1272\n"); );
    // Body
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->__VdfgTmp_h27f2920d__0)) 
                            & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset))) 
                           & (~ (0xffU & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__monitor__DOT__d_set) 
                                           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__monitor__DOT__inflight_2)) 
                                          >> (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___l2_auto_out_e_bits_sink)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_40.sv:1147: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.cork.monitor: Assertion failed: 'E' channel acknowledged for nothing inflight (connected at generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Configs.scala:131:34)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_40.sv", 1147, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_40.sv:1149: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_40.sv", 1149, "");
        }
    }
    vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__ftq__DOT__ghist_0__DOT__ghist_0_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__ftq__DOT__ghist_1__DOT__ghist_0_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__nodeIn_d_q__DOT__wrap_1 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__nodeIn_d_q__DOT__wrap_1;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_misa 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_misa;
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)) 
                           & (~ ((~ ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___core_io_imem_req_valid) 
                                       | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___core_io_imem_flush_icache)) 
                                      | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__take_pc_wb)) 
                                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_reg_valid))) 
                                     | (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__take_pc_wb)) 
                                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_reg_valid)) 
                                        & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_pc_valid)
                                             ? ((0x3fffffffeULL 
                                                 & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___mem_npc_T_4) 
                                                != vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_reg_pc)
                                             : (~ (
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_valid) 
                                                    | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___frontend_io_cpu_resp_valid)) 
                                                   & ((0x3fffffffeULL 
                                                       & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___mem_npc_T_4) 
                                                      == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_pc)))) 
                                           & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_ctrl_branch) 
                                                  | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_ctrl_jal) 
                                                     | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_ctrl_jalr)))) 
                                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___mem_cfi_taken_T) 
                                                 | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_ctrl_jal) 
                                                    | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_ctrl_jalr)))))))) 
                                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__imem_might_request_reg))))))) {
        VL_WRITEF("[%0t] %%Error: Frontend.sv:192: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain.element_reset_domain_rockettile.frontend: Assertion failed\n    at Frontend.scala:92 assert(!(io.cpu.req.valid || io.cpu.sfence.valid || io.cpu.flush_icache || io.cpu.bht_update.valid || io.cpu.btb_update.valid) || io.cpu.might_request)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/Frontend.sv", 192, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: Frontend.sv:194: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain.element_reset_domain_rockettile.frontend\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/Frontend.sv", 194, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1273(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1273\n"); );
    // Body
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s2_speculative)) 
                      & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_custom_0 
                                 >> 3U))) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___icache_io_s2_kill_T_2))))) {
        VL_WRITEF("[%0t] %%Error: Frontend.sv:198: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain.element_reset_domain_rockettile.frontend: Assertion failed\n    at Frontend.scala:190 assert(!(s2_speculative && io.ptw.customCSRs.asInstanceOf[RocketCustomCSRs].disableSpeculativeICacheRefill && !icache.io.s2_kill))\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/Frontend.sv", 198, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: Frontend.sv:200: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain.element_reset_domain_rockettile.frontend\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/Frontend.sv", 200, "");
        }
    }
    vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__bim__DOT__data__DOT__data_ext__DOT__mem_0_3__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__bim__DOT__data__DOT__data_ext__DOT__mem_0_2__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__bim__DOT__data__DOT__data_ext__DOT__mem_0_1__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__bim__DOT__data__DOT__data_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__bim__DOT__data__DOT__data_ext__DOT__mem_0_3__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__bim__DOT__data__DOT__data_ext__DOT__mem_0_2__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__bim__DOT__data__DOT__data_ext__DOT__mem_0_1__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__bim__DOT__data__DOT__data_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__btb__DOT__reset_idx 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__btb__DOT__reset_idx;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__btb__DOT__reset_idx 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__btb__DOT__reset_idx;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__btb__DOT__doing_reset 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__btb__DOT__doing_reset;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__btb__DOT__doing_reset 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__btb__DOT__doing_reset;
    vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT__state_reg 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT__state_reg;
    if (VL_UNLIKELY(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_valid) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                        & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_opcode)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:195: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor: Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at generators/testchipip/src/main/scala/soc/Scratchpad.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 195, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_60.sv:197: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 197, "");
        }
        VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:199: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor: Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at generators/testchipip/src/main/scala/soc/Scratchpad.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 199, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_60.sv:201: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 201, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1274(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1274\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_opcode)))) 
                     & (0x9fU < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_source))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:205: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor: Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at generators/testchipip/src/main/scala/soc/Scratchpad.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 205, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_60.sv:207: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 207, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_opcode)))) 
                     & (~ (IData)((3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:211: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor: Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at generators/testchipip/src/main/scala/soc/Scratchpad.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 211, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_60.sv:213: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 213, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1275(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1275\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_opcode)))) 
                     & (0U != (7U & ((~ ((IData)(7U) 
                                         << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size))) 
                                     & (IData)(vlSelf->__VdfgTmp_h52f1e389__0))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:217: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor: Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at generators/testchipip/src/main/scala/soc/Scratchpad.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 217, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_60.sv:219: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 219, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_opcode)))) 
                     & (2U < ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__repeater__DOT__full)
                               ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__repeater__DOT__saved_param)
                               : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_param)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:223: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor: Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at generators/testchipip/src/main/scala/soc/Scratchpad.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 223, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_60.sv:225: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 225, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1276(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1276\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_opcode)))) 
                     & (0xffU != ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__repeater__DOT__full)
                                   ? 0xffU : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_mask)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:229: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor: Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at generators/testchipip/src/main/scala/soc/Scratchpad.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 229, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_60.sv:231: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 231, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_opcode)))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__repeater__DOT__full)
                         ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt)
                         : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_corrupt))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:235: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor: Assertion failed: 'A' channel AcquireBlock is corrupt (connected at generators/testchipip/src/main/scala/soc/Scratchpad.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 235, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_60.sv:237: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 237, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1277(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1277\n"); );
    // Body
    if (VL_UNLIKELY(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_valid) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                        & (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_opcode)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:241: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor: Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at generators/testchipip/src/main/scala/soc/Scratchpad.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 241, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_60.sv:243: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 243, "");
        }
        VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:245: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor: Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at generators/testchipip/src/main/scala/soc/Scratchpad.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 245, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_60.sv:247: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 247, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_opcode)))) 
                     & (0x9fU < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_source))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:251: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor: Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at generators/testchipip/src/main/scala/soc/Scratchpad.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 251, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_60.sv:253: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 253, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1278(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1278\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_opcode)))) 
                     & (~ (IData)((3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:257: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor: Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at generators/testchipip/src/main/scala/soc/Scratchpad.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 257, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_60.sv:259: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 259, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_opcode)))) 
                     & (0U != (7U & ((~ ((IData)(7U) 
                                         << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size))) 
                                     & (IData)(vlSelf->__VdfgTmp_h52f1e389__0))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:263: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor: Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at generators/testchipip/src/main/scala/soc/Scratchpad.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 263, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_60.sv:265: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 265, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1279(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1279\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_opcode)))) 
                     & (2U < ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__repeater__DOT__full)
                               ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__repeater__DOT__saved_param)
                               : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_param)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:269: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor: Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at generators/testchipip/src/main/scala/soc/Scratchpad.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 269, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_60.sv:271: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 271, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_opcode)))) 
                     & (~ (IData)((0U != ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__repeater__DOT__full)
                                           ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__repeater__DOT__saved_param)
                                           : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_param)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:275: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor: Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at generators/testchipip/src/main/scala/soc/Scratchpad.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 275, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_60.sv:277: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 277, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1280(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1280\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_opcode)))) 
                     & (0xffU != ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__repeater__DOT__full)
                                   ? 0xffU : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_mask)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:281: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor: Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at generators/testchipip/src/main/scala/soc/Scratchpad.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 281, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_60.sv:283: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 283, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_opcode)))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__repeater__DOT__full)
                         ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt)
                         : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_corrupt))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:287: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor: Assertion failed: 'A' channel AcquirePerm is corrupt (connected at generators/testchipip/src/main/scala/soc/Scratchpad.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 287, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_60.sv:289: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 289, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1281(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1281\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_opcode)))) 
                     & (0xa0U <= (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_source))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:293: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor: Assertion failed: 'A' channel carries Get type which master claims it can't emit (connected at generators/testchipip/src/main/scala/soc/Scratchpad.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 293, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_60.sv:295: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 295, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_opcode)))) 
                     & (0x800U != (0xfffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT___repeater_io_deq_bits_address 
                                             >> 0x10U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:299: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor: Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at generators/testchipip/src/main/scala/soc/Scratchpad.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 299, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_60.sv:301: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 301, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1282(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1282\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_opcode)))) 
                     & (0x9fU < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_source))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:305: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor: Assertion failed: 'A' channel Get carries invalid source ID (connected at generators/testchipip/src/main/scala/soc/Scratchpad.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 305, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_60.sv:307: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 307, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_opcode)))) 
                     & (0U != (7U & ((~ ((IData)(7U) 
                                         << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size))) 
                                     & (IData)(vlSelf->__VdfgTmp_h52f1e389__0))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:311: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor: Assertion failed: 'A' channel Get address not aligned to size (connected at generators/testchipip/src/main/scala/soc/Scratchpad.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 311, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_60.sv:313: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 313, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1283(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1283\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_opcode)))) 
                     & (0U != ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__repeater__DOT__full)
                                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__repeater__DOT__saved_param)
                                : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_param)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:317: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor: Assertion failed: 'A' channel Get carries invalid param (connected at generators/testchipip/src/main/scala/soc/Scratchpad.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 317, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_60.sv:319: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 319, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_opcode)))) 
                     & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__repeater__DOT__full)
                          ? 0xffU : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_mask)) 
                        != ((0x80U & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                         << 7U) | (0xffffff80U 
                                                   & (((2U 
                                                        == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size)) 
                                                       << 7U) 
                                                      & ((IData)(vlSelf->__VdfgTmp_h52f1e389__0) 
                                                         << 5U)))) 
                                       | (((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size)) 
                                           & (IData)(
                                                     (6U 
                                                      == 
                                                      (6U 
                                                       & (IData)(vlSelf->__VdfgTmp_h52f1e389__0))))) 
                                          << 7U)) | 
                                      ((IData)((7U 
                                                == 
                                                (7U 
                                                 & (IData)(vlSelf->__VdfgTmp_h52f1e389__0)))) 
                                       << 7U))) | (
                                                   (0x40U 
                                                    & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                          << 6U) 
                                                         | (0xffffffc0U 
                                                            & (((2U 
                                                                 == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size)) 
                                                                << 6U) 
                                                               & ((IData)(vlSelf->__VdfgTmp_h52f1e389__0) 
                                                                  << 4U)))) 
                                                        | (((1U 
                                                             == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size)) 
                                                            & (IData)(
                                                                      (6U 
                                                                       == 
                                                                       (6U 
                                                                        & (IData)(vlSelf->__VdfgTmp_h52f1e389__0))))) 
                                                           << 6U)) 
                                                       | ((IData)(
                                                                  (6U 
                                                                   == 
                                                                   (7U 
                                                                    & (IData)(vlSelf->__VdfgTmp_h52f1e389__0)))) 
                                                          << 6U))) 
                                                   | ((0x20U 
                                                       & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                             << 5U) 
                                                            | (0xffffffe0U 
                                                               & (((2U 
                                                                    == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size)) 
                                                                   << 5U) 
                                                                  & ((IData)(vlSelf->__VdfgTmp_h52f1e389__0) 
                                                                     << 3U)))) 
                                                           | (((1U 
                                                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size)) 
                                                               & (IData)(
                                                                         (4U 
                                                                          == 
                                                                          (6U 
                                                                           & (IData)(vlSelf->__VdfgTmp_h52f1e389__0))))) 
                                                              << 5U)) 
                                                          | ((IData)(
                                                                     (5U 
                                                                      == 
                                                                      (7U 
                                                                       & (IData)(vlSelf->__VdfgTmp_h52f1e389__0)))) 
                                                             << 5U))) 
                                                      | ((0x10U 
                                                          & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                                << 4U) 
                                                               | (0xfffffff0U 
                                                                  & (((2U 
                                                                       == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size)) 
                                                                      << 4U) 
                                                                     & ((IData)(vlSelf->__VdfgTmp_h52f1e389__0) 
                                                                        << 2U)))) 
                                                              | (((1U 
                                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size)) 
                                                                  & (IData)(
                                                                            (4U 
                                                                             == 
                                                                             (6U 
                                                                              & (IData)(vlSelf->__VdfgTmp_h52f1e389__0))))) 
                                                                 << 4U)) 
                                                             | ((IData)(
                                                                        (4U 
                                                                         == 
                                                                         (7U 
                                                                          & (IData)(vlSelf->__VdfgTmp_h52f1e389__0)))) 
                                                                << 4U))) 
                                                         | ((8U 
                                                             & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                                   | ((~ 
                                                                       ((IData)(vlSelf->__VdfgTmp_h52f1e389__0) 
                                                                        >> 2U)) 
                                                                      & (2U 
                                                                         == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size)))) 
                                                                  | ((1U 
                                                                      == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size)) 
                                                                     & (IData)(
                                                                               (2U 
                                                                                == 
                                                                                (6U 
                                                                                & (IData)(vlSelf->__VdfgTmp_h52f1e389__0)))))) 
                                                                 | (IData)(
                                                                           (3U 
                                                                            == 
                                                                            (7U 
                                                                             & (IData)(vlSelf->__VdfgTmp_h52f1e389__0))))) 
                                                                << 3U)) 
                                                            | ((4U 
                                                                & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                                      | ((~ 
                                                                          ((IData)(vlSelf->__VdfgTmp_h52f1e389__0) 
                                                                           >> 2U)) 
                                                                         & (2U 
                                                                            == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size)))) 
                                                                     | ((1U 
                                                                         == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size)) 
                                                                        & (IData)(
                                                                                (2U 
                                                                                == 
                                                                                (6U 
                                                                                & (IData)(vlSelf->__VdfgTmp_h52f1e389__0)))))) 
                                                                    | (IData)(
                                                                              (2U 
                                                                               == 
                                                                               (7U 
                                                                                & (IData)(vlSelf->__VdfgTmp_h52f1e389__0))))) 
                                                                   << 2U)) 
                                                               | ((2U 
                                                                   & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                                         | ((~ 
                                                                             ((IData)(vlSelf->__VdfgTmp_h52f1e389__0) 
                                                                              >> 2U)) 
                                                                            & (2U 
                                                                               == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size)))) 
                                                                        | ((1U 
                                                                            == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size)) 
                                                                           & (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (6U 
                                                                                & (IData)(vlSelf->__VdfgTmp_h52f1e389__0)))))) 
                                                                       | (IData)(
                                                                                (1U 
                                                                                == 
                                                                                (7U 
                                                                                & (IData)(vlSelf->__VdfgTmp_h52f1e389__0))))) 
                                                                      << 1U)) 
                                                                  | (1U 
                                                                     & ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                                          | ((~ 
                                                                              ((IData)(vlSelf->__VdfgTmp_h52f1e389__0) 
                                                                               >> 2U)) 
                                                                             & (2U 
                                                                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size)))) 
                                                                         | ((1U 
                                                                             == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size)) 
                                                                            & (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (6U 
                                                                                & (IData)(vlSelf->__VdfgTmp_h52f1e389__0)))))) 
                                                                        | (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (7U 
                                                                                & (IData)(vlSelf->__VdfgTmp_h52f1e389__0))))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:323: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor: Assertion failed: 'A' channel Get contains invalid mask (connected at generators/testchipip/src/main/scala/soc/Scratchpad.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 323, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_60.sv:325: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 325, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1284(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1284\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_opcode)))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__repeater__DOT__full)
                         ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt)
                         : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_corrupt))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:329: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor: Assertion failed: 'A' channel Get is corrupt (connected at generators/testchipip/src/main/scala/soc/Scratchpad.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 329, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_60.sv:331: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 331, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_opcode)))) 
                     & (~ (IData)(((0x8000000U == (0xfff0000U 
                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT___repeater_io_deq_bits_address)) 
                                   & (0xa0U > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_source)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:335: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor: Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at generators/testchipip/src/main/scala/soc/Scratchpad.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 335, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_60.sv:337: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 337, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1285(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1285\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_opcode)))) 
                     & (0x9fU < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_source))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:341: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor: Assertion failed: 'A' channel PutFull carries invalid source ID (connected at generators/testchipip/src/main/scala/soc/Scratchpad.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 341, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_60.sv:343: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 343, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_opcode)))) 
                     & (0U != (7U & ((~ ((IData)(7U) 
                                         << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size))) 
                                     & (IData)(vlSelf->__VdfgTmp_h52f1e389__0))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:347: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor: Assertion failed: 'A' channel PutFull address not aligned to size (connected at generators/testchipip/src/main/scala/soc/Scratchpad.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 347, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_60.sv:349: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 349, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1286(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1286\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_opcode)))) 
                     & (0U != ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__repeater__DOT__full)
                                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__repeater__DOT__saved_param)
                                : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_param)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:353: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor: Assertion failed: 'A' channel PutFull carries invalid param (connected at generators/testchipip/src/main/scala/soc/Scratchpad.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 353, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_60.sv:355: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 355, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_opcode)))) 
                     & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__repeater__DOT__full)
                          ? 0xffU : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_mask)) 
                        != ((0x80U & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                         << 7U) | (0xffffff80U 
                                                   & (((2U 
                                                        == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size)) 
                                                       << 7U) 
                                                      & ((IData)(vlSelf->__VdfgTmp_h52f1e389__0) 
                                                         << 5U)))) 
                                       | (((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size)) 
                                           & (IData)(
                                                     (6U 
                                                      == 
                                                      (6U 
                                                       & (IData)(vlSelf->__VdfgTmp_h52f1e389__0))))) 
                                          << 7U)) | 
                                      ((IData)((7U 
                                                == 
                                                (7U 
                                                 & (IData)(vlSelf->__VdfgTmp_h52f1e389__0)))) 
                                       << 7U))) | (
                                                   (0x40U 
                                                    & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                          << 6U) 
                                                         | (0xffffffc0U 
                                                            & (((2U 
                                                                 == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size)) 
                                                                << 6U) 
                                                               & ((IData)(vlSelf->__VdfgTmp_h52f1e389__0) 
                                                                  << 4U)))) 
                                                        | (((1U 
                                                             == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size)) 
                                                            & (IData)(
                                                                      (6U 
                                                                       == 
                                                                       (6U 
                                                                        & (IData)(vlSelf->__VdfgTmp_h52f1e389__0))))) 
                                                           << 6U)) 
                                                       | ((IData)(
                                                                  (6U 
                                                                   == 
                                                                   (7U 
                                                                    & (IData)(vlSelf->__VdfgTmp_h52f1e389__0)))) 
                                                          << 6U))) 
                                                   | ((0x20U 
                                                       & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                             << 5U) 
                                                            | (0xffffffe0U 
                                                               & (((2U 
                                                                    == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size)) 
                                                                   << 5U) 
                                                                  & ((IData)(vlSelf->__VdfgTmp_h52f1e389__0) 
                                                                     << 3U)))) 
                                                           | (((1U 
                                                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size)) 
                                                               & (IData)(
                                                                         (4U 
                                                                          == 
                                                                          (6U 
                                                                           & (IData)(vlSelf->__VdfgTmp_h52f1e389__0))))) 
                                                              << 5U)) 
                                                          | ((IData)(
                                                                     (5U 
                                                                      == 
                                                                      (7U 
                                                                       & (IData)(vlSelf->__VdfgTmp_h52f1e389__0)))) 
                                                             << 5U))) 
                                                      | ((0x10U 
                                                          & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                                << 4U) 
                                                               | (0xfffffff0U 
                                                                  & (((2U 
                                                                       == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size)) 
                                                                      << 4U) 
                                                                     & ((IData)(vlSelf->__VdfgTmp_h52f1e389__0) 
                                                                        << 2U)))) 
                                                              | (((1U 
                                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size)) 
                                                                  & (IData)(
                                                                            (4U 
                                                                             == 
                                                                             (6U 
                                                                              & (IData)(vlSelf->__VdfgTmp_h52f1e389__0))))) 
                                                                 << 4U)) 
                                                             | ((IData)(
                                                                        (4U 
                                                                         == 
                                                                         (7U 
                                                                          & (IData)(vlSelf->__VdfgTmp_h52f1e389__0)))) 
                                                                << 4U))) 
                                                         | ((8U 
                                                             & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                                   | ((~ 
                                                                       ((IData)(vlSelf->__VdfgTmp_h52f1e389__0) 
                                                                        >> 2U)) 
                                                                      & (2U 
                                                                         == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size)))) 
                                                                  | ((1U 
                                                                      == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size)) 
                                                                     & (IData)(
                                                                               (2U 
                                                                                == 
                                                                                (6U 
                                                                                & (IData)(vlSelf->__VdfgTmp_h52f1e389__0)))))) 
                                                                 | (IData)(
                                                                           (3U 
                                                                            == 
                                                                            (7U 
                                                                             & (IData)(vlSelf->__VdfgTmp_h52f1e389__0))))) 
                                                                << 3U)) 
                                                            | ((4U 
                                                                & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                                      | ((~ 
                                                                          ((IData)(vlSelf->__VdfgTmp_h52f1e389__0) 
                                                                           >> 2U)) 
                                                                         & (2U 
                                                                            == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size)))) 
                                                                     | ((1U 
                                                                         == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size)) 
                                                                        & (IData)(
                                                                                (2U 
                                                                                == 
                                                                                (6U 
                                                                                & (IData)(vlSelf->__VdfgTmp_h52f1e389__0)))))) 
                                                                    | (IData)(
                                                                              (2U 
                                                                               == 
                                                                               (7U 
                                                                                & (IData)(vlSelf->__VdfgTmp_h52f1e389__0))))) 
                                                                   << 2U)) 
                                                               | ((2U 
                                                                   & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                                         | ((~ 
                                                                             ((IData)(vlSelf->__VdfgTmp_h52f1e389__0) 
                                                                              >> 2U)) 
                                                                            & (2U 
                                                                               == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size)))) 
                                                                        | ((1U 
                                                                            == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size)) 
                                                                           & (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (6U 
                                                                                & (IData)(vlSelf->__VdfgTmp_h52f1e389__0)))))) 
                                                                       | (IData)(
                                                                                (1U 
                                                                                == 
                                                                                (7U 
                                                                                & (IData)(vlSelf->__VdfgTmp_h52f1e389__0))))) 
                                                                      << 1U)) 
                                                                  | (1U 
                                                                     & ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                                          | ((~ 
                                                                              ((IData)(vlSelf->__VdfgTmp_h52f1e389__0) 
                                                                               >> 2U)) 
                                                                             & (2U 
                                                                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size)))) 
                                                                         | ((1U 
                                                                             == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size)) 
                                                                            & (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (6U 
                                                                                & (IData)(vlSelf->__VdfgTmp_h52f1e389__0)))))) 
                                                                        | (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (7U 
                                                                                & (IData)(vlSelf->__VdfgTmp_h52f1e389__0))))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:359: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor: Assertion failed: 'A' channel PutFull contains invalid mask (connected at generators/testchipip/src/main/scala/soc/Scratchpad.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 359, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_60.sv:361: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 361, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1287(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1287\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_opcode)))) 
                     & (~ (IData)(((0x8000000U == (0xfff0000U 
                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT___repeater_io_deq_bits_address)) 
                                   & (0xa0U > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_source)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:365: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor: Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at generators/testchipip/src/main/scala/soc/Scratchpad.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 365, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_60.sv:367: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 367, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_opcode)))) 
                     & (0x9fU < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_source))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:371: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor: Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at generators/testchipip/src/main/scala/soc/Scratchpad.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 371, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_60.sv:373: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 373, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1288(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1288\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_opcode)))) 
                     & (0U != (7U & ((~ ((IData)(7U) 
                                         << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size))) 
                                     & (IData)(vlSelf->__VdfgTmp_h52f1e389__0))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:377: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor: Assertion failed: 'A' channel PutPartial address not aligned to size (connected at generators/testchipip/src/main/scala/soc/Scratchpad.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 377, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_60.sv:379: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 379, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_opcode)))) 
                     & (0U != ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__repeater__DOT__full)
                                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__repeater__DOT__saved_param)
                                : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_param)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:383: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor: Assertion failed: 'A' channel PutPartial carries invalid param (connected at generators/testchipip/src/main/scala/soc/Scratchpad.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 383, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_60.sv:385: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 385, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1289(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1289\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_opcode)))) 
                     & (0U != (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__repeater__DOT__full)
                                 ? 0xffU : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_mask)) 
                               & (~ ((0x80U & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                  << 7U) 
                                                 | (0xffffff80U 
                                                    & (((2U 
                                                         == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size)) 
                                                        << 7U) 
                                                       & ((IData)(vlSelf->__VdfgTmp_h52f1e389__0) 
                                                          << 5U)))) 
                                                | (((1U 
                                                     == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size)) 
                                                    & (IData)(
                                                              (6U 
                                                               == 
                                                               (6U 
                                                                & (IData)(vlSelf->__VdfgTmp_h52f1e389__0))))) 
                                                   << 7U)) 
                                               | ((IData)(
                                                          (7U 
                                                           == 
                                                           (7U 
                                                            & (IData)(vlSelf->__VdfgTmp_h52f1e389__0)))) 
                                                  << 7U))) 
                                     | ((0x40U & ((
                                                   (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                     << 6U) 
                                                    | (0xffffffc0U 
                                                       & (((2U 
                                                            == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size)) 
                                                           << 6U) 
                                                          & ((IData)(vlSelf->__VdfgTmp_h52f1e389__0) 
                                                             << 4U)))) 
                                                   | (((1U 
                                                        == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size)) 
                                                       & (IData)(
                                                                 (6U 
                                                                  == 
                                                                  (6U 
                                                                   & (IData)(vlSelf->__VdfgTmp_h52f1e389__0))))) 
                                                      << 6U)) 
                                                  | ((IData)(
                                                             (6U 
                                                              == 
                                                              (7U 
                                                               & (IData)(vlSelf->__VdfgTmp_h52f1e389__0)))) 
                                                     << 6U))) 
                                        | ((0x20U & 
                                            (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                << 5U) 
                                               | (0xffffffe0U 
                                                  & (((2U 
                                                       == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size)) 
                                                      << 5U) 
                                                     & ((IData)(vlSelf->__VdfgTmp_h52f1e389__0) 
                                                        << 3U)))) 
                                              | (((1U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size)) 
                                                  & (IData)(
                                                            (4U 
                                                             == 
                                                             (6U 
                                                              & (IData)(vlSelf->__VdfgTmp_h52f1e389__0))))) 
                                                 << 5U)) 
                                             | ((IData)(
                                                        (5U 
                                                         == 
                                                         (7U 
                                                          & (IData)(vlSelf->__VdfgTmp_h52f1e389__0)))) 
                                                << 5U))) 
                                           | ((0x10U 
                                               & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                     << 4U) 
                                                    | (0xfffffff0U 
                                                       & (((2U 
                                                            == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size)) 
                                                           << 4U) 
                                                          & ((IData)(vlSelf->__VdfgTmp_h52f1e389__0) 
                                                             << 2U)))) 
                                                   | (((1U 
                                                        == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size)) 
                                                       & (IData)(
                                                                 (4U 
                                                                  == 
                                                                  (6U 
                                                                   & (IData)(vlSelf->__VdfgTmp_h52f1e389__0))))) 
                                                      << 4U)) 
                                                  | ((IData)(
                                                             (4U 
                                                              == 
                                                              (7U 
                                                               & (IData)(vlSelf->__VdfgTmp_h52f1e389__0)))) 
                                                     << 4U))) 
                                              | ((8U 
                                                  & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                        | ((~ 
                                                            ((IData)(vlSelf->__VdfgTmp_h52f1e389__0) 
                                                             >> 2U)) 
                                                           & (2U 
                                                              == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size)))) 
                                                       | ((1U 
                                                           == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size)) 
                                                          & (IData)(
                                                                    (2U 
                                                                     == 
                                                                     (6U 
                                                                      & (IData)(vlSelf->__VdfgTmp_h52f1e389__0)))))) 
                                                      | (IData)(
                                                                (3U 
                                                                 == 
                                                                 (7U 
                                                                  & (IData)(vlSelf->__VdfgTmp_h52f1e389__0))))) 
                                                     << 3U)) 
                                                 | ((4U 
                                                     & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                           | ((~ 
                                                               ((IData)(vlSelf->__VdfgTmp_h52f1e389__0) 
                                                                >> 2U)) 
                                                              & (2U 
                                                                 == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size)))) 
                                                          | ((1U 
                                                              == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size)) 
                                                             & (IData)(
                                                                       (2U 
                                                                        == 
                                                                        (6U 
                                                                         & (IData)(vlSelf->__VdfgTmp_h52f1e389__0)))))) 
                                                         | (IData)(
                                                                   (2U 
                                                                    == 
                                                                    (7U 
                                                                     & (IData)(vlSelf->__VdfgTmp_h52f1e389__0))))) 
                                                        << 2U)) 
                                                    | ((2U 
                                                        & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                              | ((~ 
                                                                  ((IData)(vlSelf->__VdfgTmp_h52f1e389__0) 
                                                                   >> 2U)) 
                                                                 & (2U 
                                                                    == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size)))) 
                                                             | ((1U 
                                                                 == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size)) 
                                                                & (IData)(
                                                                          (0U 
                                                                           == 
                                                                           (6U 
                                                                            & (IData)(vlSelf->__VdfgTmp_h52f1e389__0)))))) 
                                                            | (IData)(
                                                                      (1U 
                                                                       == 
                                                                       (7U 
                                                                        & (IData)(vlSelf->__VdfgTmp_h52f1e389__0))))) 
                                                           << 1U)) 
                                                       | (1U 
                                                          & ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                               | ((~ 
                                                                   ((IData)(vlSelf->__VdfgTmp_h52f1e389__0) 
                                                                    >> 2U)) 
                                                                  & (2U 
                                                                     == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size)))) 
                                                              | ((1U 
                                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size)) 
                                                                 & (IData)(
                                                                           (0U 
                                                                            == 
                                                                            (6U 
                                                                             & (IData)(vlSelf->__VdfgTmp_h52f1e389__0)))))) 
                                                             | (IData)(
                                                                       (0U 
                                                                        == 
                                                                        (7U 
                                                                         & (IData)(vlSelf->__VdfgTmp_h52f1e389__0))))))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:389: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor: Assertion failed: 'A' channel PutPartial contains invalid mask (connected at generators/testchipip/src/main/scala/soc/Scratchpad.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 389, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_60.sv:391: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 391, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1290(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1290\n"); );
    // Body
    if (VL_UNLIKELY(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_valid) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                        & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_opcode)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:395: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor: Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at generators/testchipip/src/main/scala/soc/Scratchpad.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 395, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_60.sv:397: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 397, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_opcode)))) 
                     & (0x9fU < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_source))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:401: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor: Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at generators/testchipip/src/main/scala/soc/Scratchpad.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 401, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_60.sv:403: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 403, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1291(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1291\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_opcode)))) 
                     & (0U != (7U & ((~ ((IData)(7U) 
                                         << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size))) 
                                     & (IData)(vlSelf->__VdfgTmp_h52f1e389__0))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:407: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor: Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at generators/testchipip/src/main/scala/soc/Scratchpad.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 407, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_60.sv:409: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 409, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_opcode)))) 
                     & (4U < ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__repeater__DOT__full)
                               ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__repeater__DOT__saved_param)
                               : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_param)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:413: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor: Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at generators/testchipip/src/main/scala/soc/Scratchpad.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 413, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_60.sv:415: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 415, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1292(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1292\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_opcode)))) 
                     & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__repeater__DOT__full)
                          ? 0xffU : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_mask)) 
                        != ((0x80U & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                         << 7U) | (0xffffff80U 
                                                   & (((2U 
                                                        == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size)) 
                                                       << 7U) 
                                                      & ((IData)(vlSelf->__VdfgTmp_h52f1e389__0) 
                                                         << 5U)))) 
                                       | (((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size)) 
                                           & (IData)(
                                                     (6U 
                                                      == 
                                                      (6U 
                                                       & (IData)(vlSelf->__VdfgTmp_h52f1e389__0))))) 
                                          << 7U)) | 
                                      ((IData)((7U 
                                                == 
                                                (7U 
                                                 & (IData)(vlSelf->__VdfgTmp_h52f1e389__0)))) 
                                       << 7U))) | (
                                                   (0x40U 
                                                    & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                          << 6U) 
                                                         | (0xffffffc0U 
                                                            & (((2U 
                                                                 == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size)) 
                                                                << 6U) 
                                                               & ((IData)(vlSelf->__VdfgTmp_h52f1e389__0) 
                                                                  << 4U)))) 
                                                        | (((1U 
                                                             == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size)) 
                                                            & (IData)(
                                                                      (6U 
                                                                       == 
                                                                       (6U 
                                                                        & (IData)(vlSelf->__VdfgTmp_h52f1e389__0))))) 
                                                           << 6U)) 
                                                       | ((IData)(
                                                                  (6U 
                                                                   == 
                                                                   (7U 
                                                                    & (IData)(vlSelf->__VdfgTmp_h52f1e389__0)))) 
                                                          << 6U))) 
                                                   | ((0x20U 
                                                       & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                             << 5U) 
                                                            | (0xffffffe0U 
                                                               & (((2U 
                                                                    == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size)) 
                                                                   << 5U) 
                                                                  & ((IData)(vlSelf->__VdfgTmp_h52f1e389__0) 
                                                                     << 3U)))) 
                                                           | (((1U 
                                                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size)) 
                                                               & (IData)(
                                                                         (4U 
                                                                          == 
                                                                          (6U 
                                                                           & (IData)(vlSelf->__VdfgTmp_h52f1e389__0))))) 
                                                              << 5U)) 
                                                          | ((IData)(
                                                                     (5U 
                                                                      == 
                                                                      (7U 
                                                                       & (IData)(vlSelf->__VdfgTmp_h52f1e389__0)))) 
                                                             << 5U))) 
                                                      | ((0x10U 
                                                          & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                                << 4U) 
                                                               | (0xfffffff0U 
                                                                  & (((2U 
                                                                       == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size)) 
                                                                      << 4U) 
                                                                     & ((IData)(vlSelf->__VdfgTmp_h52f1e389__0) 
                                                                        << 2U)))) 
                                                              | (((1U 
                                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size)) 
                                                                  & (IData)(
                                                                            (4U 
                                                                             == 
                                                                             (6U 
                                                                              & (IData)(vlSelf->__VdfgTmp_h52f1e389__0))))) 
                                                                 << 4U)) 
                                                             | ((IData)(
                                                                        (4U 
                                                                         == 
                                                                         (7U 
                                                                          & (IData)(vlSelf->__VdfgTmp_h52f1e389__0)))) 
                                                                << 4U))) 
                                                         | ((8U 
                                                             & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                                   | ((~ 
                                                                       ((IData)(vlSelf->__VdfgTmp_h52f1e389__0) 
                                                                        >> 2U)) 
                                                                      & (2U 
                                                                         == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size)))) 
                                                                  | ((1U 
                                                                      == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size)) 
                                                                     & (IData)(
                                                                               (2U 
                                                                                == 
                                                                                (6U 
                                                                                & (IData)(vlSelf->__VdfgTmp_h52f1e389__0)))))) 
                                                                 | (IData)(
                                                                           (3U 
                                                                            == 
                                                                            (7U 
                                                                             & (IData)(vlSelf->__VdfgTmp_h52f1e389__0))))) 
                                                                << 3U)) 
                                                            | ((4U 
                                                                & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                                      | ((~ 
                                                                          ((IData)(vlSelf->__VdfgTmp_h52f1e389__0) 
                                                                           >> 2U)) 
                                                                         & (2U 
                                                                            == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size)))) 
                                                                     | ((1U 
                                                                         == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size)) 
                                                                        & (IData)(
                                                                                (2U 
                                                                                == 
                                                                                (6U 
                                                                                & (IData)(vlSelf->__VdfgTmp_h52f1e389__0)))))) 
                                                                    | (IData)(
                                                                              (2U 
                                                                               == 
                                                                               (7U 
                                                                                & (IData)(vlSelf->__VdfgTmp_h52f1e389__0))))) 
                                                                   << 2U)) 
                                                               | ((2U 
                                                                   & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                                         | ((~ 
                                                                             ((IData)(vlSelf->__VdfgTmp_h52f1e389__0) 
                                                                              >> 2U)) 
                                                                            & (2U 
                                                                               == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size)))) 
                                                                        | ((1U 
                                                                            == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size)) 
                                                                           & (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (6U 
                                                                                & (IData)(vlSelf->__VdfgTmp_h52f1e389__0)))))) 
                                                                       | (IData)(
                                                                                (1U 
                                                                                == 
                                                                                (7U 
                                                                                & (IData)(vlSelf->__VdfgTmp_h52f1e389__0))))) 
                                                                      << 1U)) 
                                                                  | (1U 
                                                                     & ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                                          | ((~ 
                                                                              ((IData)(vlSelf->__VdfgTmp_h52f1e389__0) 
                                                                               >> 2U)) 
                                                                             & (2U 
                                                                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size)))) 
                                                                         | ((1U 
                                                                             == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size)) 
                                                                            & (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (6U 
                                                                                & (IData)(vlSelf->__VdfgTmp_h52f1e389__0)))))) 
                                                                        | (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (7U 
                                                                                & (IData)(vlSelf->__VdfgTmp_h52f1e389__0))))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:419: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor: Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at generators/testchipip/src/main/scala/soc/Scratchpad.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 419, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_60.sv:421: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 421, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1293(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1293\n"); );
    // Body
    if (VL_UNLIKELY(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_valid) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                        & (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_opcode)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:425: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor: Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at generators/testchipip/src/main/scala/soc/Scratchpad.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 425, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_60.sv:427: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 427, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_opcode)))) 
                     & (0x9fU < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_source))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:431: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor: Assertion failed: 'A' channel Logical carries invalid source ID (connected at generators/testchipip/src/main/scala/soc/Scratchpad.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 431, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_60.sv:433: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 433, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1294(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1294\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_opcode)))) 
                     & (0U != (7U & ((~ ((IData)(7U) 
                                         << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size))) 
                                     & (IData)(vlSelf->__VdfgTmp_h52f1e389__0))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:437: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor: Assertion failed: 'A' channel Logical address not aligned to size (connected at generators/testchipip/src/main/scala/soc/Scratchpad.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 437, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_60.sv:439: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 439, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_opcode)))) 
                     & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__repeater__DOT__full)
                          ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__repeater__DOT__saved_param)
                          : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_param)) 
                        >> 2U)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:443: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor: Assertion failed: 'A' channel Logical carries invalid opcode param (connected at generators/testchipip/src/main/scala/soc/Scratchpad.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 443, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_60.sv:445: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 445, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1295(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1295\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_opcode)))) 
                     & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__repeater__DOT__full)
                          ? 0xffU : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_mask)) 
                        != ((0x80U & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                         << 7U) | (0xffffff80U 
                                                   & (((2U 
                                                        == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size)) 
                                                       << 7U) 
                                                      & ((IData)(vlSelf->__VdfgTmp_h52f1e389__0) 
                                                         << 5U)))) 
                                       | (((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size)) 
                                           & (IData)(
                                                     (6U 
                                                      == 
                                                      (6U 
                                                       & (IData)(vlSelf->__VdfgTmp_h52f1e389__0))))) 
                                          << 7U)) | 
                                      ((IData)((7U 
                                                == 
                                                (7U 
                                                 & (IData)(vlSelf->__VdfgTmp_h52f1e389__0)))) 
                                       << 7U))) | (
                                                   (0x40U 
                                                    & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                          << 6U) 
                                                         | (0xffffffc0U 
                                                            & (((2U 
                                                                 == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size)) 
                                                                << 6U) 
                                                               & ((IData)(vlSelf->__VdfgTmp_h52f1e389__0) 
                                                                  << 4U)))) 
                                                        | (((1U 
                                                             == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size)) 
                                                            & (IData)(
                                                                      (6U 
                                                                       == 
                                                                       (6U 
                                                                        & (IData)(vlSelf->__VdfgTmp_h52f1e389__0))))) 
                                                           << 6U)) 
                                                       | ((IData)(
                                                                  (6U 
                                                                   == 
                                                                   (7U 
                                                                    & (IData)(vlSelf->__VdfgTmp_h52f1e389__0)))) 
                                                          << 6U))) 
                                                   | ((0x20U 
                                                       & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                             << 5U) 
                                                            | (0xffffffe0U 
                                                               & (((2U 
                                                                    == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size)) 
                                                                   << 5U) 
                                                                  & ((IData)(vlSelf->__VdfgTmp_h52f1e389__0) 
                                                                     << 3U)))) 
                                                           | (((1U 
                                                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size)) 
                                                               & (IData)(
                                                                         (4U 
                                                                          == 
                                                                          (6U 
                                                                           & (IData)(vlSelf->__VdfgTmp_h52f1e389__0))))) 
                                                              << 5U)) 
                                                          | ((IData)(
                                                                     (5U 
                                                                      == 
                                                                      (7U 
                                                                       & (IData)(vlSelf->__VdfgTmp_h52f1e389__0)))) 
                                                             << 5U))) 
                                                      | ((0x10U 
                                                          & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                                << 4U) 
                                                               | (0xfffffff0U 
                                                                  & (((2U 
                                                                       == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size)) 
                                                                      << 4U) 
                                                                     & ((IData)(vlSelf->__VdfgTmp_h52f1e389__0) 
                                                                        << 2U)))) 
                                                              | (((1U 
                                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size)) 
                                                                  & (IData)(
                                                                            (4U 
                                                                             == 
                                                                             (6U 
                                                                              & (IData)(vlSelf->__VdfgTmp_h52f1e389__0))))) 
                                                                 << 4U)) 
                                                             | ((IData)(
                                                                        (4U 
                                                                         == 
                                                                         (7U 
                                                                          & (IData)(vlSelf->__VdfgTmp_h52f1e389__0)))) 
                                                                << 4U))) 
                                                         | ((8U 
                                                             & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                                   | ((~ 
                                                                       ((IData)(vlSelf->__VdfgTmp_h52f1e389__0) 
                                                                        >> 2U)) 
                                                                      & (2U 
                                                                         == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size)))) 
                                                                  | ((1U 
                                                                      == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size)) 
                                                                     & (IData)(
                                                                               (2U 
                                                                                == 
                                                                                (6U 
                                                                                & (IData)(vlSelf->__VdfgTmp_h52f1e389__0)))))) 
                                                                 | (IData)(
                                                                           (3U 
                                                                            == 
                                                                            (7U 
                                                                             & (IData)(vlSelf->__VdfgTmp_h52f1e389__0))))) 
                                                                << 3U)) 
                                                            | ((4U 
                                                                & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                                      | ((~ 
                                                                          ((IData)(vlSelf->__VdfgTmp_h52f1e389__0) 
                                                                           >> 2U)) 
                                                                         & (2U 
                                                                            == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size)))) 
                                                                     | ((1U 
                                                                         == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size)) 
                                                                        & (IData)(
                                                                                (2U 
                                                                                == 
                                                                                (6U 
                                                                                & (IData)(vlSelf->__VdfgTmp_h52f1e389__0)))))) 
                                                                    | (IData)(
                                                                              (2U 
                                                                               == 
                                                                               (7U 
                                                                                & (IData)(vlSelf->__VdfgTmp_h52f1e389__0))))) 
                                                                   << 2U)) 
                                                               | ((2U 
                                                                   & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                                         | ((~ 
                                                                             ((IData)(vlSelf->__VdfgTmp_h52f1e389__0) 
                                                                              >> 2U)) 
                                                                            & (2U 
                                                                               == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size)))) 
                                                                        | ((1U 
                                                                            == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size)) 
                                                                           & (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (6U 
                                                                                & (IData)(vlSelf->__VdfgTmp_h52f1e389__0)))))) 
                                                                       | (IData)(
                                                                                (1U 
                                                                                == 
                                                                                (7U 
                                                                                & (IData)(vlSelf->__VdfgTmp_h52f1e389__0))))) 
                                                                      << 1U)) 
                                                                  | (1U 
                                                                     & ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                                          | ((~ 
                                                                              ((IData)(vlSelf->__VdfgTmp_h52f1e389__0) 
                                                                               >> 2U)) 
                                                                             & (2U 
                                                                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size)))) 
                                                                         | ((1U 
                                                                             == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size)) 
                                                                            & (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (6U 
                                                                                & (IData)(vlSelf->__VdfgTmp_h52f1e389__0)))))) 
                                                                        | (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (7U 
                                                                                & (IData)(vlSelf->__VdfgTmp_h52f1e389__0))))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:449: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor: Assertion failed: 'A' channel Logical contains invalid mask (connected at generators/testchipip/src/main/scala/soc/Scratchpad.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 449, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_60.sv:451: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 451, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1296(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1296\n"); );
    // Body
    if (VL_UNLIKELY(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_valid) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                        & (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_opcode)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:455: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor: Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at generators/testchipip/src/main/scala/soc/Scratchpad.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 455, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_60.sv:457: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 457, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_opcode)))) 
                     & (0x9fU < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_source))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:461: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor: Assertion failed: 'A' channel Hint carries invalid source ID (connected at generators/testchipip/src/main/scala/soc/Scratchpad.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 461, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_60.sv:463: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 463, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1297(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1297\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_opcode)))) 
                     & (0U != (7U & ((~ ((IData)(7U) 
                                         << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size))) 
                                     & (IData)(vlSelf->__VdfgTmp_h52f1e389__0))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:467: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor: Assertion failed: 'A' channel Hint address not aligned to size (connected at generators/testchipip/src/main/scala/soc/Scratchpad.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 467, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_60.sv:469: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 469, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_opcode)))) 
                     & (0U != (3U & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__repeater__DOT__full)
                                       ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__repeater__DOT__saved_param)
                                       : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_param)) 
                                     >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:473: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor: Assertion failed: 'A' channel Hint carries invalid opcode param (connected at generators/testchipip/src/main/scala/soc/Scratchpad.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 473, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_60.sv:475: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 475, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1298(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1298\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_opcode)))) 
                     & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__repeater__DOT__full)
                          ? 0xffU : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_mask)) 
                        != ((0x80U & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                         << 7U) | (0xffffff80U 
                                                   & (((2U 
                                                        == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size)) 
                                                       << 7U) 
                                                      & ((IData)(vlSelf->__VdfgTmp_h52f1e389__0) 
                                                         << 5U)))) 
                                       | (((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size)) 
                                           & (IData)(
                                                     (6U 
                                                      == 
                                                      (6U 
                                                       & (IData)(vlSelf->__VdfgTmp_h52f1e389__0))))) 
                                          << 7U)) | 
                                      ((IData)((7U 
                                                == 
                                                (7U 
                                                 & (IData)(vlSelf->__VdfgTmp_h52f1e389__0)))) 
                                       << 7U))) | (
                                                   (0x40U 
                                                    & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                          << 6U) 
                                                         | (0xffffffc0U 
                                                            & (((2U 
                                                                 == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size)) 
                                                                << 6U) 
                                                               & ((IData)(vlSelf->__VdfgTmp_h52f1e389__0) 
                                                                  << 4U)))) 
                                                        | (((1U 
                                                             == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size)) 
                                                            & (IData)(
                                                                      (6U 
                                                                       == 
                                                                       (6U 
                                                                        & (IData)(vlSelf->__VdfgTmp_h52f1e389__0))))) 
                                                           << 6U)) 
                                                       | ((IData)(
                                                                  (6U 
                                                                   == 
                                                                   (7U 
                                                                    & (IData)(vlSelf->__VdfgTmp_h52f1e389__0)))) 
                                                          << 6U))) 
                                                   | ((0x20U 
                                                       & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                             << 5U) 
                                                            | (0xffffffe0U 
                                                               & (((2U 
                                                                    == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size)) 
                                                                   << 5U) 
                                                                  & ((IData)(vlSelf->__VdfgTmp_h52f1e389__0) 
                                                                     << 3U)))) 
                                                           | (((1U 
                                                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size)) 
                                                               & (IData)(
                                                                         (4U 
                                                                          == 
                                                                          (6U 
                                                                           & (IData)(vlSelf->__VdfgTmp_h52f1e389__0))))) 
                                                              << 5U)) 
                                                          | ((IData)(
                                                                     (5U 
                                                                      == 
                                                                      (7U 
                                                                       & (IData)(vlSelf->__VdfgTmp_h52f1e389__0)))) 
                                                             << 5U))) 
                                                      | ((0x10U 
                                                          & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                                << 4U) 
                                                               | (0xfffffff0U 
                                                                  & (((2U 
                                                                       == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size)) 
                                                                      << 4U) 
                                                                     & ((IData)(vlSelf->__VdfgTmp_h52f1e389__0) 
                                                                        << 2U)))) 
                                                              | (((1U 
                                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size)) 
                                                                  & (IData)(
                                                                            (4U 
                                                                             == 
                                                                             (6U 
                                                                              & (IData)(vlSelf->__VdfgTmp_h52f1e389__0))))) 
                                                                 << 4U)) 
                                                             | ((IData)(
                                                                        (4U 
                                                                         == 
                                                                         (7U 
                                                                          & (IData)(vlSelf->__VdfgTmp_h52f1e389__0)))) 
                                                                << 4U))) 
                                                         | ((8U 
                                                             & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                                   | ((~ 
                                                                       ((IData)(vlSelf->__VdfgTmp_h52f1e389__0) 
                                                                        >> 2U)) 
                                                                      & (2U 
                                                                         == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size)))) 
                                                                  | ((1U 
                                                                      == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size)) 
                                                                     & (IData)(
                                                                               (2U 
                                                                                == 
                                                                                (6U 
                                                                                & (IData)(vlSelf->__VdfgTmp_h52f1e389__0)))))) 
                                                                 | (IData)(
                                                                           (3U 
                                                                            == 
                                                                            (7U 
                                                                             & (IData)(vlSelf->__VdfgTmp_h52f1e389__0))))) 
                                                                << 3U)) 
                                                            | ((4U 
                                                                & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                                      | ((~ 
                                                                          ((IData)(vlSelf->__VdfgTmp_h52f1e389__0) 
                                                                           >> 2U)) 
                                                                         & (2U 
                                                                            == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size)))) 
                                                                     | ((1U 
                                                                         == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size)) 
                                                                        & (IData)(
                                                                                (2U 
                                                                                == 
                                                                                (6U 
                                                                                & (IData)(vlSelf->__VdfgTmp_h52f1e389__0)))))) 
                                                                    | (IData)(
                                                                              (2U 
                                                                               == 
                                                                               (7U 
                                                                                & (IData)(vlSelf->__VdfgTmp_h52f1e389__0))))) 
                                                                   << 2U)) 
                                                               | ((2U 
                                                                   & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                                         | ((~ 
                                                                             ((IData)(vlSelf->__VdfgTmp_h52f1e389__0) 
                                                                              >> 2U)) 
                                                                            & (2U 
                                                                               == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size)))) 
                                                                        | ((1U 
                                                                            == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size)) 
                                                                           & (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (6U 
                                                                                & (IData)(vlSelf->__VdfgTmp_h52f1e389__0)))))) 
                                                                       | (IData)(
                                                                                (1U 
                                                                                == 
                                                                                (7U 
                                                                                & (IData)(vlSelf->__VdfgTmp_h52f1e389__0))))) 
                                                                      << 1U)) 
                                                                  | (1U 
                                                                     & ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                                          | ((~ 
                                                                              ((IData)(vlSelf->__VdfgTmp_h52f1e389__0) 
                                                                               >> 2U)) 
                                                                             & (2U 
                                                                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size)))) 
                                                                         | ((1U 
                                                                             == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size)) 
                                                                            & (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (6U 
                                                                                & (IData)(vlSelf->__VdfgTmp_h52f1e389__0)))))) 
                                                                        | (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (7U 
                                                                                & (IData)(vlSelf->__VdfgTmp_h52f1e389__0))))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:479: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor: Assertion failed: 'A' channel Hint contains invalid mask (connected at generators/testchipip/src/main/scala/soc/Scratchpad.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 479, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_60.sv:481: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 481, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1299(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1299\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_opcode)))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__repeater__DOT__full)
                         ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt)
                         : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_corrupt))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:485: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor: Assertion failed: 'A' channel Hint is corrupt (connected at generators/testchipip/src/main/scala/soc/Scratchpad.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 485, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_60.sv:487: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 487, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__r_full) 
                       & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__r_read))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset))) 
                     & (0x9fU < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__r_source))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:545: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor: Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at generators/testchipip/src/main/scala/soc/Scratchpad.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 545, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_60.sv:547: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 547, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1300(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1300\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__r_full) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__r_read)) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset))) 
                     & (0x9fU < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__r_source))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:551: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor: Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at generators/testchipip/src/main/scala/soc/Scratchpad.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 551, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_60.sv:553: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 553, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT__a_first_counter) 
                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_opcode) 
                        != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT__opcode))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:563: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor: Assertion failed: 'A' channel opcode changed within multibeat operation (connected at generators/testchipip/src/main/scala/soc/Scratchpad.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 563, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_60.sv:565: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 565, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1301(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1301\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT__a_first_counter) 
                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))) 
                     & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__repeater__DOT__full)
                          ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__repeater__DOT__saved_param)
                          : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_param)) 
                        != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT__param))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:569: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor: Assertion failed: 'A' channel param changed within multibeat operation (connected at generators/testchipip/src/main/scala/soc/Scratchpad.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 569, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_60.sv:571: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 571, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT__a_first_counter) 
                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size) 
                        != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT__size))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:575: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor: Assertion failed: 'A' channel size changed within multibeat operation (connected at generators/testchipip/src/main/scala/soc/Scratchpad.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 575, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_60.sv:577: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 577, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1302(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1302\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT__a_first_counter) 
                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_source) 
                        != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT__source))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:581: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor: Assertion failed: 'A' channel source changed within multibeat operation (connected at generators/testchipip/src/main/scala/soc/Scratchpad.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 581, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_60.sv:583: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 583, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT__a_first_counter) 
                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))) 
                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_address 
                        != vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT__address)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:587: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor: Assertion failed: 'A' channel address changed with multibeat operation (connected at generators/testchipip/src/main/scala/soc/Scratchpad.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 587, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_60.sv:589: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 589, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1303(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1303\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__r_full) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT__d_first_counter) 
                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__r_read) 
                        != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT__opcode_1))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:593: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor: Assertion failed: 'D' channel opcode changed within multibeat operation (connected at generators/testchipip/src/main/scala/soc/Scratchpad.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 593, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_60.sv:595: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 595, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__r_full) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT__d_first_counter) 
                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__r_size) 
                        != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT__size_1))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:599: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor: Assertion failed: 'D' channel size changed within multibeat operation (connected at generators/testchipip/src/main/scala/soc/Scratchpad.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 599, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_60.sv:601: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 601, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1304(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1304\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_1;
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__r_full) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT__d_first_counter) 
                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__r_source) 
                        != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT__source_1))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:605: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor: Assertion failed: 'D' channel source changed within multibeat operation (connected at generators/testchipip/src/main/scala/soc/Scratchpad.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 605, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_60.sv:607: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 607, "");
        }
    }
    VL_SHIFTR_WWI(160,160,8, __Vtemp_1, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT__inflight, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_source));
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT___GEN_0) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset))) 
                     & __Vtemp_1[0U]))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:611: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor: Assertion failed: 'A' channel re-used a source ID (connected at generators/testchipip/src/main/scala/soc/Scratchpad.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 611, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_60.sv:613: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 613, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1305(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1305\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_1;
    // Body
    VL_SHIFTR_WWI(160,160,8, __Vtemp_1, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT__inflight, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__r_source));
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT___GEN_28) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset))) 
                     & (~ (__Vtemp_1[0U] | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT__same_cycle_resp)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:617: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at generators/testchipip/src/main/scala/soc/Scratchpad.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 617, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_60.sv:619: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 619, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT___GEN_28) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT__same_cycle_resp))) 
                     & (~ (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__r_read) 
                            == ((0x17U >= (0x1fU & 
                                           ((IData)(3U) 
                                            * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_opcode))))
                                 ? (7U & (0x911240U 
                                          >> (0x1fU 
                                              & ((IData)(3U) 
                                                 * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_opcode)))))
                                 : 0U)) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__r_read) 
                                           == ((0x17U 
                                                >= 
                                                (0x1fU 
                                                 & ((IData)(3U) 
                                                    * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_opcode))))
                                                ? (7U 
                                                   & (0x951240U 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(3U) 
                                                          * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_opcode)))))
                                                : 0U))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:623: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor: Assertion failed: 'D' channel contains improper opcode response (connected at generators/testchipip/src/main/scala/soc/Scratchpad.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 623, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_60.sv:625: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 625, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1306(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1306\n"); );
    // Init
    VlWide<20>/*639:0*/ __Vtemp_1;
    VlWide<20>/*639:0*/ __Vtemp_2;
    VlWide<20>/*639:0*/ __Vtemp_3;
    VlWide<20>/*639:0*/ __Vtemp_4;
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT___GEN_28) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT__same_cycle_resp))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size) 
                        != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__r_size))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:629: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor: Assertion failed: 'D' channel contains improper response size (connected at generators/testchipip/src/main/scala/soc/Scratchpad.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 629, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_60.sv:631: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 631, "");
        }
    }
    VL_SHIFTR_WWI(640,640,10, __Vtemp_1, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT__inflight_opcodes, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__r_source) 
                   << 2U));
    VL_SHIFTR_WWI(640,640,10, __Vtemp_2, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT__inflight_opcodes, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__r_source) 
                   << 2U));
    VL_SHIFTR_WWI(640,640,10, __Vtemp_3, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT__inflight_opcodes, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__r_source) 
                   << 2U));
    VL_SHIFTR_WWI(640,640,10, __Vtemp_4, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT__inflight_opcodes, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__r_source) 
                   << 2U));
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT___GEN_28) 
                      & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT__same_cycle_resp)) 
                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))) 
                     & (~ (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__r_read) 
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
                                 : 0U)) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__r_read) 
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
        VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:635: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor: Assertion failed: 'D' channel contains improper opcode response (connected at generators/testchipip/src/main/scala/soc/Scratchpad.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 635, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_60.sv:637: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 637, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1307(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1307\n"); );
    // Init
    VlWide<20>/*639:0*/ __Vtemp_1;
    // Body
    VL_SHIFTR_WWI(640,640,10, __Vtemp_1, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT__inflight_sizes, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__r_source) 
                   << 2U));
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT___GEN_28) 
                      & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT__same_cycle_resp)) 
                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__r_size) 
                        != (7U & (__Vtemp_1[0U] >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:641: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor: Assertion failed: 'D' channel contains improper response size (connected at generators/testchipip/src/main/scala/soc/Scratchpad.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 641, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_60.sv:643: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 643, "");
        }
    }
    if (VL_UNLIKELY(((((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT___GEN_28) 
                         & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT__a_first_counter_1))) 
                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_valid)) 
                       & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_source) 
                          == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__r_source))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset))) 
                     & (~ ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_d_ready)) 
                           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___ram_auto_in_a_ready)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:647: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor: Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 647, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_60.sv:649: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 649, "");
        }
    }
}

extern const VlWide<8>/*255:0*/ VTestDriver__ConstPool__CONST_h4e9f510d_0;

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1308(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1308\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_1;
    VlWide<5>/*159:0*/ __Vtemp_2;
    VlWide<8>/*255:0*/ __Vtemp_5;
    VlWide<5>/*159:0*/ __Vtemp_10;
    VlWide<5>/*159:0*/ __Vtemp_11;
    // Body
    __Vtemp_1[0U] = 1U;
    __Vtemp_1[1U] = 0U;
    __Vtemp_1[2U] = 0U;
    __Vtemp_1[3U] = 0U;
    __Vtemp_1[4U] = 0U;
    VL_SHIFTL_WWI(160,160,8, __Vtemp_2, __Vtemp_1, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_source));
    VL_SHIFTL_WWI(256,256,8, __Vtemp_5, VTestDriver__ConstPool__CONST_h4e9f510d_0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__r_source));
    __Vtemp_10[0U] = 1U;
    __Vtemp_10[1U] = 0U;
    __Vtemp_10[2U] = 0U;
    __Vtemp_10[3U] = 0U;
    __Vtemp_10[4U] = 0U;
    VL_SHIFTL_WWI(160,160,8, __Vtemp_11, __Vtemp_10, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_source));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)) 
                           & (~ ((0U != (((((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT___same_cycle_resp_T_1)
                                               ? __Vtemp_2[0U]
                                               : 0U) 
                                             ^ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT___GEN_28)
                                                 ? 
                                                __Vtemp_5[0U]
                                                 : 0U)) 
                                            | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT___same_cycle_resp_T_1)
                                                 ? 
                                                __Vtemp_2[1U]
                                                 : 0U) 
                                               ^ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT___GEN_28)
                                                   ? 
                                                  __Vtemp_5[1U]
                                                   : 0U))) 
                                           | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT___same_cycle_resp_T_1)
                                                ? __Vtemp_2[2U]
                                                : 0U) 
                                              ^ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT___GEN_28)
                                                  ? 
                                                 __Vtemp_5[2U]
                                                  : 0U))) 
                                          | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT___same_cycle_resp_T_1)
                                               ? __Vtemp_2[3U]
                                               : 0U) 
                                             ^ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT___GEN_28)
                                                 ? 
                                                __Vtemp_5[3U]
                                                 : 0U))) 
                                         | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT___same_cycle_resp_T_1)
                                              ? __Vtemp_2[4U]
                                              : 0U) 
                                            ^ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT___GEN_28)
                                                ? __Vtemp_5[4U]
                                                : 0U)))) 
                                 | (0U == ((((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT___same_cycle_resp_T_1)
                                                ? __Vtemp_11[0U]
                                                : 0U) 
                                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT___same_cycle_resp_T_1)
                                                  ? 
                                                 __Vtemp_11[1U]
                                                  : 0U)) 
                                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT___same_cycle_resp_T_1)
                                                 ? 
                                                __Vtemp_11[2U]
                                                 : 0U)) 
                                            | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT___same_cycle_resp_T_1)
                                                ? __Vtemp_11[3U]
                                                : 0U)) 
                                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT___same_cycle_resp_T_1)
                                               ? __Vtemp_11[4U]
                                               : 0U))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:653: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor: Assertion failed: 'A' and 'D' concurrent, despite minlatency > 0 (connected at generators/testchipip/src/main/scala/soc/Scratchpad.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 653, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_60.sv:655: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 655, "");
        }
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)) 
                           & (~ (((0U == ((((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT__inflight[0U] 
                                             | vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT__inflight[1U]) 
                                            | vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT__inflight[2U]) 
                                           | vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT__inflight[3U]) 
                                          | vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT__inflight[4U])) 
                                  | (0U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                 | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT__watchdog 
                                    < vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT__plusarg_reader__DOT__myplus))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:659: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor: Assertion failed: TileLink timeout expired (connected at generators/testchipip/src/main/scala/soc/Scratchpad.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 659, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_60.sv:661: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 661, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1309(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1309\n"); );
    // Body
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)) 
                           & (~ (((0U == ((((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT__inflight_1[0U] 
                                             | vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT__inflight_1[1U]) 
                                            | vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT__inflight_1[2U]) 
                                           | vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT__inflight_1[3U]) 
                                          | vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT__inflight_1[4U])) 
                                  | (0U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                                 | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT__watchdog_1 
                                    < vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:677: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor: Assertion failed: TileLink timeout expired (connected at generators/testchipip/src/main/scala/soc/Scratchpad.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 677, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_60.sv:679: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bank.ram.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_60.sv", 679, "");
        }
    }
    vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__tag_array_0__DOT__tag_array_0_0_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
    if (VL_UNLIKELY(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___mbus_auto_buffer_out_a_valid) 
                     & (IData)(vlSelf->__VdfgTmp_h545c2380__0)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:199: Assertion failed in %NTestDriver.testHarness.chiptop0.system.mbus.picker.monitor_1: Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at generators/rocket-chip/src/main/scala/subsystem/MemoryBus.scala:47:50)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_35.sv", 199, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_35.sv:201: Assertion failed in %NTestDriver.testHarness.chiptop0.system.mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_35.sv", 201, "");
        }
        VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:203: Assertion failed in %NTestDriver.testHarness.chiptop0.system.mbus.picker.monitor_1: Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at generators/rocket-chip/src/main/scala/subsystem/MemoryBus.scala:47:50)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_35.sv", 203, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_35.sv:205: Assertion failed in %NTestDriver.testHarness.chiptop0.system.mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/justin/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.EEC270Core/gen-collateral/TLMonitor_35.sv", 205, "");
        }
    }
}
