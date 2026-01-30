// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestDriver.h for the primary calling header

#include "VTestDriver__pch.h"
#include "VTestDriver___024root.h"

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4836(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4836\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_5__DOT__wrbypass_enq_idx = 0U;
    } else if ((1U & (~ ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_5__DOT___GEN_6)) 
                         | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_5__DOT__wrbypass_hit))))) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_5__DOT__wrbypass_enq_idx 
            = (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_5__DOT__wrbypass_enq_idx) 
                     - (IData)(1U)));
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_5__DOT___GEN_6) {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_5__DOT__wrbypass_hit) {
            if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_5__DOT__wrbypass_hits_0) {
                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_5__DOT__wrbypass_0_0 
                    = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_alloc_0_REG_5)
                              ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_0_REG_5)
                                  ? 4U : 3U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_5__DOT__wrbypass_hit)
                                                 ? 
                                                ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_0_REG_5)
                                                  ? 
                                                 ((7U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_5__DOT___GEN_2))
                                                   ? 7U
                                                   : 
                                                  ((IData)(1U) 
                                                   + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_5__DOT___GEN_2)))
                                                  : 
                                                 ((0U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_5__DOT___GEN_2))
                                                   ? 0U
                                                   : 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_5__DOT___GEN_2) 
                                                   - (IData)(1U))))
                                                 : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_5__DOT___update_wdata_0_ctr_T_20))));
                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_5__DOT__wrbypass_0_1 
                    = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_alloc_1_REG_5)
                              ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_1_REG_5)
                                  ? 4U : 3U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_5__DOT__wrbypass_hit)
                                                 ? 
                                                ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_1_REG_5)
                                                  ? 
                                                 ((7U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_5__DOT___GEN_3))
                                                   ? 7U
                                                   : 
                                                  ((IData)(1U) 
                                                   + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_5__DOT___GEN_3)))
                                                  : 
                                                 ((0U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_5__DOT___GEN_3))
                                                   ? 0U
                                                   : 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_5__DOT___GEN_3) 
                                                   - (IData)(1U))))
                                                 : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_5__DOT___update_wdata_1_ctr_T_20))));
                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_5__DOT__wrbypass_0_2 
                    = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_alloc_2_REG_5)
                              ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_2_REG_5)
                                  ? 4U : 3U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_5__DOT__wrbypass_hit)
                                                 ? 
                                                ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_2_REG_5)
                                                  ? 
                                                 ((7U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_5__DOT___GEN_4))
                                                   ? 7U
                                                   : 
                                                  ((IData)(1U) 
                                                   + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_5__DOT___GEN_4)))
                                                  : 
                                                 ((0U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_5__DOT___GEN_4))
                                                   ? 0U
                                                   : 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_5__DOT___GEN_4) 
                                                   - (IData)(1U))))
                                                 : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_5__DOT___update_wdata_2_ctr_T_20))));
                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_5__DOT__wrbypass_0_3 
                    = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_alloc_3_REG_5)
                              ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_3_REG_5)
                                  ? 4U : 3U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_5__DOT__wrbypass_hit)
                                                 ? 
                                                ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_3_REG_5)
                                                  ? 
                                                 ((7U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_5__DOT___GEN_5))
                                                   ? 7U
                                                   : 
                                                  ((IData)(1U) 
                                                   + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_5__DOT___GEN_5)))
                                                  : 
                                                 ((0U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_5__DOT___GEN_5))
                                                   ? 0U
                                                   : 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_5__DOT___GEN_5) 
                                                   - (IData)(1U))))
                                                 : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_5__DOT___update_wdata_3_ctr_T_20))));
            } else {
                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_5__DOT__wrbypass_1_0 
                    = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_alloc_0_REG_5)
                              ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_0_REG_5)
                                  ? 4U : 3U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_5__DOT__wrbypass_hit)
                                                 ? 
                                                ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_0_REG_5)
                                                  ? 
                                                 ((7U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_5__DOT___GEN_2))
                                                   ? 7U
                                                   : 
                                                  ((IData)(1U) 
                                                   + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_5__DOT___GEN_2)))
                                                  : 
                                                 ((0U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_5__DOT___GEN_2))
                                                   ? 0U
                                                   : 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_5__DOT___GEN_2) 
                                                   - (IData)(1U))))
                                                 : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_5__DOT___update_wdata_0_ctr_T_20))));
                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_5__DOT__wrbypass_1_1 
                    = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_alloc_1_REG_5)
                              ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_1_REG_5)
                                  ? 4U : 3U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_5__DOT__wrbypass_hit)
                                                 ? 
                                                ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_1_REG_5)
                                                  ? 
                                                 ((7U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_5__DOT___GEN_3))
                                                   ? 7U
                                                   : 
                                                  ((IData)(1U) 
                                                   + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_5__DOT___GEN_3)))
                                                  : 
                                                 ((0U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_5__DOT___GEN_3))
                                                   ? 0U
                                                   : 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_5__DOT___GEN_3) 
                                                   - (IData)(1U))))
                                                 : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_5__DOT___update_wdata_1_ctr_T_20))));
                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_5__DOT__wrbypass_1_2 
                    = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_alloc_2_REG_5)
                              ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_2_REG_5)
                                  ? 4U : 3U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_5__DOT__wrbypass_hit)
                                                 ? 
                                                ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_2_REG_5)
                                                  ? 
                                                 ((7U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_5__DOT___GEN_4))
                                                   ? 7U
                                                   : 
                                                  ((IData)(1U) 
                                                   + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_5__DOT___GEN_4)))
                                                  : 
                                                 ((0U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_5__DOT___GEN_4))
                                                   ? 0U
                                                   : 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_5__DOT___GEN_4) 
                                                   - (IData)(1U))))
                                                 : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_5__DOT___update_wdata_2_ctr_T_20))));
                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_5__DOT__wrbypass_1_3 
                    = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_alloc_3_REG_5)
                              ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_3_REG_5)
                                  ? 4U : 3U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_5__DOT__wrbypass_hit)
                                                 ? 
                                                ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_3_REG_5)
                                                  ? 
                                                 ((7U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_5__DOT___GEN_5))
                                                   ? 7U
                                                   : 
                                                  ((IData)(1U) 
                                                   + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_5__DOT___GEN_5)))
                                                  : 
                                                 ((0U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_5__DOT___GEN_5))
                                                   ? 0U
                                                   : 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_5__DOT___GEN_5) 
                                                   - (IData)(1U))))
                                                 : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_5__DOT___update_wdata_3_ctr_T_20))));
            }
        } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_5__DOT__wrbypass_enq_idx) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_5__DOT__wrbypass_1_0 
                = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_alloc_0_REG_5)
                          ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_0_REG_5)
                              ? 4U : 3U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_5__DOT__wrbypass_hit)
                                             ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_0_REG_5)
                                                 ? 
                                                ((7U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_5__DOT___GEN_2))
                                                  ? 7U
                                                  : 
                                                 ((IData)(1U) 
                                                  + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_5__DOT___GEN_2)))
                                                 : 
                                                ((0U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_5__DOT___GEN_2))
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_5__DOT___GEN_2) 
                                                  - (IData)(1U))))
                                             : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_5__DOT___update_wdata_0_ctr_T_20))));
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_5__DOT__wrbypass_1_1 
                = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_alloc_1_REG_5)
                          ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_1_REG_5)
                              ? 4U : 3U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_5__DOT__wrbypass_hit)
                                             ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_1_REG_5)
                                                 ? 
                                                ((7U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_5__DOT___GEN_3))
                                                  ? 7U
                                                  : 
                                                 ((IData)(1U) 
                                                  + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_5__DOT___GEN_3)))
                                                 : 
                                                ((0U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_5__DOT___GEN_3))
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_5__DOT___GEN_3) 
                                                  - (IData)(1U))))
                                             : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_5__DOT___update_wdata_1_ctr_T_20))));
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_5__DOT__wrbypass_1_2 
                = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_alloc_2_REG_5)
                          ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_2_REG_5)
                              ? 4U : 3U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_5__DOT__wrbypass_hit)
                                             ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_2_REG_5)
                                                 ? 
                                                ((7U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_5__DOT___GEN_4))
                                                  ? 7U
                                                  : 
                                                 ((IData)(1U) 
                                                  + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_5__DOT___GEN_4)))
                                                 : 
                                                ((0U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_5__DOT___GEN_4))
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_5__DOT___GEN_4) 
                                                  - (IData)(1U))))
                                             : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_5__DOT___update_wdata_2_ctr_T_20))));
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_5__DOT__wrbypass_1_3 
                = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_alloc_3_REG_5)
                          ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_3_REG_5)
                              ? 4U : 3U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_5__DOT__wrbypass_hit)
                                             ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_3_REG_5)
                                                 ? 
                                                ((7U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_5__DOT___GEN_5))
                                                  ? 7U
                                                  : 
                                                 ((IData)(1U) 
                                                  + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_5__DOT___GEN_5)))
                                                 : 
                                                ((0U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_5__DOT___GEN_5))
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_5__DOT___GEN_5) 
                                                  - (IData)(1U))))
                                             : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_5__DOT___update_wdata_3_ctr_T_20))));
        } else {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_5__DOT__wrbypass_0_0 
                = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_alloc_0_REG_5)
                          ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_0_REG_5)
                              ? 4U : 3U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_5__DOT__wrbypass_hit)
                                             ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_0_REG_5)
                                                 ? 
                                                ((7U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_5__DOT___GEN_2))
                                                  ? 7U
                                                  : 
                                                 ((IData)(1U) 
                                                  + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_5__DOT___GEN_2)))
                                                 : 
                                                ((0U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_5__DOT___GEN_2))
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_5__DOT___GEN_2) 
                                                  - (IData)(1U))))
                                             : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_5__DOT___update_wdata_0_ctr_T_20))));
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_5__DOT__wrbypass_0_1 
                = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_alloc_1_REG_5)
                          ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_1_REG_5)
                              ? 4U : 3U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_5__DOT__wrbypass_hit)
                                             ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_1_REG_5)
                                                 ? 
                                                ((7U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_5__DOT___GEN_3))
                                                  ? 7U
                                                  : 
                                                 ((IData)(1U) 
                                                  + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_5__DOT___GEN_3)))
                                                 : 
                                                ((0U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_5__DOT___GEN_3))
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_5__DOT___GEN_3) 
                                                  - (IData)(1U))))
                                             : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_5__DOT___update_wdata_1_ctr_T_20))));
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_5__DOT__wrbypass_0_2 
                = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_alloc_2_REG_5)
                          ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_2_REG_5)
                              ? 4U : 3U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_5__DOT__wrbypass_hit)
                                             ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_2_REG_5)
                                                 ? 
                                                ((7U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_5__DOT___GEN_4))
                                                  ? 7U
                                                  : 
                                                 ((IData)(1U) 
                                                  + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_5__DOT___GEN_4)))
                                                 : 
                                                ((0U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_5__DOT___GEN_4))
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_5__DOT___GEN_4) 
                                                  - (IData)(1U))))
                                             : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_5__DOT___update_wdata_2_ctr_T_20))));
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_5__DOT__wrbypass_0_3 
                = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_alloc_3_REG_5)
                          ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_3_REG_5)
                              ? 4U : 3U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_5__DOT__wrbypass_hit)
                                             ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_3_REG_5)
                                                 ? 
                                                ((7U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_5__DOT___GEN_5))
                                                  ? 7U
                                                  : 
                                                 ((IData)(1U) 
                                                  + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_5__DOT___GEN_5)))
                                                 : 
                                                ((0U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_5__DOT___GEN_5))
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_5__DOT___GEN_5) 
                                                  - (IData)(1U))))
                                             : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_5__DOT___update_wdata_3_ctr_T_20))));
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4837(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4837\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_4__DOT__wrbypass_enq_idx = 0U;
    } else if ((1U & (~ ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_4__DOT___GEN_6)) 
                         | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_4__DOT__wrbypass_hit))))) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_4__DOT__wrbypass_enq_idx 
            = (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_4__DOT__wrbypass_enq_idx) 
                     - (IData)(1U)));
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_4__DOT___GEN_6) {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_4__DOT__wrbypass_hit) {
            if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_4__DOT__wrbypass_hits_0) {
                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_4__DOT__wrbypass_0_0 
                    = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_alloc_0_REG_4)
                              ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_0_REG_4)
                                  ? 4U : 3U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_4__DOT__wrbypass_hit)
                                                 ? 
                                                ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_0_REG_4)
                                                  ? 
                                                 ((7U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_4__DOT___GEN_2))
                                                   ? 7U
                                                   : 
                                                  ((IData)(1U) 
                                                   + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_4__DOT___GEN_2)))
                                                  : 
                                                 ((0U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_4__DOT___GEN_2))
                                                   ? 0U
                                                   : 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_4__DOT___GEN_2) 
                                                   - (IData)(1U))))
                                                 : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_4__DOT___update_wdata_0_ctr_T_20))));
                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_4__DOT__wrbypass_0_1 
                    = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_alloc_1_REG_4)
                              ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_1_REG_4)
                                  ? 4U : 3U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_4__DOT__wrbypass_hit)
                                                 ? 
                                                ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_1_REG_4)
                                                  ? 
                                                 ((7U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_4__DOT___GEN_3))
                                                   ? 7U
                                                   : 
                                                  ((IData)(1U) 
                                                   + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_4__DOT___GEN_3)))
                                                  : 
                                                 ((0U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_4__DOT___GEN_3))
                                                   ? 0U
                                                   : 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_4__DOT___GEN_3) 
                                                   - (IData)(1U))))
                                                 : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_4__DOT___update_wdata_1_ctr_T_20))));
                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_4__DOT__wrbypass_0_2 
                    = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_alloc_2_REG_4)
                              ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_2_REG_4)
                                  ? 4U : 3U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_4__DOT__wrbypass_hit)
                                                 ? 
                                                ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_2_REG_4)
                                                  ? 
                                                 ((7U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_4__DOT___GEN_4))
                                                   ? 7U
                                                   : 
                                                  ((IData)(1U) 
                                                   + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_4__DOT___GEN_4)))
                                                  : 
                                                 ((0U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_4__DOT___GEN_4))
                                                   ? 0U
                                                   : 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_4__DOT___GEN_4) 
                                                   - (IData)(1U))))
                                                 : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_4__DOT___update_wdata_2_ctr_T_20))));
                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_4__DOT__wrbypass_0_3 
                    = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_alloc_3_REG_4)
                              ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_3_REG_4)
                                  ? 4U : 3U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_4__DOT__wrbypass_hit)
                                                 ? 
                                                ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_3_REG_4)
                                                  ? 
                                                 ((7U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_4__DOT___GEN_5))
                                                   ? 7U
                                                   : 
                                                  ((IData)(1U) 
                                                   + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_4__DOT___GEN_5)))
                                                  : 
                                                 ((0U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_4__DOT___GEN_5))
                                                   ? 0U
                                                   : 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_4__DOT___GEN_5) 
                                                   - (IData)(1U))))
                                                 : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_4__DOT___update_wdata_3_ctr_T_20))));
            } else {
                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_4__DOT__wrbypass_1_0 
                    = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_alloc_0_REG_4)
                              ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_0_REG_4)
                                  ? 4U : 3U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_4__DOT__wrbypass_hit)
                                                 ? 
                                                ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_0_REG_4)
                                                  ? 
                                                 ((7U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_4__DOT___GEN_2))
                                                   ? 7U
                                                   : 
                                                  ((IData)(1U) 
                                                   + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_4__DOT___GEN_2)))
                                                  : 
                                                 ((0U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_4__DOT___GEN_2))
                                                   ? 0U
                                                   : 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_4__DOT___GEN_2) 
                                                   - (IData)(1U))))
                                                 : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_4__DOT___update_wdata_0_ctr_T_20))));
                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_4__DOT__wrbypass_1_1 
                    = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_alloc_1_REG_4)
                              ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_1_REG_4)
                                  ? 4U : 3U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_4__DOT__wrbypass_hit)
                                                 ? 
                                                ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_1_REG_4)
                                                  ? 
                                                 ((7U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_4__DOT___GEN_3))
                                                   ? 7U
                                                   : 
                                                  ((IData)(1U) 
                                                   + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_4__DOT___GEN_3)))
                                                  : 
                                                 ((0U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_4__DOT___GEN_3))
                                                   ? 0U
                                                   : 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_4__DOT___GEN_3) 
                                                   - (IData)(1U))))
                                                 : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_4__DOT___update_wdata_1_ctr_T_20))));
                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_4__DOT__wrbypass_1_2 
                    = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_alloc_2_REG_4)
                              ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_2_REG_4)
                                  ? 4U : 3U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_4__DOT__wrbypass_hit)
                                                 ? 
                                                ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_2_REG_4)
                                                  ? 
                                                 ((7U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_4__DOT___GEN_4))
                                                   ? 7U
                                                   : 
                                                  ((IData)(1U) 
                                                   + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_4__DOT___GEN_4)))
                                                  : 
                                                 ((0U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_4__DOT___GEN_4))
                                                   ? 0U
                                                   : 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_4__DOT___GEN_4) 
                                                   - (IData)(1U))))
                                                 : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_4__DOT___update_wdata_2_ctr_T_20))));
                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_4__DOT__wrbypass_1_3 
                    = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_alloc_3_REG_4)
                              ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_3_REG_4)
                                  ? 4U : 3U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_4__DOT__wrbypass_hit)
                                                 ? 
                                                ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_3_REG_4)
                                                  ? 
                                                 ((7U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_4__DOT___GEN_5))
                                                   ? 7U
                                                   : 
                                                  ((IData)(1U) 
                                                   + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_4__DOT___GEN_5)))
                                                  : 
                                                 ((0U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_4__DOT___GEN_5))
                                                   ? 0U
                                                   : 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_4__DOT___GEN_5) 
                                                   - (IData)(1U))))
                                                 : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_4__DOT___update_wdata_3_ctr_T_20))));
            }
        } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_4__DOT__wrbypass_enq_idx) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_4__DOT__wrbypass_1_0 
                = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_alloc_0_REG_4)
                          ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_0_REG_4)
                              ? 4U : 3U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_4__DOT__wrbypass_hit)
                                             ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_0_REG_4)
                                                 ? 
                                                ((7U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_4__DOT___GEN_2))
                                                  ? 7U
                                                  : 
                                                 ((IData)(1U) 
                                                  + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_4__DOT___GEN_2)))
                                                 : 
                                                ((0U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_4__DOT___GEN_2))
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_4__DOT___GEN_2) 
                                                  - (IData)(1U))))
                                             : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_4__DOT___update_wdata_0_ctr_T_20))));
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_4__DOT__wrbypass_1_1 
                = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_alloc_1_REG_4)
                          ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_1_REG_4)
                              ? 4U : 3U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_4__DOT__wrbypass_hit)
                                             ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_1_REG_4)
                                                 ? 
                                                ((7U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_4__DOT___GEN_3))
                                                  ? 7U
                                                  : 
                                                 ((IData)(1U) 
                                                  + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_4__DOT___GEN_3)))
                                                 : 
                                                ((0U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_4__DOT___GEN_3))
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_4__DOT___GEN_3) 
                                                  - (IData)(1U))))
                                             : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_4__DOT___update_wdata_1_ctr_T_20))));
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_4__DOT__wrbypass_1_2 
                = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_alloc_2_REG_4)
                          ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_2_REG_4)
                              ? 4U : 3U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_4__DOT__wrbypass_hit)
                                             ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_2_REG_4)
                                                 ? 
                                                ((7U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_4__DOT___GEN_4))
                                                  ? 7U
                                                  : 
                                                 ((IData)(1U) 
                                                  + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_4__DOT___GEN_4)))
                                                 : 
                                                ((0U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_4__DOT___GEN_4))
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_4__DOT___GEN_4) 
                                                  - (IData)(1U))))
                                             : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_4__DOT___update_wdata_2_ctr_T_20))));
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_4__DOT__wrbypass_1_3 
                = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_alloc_3_REG_4)
                          ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_3_REG_4)
                              ? 4U : 3U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_4__DOT__wrbypass_hit)
                                             ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_3_REG_4)
                                                 ? 
                                                ((7U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_4__DOT___GEN_5))
                                                  ? 7U
                                                  : 
                                                 ((IData)(1U) 
                                                  + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_4__DOT___GEN_5)))
                                                 : 
                                                ((0U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_4__DOT___GEN_5))
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_4__DOT___GEN_5) 
                                                  - (IData)(1U))))
                                             : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_4__DOT___update_wdata_3_ctr_T_20))));
        } else {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_4__DOT__wrbypass_0_0 
                = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_alloc_0_REG_4)
                          ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_0_REG_4)
                              ? 4U : 3U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_4__DOT__wrbypass_hit)
                                             ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_0_REG_4)
                                                 ? 
                                                ((7U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_4__DOT___GEN_2))
                                                  ? 7U
                                                  : 
                                                 ((IData)(1U) 
                                                  + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_4__DOT___GEN_2)))
                                                 : 
                                                ((0U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_4__DOT___GEN_2))
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_4__DOT___GEN_2) 
                                                  - (IData)(1U))))
                                             : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_4__DOT___update_wdata_0_ctr_T_20))));
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_4__DOT__wrbypass_0_1 
                = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_alloc_1_REG_4)
                          ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_1_REG_4)
                              ? 4U : 3U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_4__DOT__wrbypass_hit)
                                             ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_1_REG_4)
                                                 ? 
                                                ((7U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_4__DOT___GEN_3))
                                                  ? 7U
                                                  : 
                                                 ((IData)(1U) 
                                                  + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_4__DOT___GEN_3)))
                                                 : 
                                                ((0U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_4__DOT___GEN_3))
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_4__DOT___GEN_3) 
                                                  - (IData)(1U))))
                                             : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_4__DOT___update_wdata_1_ctr_T_20))));
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_4__DOT__wrbypass_0_2 
                = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_alloc_2_REG_4)
                          ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_2_REG_4)
                              ? 4U : 3U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_4__DOT__wrbypass_hit)
                                             ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_2_REG_4)
                                                 ? 
                                                ((7U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_4__DOT___GEN_4))
                                                  ? 7U
                                                  : 
                                                 ((IData)(1U) 
                                                  + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_4__DOT___GEN_4)))
                                                 : 
                                                ((0U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_4__DOT___GEN_4))
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_4__DOT___GEN_4) 
                                                  - (IData)(1U))))
                                             : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_4__DOT___update_wdata_2_ctr_T_20))));
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_4__DOT__wrbypass_0_3 
                = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_alloc_3_REG_4)
                          ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_3_REG_4)
                              ? 4U : 3U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_4__DOT__wrbypass_hit)
                                             ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_3_REG_4)
                                                 ? 
                                                ((7U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_4__DOT___GEN_5))
                                                  ? 7U
                                                  : 
                                                 ((IData)(1U) 
                                                  + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_4__DOT___GEN_5)))
                                                 : 
                                                ((0U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_4__DOT___GEN_5))
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_4__DOT___GEN_5) 
                                                  - (IData)(1U))))
                                             : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_4__DOT___update_wdata_3_ctr_T_20))));
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4838(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4838\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_3__DOT__wrbypass_enq_idx = 0U;
    } else if ((1U & (~ ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_3__DOT___GEN_6)) 
                         | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_3__DOT__wrbypass_hit))))) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_3__DOT__wrbypass_enq_idx 
            = (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_3__DOT__wrbypass_enq_idx) 
                     - (IData)(1U)));
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_3__DOT___GEN_6) {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_3__DOT__wrbypass_hit) {
            if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_3__DOT__wrbypass_hits_0) {
                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_3__DOT__wrbypass_0_0 
                    = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_alloc_0_REG_3)
                              ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_0_REG_3)
                                  ? 4U : 3U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_3__DOT__wrbypass_hit)
                                                 ? 
                                                ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_0_REG_3)
                                                  ? 
                                                 ((7U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_3__DOT___GEN_2))
                                                   ? 7U
                                                   : 
                                                  ((IData)(1U) 
                                                   + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_3__DOT___GEN_2)))
                                                  : 
                                                 ((0U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_3__DOT___GEN_2))
                                                   ? 0U
                                                   : 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_3__DOT___GEN_2) 
                                                   - (IData)(1U))))
                                                 : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_3__DOT___update_wdata_0_ctr_T_20))));
                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_3__DOT__wrbypass_0_1 
                    = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_alloc_1_REG_3)
                              ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_1_REG_3)
                                  ? 4U : 3U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_3__DOT__wrbypass_hit)
                                                 ? 
                                                ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_1_REG_3)
                                                  ? 
                                                 ((7U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_3__DOT___GEN_3))
                                                   ? 7U
                                                   : 
                                                  ((IData)(1U) 
                                                   + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_3__DOT___GEN_3)))
                                                  : 
                                                 ((0U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_3__DOT___GEN_3))
                                                   ? 0U
                                                   : 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_3__DOT___GEN_3) 
                                                   - (IData)(1U))))
                                                 : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_3__DOT___update_wdata_1_ctr_T_20))));
                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_3__DOT__wrbypass_0_2 
                    = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_alloc_2_REG_3)
                              ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_2_REG_3)
                                  ? 4U : 3U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_3__DOT__wrbypass_hit)
                                                 ? 
                                                ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_2_REG_3)
                                                  ? 
                                                 ((7U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_3__DOT___GEN_4))
                                                   ? 7U
                                                   : 
                                                  ((IData)(1U) 
                                                   + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_3__DOT___GEN_4)))
                                                  : 
                                                 ((0U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_3__DOT___GEN_4))
                                                   ? 0U
                                                   : 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_3__DOT___GEN_4) 
                                                   - (IData)(1U))))
                                                 : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_3__DOT___update_wdata_2_ctr_T_20))));
                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_3__DOT__wrbypass_0_3 
                    = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_alloc_3_REG_3)
                              ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_3_REG_3)
                                  ? 4U : 3U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_3__DOT__wrbypass_hit)
                                                 ? 
                                                ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_3_REG_3)
                                                  ? 
                                                 ((7U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_3__DOT___GEN_5))
                                                   ? 7U
                                                   : 
                                                  ((IData)(1U) 
                                                   + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_3__DOT___GEN_5)))
                                                  : 
                                                 ((0U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_3__DOT___GEN_5))
                                                   ? 0U
                                                   : 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_3__DOT___GEN_5) 
                                                   - (IData)(1U))))
                                                 : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_3__DOT___update_wdata_3_ctr_T_20))));
            } else {
                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_3__DOT__wrbypass_1_0 
                    = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_alloc_0_REG_3)
                              ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_0_REG_3)
                                  ? 4U : 3U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_3__DOT__wrbypass_hit)
                                                 ? 
                                                ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_0_REG_3)
                                                  ? 
                                                 ((7U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_3__DOT___GEN_2))
                                                   ? 7U
                                                   : 
                                                  ((IData)(1U) 
                                                   + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_3__DOT___GEN_2)))
                                                  : 
                                                 ((0U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_3__DOT___GEN_2))
                                                   ? 0U
                                                   : 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_3__DOT___GEN_2) 
                                                   - (IData)(1U))))
                                                 : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_3__DOT___update_wdata_0_ctr_T_20))));
                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_3__DOT__wrbypass_1_1 
                    = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_alloc_1_REG_3)
                              ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_1_REG_3)
                                  ? 4U : 3U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_3__DOT__wrbypass_hit)
                                                 ? 
                                                ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_1_REG_3)
                                                  ? 
                                                 ((7U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_3__DOT___GEN_3))
                                                   ? 7U
                                                   : 
                                                  ((IData)(1U) 
                                                   + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_3__DOT___GEN_3)))
                                                  : 
                                                 ((0U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_3__DOT___GEN_3))
                                                   ? 0U
                                                   : 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_3__DOT___GEN_3) 
                                                   - (IData)(1U))))
                                                 : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_3__DOT___update_wdata_1_ctr_T_20))));
                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_3__DOT__wrbypass_1_2 
                    = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_alloc_2_REG_3)
                              ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_2_REG_3)
                                  ? 4U : 3U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_3__DOT__wrbypass_hit)
                                                 ? 
                                                ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_2_REG_3)
                                                  ? 
                                                 ((7U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_3__DOT___GEN_4))
                                                   ? 7U
                                                   : 
                                                  ((IData)(1U) 
                                                   + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_3__DOT___GEN_4)))
                                                  : 
                                                 ((0U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_3__DOT___GEN_4))
                                                   ? 0U
                                                   : 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_3__DOT___GEN_4) 
                                                   - (IData)(1U))))
                                                 : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_3__DOT___update_wdata_2_ctr_T_20))));
                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_3__DOT__wrbypass_1_3 
                    = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_alloc_3_REG_3)
                              ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_3_REG_3)
                                  ? 4U : 3U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_3__DOT__wrbypass_hit)
                                                 ? 
                                                ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_3_REG_3)
                                                  ? 
                                                 ((7U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_3__DOT___GEN_5))
                                                   ? 7U
                                                   : 
                                                  ((IData)(1U) 
                                                   + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_3__DOT___GEN_5)))
                                                  : 
                                                 ((0U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_3__DOT___GEN_5))
                                                   ? 0U
                                                   : 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_3__DOT___GEN_5) 
                                                   - (IData)(1U))))
                                                 : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_3__DOT___update_wdata_3_ctr_T_20))));
            }
        } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_3__DOT__wrbypass_enq_idx) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_3__DOT__wrbypass_1_0 
                = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_alloc_0_REG_3)
                          ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_0_REG_3)
                              ? 4U : 3U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_3__DOT__wrbypass_hit)
                                             ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_0_REG_3)
                                                 ? 
                                                ((7U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_3__DOT___GEN_2))
                                                  ? 7U
                                                  : 
                                                 ((IData)(1U) 
                                                  + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_3__DOT___GEN_2)))
                                                 : 
                                                ((0U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_3__DOT___GEN_2))
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_3__DOT___GEN_2) 
                                                  - (IData)(1U))))
                                             : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_3__DOT___update_wdata_0_ctr_T_20))));
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_3__DOT__wrbypass_1_1 
                = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_alloc_1_REG_3)
                          ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_1_REG_3)
                              ? 4U : 3U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_3__DOT__wrbypass_hit)
                                             ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_1_REG_3)
                                                 ? 
                                                ((7U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_3__DOT___GEN_3))
                                                  ? 7U
                                                  : 
                                                 ((IData)(1U) 
                                                  + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_3__DOT___GEN_3)))
                                                 : 
                                                ((0U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_3__DOT___GEN_3))
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_3__DOT___GEN_3) 
                                                  - (IData)(1U))))
                                             : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_3__DOT___update_wdata_1_ctr_T_20))));
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_3__DOT__wrbypass_1_2 
                = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_alloc_2_REG_3)
                          ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_2_REG_3)
                              ? 4U : 3U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_3__DOT__wrbypass_hit)
                                             ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_2_REG_3)
                                                 ? 
                                                ((7U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_3__DOT___GEN_4))
                                                  ? 7U
                                                  : 
                                                 ((IData)(1U) 
                                                  + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_3__DOT___GEN_4)))
                                                 : 
                                                ((0U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_3__DOT___GEN_4))
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_3__DOT___GEN_4) 
                                                  - (IData)(1U))))
                                             : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_3__DOT___update_wdata_2_ctr_T_20))));
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_3__DOT__wrbypass_1_3 
                = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_alloc_3_REG_3)
                          ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_3_REG_3)
                              ? 4U : 3U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_3__DOT__wrbypass_hit)
                                             ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_3_REG_3)
                                                 ? 
                                                ((7U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_3__DOT___GEN_5))
                                                  ? 7U
                                                  : 
                                                 ((IData)(1U) 
                                                  + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_3__DOT___GEN_5)))
                                                 : 
                                                ((0U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_3__DOT___GEN_5))
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_3__DOT___GEN_5) 
                                                  - (IData)(1U))))
                                             : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_3__DOT___update_wdata_3_ctr_T_20))));
        } else {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_3__DOT__wrbypass_0_0 
                = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_alloc_0_REG_3)
                          ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_0_REG_3)
                              ? 4U : 3U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_3__DOT__wrbypass_hit)
                                             ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_0_REG_3)
                                                 ? 
                                                ((7U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_3__DOT___GEN_2))
                                                  ? 7U
                                                  : 
                                                 ((IData)(1U) 
                                                  + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_3__DOT___GEN_2)))
                                                 : 
                                                ((0U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_3__DOT___GEN_2))
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_3__DOT___GEN_2) 
                                                  - (IData)(1U))))
                                             : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_3__DOT___update_wdata_0_ctr_T_20))));
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_3__DOT__wrbypass_0_1 
                = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_alloc_1_REG_3)
                          ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_1_REG_3)
                              ? 4U : 3U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_3__DOT__wrbypass_hit)
                                             ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_1_REG_3)
                                                 ? 
                                                ((7U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_3__DOT___GEN_3))
                                                  ? 7U
                                                  : 
                                                 ((IData)(1U) 
                                                  + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_3__DOT___GEN_3)))
                                                 : 
                                                ((0U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_3__DOT___GEN_3))
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_3__DOT___GEN_3) 
                                                  - (IData)(1U))))
                                             : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_3__DOT___update_wdata_1_ctr_T_20))));
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_3__DOT__wrbypass_0_2 
                = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_alloc_2_REG_3)
                          ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_2_REG_3)
                              ? 4U : 3U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_3__DOT__wrbypass_hit)
                                             ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_2_REG_3)
                                                 ? 
                                                ((7U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_3__DOT___GEN_4))
                                                  ? 7U
                                                  : 
                                                 ((IData)(1U) 
                                                  + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_3__DOT___GEN_4)))
                                                 : 
                                                ((0U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_3__DOT___GEN_4))
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_3__DOT___GEN_4) 
                                                  - (IData)(1U))))
                                             : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_3__DOT___update_wdata_2_ctr_T_20))));
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_3__DOT__wrbypass_0_3 
                = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_alloc_3_REG_3)
                          ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_3_REG_3)
                              ? 4U : 3U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_3__DOT__wrbypass_hit)
                                             ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_3_REG_3)
                                                 ? 
                                                ((7U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_3__DOT___GEN_5))
                                                  ? 7U
                                                  : 
                                                 ((IData)(1U) 
                                                  + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_3__DOT___GEN_5)))
                                                 : 
                                                ((0U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_3__DOT___GEN_5))
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_3__DOT___GEN_5) 
                                                  - (IData)(1U))))
                                             : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_3__DOT___update_wdata_3_ctr_T_20))));
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4839(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4839\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_2__DOT__wrbypass_enq_idx = 0U;
    } else if ((1U & (~ ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_2__DOT___GEN_6)) 
                         | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_2__DOT__wrbypass_hit))))) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_2__DOT__wrbypass_enq_idx 
            = (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_2__DOT__wrbypass_enq_idx) 
                     - (IData)(1U)));
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_2__DOT___GEN_6) {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_2__DOT__wrbypass_hit) {
            if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_2__DOT__wrbypass_hits_0) {
                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_2__DOT__wrbypass_0_0 
                    = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_alloc_0_REG_2)
                              ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_0_REG_2)
                                  ? 4U : 3U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_2__DOT__wrbypass_hit)
                                                 ? 
                                                ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_0_REG_2)
                                                  ? 
                                                 ((7U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_2__DOT___GEN_2))
                                                   ? 7U
                                                   : 
                                                  ((IData)(1U) 
                                                   + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_2__DOT___GEN_2)))
                                                  : 
                                                 ((0U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_2__DOT___GEN_2))
                                                   ? 0U
                                                   : 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_2__DOT___GEN_2) 
                                                   - (IData)(1U))))
                                                 : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_2__DOT___update_wdata_0_ctr_T_20))));
                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_2__DOT__wrbypass_0_1 
                    = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_alloc_1_REG_2)
                              ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_1_REG_2)
                                  ? 4U : 3U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_2__DOT__wrbypass_hit)
                                                 ? 
                                                ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_1_REG_2)
                                                  ? 
                                                 ((7U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_2__DOT___GEN_3))
                                                   ? 7U
                                                   : 
                                                  ((IData)(1U) 
                                                   + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_2__DOT___GEN_3)))
                                                  : 
                                                 ((0U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_2__DOT___GEN_3))
                                                   ? 0U
                                                   : 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_2__DOT___GEN_3) 
                                                   - (IData)(1U))))
                                                 : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_2__DOT___update_wdata_1_ctr_T_20))));
                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_2__DOT__wrbypass_0_2 
                    = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_alloc_2_REG_2)
                              ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_2_REG_2)
                                  ? 4U : 3U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_2__DOT__wrbypass_hit)
                                                 ? 
                                                ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_2_REG_2)
                                                  ? 
                                                 ((7U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_2__DOT___GEN_4))
                                                   ? 7U
                                                   : 
                                                  ((IData)(1U) 
                                                   + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_2__DOT___GEN_4)))
                                                  : 
                                                 ((0U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_2__DOT___GEN_4))
                                                   ? 0U
                                                   : 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_2__DOT___GEN_4) 
                                                   - (IData)(1U))))
                                                 : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_2__DOT___update_wdata_2_ctr_T_20))));
                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_2__DOT__wrbypass_0_3 
                    = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_alloc_3_REG_2)
                              ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_3_REG_2)
                                  ? 4U : 3U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_2__DOT__wrbypass_hit)
                                                 ? 
                                                ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_3_REG_2)
                                                  ? 
                                                 ((7U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_2__DOT___GEN_5))
                                                   ? 7U
                                                   : 
                                                  ((IData)(1U) 
                                                   + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_2__DOT___GEN_5)))
                                                  : 
                                                 ((0U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_2__DOT___GEN_5))
                                                   ? 0U
                                                   : 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_2__DOT___GEN_5) 
                                                   - (IData)(1U))))
                                                 : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_2__DOT___update_wdata_3_ctr_T_20))));
            } else {
                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_2__DOT__wrbypass_1_0 
                    = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_alloc_0_REG_2)
                              ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_0_REG_2)
                                  ? 4U : 3U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_2__DOT__wrbypass_hit)
                                                 ? 
                                                ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_0_REG_2)
                                                  ? 
                                                 ((7U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_2__DOT___GEN_2))
                                                   ? 7U
                                                   : 
                                                  ((IData)(1U) 
                                                   + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_2__DOT___GEN_2)))
                                                  : 
                                                 ((0U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_2__DOT___GEN_2))
                                                   ? 0U
                                                   : 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_2__DOT___GEN_2) 
                                                   - (IData)(1U))))
                                                 : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_2__DOT___update_wdata_0_ctr_T_20))));
                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_2__DOT__wrbypass_1_1 
                    = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_alloc_1_REG_2)
                              ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_1_REG_2)
                                  ? 4U : 3U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_2__DOT__wrbypass_hit)
                                                 ? 
                                                ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_1_REG_2)
                                                  ? 
                                                 ((7U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_2__DOT___GEN_3))
                                                   ? 7U
                                                   : 
                                                  ((IData)(1U) 
                                                   + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_2__DOT___GEN_3)))
                                                  : 
                                                 ((0U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_2__DOT___GEN_3))
                                                   ? 0U
                                                   : 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_2__DOT___GEN_3) 
                                                   - (IData)(1U))))
                                                 : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_2__DOT___update_wdata_1_ctr_T_20))));
                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_2__DOT__wrbypass_1_2 
                    = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_alloc_2_REG_2)
                              ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_2_REG_2)
                                  ? 4U : 3U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_2__DOT__wrbypass_hit)
                                                 ? 
                                                ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_2_REG_2)
                                                  ? 
                                                 ((7U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_2__DOT___GEN_4))
                                                   ? 7U
                                                   : 
                                                  ((IData)(1U) 
                                                   + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_2__DOT___GEN_4)))
                                                  : 
                                                 ((0U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_2__DOT___GEN_4))
                                                   ? 0U
                                                   : 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_2__DOT___GEN_4) 
                                                   - (IData)(1U))))
                                                 : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_2__DOT___update_wdata_2_ctr_T_20))));
                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_2__DOT__wrbypass_1_3 
                    = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_alloc_3_REG_2)
                              ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_3_REG_2)
                                  ? 4U : 3U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_2__DOT__wrbypass_hit)
                                                 ? 
                                                ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_3_REG_2)
                                                  ? 
                                                 ((7U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_2__DOT___GEN_5))
                                                   ? 7U
                                                   : 
                                                  ((IData)(1U) 
                                                   + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_2__DOT___GEN_5)))
                                                  : 
                                                 ((0U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_2__DOT___GEN_5))
                                                   ? 0U
                                                   : 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_2__DOT___GEN_5) 
                                                   - (IData)(1U))))
                                                 : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_2__DOT___update_wdata_3_ctr_T_20))));
            }
        } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_2__DOT__wrbypass_enq_idx) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_2__DOT__wrbypass_1_0 
                = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_alloc_0_REG_2)
                          ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_0_REG_2)
                              ? 4U : 3U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_2__DOT__wrbypass_hit)
                                             ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_0_REG_2)
                                                 ? 
                                                ((7U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_2__DOT___GEN_2))
                                                  ? 7U
                                                  : 
                                                 ((IData)(1U) 
                                                  + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_2__DOT___GEN_2)))
                                                 : 
                                                ((0U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_2__DOT___GEN_2))
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_2__DOT___GEN_2) 
                                                  - (IData)(1U))))
                                             : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_2__DOT___update_wdata_0_ctr_T_20))));
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_2__DOT__wrbypass_1_1 
                = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_alloc_1_REG_2)
                          ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_1_REG_2)
                              ? 4U : 3U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_2__DOT__wrbypass_hit)
                                             ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_1_REG_2)
                                                 ? 
                                                ((7U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_2__DOT___GEN_3))
                                                  ? 7U
                                                  : 
                                                 ((IData)(1U) 
                                                  + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_2__DOT___GEN_3)))
                                                 : 
                                                ((0U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_2__DOT___GEN_3))
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_2__DOT___GEN_3) 
                                                  - (IData)(1U))))
                                             : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_2__DOT___update_wdata_1_ctr_T_20))));
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_2__DOT__wrbypass_1_2 
                = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_alloc_2_REG_2)
                          ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_2_REG_2)
                              ? 4U : 3U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_2__DOT__wrbypass_hit)
                                             ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_2_REG_2)
                                                 ? 
                                                ((7U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_2__DOT___GEN_4))
                                                  ? 7U
                                                  : 
                                                 ((IData)(1U) 
                                                  + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_2__DOT___GEN_4)))
                                                 : 
                                                ((0U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_2__DOT___GEN_4))
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_2__DOT___GEN_4) 
                                                  - (IData)(1U))))
                                             : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_2__DOT___update_wdata_2_ctr_T_20))));
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_2__DOT__wrbypass_1_3 
                = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_alloc_3_REG_2)
                          ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_3_REG_2)
                              ? 4U : 3U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_2__DOT__wrbypass_hit)
                                             ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_3_REG_2)
                                                 ? 
                                                ((7U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_2__DOT___GEN_5))
                                                  ? 7U
                                                  : 
                                                 ((IData)(1U) 
                                                  + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_2__DOT___GEN_5)))
                                                 : 
                                                ((0U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_2__DOT___GEN_5))
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_2__DOT___GEN_5) 
                                                  - (IData)(1U))))
                                             : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_2__DOT___update_wdata_3_ctr_T_20))));
        } else {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_2__DOT__wrbypass_0_0 
                = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_alloc_0_REG_2)
                          ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_0_REG_2)
                              ? 4U : 3U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_2__DOT__wrbypass_hit)
                                             ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_0_REG_2)
                                                 ? 
                                                ((7U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_2__DOT___GEN_2))
                                                  ? 7U
                                                  : 
                                                 ((IData)(1U) 
                                                  + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_2__DOT___GEN_2)))
                                                 : 
                                                ((0U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_2__DOT___GEN_2))
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_2__DOT___GEN_2) 
                                                  - (IData)(1U))))
                                             : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_2__DOT___update_wdata_0_ctr_T_20))));
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_2__DOT__wrbypass_0_1 
                = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_alloc_1_REG_2)
                          ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_1_REG_2)
                              ? 4U : 3U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_2__DOT__wrbypass_hit)
                                             ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_1_REG_2)
                                                 ? 
                                                ((7U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_2__DOT___GEN_3))
                                                  ? 7U
                                                  : 
                                                 ((IData)(1U) 
                                                  + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_2__DOT___GEN_3)))
                                                 : 
                                                ((0U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_2__DOT___GEN_3))
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_2__DOT___GEN_3) 
                                                  - (IData)(1U))))
                                             : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_2__DOT___update_wdata_1_ctr_T_20))));
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_2__DOT__wrbypass_0_2 
                = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_alloc_2_REG_2)
                          ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_2_REG_2)
                              ? 4U : 3U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_2__DOT__wrbypass_hit)
                                             ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_2_REG_2)
                                                 ? 
                                                ((7U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_2__DOT___GEN_4))
                                                  ? 7U
                                                  : 
                                                 ((IData)(1U) 
                                                  + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_2__DOT___GEN_4)))
                                                 : 
                                                ((0U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_2__DOT___GEN_4))
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_2__DOT___GEN_4) 
                                                  - (IData)(1U))))
                                             : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_2__DOT___update_wdata_2_ctr_T_20))));
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_2__DOT__wrbypass_0_3 
                = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_alloc_3_REG_2)
                          ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_3_REG_2)
                              ? 4U : 3U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_2__DOT__wrbypass_hit)
                                             ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_3_REG_2)
                                                 ? 
                                                ((7U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_2__DOT___GEN_5))
                                                  ? 7U
                                                  : 
                                                 ((IData)(1U) 
                                                  + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_2__DOT___GEN_5)))
                                                 : 
                                                ((0U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_2__DOT___GEN_5))
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_2__DOT___GEN_5) 
                                                  - (IData)(1U))))
                                             : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_2__DOT___update_wdata_3_ctr_T_20))));
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4840(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4840\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_1__DOT__wrbypass_enq_idx = 0U;
    } else if ((1U & (~ ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_1__DOT___GEN_9)) 
                         | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_1__DOT__wrbypass_hit))))) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_1__DOT__wrbypass_enq_idx 
            = (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_1__DOT__wrbypass_enq_idx) 
                     - (IData)(1U)));
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_1__DOT___GEN_9) {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_1__DOT__wrbypass_hit) {
            if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_1__DOT__wrbypass_hits_0) {
                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_1__DOT__wrbypass_0_0 
                    = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_alloc_0_REG_1)
                              ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_0_REG_1)
                                  ? 4U : 3U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_1__DOT__wrbypass_hit)
                                                 ? 
                                                ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_0_REG_1)
                                                  ? 
                                                 ((7U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_1__DOT___GEN_5))
                                                   ? 7U
                                                   : 
                                                  ((IData)(1U) 
                                                   + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_1__DOT___GEN_5)))
                                                  : 
                                                 ((0U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_1__DOT___GEN_5))
                                                   ? 0U
                                                   : 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_1__DOT___GEN_5) 
                                                   - (IData)(1U))))
                                                 : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_1__DOT___update_wdata_0_ctr_T_20))));
                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_1__DOT__wrbypass_0_1 
                    = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_alloc_1_REG_1)
                              ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_1_REG_1)
                                  ? 4U : 3U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_1__DOT__wrbypass_hit)
                                                 ? 
                                                ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_1_REG_1)
                                                  ? 
                                                 ((7U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_1__DOT___GEN_6))
                                                   ? 7U
                                                   : 
                                                  ((IData)(1U) 
                                                   + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_1__DOT___GEN_6)))
                                                  : 
                                                 ((0U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_1__DOT___GEN_6))
                                                   ? 0U
                                                   : 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_1__DOT___GEN_6) 
                                                   - (IData)(1U))))
                                                 : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_1__DOT___update_wdata_1_ctr_T_20))));
                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_1__DOT__wrbypass_0_2 
                    = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_alloc_2_REG_1)
                              ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_2_REG_1)
                                  ? 4U : 3U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_1__DOT__wrbypass_hit)
                                                 ? 
                                                ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_2_REG_1)
                                                  ? 
                                                 ((7U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_1__DOT___GEN_7))
                                                   ? 7U
                                                   : 
                                                  ((IData)(1U) 
                                                   + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_1__DOT___GEN_7)))
                                                  : 
                                                 ((0U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_1__DOT___GEN_7))
                                                   ? 0U
                                                   : 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_1__DOT___GEN_7) 
                                                   - (IData)(1U))))
                                                 : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_1__DOT___update_wdata_2_ctr_T_20))));
                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_1__DOT__wrbypass_0_3 
                    = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_alloc_3_REG_1)
                              ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_3_REG_1)
                                  ? 4U : 3U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_1__DOT__wrbypass_hit)
                                                 ? 
                                                ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_3_REG_1)
                                                  ? 
                                                 ((7U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_1__DOT___GEN_8))
                                                   ? 7U
                                                   : 
                                                  ((IData)(1U) 
                                                   + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_1__DOT___GEN_8)))
                                                  : 
                                                 ((0U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_1__DOT___GEN_8))
                                                   ? 0U
                                                   : 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_1__DOT___GEN_8) 
                                                   - (IData)(1U))))
                                                 : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_1__DOT___update_wdata_3_ctr_T_20))));
            } else {
                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_1__DOT__wrbypass_1_0 
                    = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_alloc_0_REG_1)
                              ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_0_REG_1)
                                  ? 4U : 3U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_1__DOT__wrbypass_hit)
                                                 ? 
                                                ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_0_REG_1)
                                                  ? 
                                                 ((7U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_1__DOT___GEN_5))
                                                   ? 7U
                                                   : 
                                                  ((IData)(1U) 
                                                   + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_1__DOT___GEN_5)))
                                                  : 
                                                 ((0U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_1__DOT___GEN_5))
                                                   ? 0U
                                                   : 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_1__DOT___GEN_5) 
                                                   - (IData)(1U))))
                                                 : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_1__DOT___update_wdata_0_ctr_T_20))));
                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_1__DOT__wrbypass_1_1 
                    = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_alloc_1_REG_1)
                              ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_1_REG_1)
                                  ? 4U : 3U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_1__DOT__wrbypass_hit)
                                                 ? 
                                                ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_1_REG_1)
                                                  ? 
                                                 ((7U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_1__DOT___GEN_6))
                                                   ? 7U
                                                   : 
                                                  ((IData)(1U) 
                                                   + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_1__DOT___GEN_6)))
                                                  : 
                                                 ((0U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_1__DOT___GEN_6))
                                                   ? 0U
                                                   : 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_1__DOT___GEN_6) 
                                                   - (IData)(1U))))
                                                 : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_1__DOT___update_wdata_1_ctr_T_20))));
                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_1__DOT__wrbypass_1_2 
                    = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_alloc_2_REG_1)
                              ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_2_REG_1)
                                  ? 4U : 3U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_1__DOT__wrbypass_hit)
                                                 ? 
                                                ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_2_REG_1)
                                                  ? 
                                                 ((7U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_1__DOT___GEN_7))
                                                   ? 7U
                                                   : 
                                                  ((IData)(1U) 
                                                   + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_1__DOT___GEN_7)))
                                                  : 
                                                 ((0U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_1__DOT___GEN_7))
                                                   ? 0U
                                                   : 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_1__DOT___GEN_7) 
                                                   - (IData)(1U))))
                                                 : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_1__DOT___update_wdata_2_ctr_T_20))));
                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_1__DOT__wrbypass_1_3 
                    = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_alloc_3_REG_1)
                              ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_3_REG_1)
                                  ? 4U : 3U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_1__DOT__wrbypass_hit)
                                                 ? 
                                                ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_3_REG_1)
                                                  ? 
                                                 ((7U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_1__DOT___GEN_8))
                                                   ? 7U
                                                   : 
                                                  ((IData)(1U) 
                                                   + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_1__DOT___GEN_8)))
                                                  : 
                                                 ((0U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_1__DOT___GEN_8))
                                                   ? 0U
                                                   : 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_1__DOT___GEN_8) 
                                                   - (IData)(1U))))
                                                 : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_1__DOT___update_wdata_3_ctr_T_20))));
            }
        } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_1__DOT__wrbypass_enq_idx) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_1__DOT__wrbypass_1_0 
                = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_alloc_0_REG_1)
                          ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_0_REG_1)
                              ? 4U : 3U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_1__DOT__wrbypass_hit)
                                             ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_0_REG_1)
                                                 ? 
                                                ((7U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_1__DOT___GEN_5))
                                                  ? 7U
                                                  : 
                                                 ((IData)(1U) 
                                                  + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_1__DOT___GEN_5)))
                                                 : 
                                                ((0U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_1__DOT___GEN_5))
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_1__DOT___GEN_5) 
                                                  - (IData)(1U))))
                                             : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_1__DOT___update_wdata_0_ctr_T_20))));
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_1__DOT__wrbypass_1_1 
                = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_alloc_1_REG_1)
                          ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_1_REG_1)
                              ? 4U : 3U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_1__DOT__wrbypass_hit)
                                             ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_1_REG_1)
                                                 ? 
                                                ((7U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_1__DOT___GEN_6))
                                                  ? 7U
                                                  : 
                                                 ((IData)(1U) 
                                                  + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_1__DOT___GEN_6)))
                                                 : 
                                                ((0U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_1__DOT___GEN_6))
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_1__DOT___GEN_6) 
                                                  - (IData)(1U))))
                                             : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_1__DOT___update_wdata_1_ctr_T_20))));
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_1__DOT__wrbypass_1_2 
                = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_alloc_2_REG_1)
                          ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_2_REG_1)
                              ? 4U : 3U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_1__DOT__wrbypass_hit)
                                             ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_2_REG_1)
                                                 ? 
                                                ((7U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_1__DOT___GEN_7))
                                                  ? 7U
                                                  : 
                                                 ((IData)(1U) 
                                                  + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_1__DOT___GEN_7)))
                                                 : 
                                                ((0U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_1__DOT___GEN_7))
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_1__DOT___GEN_7) 
                                                  - (IData)(1U))))
                                             : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_1__DOT___update_wdata_2_ctr_T_20))));
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_1__DOT__wrbypass_1_3 
                = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_alloc_3_REG_1)
                          ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_3_REG_1)
                              ? 4U : 3U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_1__DOT__wrbypass_hit)
                                             ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_3_REG_1)
                                                 ? 
                                                ((7U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_1__DOT___GEN_8))
                                                  ? 7U
                                                  : 
                                                 ((IData)(1U) 
                                                  + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_1__DOT___GEN_8)))
                                                 : 
                                                ((0U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_1__DOT___GEN_8))
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_1__DOT___GEN_8) 
                                                  - (IData)(1U))))
                                             : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_1__DOT___update_wdata_3_ctr_T_20))));
        } else {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_1__DOT__wrbypass_0_0 
                = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_alloc_0_REG_1)
                          ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_0_REG_1)
                              ? 4U : 3U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_1__DOT__wrbypass_hit)
                                             ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_0_REG_1)
                                                 ? 
                                                ((7U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_1__DOT___GEN_5))
                                                  ? 7U
                                                  : 
                                                 ((IData)(1U) 
                                                  + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_1__DOT___GEN_5)))
                                                 : 
                                                ((0U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_1__DOT___GEN_5))
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_1__DOT___GEN_5) 
                                                  - (IData)(1U))))
                                             : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_1__DOT___update_wdata_0_ctr_T_20))));
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_1__DOT__wrbypass_0_1 
                = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_alloc_1_REG_1)
                          ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_1_REG_1)
                              ? 4U : 3U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_1__DOT__wrbypass_hit)
                                             ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_1_REG_1)
                                                 ? 
                                                ((7U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_1__DOT___GEN_6))
                                                  ? 7U
                                                  : 
                                                 ((IData)(1U) 
                                                  + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_1__DOT___GEN_6)))
                                                 : 
                                                ((0U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_1__DOT___GEN_6))
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_1__DOT___GEN_6) 
                                                  - (IData)(1U))))
                                             : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_1__DOT___update_wdata_1_ctr_T_20))));
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_1__DOT__wrbypass_0_2 
                = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_alloc_2_REG_1)
                          ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_2_REG_1)
                              ? 4U : 3U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_1__DOT__wrbypass_hit)
                                             ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_2_REG_1)
                                                 ? 
                                                ((7U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_1__DOT___GEN_7))
                                                  ? 7U
                                                  : 
                                                 ((IData)(1U) 
                                                  + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_1__DOT___GEN_7)))
                                                 : 
                                                ((0U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_1__DOT___GEN_7))
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_1__DOT___GEN_7) 
                                                  - (IData)(1U))))
                                             : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_1__DOT___update_wdata_2_ctr_T_20))));
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_1__DOT__wrbypass_0_3 
                = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_alloc_3_REG_1)
                          ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_3_REG_1)
                              ? 4U : 3U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_1__DOT__wrbypass_hit)
                                             ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_3_REG_1)
                                                 ? 
                                                ((7U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_1__DOT___GEN_8))
                                                  ? 7U
                                                  : 
                                                 ((IData)(1U) 
                                                  + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_1__DOT___GEN_8)))
                                                 : 
                                                ((0U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_1__DOT___GEN_8))
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_1__DOT___GEN_8) 
                                                  - (IData)(1U))))
                                             : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_1__DOT___update_wdata_3_ctr_T_20))));
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4841(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4841\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t__DOT__wrbypass_enq_idx = 0U;
    } else if ((1U & (~ ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t__DOT___GEN_9)) 
                         | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t__DOT__wrbypass_hit))))) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t__DOT__wrbypass_enq_idx 
            = (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t__DOT__wrbypass_enq_idx) 
                     - (IData)(1U)));
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t__DOT___GEN_9) {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t__DOT__wrbypass_hit) {
            if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t__DOT__wrbypass_hits_0) {
                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t__DOT__wrbypass_0_0 
                    = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_alloc_0_REG)
                              ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_0_REG)
                                  ? 4U : 3U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t__DOT__wrbypass_hit)
                                                 ? 
                                                ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_0_REG)
                                                  ? 
                                                 ((7U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t__DOT___GEN_5))
                                                   ? 7U
                                                   : 
                                                  ((IData)(1U) 
                                                   + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t__DOT___GEN_5)))
                                                  : 
                                                 ((0U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t__DOT___GEN_5))
                                                   ? 0U
                                                   : 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t__DOT___GEN_5) 
                                                   - (IData)(1U))))
                                                 : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t__DOT___update_wdata_0_ctr_T_20))));
                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t__DOT__wrbypass_0_1 
                    = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_alloc_1_REG)
                              ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_1_REG)
                                  ? 4U : 3U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t__DOT__wrbypass_hit)
                                                 ? 
                                                ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_1_REG)
                                                  ? 
                                                 ((7U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t__DOT___GEN_6))
                                                   ? 7U
                                                   : 
                                                  ((IData)(1U) 
                                                   + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t__DOT___GEN_6)))
                                                  : 
                                                 ((0U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t__DOT___GEN_6))
                                                   ? 0U
                                                   : 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t__DOT___GEN_6) 
                                                   - (IData)(1U))))
                                                 : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t__DOT___update_wdata_1_ctr_T_20))));
                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t__DOT__wrbypass_0_2 
                    = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_alloc_2_REG)
                              ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_2_REG)
                                  ? 4U : 3U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t__DOT__wrbypass_hit)
                                                 ? 
                                                ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_2_REG)
                                                  ? 
                                                 ((7U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t__DOT___GEN_7))
                                                   ? 7U
                                                   : 
                                                  ((IData)(1U) 
                                                   + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t__DOT___GEN_7)))
                                                  : 
                                                 ((0U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t__DOT___GEN_7))
                                                   ? 0U
                                                   : 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t__DOT___GEN_7) 
                                                   - (IData)(1U))))
                                                 : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t__DOT___update_wdata_2_ctr_T_20))));
                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t__DOT__wrbypass_0_3 
                    = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_alloc_3_REG)
                              ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_3_REG)
                                  ? 4U : 3U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t__DOT__wrbypass_hit)
                                                 ? 
                                                ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_3_REG)
                                                  ? 
                                                 ((7U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t__DOT___GEN_8))
                                                   ? 7U
                                                   : 
                                                  ((IData)(1U) 
                                                   + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t__DOT___GEN_8)))
                                                  : 
                                                 ((0U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t__DOT___GEN_8))
                                                   ? 0U
                                                   : 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t__DOT___GEN_8) 
                                                   - (IData)(1U))))
                                                 : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t__DOT___update_wdata_3_ctr_T_20))));
            } else {
                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t__DOT__wrbypass_1_0 
                    = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_alloc_0_REG)
                              ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_0_REG)
                                  ? 4U : 3U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t__DOT__wrbypass_hit)
                                                 ? 
                                                ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_0_REG)
                                                  ? 
                                                 ((7U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t__DOT___GEN_5))
                                                   ? 7U
                                                   : 
                                                  ((IData)(1U) 
                                                   + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t__DOT___GEN_5)))
                                                  : 
                                                 ((0U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t__DOT___GEN_5))
                                                   ? 0U
                                                   : 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t__DOT___GEN_5) 
                                                   - (IData)(1U))))
                                                 : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t__DOT___update_wdata_0_ctr_T_20))));
                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t__DOT__wrbypass_1_1 
                    = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_alloc_1_REG)
                              ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_1_REG)
                                  ? 4U : 3U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t__DOT__wrbypass_hit)
                                                 ? 
                                                ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_1_REG)
                                                  ? 
                                                 ((7U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t__DOT___GEN_6))
                                                   ? 7U
                                                   : 
                                                  ((IData)(1U) 
                                                   + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t__DOT___GEN_6)))
                                                  : 
                                                 ((0U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t__DOT___GEN_6))
                                                   ? 0U
                                                   : 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t__DOT___GEN_6) 
                                                   - (IData)(1U))))
                                                 : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t__DOT___update_wdata_1_ctr_T_20))));
                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t__DOT__wrbypass_1_2 
                    = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_alloc_2_REG)
                              ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_2_REG)
                                  ? 4U : 3U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t__DOT__wrbypass_hit)
                                                 ? 
                                                ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_2_REG)
                                                  ? 
                                                 ((7U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t__DOT___GEN_7))
                                                   ? 7U
                                                   : 
                                                  ((IData)(1U) 
                                                   + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t__DOT___GEN_7)))
                                                  : 
                                                 ((0U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t__DOT___GEN_7))
                                                   ? 0U
                                                   : 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t__DOT___GEN_7) 
                                                   - (IData)(1U))))
                                                 : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t__DOT___update_wdata_2_ctr_T_20))));
                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t__DOT__wrbypass_1_3 
                    = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_alloc_3_REG)
                              ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_3_REG)
                                  ? 4U : 3U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t__DOT__wrbypass_hit)
                                                 ? 
                                                ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_3_REG)
                                                  ? 
                                                 ((7U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t__DOT___GEN_8))
                                                   ? 7U
                                                   : 
                                                  ((IData)(1U) 
                                                   + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t__DOT___GEN_8)))
                                                  : 
                                                 ((0U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t__DOT___GEN_8))
                                                   ? 0U
                                                   : 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t__DOT___GEN_8) 
                                                   - (IData)(1U))))
                                                 : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t__DOT___update_wdata_3_ctr_T_20))));
            }
        } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t__DOT__wrbypass_enq_idx) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t__DOT__wrbypass_1_0 
                = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_alloc_0_REG)
                          ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_0_REG)
                              ? 4U : 3U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t__DOT__wrbypass_hit)
                                             ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_0_REG)
                                                 ? 
                                                ((7U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t__DOT___GEN_5))
                                                  ? 7U
                                                  : 
                                                 ((IData)(1U) 
                                                  + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t__DOT___GEN_5)))
                                                 : 
                                                ((0U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t__DOT___GEN_5))
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t__DOT___GEN_5) 
                                                  - (IData)(1U))))
                                             : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t__DOT___update_wdata_0_ctr_T_20))));
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t__DOT__wrbypass_1_1 
                = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_alloc_1_REG)
                          ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_1_REG)
                              ? 4U : 3U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t__DOT__wrbypass_hit)
                                             ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_1_REG)
                                                 ? 
                                                ((7U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t__DOT___GEN_6))
                                                  ? 7U
                                                  : 
                                                 ((IData)(1U) 
                                                  + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t__DOT___GEN_6)))
                                                 : 
                                                ((0U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t__DOT___GEN_6))
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t__DOT___GEN_6) 
                                                  - (IData)(1U))))
                                             : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t__DOT___update_wdata_1_ctr_T_20))));
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t__DOT__wrbypass_1_2 
                = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_alloc_2_REG)
                          ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_2_REG)
                              ? 4U : 3U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t__DOT__wrbypass_hit)
                                             ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_2_REG)
                                                 ? 
                                                ((7U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t__DOT___GEN_7))
                                                  ? 7U
                                                  : 
                                                 ((IData)(1U) 
                                                  + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t__DOT___GEN_7)))
                                                 : 
                                                ((0U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t__DOT___GEN_7))
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t__DOT___GEN_7) 
                                                  - (IData)(1U))))
                                             : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t__DOT___update_wdata_2_ctr_T_20))));
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t__DOT__wrbypass_1_3 
                = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_alloc_3_REG)
                          ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_3_REG)
                              ? 4U : 3U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t__DOT__wrbypass_hit)
                                             ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_3_REG)
                                                 ? 
                                                ((7U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t__DOT___GEN_8))
                                                  ? 7U
                                                  : 
                                                 ((IData)(1U) 
                                                  + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t__DOT___GEN_8)))
                                                 : 
                                                ((0U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t__DOT___GEN_8))
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t__DOT___GEN_8) 
                                                  - (IData)(1U))))
                                             : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t__DOT___update_wdata_3_ctr_T_20))));
        } else {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t__DOT__wrbypass_0_0 
                = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_alloc_0_REG)
                          ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_0_REG)
                              ? 4U : 3U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t__DOT__wrbypass_hit)
                                             ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_0_REG)
                                                 ? 
                                                ((7U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t__DOT___GEN_5))
                                                  ? 7U
                                                  : 
                                                 ((IData)(1U) 
                                                  + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t__DOT___GEN_5)))
                                                 : 
                                                ((0U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t__DOT___GEN_5))
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t__DOT___GEN_5) 
                                                  - (IData)(1U))))
                                             : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t__DOT___update_wdata_0_ctr_T_20))));
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t__DOT__wrbypass_0_1 
                = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_alloc_1_REG)
                          ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_1_REG)
                              ? 4U : 3U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t__DOT__wrbypass_hit)
                                             ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_1_REG)
                                                 ? 
                                                ((7U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t__DOT___GEN_6))
                                                  ? 7U
                                                  : 
                                                 ((IData)(1U) 
                                                  + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t__DOT___GEN_6)))
                                                 : 
                                                ((0U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t__DOT___GEN_6))
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t__DOT___GEN_6) 
                                                  - (IData)(1U))))
                                             : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t__DOT___update_wdata_1_ctr_T_20))));
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t__DOT__wrbypass_0_2 
                = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_alloc_2_REG)
                          ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_2_REG)
                              ? 4U : 3U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t__DOT__wrbypass_hit)
                                             ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_2_REG)
                                                 ? 
                                                ((7U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t__DOT___GEN_7))
                                                  ? 7U
                                                  : 
                                                 ((IData)(1U) 
                                                  + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t__DOT___GEN_7)))
                                                 : 
                                                ((0U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t__DOT___GEN_7))
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t__DOT___GEN_7) 
                                                  - (IData)(1U))))
                                             : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t__DOT___update_wdata_2_ctr_T_20))));
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t__DOT__wrbypass_0_3 
                = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_alloc_3_REG)
                          ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_3_REG)
                              ? 4U : 3U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t__DOT__wrbypass_hit)
                                             ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t_io_update_taken_3_REG)
                                                 ? 
                                                ((7U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t__DOT___GEN_8))
                                                  ? 7U
                                                  : 
                                                 ((IData)(1U) 
                                                  + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t__DOT___GEN_8)))
                                                 : 
                                                ((0U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t__DOT___GEN_8))
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t__DOT___GEN_8) 
                                                  - (IData)(1U))))
                                             : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__t__DOT___update_wdata_3_ctr_T_20))));
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4842(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4842\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__ppred = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_3__DOT__ppred = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_2__DOT__ppred = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_1__DOT__ppred = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_0__DOT__ppred = 0U;
    } else {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__issue_slots_4_in_uop_valid) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__ppred 
                = (1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT____Vcellinp__slots_4__io_in_uop_bits_ppred_busy)));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__issue_slots_3_in_uop_valid) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_3__DOT__ppred 
                = (1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT____Vcellinp__slots_3__io_in_uop_bits_ppred_busy)));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__issue_slots_2_in_uop_valid) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_2__DOT__ppred 
                = (1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT____Vcellinp__slots_2__io_in_uop_bits_ppred_busy)));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__issue_slots_1_in_uop_valid) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_1__DOT__ppred 
                = (1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT____Vcellinp__slots_1__io_in_uop_bits_ppred_busy)));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__issue_slots_0_in_uop_valid) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_0__DOT__ppred 
                = (1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT____Vcellinp__slots_0__io_in_uop_bits_ppred_busy)));
        }
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_pc_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_ctrl_rocc 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_ctrl_rocc;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__dfma__DOT__fma__DOT__io_validout_pipe_v) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__dfma__DOT__io_out_pipe_b_exc 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__dfma__DOT___fma_io_exceptionFlags;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__dfma__DOT__io_out_pipe_b_data[0U] 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__dfma__DOT___fma_io_out[0U];
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__dfma__DOT__io_out_pipe_b_data[1U] 
            = ((0xefefffffU | (- (IData)((7U != (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__dfma__DOT___fma_io_out[1U] 
                                                 >> 0x1dU))))) 
               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__dfma__DOT___fma_io_out[1U]);
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__dfma__DOT__io_out_pipe_b_data[2U] 
            = ((1U | (- (IData)((7U != (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__dfma__DOT___fma_io_out[1U] 
                                        >> 0x1dU))))) 
               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__dfma__DOT___fma_io_out[2U]);
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__tlb__DOT___GEN_29) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__tlb__DOT__special_entry_level 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__ptw__DOT__count;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__alu_exe_unit__DOT__ALUUnit__DOT__r_valids_0 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)) 
           & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__alu_exe_unit__DOT____Vcellinp__ALUUnit__io_req_valid) 
               & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__alu_exe_unit__DOT__ALUUnit__DOT___r_valids_0_T))) 
              & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__alu_exe_unit_io_req_bits_kill_REG))));
    if ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ctrl_killd)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_reg_load_use 
            = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_reg_valid) 
                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__data_hazard_mem)) 
               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_ctrl_mem));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4843(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4843\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_pc_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_ctrl_mem 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_ctrl_mem;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__dfma__DOT__io_out_pipe_v 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__dfma__DOT__fma__DOT__io_validout_pipe_v));
    if ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__gennum))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__aToggle_r 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__dToggle;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__release_state = 0U;
    } else if (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__metaArb___05Fgrant_T_2)) 
                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__metaArb_io_in_4_valid))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__release_state = 0U;
    } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___canAcceptCachedGrant_T_4) {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__releaseDone) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__release_state = 6U;
        } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_27) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__release_state 
                = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___inWriteback_T_1)
                    ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_35)
                        ? 0U : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_32))
                    : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_26)
                        ? (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__releaseDone) 
                            | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_34))
                            ? 0U : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_32))
                        : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_34)
                            ? 0U : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_probe)
                                     ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_prb_ack_data)
                                         ? 2U : ((0U 
                                                  != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_probe_state_state))
                                                  ? 3U
                                                  : 
                                                 ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__releaseDone)
                                                   ? 0U
                                                   : 5U)))
                                     : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_31)))));
        } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_35) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__release_state = 0U;
        } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_probe) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__release_state 
                = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_prb_ack_data)
                    ? 2U : ((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_probe_state_state))
                             ? (3U | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__releaseDone) 
                                      << 2U)) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__releaseDone)
                                                  ? 0U
                                                  : 5U)));
        } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_want_victimize) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__release_state 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___release_state_T_14;
        }
    } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___inWriteback_T_1) {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__releaseDone) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__release_state = 7U;
        } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_35) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__release_state = 0U;
        } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_probe) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__release_state 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_30;
        } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_want_victimize) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__release_state 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___release_state_T_14;
        }
    } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_27) {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__releaseDone) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__release_state = 7U;
        } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_35) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__release_state = 0U;
        } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_probe) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__release_state 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_30;
        } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_want_victimize) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__release_state 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___release_state_T_14;
        }
    } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_35) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__release_state = 0U;
    } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_probe) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__release_state 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_prb_ack_data)
                ? 2U : ((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_probe_state_state))
                         ? (3U | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__releaseDone) 
                                  << 2U)) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__releaseDone)
                                              ? 0U : 5U)));
    } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_want_victimize) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__release_state 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___release_state_T_14;
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4844(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4844\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__io_dis_uops_1_ready_REG 
        = (0U != (0xfU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__num_available) 
                          >> 1U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__io_dis_uops_1_ready_REG 
        = (0U != (0xfU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__num_available) 
                          >> 1U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__io_dis_uops_1_ready_REG 
        = (0U != (0x1fU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__num_available) 
                           >> 1U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__btb__DOT__io_resp_f3_0_is_jal_REG 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT___banked_predictors_1_io_resp_f2_0_is_jal;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__btb__DOT__io_resp_f3_2_is_jal_REG 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT___banked_predictors_1_io_resp_f2_2_is_jal;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__btb__DOT__io_resp_f3_1_is_jal_REG 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT___banked_predictors_1_io_resp_f2_1_is_jal;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__btb__DOT__io_resp_f3_0_is_jal_REG 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT___banked_predictors_0_io_resp_f2_0_is_jal;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__btb__DOT__io_resp_f3_2_is_jal_REG 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT___banked_predictors_0_io_resp_f2_2_is_jal;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__btb__DOT__io_resp_f3_1_is_jal_REG 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT___banked_predictors_0_io_resp_f2_1_is_jal;
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__widget_1__DOT___nodeIn_d_bits_data_T_2) 
         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__widget_1__DOT__nodeIn_d_bits_data_masked_enable_0))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__widget_1__DOT__nodeIn_d_bits_data_rdata_0 
            = (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[2U])) 
                << 0x2fU) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[1U])) 
                              << 0xfU) | ((QData)((IData)(
                                                          vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U])) 
                                          >> 0x11U)));
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__widget__DOT___nodeIn_d_bits_data_T_2) 
         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__widget__DOT__nodeIn_d_bits_data_masked_enable_0))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__widget__DOT__nodeIn_d_bits_data_rdata_0 
            = (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[2U])) 
                << 0x2fU) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[1U])) 
                              << 0xfU) | ((QData)((IData)(
                                                          vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U])) 
                                          >> 0x11U)));
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_28__DOT__slot_uop_uopc = 0U;
    } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__issue_slots_28_in_uop_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_28__DOT__slot_uop_uopc 
            = ((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__next_30))
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT___slots_31_io_out_uop_uopc)
                : ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__next_29))
                    ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT___slots_30_io_out_uop_uopc)
                    : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT___slots_29_io_out_uop_uopc)));
    } else if ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_28__DOT___GEN_5)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_28__DOT__slot_uop_uopc = 3U;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT___GEN_1) {
        __Vtemp_1[0U] = (IData)((((QData)((IData)((
                                                   (((IData)(0x700U) 
                                                     + 
                                                     (0x1ffU 
                                                      & (IData)(
                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT____Vcellinp__in2_upconvert_s2d__io_in 
                                                                 >> 0x17U)))) 
                                                    & (((0U 
                                                         != 
                                                         (7U 
                                                          & (IData)(
                                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT____Vcellinp__in2_upconvert_s2d__io_in 
                                                                     >> 0x1dU))))
                                                         ? 0xfffU
                                                         : 0x1ffU) 
                                                       & (0xdffU 
                                                          | (0x200U 
                                                             & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__in2_upconvert_s2d__DOT____Vcellinp__roundAnyRawFNToRecFN__io_in_isInf)) 
                                                                << 9U))))) 
                                                   | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__in2_upconvert_s2d__DOT____Vcellinp__roundAnyRawFNToRecFN__io_in_isInf)
                                                        ? 0xc00U
                                                        : 0U) 
                                                      | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__in2_upconvert_s2d__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                                          ? 0xe00U
                                                          : 0U))))) 
                                  << 0x34U) | ((1U 
                                                & ((~ (IData)(
                                                              (0U 
                                                               != 
                                                               (7U 
                                                                & (IData)(
                                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT____Vcellinp__in2_upconvert_s2d__io_in 
                                                                           >> 0x1dU)))))) 
                                                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__in2_upconvert_s2d__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)))
                                                ? ((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__in2_upconvert_s2d__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                                   << 0x33U)
                                                : ((QData)((IData)(
                                                                   (0x7fffffU 
                                                                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT____Vcellinp__in2_upconvert_s2d__io_in)))) 
                                                   << 0x1dU))));
        __Vtemp_1[1U] = (IData)(((((QData)((IData)(
                                                   ((((IData)(0x700U) 
                                                      + 
                                                      (0x1ffU 
                                                       & (IData)(
                                                                 (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT____Vcellinp__in2_upconvert_s2d__io_in 
                                                                  >> 0x17U)))) 
                                                     & (((0U 
                                                          != 
                                                          (7U 
                                                           & (IData)(
                                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT____Vcellinp__in2_upconvert_s2d__io_in 
                                                                      >> 0x1dU))))
                                                          ? 0xfffU
                                                          : 0x1ffU) 
                                                        & (0xdffU 
                                                           | (0x200U 
                                                              & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__in2_upconvert_s2d__DOT____Vcellinp__roundAnyRawFNToRecFN__io_in_isInf)) 
                                                                 << 9U))))) 
                                                    | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__in2_upconvert_s2d__DOT____Vcellinp__roundAnyRawFNToRecFN__io_in_isInf)
                                                         ? 0xc00U
                                                         : 0U) 
                                                       | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__in2_upconvert_s2d__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                                           ? 0xe00U
                                                           : 0U))))) 
                                   << 0x34U) | ((1U 
                                                 & ((~ (IData)(
                                                               (0U 
                                                                != 
                                                                (7U 
                                                                 & (IData)(
                                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT____Vcellinp__in2_upconvert_s2d__io_in 
                                                                            >> 0x1dU)))))) 
                                                    | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__in2_upconvert_s2d__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)))
                                                 ? 
                                                ((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__in2_upconvert_s2d__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                                 << 0x33U)
                                                 : 
                                                ((QData)((IData)(
                                                                 (0x7fffffU 
                                                                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT____Vcellinp__in2_upconvert_s2d__io_in)))) 
                                                 << 0x1dU))) 
                                 >> 0x20U));
        if (vlSelf->__VdfgTmp_hce52151d__0) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__r_buffer_fin_in2[0U] 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__exe_reg_rs2_data_0[0U];
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__r_buffer_fin_in2[1U] 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__exe_reg_rs2_data_0[1U];
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__r_buffer_fin_in2[2U] 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__exe_reg_rs2_data_0[2U];
        } else {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__r_buffer_fin_in2[0U] 
                = __Vtemp_1[0U];
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__r_buffer_fin_in2[1U] 
                = __Vtemp_1[1U];
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__r_buffer_fin_in2[2U] 
                = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__in2_upconvert_s2d__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT____Vcellinp__in2_upconvert_s2d__io_in 
                      >> 0x20U));
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4845(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4845\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__btb__DOT__io_resp_f3_0_predicted_pc_REG_valid 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT___banked_predictors_1_io_resp_f2_0_predicted_pc_valid;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__btb__DOT__io_resp_f3_0_predicted_pc_REG_valid 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT___banked_predictors_0_io_resp_f2_0_predicted_pc_valid;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__btb__DOT__io_resp_f3_1_predicted_pc_REG_valid 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT___banked_predictors_1_io_resp_f2_1_predicted_pc_valid;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__btb__DOT__io_resp_f3_2_predicted_pc_REG_valid 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT___banked_predictors_1_io_resp_f2_2_predicted_pc_valid;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__btb__DOT__io_resp_f3_1_predicted_pc_REG_valid 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT___banked_predictors_0_io_resp_f2_1_predicted_pc_valid;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__btb__DOT__io_resp_f3_2_predicted_pc_REG_valid 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT___banked_predictors_0_io_resp_f2_2_predicted_pc_valid;
    if ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT___GEN)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__r_uop_1_dst_rtype 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_1_io_deq_uop_dst_rtype;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__iregister_read__DOT__exe_reg_uops_2_ctrl_op_fcn 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__iregister_read__DOT__rrd_kill_2)
            ? 0U : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__iregister_read__DOT__rrd_uops_2_REG_ctrl_op_fcn));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeIn_d_q__DOT__maybe_full = 0U;
    } else if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeIn_d_q__DOT__do_enq) 
                != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeIn_d_q__DOT__do_deq))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeIn_d_q__DOT__maybe_full 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeIn_d_q__DOT__do_enq;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__iregister_read__DOT__exe_reg_uops_2_ctrl_fcn_dw 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__iregister_read__DOT__rrd_kill_2)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__iregister_read__DOT__rrd_uops_2_REG_ctrl_fcn_dw));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__btb__DOT__io_resp_f3_0_is_br_REG 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT___banked_predictors_1_io_resp_f2_0_is_br;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__btb__DOT__io_resp_f3_1_is_br_REG 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT___banked_predictors_1_io_resp_f2_1_is_br;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__btb__DOT__io_resp_f3_2_is_br_REG 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT___banked_predictors_1_io_resp_f2_2_is_br;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__btb__DOT__io_resp_f3_0_is_br_REG 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT___banked_predictors_0_io_resp_f2_0_is_br;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__btb__DOT__io_resp_f3_1_is_br_REG 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT___banked_predictors_0_io_resp_f2_1_is_br;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__btb__DOT__io_resp_f3_2_is_br_REG 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT___banked_predictors_0_io_resp_f2_2_is_br;
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__fpmu_double_pipe_pipe_pipe_v) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__fpmu_double_pipe_pipe_pipe_pipe_b 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__fpmu_double_pipe_pipe_pipe_b;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__spec_ld_succeed_REG 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT___lsu_io_core_spec_ld_wakeup_0_valid;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__io_core_ld_miss_REG 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT___lsu_io_core_spec_ld_wakeup_0_valid;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_19__DOT__slot_uop_br_mask 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__issue_slots_19_in_uop_valid)
            ? ((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__next_21))
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT___slots_22_io_out_uop_br_mask)
                : ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__next_20))
                    ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT___slots_21_io_out_uop_br_mask)
                    : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT___slots_20_io_out_uop_br_mask)))
            : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT___slots_19_io_out_uop_br_mask));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__btb__DOT__io_resp_f2_3_is_jal_REG 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__btb__DOT__s1_is_jal_3;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__btb__DOT__io_resp_f2_3_is_jal_REG 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__btb__DOT__s1_is_jal_3;
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT___GEN_1) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__r_buffer_fin_div 
            = (((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__exe_reg_uops_0_uopc) 
                    >> 1U)) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__fdiv_decoder__DOT____VdfgTmp_hf51b8ab2__0)) 
               | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__fdiv_decoder__DOT____VdfgTmp_hcdeffd2b__0));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4846(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4846\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__btb__DOT__io_resp_f2_3_predicted_pc_REG_valid 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__btb__DOT__s1_resp_3_valid;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__btb__DOT__io_resp_f2_3_predicted_pc_REG_valid 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__btb__DOT__s1_resp_3_valid;
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_19__DOT__slot_uop_uopc = 0U;
    } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__issue_slots_19_in_uop_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_19__DOT__slot_uop_uopc 
            = ((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__next_21))
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT___slots_22_io_out_uop_uopc)
                : ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__next_20))
                    ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT___slots_21_io_out_uop_uopc)
                    : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT___slots_20_io_out_uop_uopc)));
    } else if ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_19__DOT___GEN_4)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_19__DOT__slot_uop_uopc = 3U;
    }
    if ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_23)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_br_taken 
            = (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_ctrl_alu_fn) 
                     ^ ((8U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_ctrl_alu_fn))
                         ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__alu__DOT__slt)
                         : (0ULL == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__alu__DOT__in1_xor_in2))));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__ubtb__DOT__io_f3_meta_REG_1 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__ubtb__DOT__io_f3_meta_REG;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__ubtb__DOT__io_f3_meta_REG_1 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__ubtb__DOT__io_f3_meta_REG;
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__fp_sdq__DOT___GEN_15) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__fp_sdq__DOT__uops_2_uopc 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__exe_reg_uops_0_uopc;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__fp_sdq__DOT___GEN_13) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__fp_sdq__DOT__uops_1_uopc 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__exe_reg_uops_0_uopc;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__fp_sdq__DOT___GEN_11) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__fp_sdq__DOT__uops_0_uopc 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__exe_reg_uops_0_uopc;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__columns_3__DOT__f4_fire 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__s3_valid) 
           & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__s3_mask) 
               >> 3U) & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__columns_3_io_f3_req_fire_REG) 
                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT____Vcellinp__banked_predictors_0__io_f3_fire))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_3__DOT__f4_fire 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__s3_valid) 
           & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__s3_mask) 
               >> 3U) & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_3_io_f3_req_fire_REG) 
                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT____Vcellinp__banked_predictors_1__io_f3_fire))));
    if ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT___GEN)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_1_is_unique 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__decode_units_1__DOT____VdfgTmp_h07f64e15__0) 
               | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_1_io_deq_uop_is_sys_pc2epc) 
                  | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__decode_units_1__DOT____VdfgTmp_he7f8edd6__0) 
                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__decode_units_1__DOT____VdfgTmp_h6258dd23__0) 
                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__decode_units_1__DOT____VdfgTmp_he4061df9__0) 
                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__decode_units_1__DOT____VdfgTmp_h1d1269f6__0) 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__decode_units_1__DOT____VdfgTmp_heb4f1147__0) 
                                 | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__decode_units_1__DOT____VdfgTmp_h218c921c__0) 
                                    | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__decode_units_1__DOT____VdfgTmp_he6f53b14__0) 
                                       | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__decode_units_1__DOT____VdfgTmp_h5847fbec__0) 
                                          | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__decode_units_1__DOT____VdfgTmp_h2ef45d25__0)))))))))));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4847(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4847\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__sfma__DOT__fma__DOT__io_validout_pipe_v) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__sfma__DOT__io_out_pipe_b_data[0U] 
            = (IData)((((QData)((IData)(((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sign)))) 
                        << 0x20U) | (QData)((IData)(
                                                    (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp) 
                                                        << 0x17U) 
                                                       & ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_h1fd5dacb__0)
                                                             ? 0x3fU
                                                             : 0x1ffU) 
                                                           << 0x17U) 
                                                          & ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
                                                                ? 0x6bU
                                                                : 0x1ffU) 
                                                              << 0x17U) 
                                                             & ((0xbf800000U 
                                                                 | (0x40000000U 
                                                                    & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)) 
                                                                       << 0x1eU))) 
                                                                & (0xdf800000U 
                                                                   | (0x20000000U 
                                                                      & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)) 
                                                                         << 0x1dU))))))) 
                                                      | ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
                                                            ? 0x6bU
                                                            : 0U) 
                                                          | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                                               ? 0x17fU
                                                               : 0U) 
                                                             | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                                  ? 0x180U
                                                                  : 0U) 
                                                                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                                                    ? 0x1c0U
                                                                    : 0U)))) 
                                                         << 0x17U)) 
                                                     | (0x7fffffU 
                                                        & ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                             | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_h1fd5dacb__0))
                                                             ? 
                                                            ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                             << 0x16U)
                                                             : 
                                                            ((0x4000000U 
                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sig)
                                                              ? 
                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                              >> 1U)
                                                              : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig)) 
                                                           | (- (IData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut))))))))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__sfma__DOT__io_out_pipe_b_data[1U] 
            = (IData)(((((QData)((IData)(((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sign)))) 
                         << 0x20U) | (QData)((IData)(
                                                     (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp) 
                                                         << 0x17U) 
                                                        & ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_h1fd5dacb__0)
                                                              ? 0x3fU
                                                              : 0x1ffU) 
                                                            << 0x17U) 
                                                           & ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
                                                                 ? 0x6bU
                                                                 : 0x1ffU) 
                                                               << 0x17U) 
                                                              & ((0xbf800000U 
                                                                  | (0x40000000U 
                                                                     & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)) 
                                                                        << 0x1eU))) 
                                                                 & (0xdf800000U 
                                                                    | (0x20000000U 
                                                                       & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)) 
                                                                          << 0x1dU))))))) 
                                                       | ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
                                                             ? 0x6bU
                                                             : 0U) 
                                                           | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                                                ? 0x17fU
                                                                : 0U) 
                                                              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                                   ? 0x180U
                                                                   : 0U) 
                                                                 | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                                                     ? 0x1c0U
                                                                     : 0U)))) 
                                                          << 0x17U)) 
                                                      | (0x7fffffU 
                                                         & ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_h1fd5dacb__0))
                                                              ? 
                                                             ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                              << 0x16U)
                                                              : 
                                                             ((0x4000000U 
                                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sig)
                                                               ? 
                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                               >> 1U)
                                                               : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig)) 
                                                            | (- (IData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut))))))))) 
                       >> 0x20U));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__sfma__DOT__io_out_pipe_b_data[2U] = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__btb__DOT__REG_19 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__btb__DOT__s1_is_jal_3;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__btb__DOT__REG_19 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__btb__DOT__s1_is_jal_3;
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_holds_d = 0U;
    } else if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_ready) 
                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_valid_reg))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_holds_d 
            = (1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_last_reg)));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4848(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4848\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_11__DOT__slot_uop_br_mask 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__issue_slots_11_in_uop_valid)
            ? ((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__next_13))
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT___slots_14_io_out_uop_br_mask)
                : ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__next_12))
                    ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT___slots_13_io_out_uop_br_mask)
                    : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT___slots_12_io_out_uop_br_mask)))
            : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT___slots_11_io_out_uop_br_mask));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeIn_d_q__DOT__maybe_full = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT__maybe_full = 0U;
    } else {
        if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeIn_d_q__DOT__do_enq) 
             != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeIn_d_q__DOT__do_deq))) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeIn_d_q__DOT__maybe_full 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeIn_d_q__DOT__do_enq;
        }
        if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT__do_enq) 
             != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT__do_deq))) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT__maybe_full 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT__do_enq;
        }
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__alu_exe_unit__DOT__DivUnit__DOT__div__DOT___GEN_5) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__alu_exe_unit__DOT__DivUnit__DOT__div__DOT__req_dw 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__iregister_read__DOT__exe_reg_uops_1_ctrl_fcn_dw;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_1191) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_8_dst_rtype 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_1_dst_rtype;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_1185) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_2_dst_rtype 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_1_dst_rtype;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_1183) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_0_dst_rtype 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_1_dst_rtype;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_1189) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_6_dst_rtype 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_1_dst_rtype;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_1187) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_4_dst_rtype 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_1_dst_rtype;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_1209) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_26_dst_rtype 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_1_dst_rtype;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_1211) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_28_dst_rtype 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_1_dst_rtype;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_1210) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_27_dst_rtype 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_1_dst_rtype;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_1207) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_24_dst_rtype 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_1_dst_rtype;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_1188) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_5_dst_rtype 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_1_dst_rtype;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_1194) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_11_dst_rtype 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_1_dst_rtype;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_1196) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_13_dst_rtype 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_1_dst_rtype;
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4849(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4849\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_1213) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_30_dst_rtype 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_1_dst_rtype;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_1198) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_15_dst_rtype 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_1_dst_rtype;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_1197) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_14_dst_rtype 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_1_dst_rtype;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_1200) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_17_dst_rtype 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_1_dst_rtype;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_1203) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_20_dst_rtype 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_1_dst_rtype;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_1184) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_1_dst_rtype 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_1_dst_rtype;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_1186) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_3_dst_rtype 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_1_dst_rtype;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_1190) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_7_dst_rtype 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_1_dst_rtype;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_1192) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_9_dst_rtype 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_1_dst_rtype;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_1193) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_10_dst_rtype 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_1_dst_rtype;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_1195) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_12_dst_rtype 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_1_dst_rtype;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_1199) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_16_dst_rtype 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_1_dst_rtype;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_1201) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_18_dst_rtype 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_1_dst_rtype;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_1202) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_19_dst_rtype 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_1_dst_rtype;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_1204) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_21_dst_rtype 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_1_dst_rtype;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_1205) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_22_dst_rtype 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_1_dst_rtype;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_1206) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_23_dst_rtype 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_1_dst_rtype;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_1208) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_25_dst_rtype 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_1_dst_rtype;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_1212) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_29_dst_rtype 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_1_dst_rtype;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_1214) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_31_dst_rtype 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_1_dst_rtype;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_first) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_denied_r 
            = (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_resp_reg));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4850(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4850\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_11__DOT__slot_uop_uopc = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__readys_mask = 0xffU;
    } else {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__issue_slots_11_in_uop_valid) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_11__DOT__slot_uop_uopc 
                = ((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__next_13))
                    ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT___slots_14_io_out_uop_uopc)
                    : ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__next_12))
                        ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT___slots_13_io_out_uop_uopc)
                        : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT___slots_12_io_out_uop_uopc)));
        } else if ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_11__DOT___GEN_5)))) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_11__DOT__slot_uop_uopc = 3U;
        }
        if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__latch) 
             & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__readys_valid)))) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__readys_mask 
                = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT___readys_mask_T_6) 
                   | (0xf0U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT___readys_mask_T_6) 
                               << 4U)));
        }
    }
    if ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___csr_wen_T_4) 
          & (0xfffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___decoded_decoded_T_82))) 
         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_l) 
               | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_l) 
                  & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_a))))))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_0_addr 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_24;
    }
    if ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___csr_wen_T_4) 
          & (0xfffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___decoded_decoded_T_84))) 
         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_l) 
               | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_l) 
                  & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_a))))))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_1_addr 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_24;
    }
    if ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___csr_wen_T_4) 
          & (0xfffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___decoded_decoded_T_86))) 
         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_l) 
               | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_l) 
                  & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_a))))))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_2_addr 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_24;
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4851(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4851\n"); );
    // Body
    if ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___csr_wen_T_4) 
          & (0xfffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___decoded_decoded_T_88))) 
         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_l) 
               | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_l) 
                  & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_a))))))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_3_addr 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_24;
    }
    if ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___csr_wen_T_4) 
          & (0xfffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___decoded_decoded_T_90))) 
         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_l) 
               | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_l) 
                  & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_a))))))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_4_addr 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_24;
    }
    if ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___csr_wen_T_4) 
          & (0xfffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___decoded_decoded_T_92))) 
         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_l) 
               | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_l) 
                  & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_a))))))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_5_addr 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_24;
    }
    if ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___csr_wen_T_4) 
          & (0xfffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___decoded_decoded_T_94))) 
         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_l) 
               | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_31))))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_6_addr 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_24;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_31__DOT__ppred = 0U;
    } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__issue_slots_31_in_uop_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_31__DOT__ppred = 1U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_27__DOT__slot_uop_br_mask 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__issue_slots_27_in_uop_valid)
            ? ((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__next_29))
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT___slots_30_io_out_uop_br_mask)
                : ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__next_28))
                    ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT___slots_29_io_out_uop_br_mask)
                    : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT___slots_28_io_out_uop_br_mask)))
            : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT___slots_27_io_out_uop_br_mask));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4852(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4852\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__ubtb__DOT__io_resp_f3_3_REG_is_jal 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__ubtb__DOT__io_resp_f2_3_REG_is_jal;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__ubtb__DOT__io_resp_f3_3_REG_is_jal 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__ubtb__DOT__io_resp_f2_3_REG_is_jal;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT__sectored_entries_0_valid_0 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_97)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT____Vcellinp__dtlb__io_sfence_valid)
               ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT____Vcellinp__dtlb__io_sfence_bits_rs1)
                   ? ((0U == (0x1ffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT___hitsVec_T 
                                        >> 0x10U)))
                       ? ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT__sectored_entries_0_data_0) 
                              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_72))) 
                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_37))
                       : ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_72)) 
                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_37)))
                   : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT____Vcellinp__dtlb__io_sfence_bits_rs2) 
                       & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT__sectored_entries_0_data_0 
                                  >> 0xcU))) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_37)))
               : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_37)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT__sectored_entries_0_valid_1 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_97)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT____Vcellinp__dtlb__io_sfence_valid)
               ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT____Vcellinp__dtlb__io_sfence_bits_rs1)
                   ? ((0U == (0x1ffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT___hitsVec_T 
                                        >> 0x10U)))
                       ? ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT__sectored_entries_0_data_1) 
                              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_74))) 
                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_39))
                       : ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_74)) 
                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_39)))
                   : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT____Vcellinp__dtlb__io_sfence_bits_rs2) 
                       & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT__sectored_entries_0_data_1 
                                  >> 0xcU))) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_39)))
               : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_39)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT__sectored_entries_0_valid_2 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_97)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT____Vcellinp__dtlb__io_sfence_valid)
               ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT____Vcellinp__dtlb__io_sfence_bits_rs1)
                   ? ((0U == (0x1ffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT___hitsVec_T 
                                        >> 0x10U)))
                       ? ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT__sectored_entries_0_data_2) 
                              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_76))) 
                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_41))
                       : ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_76)) 
                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_41)))
                   : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT____Vcellinp__dtlb__io_sfence_bits_rs2) 
                       & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT__sectored_entries_0_data_2 
                                  >> 0xcU))) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_41)))
               : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_41)));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4853(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4853\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT__sectored_entries_1_valid_2 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_97)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT____Vcellinp__dtlb__io_sfence_valid)
               ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT____Vcellinp__dtlb__io_sfence_bits_rs1)
                   ? ((0U == (0x1ffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT___hitsVec_T_5 
                                        >> 0x10U)))
                       ? ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT__sectored_entries_1_data_2) 
                              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_82))) 
                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_50))
                       : ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_82)) 
                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_50)))
                   : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT____Vcellinp__dtlb__io_sfence_bits_rs2) 
                       & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT__sectored_entries_1_data_2 
                                  >> 0xcU))) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_50)))
               : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_50)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT__sectored_entries_1_valid_1 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_97)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT____Vcellinp__dtlb__io_sfence_valid)
               ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT____Vcellinp__dtlb__io_sfence_bits_rs1)
                   ? ((0U == (0x1ffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT___hitsVec_T_5 
                                        >> 0x10U)))
                       ? ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT__sectored_entries_1_data_1) 
                              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_81))) 
                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_48))
                       : ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_81)) 
                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_48)))
                   : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT____Vcellinp__dtlb__io_sfence_bits_rs2) 
                       & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT__sectored_entries_1_data_1 
                                  >> 0xcU))) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_48)))
               : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_48)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT__sectored_entries_1_valid_0 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_97)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT____Vcellinp__dtlb__io_sfence_valid)
               ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT____Vcellinp__dtlb__io_sfence_bits_rs1)
                   ? ((0U == (0x1ffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT___hitsVec_T_5 
                                        >> 0x10U)))
                       ? ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT__sectored_entries_1_data_0) 
                              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_80))) 
                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_46))
                       : ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_80)) 
                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_46)))
                   : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT____Vcellinp__dtlb__io_sfence_bits_rs2) 
                       & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT__sectored_entries_1_data_0 
                                  >> 0xcU))) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_46)))
               : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_46)));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4854(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4854\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT__sectored_entries_2_valid_2 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_97)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT____Vcellinp__dtlb__io_sfence_valid)
               ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT____Vcellinp__dtlb__io_sfence_bits_rs1)
                   ? ((0U == (0x1ffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT___hitsVec_T_10 
                                        >> 0x10U)))
                       ? ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT__sectored_entries_2_data_2) 
                              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_88))) 
                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_59))
                       : ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_88)) 
                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_59)))
                   : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT____Vcellinp__dtlb__io_sfence_bits_rs2) 
                       & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT__sectored_entries_2_data_2 
                                  >> 0xcU))) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_59)))
               : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_59)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT__sectored_entries_2_valid_1 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_97)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT____Vcellinp__dtlb__io_sfence_valid)
               ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT____Vcellinp__dtlb__io_sfence_bits_rs1)
                   ? ((0U == (0x1ffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT___hitsVec_T_10 
                                        >> 0x10U)))
                       ? ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT__sectored_entries_2_data_1) 
                              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_87))) 
                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_57))
                       : ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_87)) 
                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_57)))
                   : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT____Vcellinp__dtlb__io_sfence_bits_rs2) 
                       & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT__sectored_entries_2_data_1 
                                  >> 0xcU))) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_57)))
               : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_57)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT__sectored_entries_2_valid_0 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_97)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT____Vcellinp__dtlb__io_sfence_valid)
               ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT____Vcellinp__dtlb__io_sfence_bits_rs1)
                   ? ((0U == (0x1ffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT___hitsVec_T_10 
                                        >> 0x10U)))
                       ? ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT__sectored_entries_2_data_0) 
                              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_86))) 
                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_55))
                       : ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_86)) 
                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_55)))
                   : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT____Vcellinp__dtlb__io_sfence_bits_rs2) 
                       & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT__sectored_entries_2_data_0 
                                  >> 0xcU))) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_55)))
               : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_55)));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4855(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4855\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT__sectored_entries_3_valid_0 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_97)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT____Vcellinp__dtlb__io_sfence_valid)
               ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT____Vcellinp__dtlb__io_sfence_bits_rs1)
                   ? ((0U == (0x1ffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT___hitsVec_T_15 
                                        >> 0x10U)))
                       ? ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT__sectored_entries_3_data_0) 
                              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_92))) 
                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_63))
                       : ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_92)) 
                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_63)))
                   : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT____Vcellinp__dtlb__io_sfence_bits_rs2) 
                       & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT__sectored_entries_3_data_0 
                                  >> 0xcU))) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_63)))
               : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_63)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT__sectored_entries_3_valid_1 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_97)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT____Vcellinp__dtlb__io_sfence_valid)
               ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT____Vcellinp__dtlb__io_sfence_bits_rs1)
                   ? ((0U == (0x1ffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT___hitsVec_T_15 
                                        >> 0x10U)))
                       ? ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT__sectored_entries_3_data_1) 
                              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_93))) 
                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_65))
                       : ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_93)) 
                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_65)))
                   : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT____Vcellinp__dtlb__io_sfence_bits_rs2) 
                       & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT__sectored_entries_3_data_1 
                                  >> 0xcU))) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_65)))
               : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_65)));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__csr__DOT__reg_satp_mode = 0U;
    } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__csr__DOT___GEN_44) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__csr__DOT__reg_satp_mode 
            = (8U & ((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__csr__DOT___new_envcfg_WIRE_1 
                              >> 0x3fU)) << 3U));
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__respq__DOT___GEN_12) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__respq__DOT__uops_2_stq_idx 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT___resp_arb_io_out_bits_uop_stq_idx;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__respq__DOT___GEN_8) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__respq__DOT__uops_0_stq_idx 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT___resp_arb_io_out_bits_uop_stq_idx;
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4856(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4856\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__respq__DOT___GEN_13) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__respq__DOT__uops_3_stq_idx 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT___resp_arb_io_out_bits_uop_stq_idx;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__respq__DOT___GEN_10) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__respq__DOT__uops_1_stq_idx 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT___resp_arb_io_out_bits_uop_stq_idx;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__btb__DOT__io_resp_f2_0_is_jal_REG 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__btb__DOT__s1_is_jal_0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__btb__DOT__io_resp_f2_2_is_jal_REG 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__btb__DOT__s1_is_jal_2;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__btb__DOT__io_resp_f2_1_is_jal_REG 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__btb__DOT__s1_is_jal_1;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__btb__DOT__io_resp_f2_0_is_jal_REG 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__btb__DOT__s1_is_jal_0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__btb__DOT__io_resp_f2_2_is_jal_REG 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__btb__DOT__s1_is_jal_2;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__btb__DOT__io_resp_f2_1_is_jal_REG 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__btb__DOT__s1_is_jal_1;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__mem_tlb_uncacheable_0 
        = (1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___dtlb_io_resp_0_cacheable)));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT___GEN_5) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__req_dw 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_ctrl_alu_dw;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_1209) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_26_uses_ldq 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_1_uses_ldq;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_1183) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_0_uses_ldq 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_1_uses_ldq;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_1191) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_8_uses_ldq 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_1_uses_ldq;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_1206) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_23_uses_ldq 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_1_uses_ldq;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_1188) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_5_uses_ldq 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_1_uses_ldq;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_1185) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_2_uses_ldq 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_1_uses_ldq;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_1213) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_30_uses_ldq 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_1_uses_ldq;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_1211) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_28_uses_ldq 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_1_uses_ldq;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_1210) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_27_uses_ldq 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_1_uses_ldq;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_1194) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_11_uses_ldq 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_1_uses_ldq;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_1201) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_18_uses_ldq 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_1_uses_ldq;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_1196) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_13_uses_ldq 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_1_uses_ldq;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_1212) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_29_uses_ldq 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_1_uses_ldq;
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4857(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4857\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_1198) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_15_uses_ldq 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_1_uses_ldq;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_1202) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_19_uses_ldq 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_1_uses_ldq;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_1197) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_14_uses_ldq 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_1_uses_ldq;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_1200) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_17_uses_ldq 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_1_uses_ldq;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_1203) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_20_uses_ldq 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_1_uses_ldq;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_1184) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_1_uses_ldq 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_1_uses_ldq;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_1186) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_3_uses_ldq 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_1_uses_ldq;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_1187) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_4_uses_ldq 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_1_uses_ldq;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_1189) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_6_uses_ldq 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_1_uses_ldq;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_1190) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_7_uses_ldq 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_1_uses_ldq;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_1192) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_9_uses_ldq 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_1_uses_ldq;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_1193) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_10_uses_ldq 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_1_uses_ldq;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_1195) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_12_uses_ldq 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_1_uses_ldq;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_1199) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_16_uses_ldq 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_1_uses_ldq;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_1204) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_21_uses_ldq 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_1_uses_ldq;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_1205) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_22_uses_ldq 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_1_uses_ldq;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_1207) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_24_uses_ldq 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_1_uses_ldq;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_1208) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_25_uses_ldq 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_1_uses_ldq;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_1214) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_31_uses_ldq 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_1_uses_ldq;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__mem_ldq_wakeup_e_bits_st_dep_mask 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__mem_ldq_wakeup_e_out_bits_st_dep_mask;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__btb__DOT__io_resp_f2_0_predicted_pc_REG_valid 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__btb__DOT__s1_resp_0_valid;
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4858(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4858\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__btb__DOT__io_resp_f2_2_predicted_pc_REG_valid 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__btb__DOT__s1_resp_2_valid;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__btb__DOT__io_resp_f2_1_predicted_pc_REG_valid 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__btb__DOT__s1_resp_1_valid;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__btb__DOT__io_resp_f2_0_predicted_pc_REG_valid 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__btb__DOT__s1_resp_0_valid;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__btb__DOT__io_resp_f2_2_predicted_pc_REG_valid 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__btb__DOT__s1_resp_2_valid;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__btb__DOT__io_resp_f2_1_predicted_pc_REG_valid 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__btb__DOT__s1_resp_1_valid;
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1277) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_22_bits_addr_is_uncacheable 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___ldq_bits_addr_is_uncacheable_T_1;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1275) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_21_bits_addr_is_uncacheable 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___ldq_bits_addr_is_uncacheable_T_1;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1273) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_20_bits_addr_is_uncacheable 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___ldq_bits_addr_is_uncacheable_T_1;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1269) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_18_bits_addr_is_uncacheable 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___ldq_bits_addr_is_uncacheable_T_1;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1263) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_15_bits_addr_is_uncacheable 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___ldq_bits_addr_is_uncacheable_T_1;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1261) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_14_bits_addr_is_uncacheable 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___ldq_bits_addr_is_uncacheable_T_1;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1259) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_13_bits_addr_is_uncacheable 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___ldq_bits_addr_is_uncacheable_T_1;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1255) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_11_bits_addr_is_uncacheable 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___ldq_bits_addr_is_uncacheable_T_1;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1237) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_2_bits_addr_is_uncacheable 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___ldq_bits_addr_is_uncacheable_T_1;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1241) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_4_bits_addr_is_uncacheable 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___ldq_bits_addr_is_uncacheable_T_1;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1235) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_1_bits_addr_is_uncacheable 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___ldq_bits_addr_is_uncacheable_T_1;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1249) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_8_bits_addr_is_uncacheable 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___ldq_bits_addr_is_uncacheable_T_1;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1239) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_3_bits_addr_is_uncacheable 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___ldq_bits_addr_is_uncacheable_T_1;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1233) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_0_bits_addr_is_uncacheable 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___ldq_bits_addr_is_uncacheable_T_1;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1247) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_7_bits_addr_is_uncacheable 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___ldq_bits_addr_is_uncacheable_T_1;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1243) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_5_bits_addr_is_uncacheable 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___ldq_bits_addr_is_uncacheable_T_1;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1251) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_9_bits_addr_is_uncacheable 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___ldq_bits_addr_is_uncacheable_T_1;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1245) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_6_bits_addr_is_uncacheable 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___ldq_bits_addr_is_uncacheable_T_1;
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4859(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4859\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1279) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_23_bits_addr_is_uncacheable 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___ldq_bits_addr_is_uncacheable_T_1;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1253) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_10_bits_addr_is_uncacheable 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___ldq_bits_addr_is_uncacheable_T_1;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1257) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_12_bits_addr_is_uncacheable 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___ldq_bits_addr_is_uncacheable_T_1;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1265) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_16_bits_addr_is_uncacheable 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___ldq_bits_addr_is_uncacheable_T_1;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1267) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_17_bits_addr_is_uncacheable 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___ldq_bits_addr_is_uncacheable_T_1;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1271) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_19_bits_addr_is_uncacheable 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___ldq_bits_addr_is_uncacheable_T_1;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__columns_2__DOT__f4_fire 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__s3_valid) 
           & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__s3_mask) 
               >> 2U) & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__columns_2_io_f3_req_fire_REG) 
                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT____Vcellinp__banked_predictors_0__io_f3_fire))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__columns_1__DOT__f4_fire 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__s3_valid) 
           & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__s3_mask) 
               >> 1U) & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__columns_1_io_f3_req_fire_REG) 
                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT____Vcellinp__banked_predictors_0__io_f3_fire))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__columns_0__DOT__f4_fire 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__s3_valid) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__s3_mask) 
              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__columns_0_io_f3_req_fire_REG) 
                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT____Vcellinp__banked_predictors_0__io_f3_fire))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_2__DOT__f4_fire 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__s3_valid) 
           & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__s3_mask) 
               >> 2U) & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_2_io_f3_req_fire_REG) 
                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT____Vcellinp__banked_predictors_1__io_f3_fire))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_1__DOT__f4_fire 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__s3_valid) 
           & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__s3_mask) 
               >> 1U) & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_1_io_f3_req_fire_REG) 
                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT____Vcellinp__banked_predictors_1__io_f3_fire))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_0__DOT__f4_fire 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__s3_valid) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__s3_mask) 
              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_0_io_f3_req_fire_REG) 
                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT____Vcellinp__banked_predictors_1__io_f3_fire))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4860(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4860\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__ubtb__DOT__io_resp_f3_3_REG_predicted_pc_valid 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__ubtb__DOT__io_resp_f2_3_REG_predicted_pc_valid;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__ubtb__DOT__io_resp_f3_3_REG_predicted_pc_valid 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__ubtb__DOT__io_resp_f2_3_REG_predicted_pc_valid;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__ubtb__DOT__io_resp_f3_3_REG_is_br 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__ubtb__DOT__io_resp_f2_3_REG_is_br;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__ubtb__DOT__io_resp_f3_3_REG_is_br 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__ubtb__DOT__io_resp_f2_3_REG_is_br;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT__sectored_entries_0_valid_3 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_97)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT____Vcellinp__dtlb__io_sfence_valid)
               ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT____Vcellinp__dtlb__io_sfence_bits_rs1)
                   ? ((0U == (0x1ffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT___hitsVec_T 
                                        >> 0x10U)))
                       ? ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT__sectored_entries_0_data_3) 
                              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_77))) 
                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_42))
                       : ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_77)) 
                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_42)))
                   : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT____Vcellinp__dtlb__io_sfence_bits_rs2) 
                       & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT__sectored_entries_0_data_3 
                                  >> 0xcU))) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_42)))
               : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_42)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT__sectored_entries_1_valid_3 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_97)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT____Vcellinp__dtlb__io_sfence_valid)
               ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT____Vcellinp__dtlb__io_sfence_bits_rs1)
                   ? ((0U == (0x1ffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT___hitsVec_T_5 
                                        >> 0x10U)))
                       ? ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT__sectored_entries_1_data_3) 
                              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_83))) 
                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_51))
                       : ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_83)) 
                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_51)))
                   : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT____Vcellinp__dtlb__io_sfence_bits_rs2) 
                       & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT__sectored_entries_1_data_3 
                                  >> 0xcU))) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_51)))
               : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_51)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT__sectored_entries_2_valid_3 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_97)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT____Vcellinp__dtlb__io_sfence_valid)
               ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT____Vcellinp__dtlb__io_sfence_bits_rs1)
                   ? ((0U == (0x1ffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT___hitsVec_T_10 
                                        >> 0x10U)))
                       ? ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT__sectored_entries_2_data_3) 
                              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_89))) 
                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_60))
                       : ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_89)) 
                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_60)))
                   : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT____Vcellinp__dtlb__io_sfence_bits_rs2) 
                       & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT__sectored_entries_2_data_3 
                                  >> 0xcU))) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_60)))
               : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_60)));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4861(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4861\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__btb__DOT__REG_1 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__btb__DOT__s1_is_jal_0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__btb__DOT__REG_7 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__btb__DOT__s1_is_jal_1;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__btb__DOT__REG_13 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__btb__DOT__s1_is_jal_2;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__btb__DOT__REG_1 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__btb__DOT__s1_is_jal_0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__btb__DOT__REG_7 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__btb__DOT__s1_is_jal_1;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__btb__DOT__REG_13 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__btb__DOT__s1_is_jal_2;
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_27__DOT__slot_uop_uopc = 0U;
    } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__issue_slots_27_in_uop_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_27__DOT__slot_uop_uopc 
            = ((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__next_29))
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT___slots_30_io_out_uop_uopc)
                : ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__next_28))
                    ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT___slots_29_io_out_uop_uopc)
                    : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT___slots_28_io_out_uop_uopc)));
    } else if ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_27__DOT___GEN_5)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_27__DOT__slot_uop_uopc = 3U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__REG_3 
        = ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT___core_io_lsu_dis_uops_0_valid) 
             | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT___core_io_lsu_dis_uops_1_valid)) 
            | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT___core_io_lsu_dis_uops_2_valid)) 
           & ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_is_sys_pc2epc) 
                << 3U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_2_is_sys_pc2epc) 
                           << 2U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_1_is_sys_pc2epc) 
                                      << 1U) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_is_sys_pc2epc)))) 
              >> ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT___core_io_lsu_dis_uops_0_valid)
                   ? 0U : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT___core_io_lsu_dis_uops_1_valid)
                            ? 1U : 2U))));
    if ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ctrl_killd)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_reg_rs_bypass_0 
            = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_28)) 
               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__do_bypass));
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_28) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_reg_rs_msb_0 
                = (QData)((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__inst 
                                   >> 2U)));
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_reg_rs_lsb_0 
                = (3U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__inst);
        } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_27) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_reg_rs_msb_0 
                = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__id_rs_0 
                   >> 2U);
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_reg_rs_lsb_0 
                = (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__id_rs_0));
        } else {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_reg_rs_lsb_0 
                = (3U & ((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_rs1))
                          ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__id_bypass_src_0_1)
                              ? 1U : (2U | (1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__id_bypass_src_0_2)))))
                          : 0U));
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4862(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4862\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__r_partial_row = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__fb__DOT__tail = 1U;
    } else {
        if ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT___core_io_lsu_dis_uops_0_valid) 
              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT___core_io_lsu_dis_uops_1_valid)) 
             | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT___core_io_lsu_dis_uops_2_valid))) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__r_partial_row 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__dis_stalls_2;
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__f4_clear) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__fb__DOT__tail = 1U;
        } else if ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__fb__DOT___do_enq_T_1)))) {
            if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__fb__DOT__in_mask_7) {
                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__fb__DOT__tail 
                    = ((0xfffffeU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__fb__DOT__enq_idxs_7 
                                     << 1U)) | (1U 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__fb__DOT__enq_idxs_7 
                                                   >> 0x17U)));
            } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__fb__DOT__in_mask_6) {
                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__fb__DOT__tail 
                    = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__fb__DOT___GEN_6;
            } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__fb__DOT__in_mask_5) {
                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__fb__DOT__tail 
                    = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__fb__DOT___GEN_5;
            } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__fb__DOT__in_mask_4) {
                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__fb__DOT__tail 
                    = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__fb__DOT___GEN_4;
            } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__fb__DOT__in_mask_3) {
                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__fb__DOT__tail 
                    = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__fb__DOT___GEN_3;
            } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__fb__DOT__in_mask_2) {
                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__fb__DOT__tail 
                    = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__fb__DOT___GEN_2;
            } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__fb__DOT__in_mask_1) {
                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__fb__DOT__tail 
                    = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__fb__DOT___GEN_1;
            } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__fb__DOT__in_mask_0) {
                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__fb__DOT__tail 
                    = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__fb__DOT___GEN_0;
            }
        }
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__advance_pstore1) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_addr 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore1_addr;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__ubtb__DOT__s1_valid 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT___GEN_0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__ubtb__DOT__s1_valid 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__s0_valid;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__can_fire_sta_retry_REG 
        = (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT__state));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_23_bits_addr_valid 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2439)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__clear_store)
               ? ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2363)) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1328))
               : ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2098)) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1328))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4863(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4863\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1327) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_23_bits_addr_is_virtual 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__exe_tlb_miss_0;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_22_bits_addr_valid 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2437)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__clear_store)
               ? ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2361)) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1326))
               : ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2097)) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1326))));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1325) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_22_bits_addr_is_virtual 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__exe_tlb_miss_0;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_21_bits_addr_valid 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2435)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__clear_store)
               ? ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2359)) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1324))
               : ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2096)) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1324))));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1323) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_21_bits_addr_is_virtual 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__exe_tlb_miss_0;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_20_bits_addr_valid 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2433)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__clear_store)
               ? ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2357)) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1322))
               : ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2095)) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1322))));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1321) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_20_bits_addr_is_virtual 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__exe_tlb_miss_0;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_19_bits_addr_valid 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2431)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__clear_store)
               ? ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2355)) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1320))
               : ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2094)) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1320))));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1319) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_19_bits_addr_is_virtual 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__exe_tlb_miss_0;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_18_bits_addr_valid 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2429)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__clear_store)
               ? ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2353)) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1318))
               : ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2093)) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1318))));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1317) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_18_bits_addr_is_virtual 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__exe_tlb_miss_0;
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4864(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4864\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_17_bits_addr_valid 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2427)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__clear_store)
               ? ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2351)) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1316))
               : ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2092)) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1316))));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1315) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_17_bits_addr_is_virtual 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__exe_tlb_miss_0;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_16_bits_addr_valid 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2425)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__clear_store)
               ? ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2349)) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1314))
               : ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2091)) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1314))));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1313) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_16_bits_addr_is_virtual 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__exe_tlb_miss_0;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_15_bits_addr_valid 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2423)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__clear_store)
               ? ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2347)) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1312))
               : ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2090)) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1312))));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1311) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_15_bits_addr_is_virtual 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__exe_tlb_miss_0;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_14_bits_addr_valid 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2421)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__clear_store)
               ? ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2345)) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1310))
               : ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2089)) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1310))));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1309) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_14_bits_addr_is_virtual 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__exe_tlb_miss_0;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_13_bits_addr_valid 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2419)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__clear_store)
               ? ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2343)) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1308))
               : ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2088)) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1308))));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1307) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_13_bits_addr_is_virtual 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__exe_tlb_miss_0;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_12_bits_addr_valid 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2417)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__clear_store)
               ? ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2341)) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1306))
               : ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2087)) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1306))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4865(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4865\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1305) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_12_bits_addr_is_virtual 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__exe_tlb_miss_0;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___r = 0U;
    } else if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ll_wen) 
                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_18))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___r 
            = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_17 
               | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_18)
                   ? ((IData)(1U) << (0x1fU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
                                               >> 7U)))
                   : 0U));
    } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ll_wen) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___r 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_17;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_11_bits_addr_valid 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2415)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__clear_store)
               ? ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2339)) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1304))
               : ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2086)) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1304))));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1303) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_11_bits_addr_is_virtual 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__exe_tlb_miss_0;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_8_bits_data_valid 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2409)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__clear_store)
               ? ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2333)) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1346))
               : ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2083)) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1346))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_5_bits_data_valid 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2403)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__clear_store)
               ? ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2327)) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1340))
               : ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2080)) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1340))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_0_bits_data_valid 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2393)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__clear_store)
               ? ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2317)) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1330))
               : ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2075)) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1330))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_9_bits_data_valid 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2411)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__clear_store)
               ? ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2335)) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1348))
               : ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2084)) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1348))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4866(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4866\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_21_bits_data_valid 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2435)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__clear_store)
               ? ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2359)) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1372))
               : ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2096)) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1372))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_3_bits_data_valid 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2399)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__clear_store)
               ? ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2323)) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1336))
               : ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2078)) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1336))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_20_bits_data_valid 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2433)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__clear_store)
               ? ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2357)) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1370))
               : ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2095)) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1370))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_22_bits_data_valid 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2437)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__clear_store)
               ? ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2361)) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1374))
               : ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2097)) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1374))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_6_bits_data_valid 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2405)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__clear_store)
               ? ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2329)) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1342))
               : ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2081)) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1342))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_23_bits_data_valid 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2439)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__clear_store)
               ? ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2363)) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1376))
               : ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2098)) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1376))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_15_bits_data_valid 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2423)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__clear_store)
               ? ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2347)) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1360))
               : ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2090)) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1360))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4867(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4867\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_18_bits_data_valid 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2429)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__clear_store)
               ? ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2353)) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1366))
               : ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2093)) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1366))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_12_bits_data_valid 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2417)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__clear_store)
               ? ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2341)) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1354))
               : ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2087)) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1354))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_2_bits_data_valid 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2397)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__clear_store)
               ? ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2321)) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1334))
               : ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2077)) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1334))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_13_bits_data_valid 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2419)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__clear_store)
               ? ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2343)) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1356))
               : ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2088)) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1356))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_1_bits_data_valid 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2395)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__clear_store)
               ? ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2319)) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1332))
               : ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2076)) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1332))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_4_bits_data_valid 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2401)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__clear_store)
               ? ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2325)) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1338))
               : ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2079)) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1338))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_7_bits_data_valid 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2407)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__clear_store)
               ? ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2331)) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1344))
               : ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2082)) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1344))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4868(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4868\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_10_bits_data_valid 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2413)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__clear_store)
               ? ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2337)) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1350))
               : ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2085)) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1350))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_11_bits_data_valid 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2415)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__clear_store)
               ? ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2339)) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1352))
               : ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2086)) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1352))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_14_bits_data_valid 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2421)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__clear_store)
               ? ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2345)) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1358))
               : ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2089)) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1358))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_16_bits_data_valid 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2425)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__clear_store)
               ? ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2349)) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1362))
               : ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2091)) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1362))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_17_bits_data_valid 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2427)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__clear_store)
               ? ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2351)) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1364))
               : ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2092)) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1364))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_19_bits_data_valid 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2431)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__clear_store)
               ? ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2355)) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1368))
               : ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2094)) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1368))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_10_bits_addr_valid 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2413)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__clear_store)
               ? ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2337)) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1302))
               : ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2085)) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1302))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4869(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4869\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1301) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_10_bits_addr_is_virtual 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__exe_tlb_miss_0;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_9_bits_addr_valid 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2411)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__clear_store)
               ? ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2335)) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1300))
               : ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2084)) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1300))));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1299) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_9_bits_addr_is_virtual 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__exe_tlb_miss_0;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_8_bits_addr_valid 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2409)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__clear_store)
               ? ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2333)) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1298))
               : ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2083)) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1298))));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1297) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_8_bits_addr_is_virtual 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__exe_tlb_miss_0;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_7_bits_addr_valid 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2407)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__clear_store)
               ? ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2331)) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1296))
               : ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2082)) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1296))));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1295) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_7_bits_addr_is_virtual 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__exe_tlb_miss_0;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__iregister_read__DOT__exe_reg_uops_1_ctrl_op1_sel 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__iregister_read__DOT__rrd_kill_1)
            ? 0U : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__iregister_read__DOT__rrd_uops_1_REG_ctrl_op1_sel));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_6_bits_addr_valid 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2405)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__clear_store)
               ? ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2329)) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1294))
               : ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2081)) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1294))));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1293) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_6_bits_addr_is_virtual 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__exe_tlb_miss_0;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_5_bits_addr_valid 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2403)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__clear_store)
               ? ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2327)) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1292))
               : ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2080)) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1292))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4870(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4870\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1291) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_5_bits_addr_is_virtual 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__exe_tlb_miss_0;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directoryFanout 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_uses_directory)
            ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH)
            : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__alloc_uses_directory)
                ? ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__setMatches))
                    ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___GEN_18)
                    : 0x40U) : 0U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_4_bits_addr_valid 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2401)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__clear_store)
               ? ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2325)) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1290))
               : ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2079)) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1290))));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1289) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_4_bits_addr_is_virtual 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__exe_tlb_miss_0;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_3_bits_addr_valid 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2399)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__clear_store)
               ? ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2323)) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1288))
               : ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2078)) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1288))));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1287) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_3_bits_addr_is_virtual 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__exe_tlb_miss_0;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_2_bits_addr_valid 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2397)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__clear_store)
               ? ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2321)) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1286))
               : ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2077)) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1286))));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1285) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_2_bits_addr_is_virtual 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__exe_tlb_miss_0;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__iregister_read__DOT__exe_reg_uops_3_ctrl_op1_sel 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__iregister_read__DOT__rrd_kill_3)
            ? 0U : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__iregister_read__DOT__rrd_uops_3_REG_ctrl_op1_sel));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__iregister_read__DOT__exe_reg_uops_2_ctrl_op1_sel 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__iregister_read__DOT__rrd_kill_2)
            ? 0U : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__iregister_read__DOT__rrd_uops_2_REG_ctrl_op1_sel));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_1_bits_addr_valid 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2395)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__clear_store)
               ? ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2319)) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1284))
               : ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2076)) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1284))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4871(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4871\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1283) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_1_bits_addr_is_virtual 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__exe_tlb_miss_0;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_0_bits_addr_valid 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2393)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__clear_store)
               ? ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2317)) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1282))
               : ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2075)) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1282))));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_1281) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_0_bits_addr_is_virtual 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__exe_tlb_miss_0;
    }
    if ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT___GEN)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__r_uop_2_lrs3 
            = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_2_io_deq_uop_inst 
               >> 0x1bU);
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mmios_0__DOT___GEN_1) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mmios_0__DOT__req_uop_stq_idx 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_req_0_uop_stq_idx;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__rpq__DOT___GEN_110) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__rpq__DOT__uops_15_stq_idx 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_req_0_uop_stq_idx;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__rpq__DOT___GEN_109) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__rpq__DOT__uops_14_stq_idx 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_req_0_uop_stq_idx;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__rpq__DOT___GEN_93) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__rpq__DOT__uops_6_stq_idx 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_req_0_uop_stq_idx;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__rpq__DOT___GEN_91) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__rpq__DOT__uops_5_stq_idx 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_req_0_uop_stq_idx;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__rpq__DOT___GEN_89) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__rpq__DOT__uops_4_stq_idx 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_req_0_uop_stq_idx;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__rpq__DOT___GEN_87) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__rpq__DOT__uops_3_stq_idx 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_req_0_uop_stq_idx;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__rpq__DOT___GEN_83) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__rpq__DOT__uops_1_stq_idx 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_req_0_uop_stq_idx;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__rpq__DOT___GEN_85) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__rpq__DOT__uops_2_stq_idx 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_req_0_uop_stq_idx;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__rpq__DOT___GEN_81) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__rpq__DOT__uops_0_stq_idx 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_req_0_uop_stq_idx;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__rpq__DOT___GEN_95) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__rpq__DOT__uops_7_stq_idx 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_req_0_uop_stq_idx;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__rpq__DOT___GEN_97) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__rpq__DOT__uops_8_stq_idx 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_req_0_uop_stq_idx;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__rpq__DOT___GEN_99) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__rpq__DOT__uops_9_stq_idx 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_req_0_uop_stq_idx;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__rpq__DOT___GEN_101) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__rpq__DOT__uops_10_stq_idx 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_req_0_uop_stq_idx;
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4872(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4872\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__rpq__DOT___GEN_103) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__rpq__DOT__uops_11_stq_idx 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_req_0_uop_stq_idx;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__rpq__DOT___GEN_105) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__rpq__DOT__uops_12_stq_idx 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_req_0_uop_stq_idx;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__rpq__DOT___GEN_107) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__rpq__DOT__uops_13_stq_idx 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_req_0_uop_stq_idx;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__rpq__DOT___GEN_110) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__rpq__DOT__uops_15_stq_idx 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_req_0_uop_stq_idx;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__rpq__DOT___GEN_109) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__rpq__DOT__uops_14_stq_idx 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_req_0_uop_stq_idx;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__rpq__DOT___GEN_93) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__rpq__DOT__uops_6_stq_idx 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_req_0_uop_stq_idx;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__rpq__DOT___GEN_91) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__rpq__DOT__uops_5_stq_idx 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_req_0_uop_stq_idx;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__rpq__DOT___GEN_89) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__rpq__DOT__uops_4_stq_idx 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_req_0_uop_stq_idx;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__rpq__DOT___GEN_87) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__rpq__DOT__uops_3_stq_idx 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_req_0_uop_stq_idx;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__rpq__DOT___GEN_83) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__rpq__DOT__uops_1_stq_idx 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_req_0_uop_stq_idx;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__rpq__DOT___GEN_85) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__rpq__DOT__uops_2_stq_idx 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_req_0_uop_stq_idx;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__rpq__DOT___GEN_81) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__rpq__DOT__uops_0_stq_idx 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_req_0_uop_stq_idx;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__rpq__DOT___GEN_95) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__rpq__DOT__uops_7_stq_idx 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_req_0_uop_stq_idx;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__rpq__DOT___GEN_97) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__rpq__DOT__uops_8_stq_idx 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_req_0_uop_stq_idx;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__rpq__DOT___GEN_99) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__rpq__DOT__uops_9_stq_idx 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_req_0_uop_stq_idx;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__rpq__DOT___GEN_101) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__rpq__DOT__uops_10_stq_idx 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_req_0_uop_stq_idx;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__rpq__DOT___GEN_103) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__rpq__DOT__uops_11_stq_idx 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_req_0_uop_stq_idx;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__rpq__DOT___GEN_105) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__rpq__DOT__uops_12_stq_idx 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_req_0_uop_stq_idx;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__rpq__DOT___GEN_107) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__rpq__DOT__uops_13_stq_idx 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_req_0_uop_stq_idx;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq__DOT___GEN_110) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq__DOT__uops_15_stq_idx 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_req_0_uop_stq_idx;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq__DOT___GEN_109) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq__DOT__uops_14_stq_idx 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_req_0_uop_stq_idx;
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4873(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4873\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq__DOT___GEN_93) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq__DOT__uops_6_stq_idx 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_req_0_uop_stq_idx;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq__DOT___GEN_91) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq__DOT__uops_5_stq_idx 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_req_0_uop_stq_idx;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq__DOT___GEN_89) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq__DOT__uops_4_stq_idx 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_req_0_uop_stq_idx;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq__DOT___GEN_87) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq__DOT__uops_3_stq_idx 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_req_0_uop_stq_idx;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq__DOT___GEN_83) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq__DOT__uops_1_stq_idx 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_req_0_uop_stq_idx;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq__DOT___GEN_85) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq__DOT__uops_2_stq_idx 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_req_0_uop_stq_idx;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq__DOT___GEN_81) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq__DOT__uops_0_stq_idx 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_req_0_uop_stq_idx;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq__DOT___GEN_95) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq__DOT__uops_7_stq_idx 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_req_0_uop_stq_idx;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq__DOT___GEN_97) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq__DOT__uops_8_stq_idx 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_req_0_uop_stq_idx;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq__DOT___GEN_99) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq__DOT__uops_9_stq_idx 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_req_0_uop_stq_idx;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq__DOT___GEN_101) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq__DOT__uops_10_stq_idx 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_req_0_uop_stq_idx;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq__DOT___GEN_103) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq__DOT__uops_11_stq_idx 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_req_0_uop_stq_idx;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq__DOT___GEN_105) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq__DOT__uops_12_stq_idx 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_req_0_uop_stq_idx;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq__DOT___GEN_107) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq__DOT__uops_13_stq_idx 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_req_0_uop_stq_idx;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq__DOT___GEN_110) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq__DOT__uops_15_stq_idx 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_req_0_uop_stq_idx;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq__DOT___GEN_109) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq__DOT__uops_14_stq_idx 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_req_0_uop_stq_idx;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq__DOT___GEN_93) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq__DOT__uops_6_stq_idx 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_req_0_uop_stq_idx;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq__DOT___GEN_91) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq__DOT__uops_5_stq_idx 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_req_0_uop_stq_idx;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq__DOT___GEN_89) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq__DOT__uops_4_stq_idx 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_req_0_uop_stq_idx;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq__DOT___GEN_87) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq__DOT__uops_3_stq_idx 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_req_0_uop_stq_idx;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq__DOT___GEN_83) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq__DOT__uops_1_stq_idx 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_req_0_uop_stq_idx;
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4874(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4874\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq__DOT___GEN_85) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq__DOT__uops_2_stq_idx 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_req_0_uop_stq_idx;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq__DOT___GEN_81) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq__DOT__uops_0_stq_idx 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_req_0_uop_stq_idx;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq__DOT___GEN_95) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq__DOT__uops_7_stq_idx 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_req_0_uop_stq_idx;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq__DOT___GEN_97) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq__DOT__uops_8_stq_idx 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_req_0_uop_stq_idx;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq__DOT___GEN_99) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq__DOT__uops_9_stq_idx 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_req_0_uop_stq_idx;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq__DOT___GEN_101) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq__DOT__uops_10_stq_idx 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_req_0_uop_stq_idx;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq__DOT___GEN_103) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq__DOT__uops_11_stq_idx 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_req_0_uop_stq_idx;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq__DOT___GEN_105) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq__DOT__uops_12_stq_idx 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_req_0_uop_stq_idx;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq__DOT___GEN_107) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq__DOT__uops_13_stq_idx 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_req_0_uop_stq_idx;
    }
    if ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT___GEN)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__r_uop_2_ldst 
            = (0x1fU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_2_io_deq_uop_inst 
                        >> 7U));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__r_uop_2_lrs1 
            = (0x1fU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_2_io_deq_uop_inst 
                        >> 0xfU));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__r_uop_2_lrs2 
            = (0x1fU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_2_io_deq_uop_inst 
                        >> 0x14U));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__ubtb__DOT__io_resp_f3_0_REG_is_jal 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__ubtb__DOT__io_resp_f2_0_REG_is_jal;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__ubtb__DOT__io_resp_f3_1_REG_is_jal 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__ubtb__DOT__io_resp_f2_1_REG_is_jal;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__ubtb__DOT__io_resp_f3_2_REG_is_jal 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__ubtb__DOT__io_resp_f2_2_REG_is_jal;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__ubtb__DOT__io_resp_f3_0_REG_is_jal 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__ubtb__DOT__io_resp_f2_0_REG_is_jal;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__ubtb__DOT__io_resp_f3_1_REG_is_jal 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__ubtb__DOT__io_resp_f2_1_REG_is_jal;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__ubtb__DOT__io_resp_f3_2_REG_is_jal 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__ubtb__DOT__io_resp_f2_2_REG_is_jal;
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_1791) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_30_ldst 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_2_ldst;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_1787) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_26_ldst 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_2_ldst;
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4875(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4875\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_1786) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_25_ldst 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_2_ldst;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_1785) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_24_ldst 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_2_ldst;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_1784) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_23_ldst 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_2_ldst;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_1782) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_21_ldst 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_2_ldst;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_1780) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_19_ldst 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_2_ldst;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_1778) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_17_ldst 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_2_ldst;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_1777) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_16_ldst 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_2_ldst;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_1775) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_14_ldst 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_2_ldst;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_1774) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_13_ldst 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_2_ldst;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_1772) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_11_ldst 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_2_ldst;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_1771) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_10_ldst 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_2_ldst;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_1769) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_8_ldst 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_2_ldst;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_1768) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_7_ldst 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_2_ldst;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_1766) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_5_ldst 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_2_ldst;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_1765) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_4_ldst 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_2_ldst;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_1763) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_2_ldst 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_2_ldst;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_1762) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_1_ldst 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_2_ldst;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_1761) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_0_ldst 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_2_ldst;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_1764) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_3_ldst 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_2_ldst;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_1783) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_22_ldst 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_2_ldst;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_1767) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_6_ldst 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_2_ldst;
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4876(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4876\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_1789) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_28_ldst 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_2_ldst;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_1792) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_31_ldst 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_2_ldst;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_1788) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_27_ldst 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_2_ldst;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_27_is_fencei 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_2_is_fencei;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_1773) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_12_ldst 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_2_ldst;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_1770) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_9_ldst 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_2_ldst;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_1776) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_15_ldst 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_2_ldst;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_1779) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_18_ldst 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_2_ldst;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_1781) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_20_ldst 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_2_ldst;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_20_is_fencei 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_2_is_fencei;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_1790) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_29_ldst 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_2_ldst;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_1791) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_30_is_fencei 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_2_is_fencei;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_1787) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_26_is_fencei 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_2_is_fencei;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_1786) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_25_is_fencei 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_2_is_fencei;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_1785) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_24_is_fencei 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_2_is_fencei;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_1784) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_23_is_fencei 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_2_is_fencei;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_1783) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_22_is_fencei 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_2_is_fencei;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_1782) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_21_is_fencei 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_2_is_fencei;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_1780) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_19_is_fencei 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_2_is_fencei;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_1778) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_17_is_fencei 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_2_is_fencei;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_1777) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_16_is_fencei 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_2_is_fencei;
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4877(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4877\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_1775) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_14_is_fencei 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_2_is_fencei;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_1774) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_13_is_fencei 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_2_is_fencei;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_1772) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_11_is_fencei 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_2_is_fencei;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_1771) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_10_is_fencei 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_2_is_fencei;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_1769) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_8_is_fencei 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_2_is_fencei;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_1768) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_7_is_fencei 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_2_is_fencei;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_1766) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_5_is_fencei 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_2_is_fencei;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_1765) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_4_is_fencei 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_2_is_fencei;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_1763) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_2_is_fencei 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_2_is_fencei;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_1762) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_1_is_fencei 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_2_is_fencei;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_1761) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_0_is_fencei 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_2_is_fencei;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_1767) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_6_is_fencei 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_2_is_fencei;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_1764) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_3_is_fencei 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_2_is_fencei;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_1770) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_9_is_fencei 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_2_is_fencei;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_1789) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_28_is_fencei 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_2_is_fencei;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_1792) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_31_is_fencei 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_2_is_fencei;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_1773) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_12_is_fencei 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_2_is_fencei;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_1790) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_29_is_fencei 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_2_is_fencei;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_1776) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_15_is_fencei 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_2_is_fencei;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_1779) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_18_is_fencei 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_2_is_fencei;
    }
    if ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__r_uop_bypass_hits_dst_0_2) 
          | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__r_uop_bypass_hits_dst_1_2)) 
         | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__r_uop_bypass_hits_dst_2_2))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__r_uop_2_stale_pdst 
            = ((((4U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__r_uop_bypass_sel_dst_enc_2))
                  ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel)
                  : 0U) | ((2U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__r_uop_bypass_sel_dst_enc_2))
                            ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel_1)
                            : 0U)) | ((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__r_uop_bypass_sel_dst_enc_2))
                                       ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel_2)
                                       : 0U));
    } else if ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT___GEN)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__r_uop_2_stale_pdst 
            = ((0xdfU >= (0xffU & ((IData)(7U) * (0x1fU 
                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_2_io_deq_uop_inst 
                                                     >> 7U)))))
                ? (0x7fU & (((0U == (0x1fU & ((IData)(7U) 
                                              * (0x1fU 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_2_io_deq_uop_inst 
                                                    >> 7U)))))
                              ? 0U : (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__maptable__DOT___GEN[
                                      (((IData)(6U) 
                                        + (0xffU & 
                                           ((IData)(7U) 
                                            * (0x1fU 
                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_2_io_deq_uop_inst 
                                                  >> 7U))))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(7U) 
                                                       * 
                                                       (0x1fU 
                                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_2_io_deq_uop_inst 
                                                           >> 7U))))))) 
                            | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__maptable__DOT___GEN[
                               (7U & (((IData)(7U) 
                                       * (0x1fU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_2_io_deq_uop_inst 
                                                   >> 7U))) 
                                      >> 5U))] >> (0x1fU 
                                                   & ((IData)(7U) 
                                                      * 
                                                      (0x1fU 
                                                       & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_2_io_deq_uop_inst 
                                                          >> 7U)))))))
                : 0U);
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4878(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4878\n"); );
    // Body
    if ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__r_uop_bypass_hits_rs3_0_2) 
          | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__r_uop_bypass_hits_rs3_1_2)) 
         | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__r_uop_bypass_hits_rs3_2_2))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__r_uop_2_prs3 
            = ((((4U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__r_uop_bypass_sel_rs3_enc_2))
                  ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel)
                  : 0U) | ((2U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__r_uop_bypass_sel_rs3_enc_2))
                            ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel_1)
                            : 0U)) | ((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__r_uop_bypass_sel_rs3_enc_2))
                                       ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel_2)
                                       : 0U));
    } else if ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT___GEN)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__r_uop_2_prs3 
            = ((0xdfU >= (0xffU & ((IData)(7U) * VL_SHIFTR_III(32,32,32, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_2_io_deq_uop_inst, 0x1bU))))
                ? (0x7fU & (((0U == (0x1fU & ((IData)(7U) 
                                              * VL_SHIFTR_III(32,32,32, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_2_io_deq_uop_inst, 0x1bU))))
                              ? 0U : (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__maptable__DOT___GEN[
                                      (((IData)(6U) 
                                        + (0xffU & 
                                           ((IData)(7U) 
                                            * VL_SHIFTR_III(32,32,32, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_2_io_deq_uop_inst, 0x1bU)))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(7U) 
                                                       * 
                                                       VL_SHIFTR_III(32,32,32, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_2_io_deq_uop_inst, 0x1bU)))))) 
                            | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__maptable__DOT___GEN[
                               (7U & (((IData)(7U) 
                                       * VL_SHIFTR_III(32,32,32, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_2_io_deq_uop_inst, 0x1bU)) 
                                      >> 5U))] >> (0x1fU 
                                                   & ((IData)(7U) 
                                                      * 
                                                      VL_SHIFTR_III(32,32,32, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_2_io_deq_uop_inst, 0x1bU))))))
                : 0U);
    }
    if ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__r_uop_bypass_hits_rs1_0_2) 
          | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__r_uop_bypass_hits_rs1_1_2)) 
         | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__r_uop_bypass_hits_rs1_2_2))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__r_uop_2_prs1 
            = ((((4U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__r_uop_bypass_sel_rs1_enc_2))
                  ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel)
                  : 0U) | ((2U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__r_uop_bypass_sel_rs1_enc_2))
                            ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel_1)
                            : 0U)) | ((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__r_uop_bypass_sel_rs1_enc_2))
                                       ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel_2)
                                       : 0U));
    } else if ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT___GEN)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__r_uop_2_prs1 
            = ((0xdfU >= (0xffU & ((IData)(7U) * (0x1fU 
                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_2_io_deq_uop_inst 
                                                     >> 0xfU)))))
                ? (0x7fU & (((0U == (0x1fU & ((IData)(7U) 
                                              * (0x1fU 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_2_io_deq_uop_inst 
                                                    >> 0xfU)))))
                              ? 0U : (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__maptable__DOT___GEN[
                                      (((IData)(6U) 
                                        + (0xffU & 
                                           ((IData)(7U) 
                                            * (0x1fU 
                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_2_io_deq_uop_inst 
                                                  >> 0xfU))))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(7U) 
                                                       * 
                                                       (0x1fU 
                                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_2_io_deq_uop_inst 
                                                           >> 0xfU))))))) 
                            | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__maptable__DOT___GEN[
                               (7U & (((IData)(7U) 
                                       * (0x1fU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_2_io_deq_uop_inst 
                                                   >> 0xfU))) 
                                      >> 5U))] >> (0x1fU 
                                                   & ((IData)(7U) 
                                                      * 
                                                      (0x1fU 
                                                       & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_2_io_deq_uop_inst 
                                                          >> 0xfU)))))))
                : 0U);
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4879(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4879\n"); );
    // Body
    if ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__r_uop_bypass_hits_rs2_0_2) 
          | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__r_uop_bypass_hits_rs2_1_2)) 
         | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__r_uop_bypass_hits_rs2_2_2))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__r_uop_2_prs2 
            = ((((4U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__r_uop_bypass_sel_rs2_enc_2))
                  ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel)
                  : 0U) | ((2U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__r_uop_bypass_sel_rs2_enc_2))
                            ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel_1)
                            : 0U)) | ((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__r_uop_bypass_sel_rs2_enc_2))
                                       ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel_2)
                                       : 0U));
    } else if ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT___GEN)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__r_uop_2_prs2 
            = ((0xdfU >= (0xffU & ((IData)(7U) * (0x1fU 
                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_2_io_deq_uop_inst 
                                                     >> 0x14U)))))
                ? (0x7fU & (((0U == (0x1fU & ((IData)(7U) 
                                              * (0x1fU 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_2_io_deq_uop_inst 
                                                    >> 0x14U)))))
                              ? 0U : (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__maptable__DOT___GEN[
                                      (((IData)(6U) 
                                        + (0xffU & 
                                           ((IData)(7U) 
                                            * (0x1fU 
                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_2_io_deq_uop_inst 
                                                  >> 0x14U))))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(7U) 
                                                       * 
                                                       (0x1fU 
                                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_2_io_deq_uop_inst 
                                                           >> 0x14U))))))) 
                            | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__maptable__DOT___GEN[
                               (7U & (((IData)(7U) 
                                       * (0x1fU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_2_io_deq_uop_inst 
                                                   >> 0x14U))) 
                                      >> 5U))] >> (0x1fU 
                                                   & ((IData)(7U) 
                                                      * 
                                                      (0x1fU 
                                                       & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_2_io_deq_uop_inst 
                                                          >> 0x14U)))))))
                : 0U);
    }
    if ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ctrl_killd)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_ctrl_sel_alu1 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__id_xcpt)
                ? (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_15) 
                    | (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_14)))
                    ? 2U : 1U) : ((2U & (((IData)((0x17U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits))) 
                                          | (0x7fU 
                                             == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___id_ctrl_decoder_decoded_T_40))) 
                                         << 1U)) | 
                                  ((0x7fU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___id_ctrl_decoder_decoded_T)) 
                                   | ((0xffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___id_ctrl_decoder_decoded_T_4)) 
                                      | ((0x7fU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___id_ctrl_decoder_decoded_T_6)) 
                                         | ((0x1ffU 
                                             == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___id_ctrl_decoder_decoded_T_12)) 
                                            | ((0x7fffU 
                                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___id_ctrl_decoder_decoded_T_22)) 
                                               | ((0x1fffU 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___id_ctrl_decoder_decoded_T_26)) 
                                                  | ((0x7fffU 
                                                      == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___id_ctrl_decoder_decoded_T_28)) 
                                                     | ((0x1ffU 
                                                         == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___id_ctrl_decoder_decoded_T_36)) 
                                                        | ((0x3fffU 
                                                            == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___id_ctrl_decoder_decoded_T_48)) 
                                                           | ((0x7fffU 
                                                               == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___id_ctrl_decoder_decoded_T_52)) 
                                                              | ((0x1ffU 
                                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___id_ctrl_decoder_decoded_T_60)) 
                                                                 | ((0xffU 
                                                                     == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___id_ctrl_decoder_decoded_T_64)) 
                                                                    | ((0x7ffU 
                                                                        == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___id_ctrl_decoder_decoded_T_68)) 
                                                                       | ((0x1ffU 
                                                                           == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___id_ctrl_decoder_decoded_T_76)) 
                                                                          | ((0xffU 
                                                                              == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___id_ctrl_decoder_decoded_T_86)) 
                                                                             | ((0x7fffU 
                                                                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___id_ctrl_decoder_decoded_T_88)) 
                                                                                | ((0x7fffU 
                                                                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___id_ctrl_decoder_decoded_T_92)) 
                                                                                | ((0x7fffU 
                                                                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___id_ctrl_decoder_decoded_T_98)) 
                                                                                | ((0x3fffU 
                                                                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___id_ctrl_decoder_decoded_T_130)) 
                                                                                | ((0x1fffU 
                                                                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___id_ctrl_decoder_decoded_T_136)) 
                                                                                | (0x1ffffU 
                                                                                == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___id_ctrl_decoder_decoded_T_138)))))))))))))))))))))));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4880(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4880\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__older_nacked_REG 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__nacking_loads_0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__older_nacked_REG_21 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__nacking_loads_21;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__older_nacked_REG_20 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__nacking_loads_20;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__older_nacked_REG_18 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__nacking_loads_18;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__older_nacked_REG_17 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__nacking_loads_17;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__older_nacked_REG_15 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__nacking_loads_15;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__older_nacked_REG_14 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__nacking_loads_14;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__older_nacked_REG_11 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__nacking_loads_11;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__older_nacked_REG_9 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__nacking_loads_9;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__older_nacked_REG_8 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__nacking_loads_8;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__older_nacked_REG_7 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__nacking_loads_7;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__older_nacked_REG_6 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__nacking_loads_6;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__older_nacked_REG_5 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__nacking_loads_5;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__older_nacked_REG_3 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__nacking_loads_3;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__older_nacked_REG_2 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__nacking_loads_2;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__older_nacked_REG_10 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__nacking_loads_10;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__older_nacked_REG_23 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__nacking_loads_23;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__older_nacked_REG_12 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__nacking_loads_12;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__older_nacked_REG_1 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__nacking_loads_1;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__older_nacked_REG_4 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__nacking_loads_4;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__older_nacked_REG_13 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__nacking_loads_13;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__older_nacked_REG_16 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__nacking_loads_16;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__older_nacked_REG_19 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__nacking_loads_19;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__older_nacked_REG_22 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__nacking_loads_22;
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_30__DOT__ppred = 0U;
    } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__issue_slots_30_in_uop_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_30__DOT__ppred 
            = (1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT____Vcellinp__slots_30__io_in_uop_bits_ppred_busy)));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__ubtb__DOT__io_resp_f3_0_REG_is_br 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__ubtb__DOT__io_resp_f2_0_REG_is_br;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__ubtb__DOT__io_resp_f3_1_REG_is_br 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__ubtb__DOT__io_resp_f2_1_REG_is_br;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__ubtb__DOT__io_resp_f3_2_REG_is_br 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__ubtb__DOT__io_resp_f2_2_REG_is_br;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__ubtb__DOT__io_resp_f3_0_REG_is_br 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__ubtb__DOT__io_resp_f2_0_REG_is_br;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__ubtb__DOT__io_resp_f3_1_REG_is_br 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__ubtb__DOT__io_resp_f2_1_REG_is_br;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__ubtb__DOT__io_resp_f3_2_REG_is_br 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__ubtb__DOT__io_resp_f2_2_REG_is_br;
}
