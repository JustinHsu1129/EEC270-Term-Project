// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestDriver.h for the primary calling header

#include "VTestDriver__pch.h"
#include "VTestDriver___024root.h"

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7624(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7624\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__issue_slots_6_in_uop_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_6__DOT__slot_uop_mem_cmd 
            = ((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__next_8))
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_9__DOT__slot_uop_mem_cmd)
                : ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__next_7))
                    ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_8__DOT__slot_uop_mem_cmd)
                    : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_7__DOT__slot_uop_mem_cmd)));
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_6__DOT__slot_uop_uses_ldq = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_3__DOT__slot_uop_fp_val = 0U;
    } else {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__issue_slots_6_in_uop_valid) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_6__DOT__slot_uop_uses_ldq 
                = ((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__next_8))
                    ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_9__DOT__slot_uop_uses_ldq)
                    : ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__next_7))
                        ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_8__DOT__slot_uop_uses_ldq)
                        : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_7__DOT__slot_uop_uses_ldq)));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__issue_slots_3_in_uop_valid) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_3__DOT__slot_uop_fp_val 
                = ((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__next_5))
                    ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_6__DOT__slot_uop_fp_val)
                    : ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__next_4))
                        ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5__DOT__slot_uop_fp_val)
                        : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4__DOT__slot_uop_fp_val)));
        }
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__issue_slots_1_in_uop_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_1__DOT__slot_uop_is_amo 
            = ((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__next_3))
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4__DOT__slot_uop_is_amo)
                : ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__next_2))
                    ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_3__DOT__slot_uop_is_amo)
                    : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_2__DOT__slot_uop_is_amo)));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_51 
        = (((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_3__DOT__state))
             ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_3__DOT____VdfgTmp_h0e181b58__0) 
                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_3__DOT__p3) 
                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_3__DOT____VdfgTmp_h444ba9c1__0)))
             : ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_3__DOT__state)) 
                & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_3__DOT__p1) 
                    | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_3__DOT__p2)) 
                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_3__DOT____VdfgTmp_h444ba9c1__0)))) 
           & (0U != ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_3__DOT__slot_uop_fu_code) 
                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT____Vcellinp__mem_issue_unit__io_fu_types_0))));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__issue_slots_4_in_uop_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4__DOT__slot_uop_fu_code 
            = ((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__next_6))
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_7__DOT__slot_uop_fu_code)
                : ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__next_5))
                    ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_6__DOT__slot_uop_fu_code)
                    : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5__DOT__slot_uop_fu_code)));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7625(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7625\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__issue_slots_4_in_uop_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4__DOT__slot_uop_imm_packed 
            = ((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__next_6))
                ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_7__DOT__slot_uop_imm_packed
                : ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__next_5))
                    ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_6__DOT__slot_uop_imm_packed
                    : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5__DOT__slot_uop_imm_packed));
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4__DOT__slot_uop_uses_stq = 0U;
    } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__issue_slots_4_in_uop_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4__DOT__slot_uop_uses_stq 
            = ((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__next_6))
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_7__DOT__slot_uop_uses_stq)
                : ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__next_5))
                    ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_6__DOT__slot_uop_uses_stq)
                    : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5__DOT__slot_uop_uses_stq)));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_0__DOT___GEN_0 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__issue_slots_0_grant) 
           & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_0__DOT__state)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__issue_slots_1_grant 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__issue_slots_0_grant)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_47));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_48 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_47) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__issue_slots_0_grant));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__issue_slots_0_in_uop_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_0__DOT__slot_uop_mem_size 
            = ((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__next_2))
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_3__DOT__slot_uop_mem_size)
                : ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT___next_1_1to0))
                    ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_2__DOT__slot_uop_mem_size)
                    : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_1__DOT__slot_uop_mem_size)));
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__issue_slots_6_in_uop_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_mem_cmd 
            = ((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__next_8))
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_9__DOT__slot_uop_mem_cmd)
                : ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__next_7))
                    ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_8__DOT__slot_uop_mem_cmd)
                    : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_mem_cmd)));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT___GEN_64 
        = (((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__state))
             ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_5__DOT____VdfgTmp_h0e181b58__0) 
                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__p3) 
                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_5__DOT____VdfgTmp_h444ba9c1__0)))
             : ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__state)) 
                & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__p1) 
                    | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__p2)) 
                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_5__DOT____VdfgTmp_h444ba9c1__0)))) 
           & (0U != ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_fu_code) 
                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT____Vcellinp__fp_issue_unit__io_fu_types_0))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7626(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7626\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__issue_slots_6_in_uop_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_fu_code 
            = ((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__next_8))
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_9__DOT__slot_uop_fu_code)
                : ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__next_7))
                    ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_8__DOT__slot_uop_fu_code)
                    : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_fu_code)));
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__issue_slots_23_grant) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__rrd_uops_0_REG_is_amo 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_23__DOT__slot_uop_is_amo;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__rrd_uops_0_REG_pdst 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_23__DOT__slot_uop_pdst;
    } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__issue_slots_22_grant) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__rrd_uops_0_REG_is_amo 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_22__DOT__slot_uop_is_amo;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__rrd_uops_0_REG_pdst 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_22__DOT__slot_uop_pdst;
    } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__issue_slots_21_grant) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__rrd_uops_0_REG_is_amo 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_21__DOT__slot_uop_is_amo;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__rrd_uops_0_REG_pdst 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_21__DOT__slot_uop_pdst;
    } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__issue_slots_20_grant) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__rrd_uops_0_REG_is_amo 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_20__DOT__slot_uop_is_amo;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__rrd_uops_0_REG_pdst 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_20__DOT__slot_uop_pdst;
    } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__issue_slots_19_grant) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__rrd_uops_0_REG_is_amo 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_19__DOT__slot_uop_is_amo;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__rrd_uops_0_REG_pdst 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_19__DOT__slot_uop_pdst;
    } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__issue_slots_18_grant) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__rrd_uops_0_REG_is_amo 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_18__DOT__slot_uop_is_amo;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__rrd_uops_0_REG_pdst 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_18__DOT__slot_uop_pdst;
    } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__issue_slots_17_grant) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__rrd_uops_0_REG_is_amo 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_17__DOT__slot_uop_is_amo;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__rrd_uops_0_REG_pdst 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_17__DOT__slot_uop_pdst;
    } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__issue_slots_16_grant) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__rrd_uops_0_REG_is_amo 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_16__DOT__slot_uop_is_amo;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__rrd_uops_0_REG_pdst 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_16__DOT__slot_uop_pdst;
    } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__issue_slots_15_grant) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__rrd_uops_0_REG_is_amo 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_15__DOT__slot_uop_is_amo;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__rrd_uops_0_REG_pdst 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_15__DOT__slot_uop_pdst;
    } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__issue_slots_14_grant) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__rrd_uops_0_REG_is_amo 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_14__DOT__slot_uop_is_amo;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__rrd_uops_0_REG_pdst 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_14__DOT__slot_uop_pdst;
    } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__issue_slots_13_grant) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__rrd_uops_0_REG_is_amo 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_13__DOT__slot_uop_is_amo;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__rrd_uops_0_REG_pdst 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_13__DOT__slot_uop_pdst;
    } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__issue_slots_12_grant) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__rrd_uops_0_REG_is_amo 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_12__DOT__slot_uop_is_amo;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__rrd_uops_0_REG_pdst 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_12__DOT__slot_uop_pdst;
    } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__issue_slots_11_grant) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__rrd_uops_0_REG_is_amo 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_11__DOT__slot_uop_is_amo;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__rrd_uops_0_REG_pdst 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_11__DOT__slot_uop_pdst;
    } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__issue_slots_10_grant) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__rrd_uops_0_REG_is_amo 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_10__DOT__slot_uop_is_amo;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__rrd_uops_0_REG_pdst 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_10__DOT__slot_uop_pdst;
    } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__issue_slots_9_grant) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__rrd_uops_0_REG_is_amo 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_9__DOT__slot_uop_is_amo;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__rrd_uops_0_REG_pdst 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_9__DOT__slot_uop_pdst;
    } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__issue_slots_8_grant) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__rrd_uops_0_REG_is_amo 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_8__DOT__slot_uop_is_amo;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__rrd_uops_0_REG_pdst 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_8__DOT__slot_uop_pdst;
    } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__issue_slots_7_grant) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__rrd_uops_0_REG_is_amo 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_is_amo;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__rrd_uops_0_REG_pdst 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_pdst;
    } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__issue_slots_6_grant) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__rrd_uops_0_REG_is_amo 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_is_amo;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__rrd_uops_0_REG_pdst 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_pdst;
    } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__issue_slots_5_grant) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__rrd_uops_0_REG_is_amo 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_is_amo;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__rrd_uops_0_REG_pdst 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_pdst;
    } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__issue_slots_4_grant) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__rrd_uops_0_REG_is_amo 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__slot_uop_is_amo;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__rrd_uops_0_REG_pdst 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__slot_uop_pdst;
    } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__issue_slots_3_grant) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__rrd_uops_0_REG_is_amo 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_3__DOT__slot_uop_is_amo;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__rrd_uops_0_REG_pdst 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_3__DOT__slot_uop_pdst;
    } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__issue_slots_2_grant) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__rrd_uops_0_REG_is_amo 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_2__DOT__slot_uop_is_amo;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__rrd_uops_0_REG_pdst 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_2__DOT__slot_uop_pdst;
    } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__issue_slots_1_grant) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__rrd_uops_0_REG_is_amo 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_1__DOT__slot_uop_is_amo;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__rrd_uops_0_REG_pdst 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_1__DOT__slot_uop_pdst;
    } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__issue_slots_0_grant) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__rrd_uops_0_REG_is_amo 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_0__DOT__slot_uop_is_amo;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__rrd_uops_0_REG_pdst 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_0__DOT__slot_uop_pdst;
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__rrd_uops_0_REG_is_amo = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__rrd_uops_0_REG_pdst = 0U;
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7627(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7627\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__issue_slots_23_grant) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__rrd_uops_0_REG_rob_idx 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_23__DOT__slot_uop_rob_idx;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__rrd_uops_0_REG_uses_stq 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_23__DOT__slot_uop_uses_stq;
    } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__issue_slots_22_grant) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__rrd_uops_0_REG_rob_idx 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_22__DOT__slot_uop_rob_idx;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__rrd_uops_0_REG_uses_stq 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_22__DOT__slot_uop_uses_stq;
    } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__issue_slots_21_grant) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__rrd_uops_0_REG_rob_idx 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_21__DOT__slot_uop_rob_idx;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__rrd_uops_0_REG_uses_stq 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_21__DOT__slot_uop_uses_stq;
    } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__issue_slots_20_grant) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__rrd_uops_0_REG_rob_idx 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_20__DOT__slot_uop_rob_idx;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__rrd_uops_0_REG_uses_stq 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_20__DOT__slot_uop_uses_stq;
    } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__issue_slots_19_grant) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__rrd_uops_0_REG_rob_idx 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_19__DOT__slot_uop_rob_idx;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__rrd_uops_0_REG_uses_stq 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_19__DOT__slot_uop_uses_stq;
    } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__issue_slots_18_grant) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__rrd_uops_0_REG_rob_idx 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_18__DOT__slot_uop_rob_idx;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__rrd_uops_0_REG_uses_stq 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_18__DOT__slot_uop_uses_stq;
    } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__issue_slots_17_grant) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__rrd_uops_0_REG_rob_idx 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_17__DOT__slot_uop_rob_idx;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__rrd_uops_0_REG_uses_stq 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_17__DOT__slot_uop_uses_stq;
    } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__issue_slots_16_grant) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__rrd_uops_0_REG_rob_idx 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_16__DOT__slot_uop_rob_idx;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__rrd_uops_0_REG_uses_stq 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_16__DOT__slot_uop_uses_stq;
    } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__issue_slots_15_grant) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__rrd_uops_0_REG_rob_idx 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_15__DOT__slot_uop_rob_idx;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__rrd_uops_0_REG_uses_stq 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_15__DOT__slot_uop_uses_stq;
    } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__issue_slots_14_grant) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__rrd_uops_0_REG_rob_idx 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_14__DOT__slot_uop_rob_idx;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__rrd_uops_0_REG_uses_stq 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_14__DOT__slot_uop_uses_stq;
    } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__issue_slots_13_grant) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__rrd_uops_0_REG_rob_idx 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_13__DOT__slot_uop_rob_idx;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__rrd_uops_0_REG_uses_stq 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_13__DOT__slot_uop_uses_stq;
    } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__issue_slots_12_grant) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__rrd_uops_0_REG_rob_idx 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_12__DOT__slot_uop_rob_idx;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__rrd_uops_0_REG_uses_stq 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_12__DOT__slot_uop_uses_stq;
    } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__issue_slots_11_grant) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__rrd_uops_0_REG_rob_idx 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_11__DOT__slot_uop_rob_idx;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__rrd_uops_0_REG_uses_stq 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_11__DOT__slot_uop_uses_stq;
    } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__issue_slots_10_grant) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__rrd_uops_0_REG_rob_idx 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_10__DOT__slot_uop_rob_idx;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__rrd_uops_0_REG_uses_stq 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_10__DOT__slot_uop_uses_stq;
    } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__issue_slots_9_grant) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__rrd_uops_0_REG_rob_idx 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_9__DOT__slot_uop_rob_idx;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__rrd_uops_0_REG_uses_stq 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_9__DOT__slot_uop_uses_stq;
    } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__issue_slots_8_grant) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__rrd_uops_0_REG_rob_idx 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_8__DOT__slot_uop_rob_idx;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__rrd_uops_0_REG_uses_stq 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_8__DOT__slot_uop_uses_stq;
    } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__issue_slots_7_grant) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__rrd_uops_0_REG_rob_idx 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_rob_idx;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__rrd_uops_0_REG_uses_stq 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_uses_stq;
    } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__issue_slots_6_grant) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__rrd_uops_0_REG_rob_idx 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_rob_idx;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__rrd_uops_0_REG_uses_stq 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_uses_stq;
    } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__issue_slots_5_grant) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__rrd_uops_0_REG_rob_idx 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_rob_idx;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__rrd_uops_0_REG_uses_stq 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_uses_stq;
    } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__issue_slots_4_grant) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__rrd_uops_0_REG_rob_idx 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__slot_uop_rob_idx;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__rrd_uops_0_REG_uses_stq 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__slot_uop_uses_stq;
    } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__issue_slots_3_grant) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__rrd_uops_0_REG_rob_idx 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_3__DOT__slot_uop_rob_idx;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__rrd_uops_0_REG_uses_stq 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_3__DOT__slot_uop_uses_stq;
    } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__issue_slots_2_grant) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__rrd_uops_0_REG_rob_idx 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_2__DOT__slot_uop_rob_idx;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__rrd_uops_0_REG_uses_stq 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_2__DOT__slot_uop_uses_stq;
    } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__issue_slots_1_grant) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__rrd_uops_0_REG_rob_idx 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_1__DOT__slot_uop_rob_idx;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__rrd_uops_0_REG_uses_stq 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_1__DOT__slot_uop_uses_stq;
    } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__issue_slots_0_grant) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__rrd_uops_0_REG_rob_idx 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_0__DOT__slot_uop_rob_idx;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__rrd_uops_0_REG_uses_stq 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_0__DOT__slot_uop_uses_stq;
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__rrd_uops_0_REG_rob_idx = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__rrd_uops_0_REG_uses_stq = 0U;
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7628(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7628\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__fpiu__DOT__narrow__DOT__roundIncr 
        = (((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__fpiu__DOT__in_rm)) 
            & (((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__fpiu__DOT__in_in1[1U] 
                 >> 0x1fU) & ((3U == (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__fpiu__DOT__narrow__DOT__shiftedSig[1U] 
                                            >> 0x13U))) 
                              | (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__fpiu__DOT__narrow__DOT___roundIncr_near_even_T_6)))) 
               | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__fpiu__DOT__narrow__DOT__magJustBelowOne) 
                  & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__fpiu__DOT__narrow__DOT___roundIncr_near_even_T_6))))) 
           | (((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__fpiu__DOT__in_rm)) 
               & (((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__fpiu__DOT__in_in1[1U] 
                    >> 0x1fU) & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__fpiu__DOT__narrow__DOT__shiftedSig[1U] 
                                 >> 0x13U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__fpiu__DOT__narrow__DOT__magJustBelowOne))) 
              | (((IData)(vlSelf->__VdfgTmp_h9a106d44__0) 
                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__fpiu__DOT__in_in1[2U] 
                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__fpiu__DOT__narrow__DOT__common_inexact))) 
                 | ((3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__fpiu__DOT__in_rm)) 
                    & ((~ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__fpiu__DOT__in_in1[2U]) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__fpiu__DOT__narrow__DOT__common_inexact))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__fpiu__DOT__conv__DOT__roundIncr 
        = (((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__fpiu__DOT__in_rm)) 
            & (((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__fpiu__DOT__in_in1[1U] 
                 >> 0x1fU) & ((3U == (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__fpiu__DOT__conv__DOT__shiftedSig[1U] 
                                            >> 0x13U))) 
                              | (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__fpiu__DOT__conv__DOT___roundIncr_near_even_T_6)))) 
               | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__fpiu__DOT__narrow__DOT__magJustBelowOne) 
                  & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__fpiu__DOT__conv__DOT___roundIncr_near_even_T_6))))) 
           | (((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__fpiu__DOT__in_rm)) 
               & (((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__fpiu__DOT__in_in1[1U] 
                    >> 0x1fU) & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__fpiu__DOT__conv__DOT__shiftedSig[1U] 
                                 >> 0x13U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__fpiu__DOT__narrow__DOT__magJustBelowOne))) 
              | (((IData)(vlSelf->__VdfgTmp_h9a106d44__0) 
                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__fpiu__DOT__in_in1[2U] 
                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__fpiu__DOT__conv__DOT__common_inexact))) 
                 | ((3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__fpiu__DOT__in_rm)) 
                    & ((~ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__fpiu__DOT__in_in1[2U]) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__fpiu__DOT__conv__DOT__common_inexact))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7629(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7629\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__issue_slots_6_in_uop_valid) {
        if ((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__next_8))) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_mem_cmd 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_9__DOT__slot_uop_mem_cmd;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_ldst_val 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_9__DOT__slot_uop_ldst_val;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_imm_packed 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_9__DOT__slot_uop_imm_packed;
        } else if ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__next_7))) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_mem_cmd 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_8__DOT__slot_uop_mem_cmd;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_ldst_val 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_8__DOT__slot_uop_ldst_val;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_imm_packed 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_8__DOT__slot_uop_imm_packed;
        } else {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_mem_cmd 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT__slot_uop_mem_cmd;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_ldst_val 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT__slot_uop_ldst_val;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_imm_packed 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT__slot_uop_imm_packed;
        }
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_pdst = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_bypassable = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_dst_rtype = 2U;
    } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__issue_slots_6_in_uop_valid) {
        if ((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__next_8))) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_pdst 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_9__DOT__slot_uop_pdst;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_bypassable 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_9__DOT__slot_uop_bypassable;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_dst_rtype 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_9__DOT__slot_uop_dst_rtype;
        } else if ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__next_7))) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_pdst 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_8__DOT__slot_uop_pdst;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_bypassable 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_8__DOT__slot_uop_bypassable;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_dst_rtype 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_8__DOT__slot_uop_dst_rtype;
        } else {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_pdst 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT__slot_uop_pdst;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_bypassable 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT__slot_uop_bypassable;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_dst_rtype 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT__slot_uop_dst_rtype;
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7630(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7630\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__issue_slots_1_in_uop_valid) {
        if ((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__next_3))) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1__DOT__slot_uop_is_amo 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_4__DOT__slot_uop_is_amo;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1__DOT__slot_uop_rob_idx 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_4__DOT__slot_uop_rob_idx;
        } else if ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__next_2))) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1__DOT__slot_uop_is_amo 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_3__DOT__slot_uop_is_amo;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1__DOT__slot_uop_rob_idx 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_3__DOT__slot_uop_rob_idx;
        } else {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1__DOT__slot_uop_is_amo 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_2__DOT__slot_uop_is_amo;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1__DOT__slot_uop_rob_idx 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_2__DOT__slot_uop_rob_idx;
        }
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__issue_slots_3_in_uop_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_3__DOT__slot_uop_ftq_idx 
            = ((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__next_5))
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_ftq_idx)
                : ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__next_4))
                    ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT__slot_uop_ftq_idx)
                    : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_4__DOT__slot_uop_ftq_idx)));
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__issue_slots_4_in_uop_valid) {
        if ((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__next_6))) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_4__DOT__slot_uop_is_sfb 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT__slot_uop_is_sfb;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_4__DOT__slot_uop_fu_code 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT__slot_uop_fu_code;
        } else if ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__next_5))) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_4__DOT__slot_uop_is_sfb 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_is_sfb;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_4__DOT__slot_uop_fu_code 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_fu_code;
        } else {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_4__DOT__slot_uop_is_sfb 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT__slot_uop_is_sfb;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_4__DOT__slot_uop_fu_code 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT__slot_uop_fu_code;
        }
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT____VdfgTmp_h3ee0bf47__0 
        = (0U != ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_3__DOT__slot_uop_fu_code) 
                  & (0x21U | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__alu_exe_unit_1__DOT___queue_io_empty) 
                              << 8U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_100 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT___slots_3_io_request) 
           & (0U != ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_3__DOT__slot_uop_fu_code) 
                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT____Vcellinp__int_issue_unit__io_fu_types_0))));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1__DOT__slot_uop_uses_stq = 0U;
    } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__issue_slots_1_in_uop_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1__DOT__slot_uop_uses_stq 
            = ((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__next_3))
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_4__DOT__slot_uop_uses_stq)
                : ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__next_2))
                    ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_3__DOT__slot_uop_uses_stq)
                    : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_2__DOT__slot_uop_uses_stq)));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7631(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7631\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__issue_slots_1_in_uop_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_1__DOT__slot_uop_mem_signed 
            = ((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__next_3))
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4__DOT__slot_uop_mem_signed)
                : ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__next_2))
                    ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_3__DOT__slot_uop_mem_signed)
                    : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_2__DOT__slot_uop_mem_signed)));
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__issue_slots_2_in_uop_valid) {
        if ((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__next_4))) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_2__DOT__slot_uop_edge_inst 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT__slot_uop_edge_inst;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_2__DOT__slot_uop_is_jal 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT__slot_uop_is_jal;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_2__DOT__slot_uop_is_br 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT__slot_uop_is_br;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_2__DOT__slot_uop_is_jalr 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT__slot_uop_is_jalr;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_2__DOT__slot_uop_is_rvc 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT__slot_uop_is_rvc;
        } else if ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__next_3))) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_2__DOT__slot_uop_edge_inst 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_4__DOT__slot_uop_edge_inst;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_2__DOT__slot_uop_is_jal 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_4__DOT__slot_uop_is_jal;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_2__DOT__slot_uop_is_br 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_4__DOT__slot_uop_is_br;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_2__DOT__slot_uop_is_jalr 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_4__DOT__slot_uop_is_jalr;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_2__DOT__slot_uop_is_rvc 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_4__DOT__slot_uop_is_rvc;
        } else {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_2__DOT__slot_uop_edge_inst 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_3__DOT__slot_uop_edge_inst;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_2__DOT__slot_uop_is_jal 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_3__DOT__slot_uop_is_jal;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_2__DOT__slot_uop_is_br 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_3__DOT__slot_uop_is_br;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_2__DOT__slot_uop_is_jalr 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_3__DOT__slot_uop_is_jalr;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_2__DOT__slot_uop_is_rvc 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_3__DOT__slot_uop_is_rvc;
        }
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__issue_slots_3_in_uop_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_3__DOT__slot_uop_taken 
            = ((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__next_5))
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_taken)
                : ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__next_4))
                    ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT__slot_uop_taken)
                    : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_4__DOT__slot_uop_taken)));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7632(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7632\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__alu_exe_unit__DOT__ALUUnit__DOT__alu__DOT___GEN_2 
        = (0x333333333333ULL & (((QData)((IData)((0xfU 
                                                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__alu_exe_unit__DOT__ALUUnit__DOT____Vcellinp__alu__io_in1)))) 
                                 << 0x2aU) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__alu_exe_unit__DOT__ALUUnit__DOT__alu__DOT___GEN_1)) 
                                               << 0xaU) 
                                              | (QData)((IData)(
                                                                ((0x3c0U 
                                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__alu_exe_unit__DOT__ALUUnit__DOT__alu__DOT___GEN_0 
                                                                     << 2U)) 
                                                                 | ((0x3cU 
                                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__alu_exe_unit__DOT__ALUUnit__DOT__alu__DOT___GEN 
                                                                        >> 6U)) 
                                                                    | (3U 
                                                                       & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__alu_exe_unit__DOT__ALUUnit__DOT__alu__DOT___GEN 
                                                                          >> 0xeU)))))))));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__issue_slots_2_in_uop_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_2__DOT__slot_uop_pc_lob 
            = ((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__next_4))
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT__slot_uop_pc_lob)
                : ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__next_3))
                    ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_4__DOT__slot_uop_pc_lob)
                    : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_3__DOT__slot_uop_pc_lob)));
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__issue_slots_2_in_uop_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_2__DOT__slot_uop_ldq_idx 
            = ((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__next_4))
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5__DOT__slot_uop_ldq_idx)
                : ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__next_3))
                    ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4__DOT__slot_uop_ldq_idx)
                    : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_3__DOT__slot_uop_ldq_idx)));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__rrd_uops_0_REG_stq_idx 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__issue_slots_23_grant)
            ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_23__DOT__slot_uop_stq_idx)
            : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__issue_slots_22_grant)
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_22__DOT__slot_uop_stq_idx)
                : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__issue_slots_21_grant)
                    ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_21__DOT__slot_uop_stq_idx)
                    : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__issue_slots_20_grant)
                        ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_20__DOT__slot_uop_stq_idx)
                        : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__issue_slots_19_grant)
                            ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_19__DOT__slot_uop_stq_idx)
                            : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__issue_slots_18_grant)
                                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_18__DOT__slot_uop_stq_idx)
                                : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__issue_slots_17_grant)
                                    ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_17__DOT__slot_uop_stq_idx)
                                    : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__issue_slots_16_grant)
                                        ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_16__DOT__slot_uop_stq_idx)
                                        : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__issue_slots_15_grant)
                                            ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_15__DOT__slot_uop_stq_idx)
                                            : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__issue_slots_14_grant)
                                                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_14__DOT__slot_uop_stq_idx)
                                                : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__issue_slots_13_grant)
                                                    ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_13__DOT__slot_uop_stq_idx)
                                                    : 
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__issue_slots_12_grant)
                                                     ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_12__DOT__slot_uop_stq_idx)
                                                     : 
                                                    ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__issue_slots_11_grant)
                                                      ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_11__DOT__slot_uop_stq_idx)
                                                      : 
                                                     ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__issue_slots_10_grant)
                                                       ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_10__DOT__slot_uop_stq_idx)
                                                       : 
                                                      ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__issue_slots_9_grant)
                                                        ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_9__DOT__slot_uop_stq_idx)
                                                        : 
                                                       ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__issue_slots_8_grant)
                                                         ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_8__DOT__slot_uop_stq_idx)
                                                         : 
                                                        ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__issue_slots_7_grant)
                                                          ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_stq_idx)
                                                          : 
                                                         ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__issue_slots_6_grant)
                                                           ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_stq_idx)
                                                           : 
                                                          ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__issue_slots_5_grant)
                                                            ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_stq_idx)
                                                            : 
                                                           ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__issue_slots_4_grant)
                                                             ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__slot_uop_stq_idx)
                                                             : 
                                                            ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__issue_slots_3_grant)
                                                              ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_3__DOT__slot_uop_stq_idx)
                                                              : 
                                                             ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__issue_slots_2_grant)
                                                               ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_2__DOT__slot_uop_stq_idx)
                                                               : 
                                                              ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__issue_slots_1_grant)
                                                                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_1__DOT__slot_uop_stq_idx)
                                                                : 
                                                               ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__issue_slots_0_grant)
                                                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_0__DOT__slot_uop_stq_idx)
                                                                 : 0U))))))))))))))))))))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7633(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7633\n"); );
    // Body
    if ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__beatsLeft_4))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__muxState_4_1 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__winner_4_1;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__muxState_4_0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__winner_4_0;
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__muxState_4_1 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__state_4_1;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__muxState_4_0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__state_4_0;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__maskedBeats_0_4 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__winner_4_0) 
            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT____VdfgTmp_h2cbf94ac__0))
            ? (0x1ffU & (~ (0xffffffU & (((IData)(0xfffU) 
                                          << (0xfU 
                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                                 >> 5U))) 
                                         >> 3U)))) : 0U);
    if ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__beatsLeft_6))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__muxState_6_1 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__winner_6_1;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__muxState_6_0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__winner_6_0;
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__muxState_6_1 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__state_6_1;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__muxState_6_0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__state_6_0;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__maskedBeats_0_6 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__winner_6_0) 
            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT____VdfgTmp_h2cbf94ac__0))
            ? (0x1ffU & (~ (0xffffffU & (((IData)(0xfffU) 
                                          << (0xfU 
                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                                 >> 5U))) 
                                         >> 3U)))) : 0U);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__nodeIn_d_q__DOT__do_enq 
        = ((~ ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__nodeIn_d_q__DOT__full)) 
               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_coh_widget_out_d_ready))) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT___d_first_T_3));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___d_first_T_3 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_coh_widget_out_d_ready) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___coh_wrapper_auto_coherent_jbar_in_d_valid));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__in_xbar__DOT__monitor__DOT___d_first_T_2 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_d_ready) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_bus_xing_in_d_valid));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___in_xbar_auto_out_d_ready 
        = (((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                >> 0x12U)) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_d_ready)) 
           | (0x200U == (0x3ffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                   >> 9U))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7634(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7634\n"); );
    // Body
    if ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__beatsLeft_5))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__muxState_5_1 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__winner_5_1;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__muxState_5_0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__winner_5_0;
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__muxState_5_1 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__state_5_1;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__muxState_5_0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__state_5_0;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__maskedBeats_0_5 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__winner_5_0) 
            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT____VdfgTmp_h2cbf94ac__0))
            ? (0x1ffU & (~ (0xffffffU & (((IData)(0xfffU) 
                                          << (0xfU 
                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                                 >> 5U))) 
                                         >> 3U)))) : 0U);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__dataArb_io_in_2_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__inWriteback) 
           & (8U > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___releaseDataBeat_T_5)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__alu__DOT__in1_xor_in2 
        = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT____Vcellinp__alu__io_in1 
           ^ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__alu__DOT__in2_inv);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___alu_io_adder_out 
        = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT____Vcellinp__alu__io_in1 
           + (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__alu__DOT__in2_inv 
              + (QData)((IData)((1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_ctrl_alu_fn) 
                                       >> 3U))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__alu__DOT___GEN 
        = (((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT____Vcellinp__alu__io_in1 
                     >> 0x10U)) << 0x10U) | (0xffffU 
                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__alu__DOT__shin_hi));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__advance_pstore1 
        = ((((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_sc_fail)) 
             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___pstore1_held_T)) 
            | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore1_held)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_valid) 
              == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__dataArb_io_in_0_valid)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__dataArb_io_in_0_valid)
            ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_valid)
                ? (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_7)) 
                    << 0x38U) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_6)) 
                                  << 0x30U) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_5)) 
                                                << 0x28U) 
                                               | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_4)) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_3) 
                                                                      << 0x18U) 
                                                                     | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_2) 
                                                                         << 0x10U) 
                                                                        | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_1) 
                                                                            << 8U) 
                                                                           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r))))))))))
                : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore1_data)
            : (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[2U])) 
                << 0x31U) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[1U])) 
                              << 0x11U) | ((QData)((IData)(
                                                           vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U])) 
                                           >> 0xfU))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7635(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7635\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_write 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__dataArb_io_in_0_valid)
            ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__dataArb_io_in_0_valid)
            : ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_23)) 
               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__dataArb_io_in_1_valid)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__dataArb___05Fgrant_T 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__dataArb_io_in_0_valid) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__dataArb_io_in_1_valid));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_21 
        = ((5U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U])) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__dataArb_io_in_0_valid));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_set_sboard 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_ctrl_div) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_dcache_miss) 
              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_ctrl_rocc)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_8 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__dmem_resp_valid) 
           & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_tag)) 
              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__doUncachedResp)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_32 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_probe)
            ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_30)
            : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_31));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__same_cycle_resp 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT___same_cycle_resp_T_1) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_source) 
              == (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                        >> 9U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_a_q__DOT__do_enq 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT___nodeOut_a_q_io_enq_ready) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT___element_reset_domain_rockettile_auto_buffer_out_a_valid));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT___same_cycle_resp_T_1 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT___element_reset_domain_rockettile_auto_buffer_out_a_valid) 
           & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT___readys_filter_T_1 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__readys_mask)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__readys_valid));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT__same_cycle_resp 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___same_cycle_resp_T_1) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___in_xbar_auto_out_a_bits_source) 
              == (0x3ffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                            >> 9U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__in_xbar__DOT__monitor__DOT___GEN_19 
        = ((0U == (0xffffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_address 
                              >> 0xdU))) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__in_xbar__DOT__monitor__DOT___GEN_12));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT____VdfgTmp_hf62eb518__0 
        = ((0U == ((0xff00U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___in_xbar_auto_out_a_bits_address 
                               >> 0xdU)) | ((0xf0U 
                                             & (0x80U 
                                                ^ (0x7fff0U 
                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___in_xbar_auto_out_a_bits_address 
                                                      >> 0xdU)))) 
                                            | (0xfU 
                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___in_xbar_auto_out_a_bits_address 
                                                  >> 0xcU))))) 
           | ((0U == ((0x1c00U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___in_xbar_auto_out_a_bits_address 
                                  >> 0x10U)) | (0x3ffU 
                                                & (0x200U 
                                                   ^ 
                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___in_xbar_auto_out_a_bits_address 
                                                    >> 0x10U))))) 
              | ((0U == ((0x1c000U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___in_xbar_auto_out_a_bits_address 
                                      >> 0xcU)) | (0x3fffU 
                                                   & (0x2010U 
                                                      ^ 
                                                      (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___in_xbar_auto_out_a_bits_address 
                                                       >> 0xcU))))) 
                 | ((0U == ((4U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___in_xbar_auto_out_a_bits_address 
                                   >> 0x1aU)) | (3U 
                                                 & (~ 
                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___in_xbar_auto_out_a_bits_address 
                                                     >> 0x1aU))))) 
                    | (0x10020U == (0x1ffffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___in_xbar_auto_out_a_bits_address 
                                                >> 0xcU)))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7636(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7636\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___GEN_12 
        = (0U == ((0x1fffcU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___in_xbar_auto_out_a_bits_address 
                               >> 0xcU)) | (3U & (~ 
                                                  (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___in_xbar_auto_out_a_bits_address 
                                                   >> 0xcU)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT____VdfgTmp_hf518bd0f__0 
        = ((~ ((IData)((0x1000U != (0x1a011000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___in_xbar_auto_out_a_bits_address))) 
               & ((0U != (3U & (2U ^ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___in_xbar_auto_out_a_bits_address 
                                      >> 0x1bU)))) 
                  | (IData)((0U != (0x2011000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___in_xbar_auto_out_a_bits_address)))))) 
           & (4U > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___in_xbar_auto_out_a_bits_size)));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___sinkC_io_req_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___view___05FWIRE_6_size 
            = (7U & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__c_q__DOT___ram_ext_R0_data[0U] 
                      << 0x1aU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__c_q__DOT___ram_ext_R0_data[0U] 
                                   >> 6U)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___view___05FWIRE_6_source 
            = (0x1ffU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__c_q__DOT___ram_ext_R0_data[0U] 
                          << 0x17U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__c_q__DOT___ram_ext_R0_data[0U] 
                                       >> 9U)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___view___05FWIRE_6_param 
            = (7U & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__c_q__DOT___ram_ext_R0_data[0U] 
                      << 0x1dU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__c_q__DOT___ram_ext_R0_data[0U] 
                                   >> 3U)));
    } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkX__DOT__x_q__DOT__full) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___view___05FWIRE_6_size 
            = (7U & 6U);
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___view___05FWIRE_6_source 
            = (0x1ffU & 0U);
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___view___05FWIRE_6_param 
            = (7U & 0U);
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___view___05FWIRE_6_size 
            = (7U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_size));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___view___05FWIRE_6_source 
            = (0x1ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_source));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___view___05FWIRE_6_param 
            = (7U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_param));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT__same_cycle_resp 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT___same_cycle_resp_T_1) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_source) 
              == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s3_req_source)));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7637(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7637\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___sinkC_io_req_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___view___05FWIRE_6_opcode 
            = (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__c_q__DOT___ram_ext_R0_data[0U]);
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___view___05FWIRE_6_offset 
            = (0x3fU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__c_q__DOT___ram_ext_R0_data[0U] 
                         << 0xeU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__c_q__DOT___ram_ext_R0_data[0U] 
                                     >> 0x12U)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___view___05FWIRE_6_tag 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___sinkC_io_req_bits_tag;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__request_bits_set 
            = (0x3ffU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__c_q__DOT___ram_ext_R0_data[1U] 
                          << 8U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__c_q__DOT___ram_ext_R0_data[0U] 
                                    >> 0x18U)));
    } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkX__DOT__x_q__DOT__full) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___view___05FWIRE_6_opcode 
            = (7U & 0U);
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___view___05FWIRE_6_offset 
            = (0x3fU & 0U);
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___view___05FWIRE_6_tag 
            = ((0x1000U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkX__DOT__x_q__DOT__ram_address 
                           >> 0x13U)) | (0xfffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkX__DOT__x_q__DOT__ram_address 
                                                   >> 0x10U)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__request_bits_set 
            = (0x3ffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkX__DOT__x_q__DOT__ram_address 
                         >> 6U));
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___view___05FWIRE_6_opcode 
            = (7U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_opcode));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___view___05FWIRE_6_offset 
            = (0x3fU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_address);
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___view___05FWIRE_6_tag 
            = ((0x1000U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_address 
                           >> 0x13U)) | (0xfffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_address 
                                                   >> 0x10U)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__request_bits_set 
            = (0x3ffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_address 
                         >> 6U));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT__buf_block 
        = ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_opcode) 
               >> 2U)) & (0xffffffffffULL == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT__putbuffer__DOT__used));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT____VdfgTmp_hfd977f5c__0 
        = (1U & (~ ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_opcode) 
                        >> 2U)) & ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT__first_counter)) 
                                   & (0xffffffffffULL 
                                      == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT__lists)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT___GEN_14 
        = ((0U == ((0xf000U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_address 
                               >> 0x10U)) | (0xfffU 
                                             & (0x800U 
                                                ^ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_address 
                                                   >> 0x10U))))) 
           | (8U == (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_address 
                     >> 0x1cU)));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7638(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7638\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___sinkA_io_req_bits_put 
        = ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT__first_counter))
            ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT__freeIdx)
            : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT__put_r));
    vlSelf->__VdfgTmp_hb30aa620__0 = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__downvert_d2s__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp) 
                                       & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__downvert_d2s__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_h4d9e72c0__0)
                                            ? 0x3fU
                                            : 0x1ffU) 
                                          & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__downvert_d2s__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
                                               ? 0x6bU
                                               : 0x1ffU) 
                                             & ((0x17fU 
                                                 | (0x80U 
                                                    & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__downvert_d2s__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)) 
                                                       << 7U))) 
                                                & (0x1bfU 
                                                   | (0x40U 
                                                      & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__downvert_d2s__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)) 
                                                         << 6U))))))) 
                                      | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__downvert_d2s__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
                                           ? 0x6bU : 0U) 
                                         | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__downvert_d2s__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                              ? 0x17fU
                                              : 0U) 
                                            | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__downvert_d2s__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                 ? 0x180U
                                                 : 0U) 
                                               | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__downvert_d2s__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                                   ? 0x1c0U
                                                   : 0U)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____VdfgTmp_hdd166087__0 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___GEN_8) 
            | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___GEN_10) 
               >> 5U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___GEN_15));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__iregister_read__DOT__rrd_uops_3_REG_dst_rtype 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___int_issue_unit_io_iss_uops_2_dst_rtype;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__iregister_read__DOT__rrd_uops_3_REG_pdst 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___int_issue_unit_io_iss_uops_2_pdst;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__ptw__DOT____Vcellinp__l2_tlb_ram_0__RW0_en 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__ptw__DOT__readEnable) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__ptw__DOT__writeEnable));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__ptw__DOT___state_reg_T_29 
        = (IData)((0U != (5U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__ptw__DOT___GEN_24))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__ptw__DOT___r_pte_T_5 
        = ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__ptw__DOT__state)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__ptw__DOT__pte_cache_hit));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7639(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7639\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__tlb__DOT___GEN_29 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT___ptw_io_requestor_0_resp_bits_homogeneous)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__ptw__DOT__resp_valid_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_23 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT___ptw_io_requestor_0_resp_bits_homogeneous)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__ptw__DOT__resp_valid_0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT____VdfgTmp_h0eac4f7d__0 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__ptw__DOT__resp_valid_0) 
           & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__ptw__DOT__count) 
                  >> 1U)) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT___ptw_io_requestor_0_resp_bits_homogeneous)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__tlb__DOT____VdfgTmp_hea11405f__0 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT___ptw_io_requestor_0_resp_bits_homogeneous) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__ptw__DOT__resp_valid_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_34 
        = (1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT___ptw_io_requestor_0_resp_bits_homogeneous)) 
                 | (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__ptw__DOT__count) 
                       >> 1U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__ptw__DOT___GEN_31 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__ptw__DOT____VdfgTmp_hd75eea2a__0) 
           & ((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__ptw__DOT__state))
               ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT___hellaCacheArb_io_requestor_0_s2_xcpt_ae_ld) 
                  & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__ptw__DOT__r_req_dest)))
               : ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__ptw__DOT__state)) 
                  & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__ptw__DOT__r_req_dest)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__ptw__DOT___GEN_32 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__ptw__DOT____VdfgTmp_hd75eea2a__0) 
           & ((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__ptw__DOT__state))
               ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT___hellaCacheArb_io_requestor_0_s2_xcpt_ae_ld) 
                  & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__ptw__DOT__r_req_dest)))
               : ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__ptw__DOT__state)) 
                  & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__ptw__DOT__r_req_dest)))));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__muxState_4) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT___dcache_auto_out_a_bits_data[0U] 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT___mmios_0_io_mem_access_bits_data[0U];
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT___dcache_auto_out_a_bits_data[1U] 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT___mmios_0_io_mem_access_bits_data[1U];
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT___dcache_auto_out_a_bits_data[2U] 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT___mmios_0_io_mem_access_bits_data[2U];
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT___dcache_auto_out_a_bits_data[3U] 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT___mmios_0_io_mem_access_bits_data[3U];
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT___dcache_auto_out_a_bits_data[0U] = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT___dcache_auto_out_a_bits_data[1U] = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT___dcache_auto_out_a_bits_data[2U] = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT___dcache_auto_out_a_bits_data[3U] = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT___dcache_auto_out_a_bits_mask 
        = (0xffffU & ((- (IData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__muxState_0))) 
                      | ((- (IData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__muxState_1))) 
                         | ((- (IData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__muxState_2))) 
                            | ((- (IData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__muxState_3))) 
                               | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__muxState_4)
                                   ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mmios_0__DOT___io_mem_access_bits_T_16)
                                       ? ((0xfU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mmios_0__DOT__req_uop_mem_cmd))
                                           ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mmios_0__DOT____VdfgTmp_h28e19a64__0)
                                           : ((0xeU 
                                               == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mmios_0__DOT__req_uop_mem_cmd))
                                               ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mmios_0__DOT____VdfgTmp_h28e19a64__0)
                                               : ((0xdU 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mmios_0__DOT__req_uop_mem_cmd))
                                                   ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mmios_0__DOT____VdfgTmp_h28e19a64__0)
                                                   : 
                                                  ((0xcU 
                                                    == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mmios_0__DOT__req_uop_mem_cmd))
                                                    ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mmios_0__DOT____VdfgTmp_h28e19a64__0)
                                                    : 
                                                   ((8U 
                                                     == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mmios_0__DOT__req_uop_mem_cmd))
                                                     ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mmios_0__DOT____VdfgTmp_h28e19a64__0)
                                                     : 
                                                    ((0xbU 
                                                      == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mmios_0__DOT__req_uop_mem_cmd))
                                                      ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mmios_0__DOT____VdfgTmp_h28e19a64__0)
                                                      : 
                                                     ((0xaU 
                                                       == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mmios_0__DOT__req_uop_mem_cmd))
                                                       ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mmios_0__DOT____VdfgTmp_h28e19a64__0)
                                                       : 
                                                      ((9U 
                                                        == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mmios_0__DOT__req_uop_mem_cmd))
                                                        ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mmios_0__DOT____VdfgTmp_h28e19a64__0)
                                                        : 
                                                       ((4U 
                                                         == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mmios_0__DOT__req_uop_mem_cmd))
                                                         ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mmios_0__DOT____VdfgTmp_h28e19a64__0)
                                                         : 0U)))))))))
                                       : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mmios_0__DOT____VdfgTmp_h28e19a64__0))
                                   : 0U))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7640(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7640\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT___dcache_auto_out_a_bits_opcode 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT___GEN_8)
             ? 6U : 0U) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__muxState_4)
                            ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT___mmios_0_io_mem_access_bits_opcode)
                            : 0U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT___dcache_auto_out_a_bits_param 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__muxState_0)
             ? (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT___GEN_37 
                      >> (0x1fU & VL_SHIFTL_III(5,5,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT___GEN_35), 1U))))
             : 0U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__muxState_1)
                        ? (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT___GEN_37 
                                 >> (0x1fU & VL_SHIFTL_III(5,5,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT___GEN_35), 1U))))
                        : 0U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__muxState_2)
                                   ? (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT___GEN_37 
                                            >> (0x1fU 
                                                & VL_SHIFTL_III(5,5,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT___GEN_35), 1U))))
                                   : 0U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__muxState_3)
                                              ? (3U 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT___GEN_37 
                                                    >> 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(5,5,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT___GEN_35), 1U))))
                                              : 0U) 
                                            | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__muxState_4)
                                                ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mmios_0__DOT___io_mem_access_bits_T_16)
                                                    ? 
                                                   ((0xfU 
                                                     == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mmios_0__DOT__req_uop_mem_cmd))
                                                     ? 3U
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mmios_0__DOT__req_uop_mem_cmd))
                                                      ? 2U
                                                      : 
                                                     ((0xdU 
                                                       == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mmios_0__DOT__req_uop_mem_cmd))
                                                       ? 1U
                                                       : 
                                                      ((0xcU 
                                                        == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mmios_0__DOT__req_uop_mem_cmd))
                                                        ? 0U
                                                        : 
                                                       ((8U 
                                                         == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mmios_0__DOT__req_uop_mem_cmd))
                                                         ? 4U
                                                         : 
                                                        ((0xbU 
                                                          == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mmios_0__DOT__req_uop_mem_cmd))
                                                          ? 2U
                                                          : 
                                                         ((0xaU 
                                                           == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mmios_0__DOT__req_uop_mem_cmd))
                                                           ? 1U
                                                           : 
                                                          (((4U 
                                                             != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mmios_0__DOT__req_uop_mem_cmd)) 
                                                            | (9U 
                                                               == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mmios_0__DOT__req_uop_mem_cmd)))
                                                            ? 0U
                                                            : 3U))))))))
                                                    : 0U)
                                                : 0U)))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7641(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7641\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT___dcache_auto_out_a_bits_source 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__muxState_1)
             ? 1U : 0U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__muxState_2)
                             ? 2U : 0U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__muxState_3)
                                             ? 3U : 0U) 
                                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__muxState_4)
                                               ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mmios_0__DOT___GEN_0)
                                                   ? 5U
                                                   : 0U)
                                               : 0U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT___dcache_auto_out_a_bits_size 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT___GEN_8)
             ? 6U : 0U) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__muxState_4)
                            ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT___mmios_0_io_mem_access_bits_size)
                            : 0U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT___dcache_auto_out_a_bits_address 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__muxState_0)
             ? ((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__req_addr 
                         >> 6U)) << 6U) : 0U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__muxState_1)
                                                   ? 
                                                  ((IData)(
                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__req_addr 
                                                            >> 6U)) 
                                                   << 6U)
                                                   : 0U) 
                                                 | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__muxState_2)
                                                      ? 
                                                     ((IData)(
                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__req_addr 
                                                               >> 6U)) 
                                                      << 6U)
                                                      : 0U) 
                                                    | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__muxState_3)
                                                         ? 
                                                        ((IData)(
                                                                 (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__req_addr 
                                                                  >> 6U)) 
                                                         << 6U)
                                                         : 0U) 
                                                       | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__muxState_4)
                                                           ? 
                                                          ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mmios_0__DOT___GEN_0)
                                                            ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mmios_0__DOT__req_addr)
                                                            : 0U)
                                                           : 0U)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__refill_done 
        = (((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__counter)) 
            | (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__beats1))) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT___GEN_0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT___GEN_0 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT___mshrs_2_io_mem_grant_ready) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT____Vcellinp__mshrs_2__io_mem_grant_valid));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7642(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7642\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT___mshrs_3_io_mem_grant_ready 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT____VdfgTmp_h6047b731__0) 
           & ((~ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U]) 
              | (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__lb_write_arb__DOT___io_out_valid_T))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT___lb_write_arb_io_out_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__lb_write_arb__DOT___io_out_valid_T) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT____VdfgTmp_h6047b731__0) 
              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT____Vcellinp__mshrs_3__io_mem_grant_valid))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__wb__DOT___GEN_7 
        = ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__wb__DOT__state)) 
           & ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__prober__DOT__state)) 
              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__wb_req_arb__DOT___io_out_valid_T) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT___mshrs_3_io_wb_req_valid))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT___GEN_42 
        = (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__meta_write_arb__DOT___io_out_valid_T)) 
            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__meta_0__DOT__rst_cnt) 
               >> 6U)) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT___mshrs_3_io_meta_write_valid));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT___mshrs_io_meta_write_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__meta_write_arb__DOT___io_out_valid_T) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT___mshrs_3_io_meta_write_valid));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2364 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__clear_store) 
           & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_head)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2365 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__clear_store) 
           & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_head)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2366 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__clear_store) 
           & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_head)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2367 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__clear_store) 
           & (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_head)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2368 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__clear_store) 
           & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_head)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2369 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__clear_store) 
           & (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_head)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2370 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__clear_store) 
           & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_head)));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7643(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7643\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2371 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__clear_store) 
           & (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_head)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2372 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__clear_store) 
           & (8U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_head)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2373 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__clear_store) 
           & (9U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_head)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2374 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__clear_store) 
           & (0xaU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_head)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2375 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__clear_store) 
           & (0xbU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_head)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2376 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__clear_store) 
           & (0xcU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_head)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2377 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__clear_store) 
           & (0xdU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_head)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2378 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__clear_store) 
           & (0xeU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_head)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2379 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__clear_store) 
           & (0xfU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_head)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2380 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__clear_store) 
           & (0x10U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_head)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2381 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__clear_store) 
           & (0x11U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_head)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2382 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__clear_store) 
           & (0x12U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_head)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2383 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__clear_store) 
           & (0x13U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_head)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2384 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__clear_store) 
           & (0x14U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_head)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2385 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__clear_store) 
           & (0x15U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_head)));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7644(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7644\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2386 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__clear_store) 
           & (0x16U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_head)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2387 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__clear_store) 
           & (0x17U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_head)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_868 
        = (((~ ((IData)(1U) << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_head))) 
            | (- (IData)((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__clear_store)))))) 
           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__live_store_mask);
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_0__DOT__slot_uop_uses_ldq = 0U;
    } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__issue_slots_0_in_uop_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_0__DOT__slot_uop_uses_ldq 
            = ((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__next_2))
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_3__DOT__slot_uop_uses_ldq)
                : ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT___next_1_1to0))
                    ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_2__DOT__slot_uop_uses_ldq)
                    : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_1__DOT__slot_uop_uses_ldq)));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__rrd_uops_0_REG_dst_rtype 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__issue_slots_23_grant)
            ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_23__DOT__slot_uop_dst_rtype)
            : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__issue_slots_22_grant)
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_22__DOT__slot_uop_dst_rtype)
                : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__issue_slots_21_grant)
                    ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_21__DOT__slot_uop_dst_rtype)
                    : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__issue_slots_20_grant)
                        ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_20__DOT__slot_uop_dst_rtype)
                        : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__issue_slots_19_grant)
                            ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_19__DOT__slot_uop_dst_rtype)
                            : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__issue_slots_18_grant)
                                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_18__DOT__slot_uop_dst_rtype)
                                : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__issue_slots_17_grant)
                                    ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_17__DOT__slot_uop_dst_rtype)
                                    : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__issue_slots_16_grant)
                                        ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_16__DOT__slot_uop_dst_rtype)
                                        : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__issue_slots_15_grant)
                                            ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_15__DOT__slot_uop_dst_rtype)
                                            : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__issue_slots_14_grant)
                                                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_14__DOT__slot_uop_dst_rtype)
                                                : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__issue_slots_13_grant)
                                                    ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_13__DOT__slot_uop_dst_rtype)
                                                    : 
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__issue_slots_12_grant)
                                                     ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_12__DOT__slot_uop_dst_rtype)
                                                     : 
                                                    ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__issue_slots_11_grant)
                                                      ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_11__DOT__slot_uop_dst_rtype)
                                                      : 
                                                     ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__issue_slots_10_grant)
                                                       ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_10__DOT__slot_uop_dst_rtype)
                                                       : 
                                                      ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__issue_slots_9_grant)
                                                        ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_9__DOT__slot_uop_dst_rtype)
                                                        : 
                                                       ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__issue_slots_8_grant)
                                                         ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_8__DOT__slot_uop_dst_rtype)
                                                         : 
                                                        ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__issue_slots_7_grant)
                                                          ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_dst_rtype)
                                                          : 
                                                         ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__issue_slots_6_grant)
                                                           ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_dst_rtype)
                                                           : 
                                                          ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__issue_slots_5_grant)
                                                            ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_dst_rtype)
                                                            : 
                                                           ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__issue_slots_4_grant)
                                                             ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__slot_uop_dst_rtype)
                                                             : 
                                                            ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__issue_slots_3_grant)
                                                              ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_3__DOT__slot_uop_dst_rtype)
                                                              : 
                                                             ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__issue_slots_2_grant)
                                                               ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_2__DOT__slot_uop_dst_rtype)
                                                               : 
                                                              ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__issue_slots_1_grant)
                                                                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_1__DOT__slot_uop_dst_rtype)
                                                                : 
                                                               ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__issue_slots_0_grant)
                                                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_0__DOT__slot_uop_dst_rtype)
                                                                 : 2U))))))))))))))))))))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7645(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7645\n"); );
    // Body
    vlSelf->__VdfgTmp_h9abf5d7c__0 = (((0x7ffffffffffffeULL 
                                        & (vlSelf->__VdfgTmp_h11b97efa__0 
                                           << 1U)) 
                                       | (QData)((IData)(
                                                         (1U 
                                                          & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__isZeroRemT_E)))))) 
                                      & (1ULL | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__divsqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_129 
                                                 << 1U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__divsqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_hac9988f1__0 
        = ((0x40000000000000ULL | vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__divsqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_h4d5bceea__0) 
           & (1ULL | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__divsqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_129 
                      << 1U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_B6_div 
        = ((6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_B)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT____VdfgTmp_h5ad0f635__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__valid_normalCase_leaving_PA 
        = (((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_B)) 
            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT____VdfgTmp_h5ad0f635__0)) 
           | (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_B)));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_0__DOT__slot_uop_fp_val = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1__DOT__slot_uop_fp_val = 0U;
    } else {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__issue_slots_0_in_uop_valid) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_0__DOT__slot_uop_fp_val 
                = ((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__next_2))
                    ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_3__DOT__slot_uop_fp_val)
                    : ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT___next_1_1to0))
                        ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_2__DOT__slot_uop_fp_val)
                        : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_1__DOT__slot_uop_fp_val)));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__issue_slots_1_in_uop_valid) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1__DOT__slot_uop_fp_val 
                = ((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__next_3))
                    ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_4__DOT__slot_uop_fp_val)
                    : ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__next_2))
                        ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_3__DOT__slot_uop_fp_val)
                        : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_2__DOT__slot_uop_fp_val)));
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7646(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7646\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_3__DOT__slot_uop_pdst = 0U;
    } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__issue_slots_3_in_uop_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_3__DOT__slot_uop_pdst 
            = ((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__next_5))
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_6__DOT__slot_uop_pdst)
                : ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__next_4))
                    ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5__DOT__slot_uop_pdst)
                    : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4__DOT__slot_uop_pdst)));
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__issue_slots_1_in_uop_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1__DOT__slot_uop_br_tag 
            = ((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__next_3))
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_4__DOT__slot_uop_br_tag)
                : ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__next_2))
                    ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_3__DOT__slot_uop_br_tag)
                    : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_2__DOT__slot_uop_br_tag)));
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__issue_slots_4_in_uop_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4__DOT__slot_uop_is_fence 
            = ((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__next_6))
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_7__DOT__slot_uop_is_fence)
                : ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__next_5))
                    ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_6__DOT__slot_uop_is_fence)
                    : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5__DOT__slot_uop_is_fence)));
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__issue_slots_2_in_uop_valid) {
        if ((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__next_4))) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_2__DOT__slot_uop_rob_idx 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5__DOT__slot_uop_rob_idx;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_2__DOT__slot_uop_stq_idx 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5__DOT__slot_uop_stq_idx;
        } else if ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__next_3))) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_2__DOT__slot_uop_rob_idx 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4__DOT__slot_uop_rob_idx;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_2__DOT__slot_uop_stq_idx 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4__DOT__slot_uop_stq_idx;
        } else {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_2__DOT__slot_uop_rob_idx 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_3__DOT__slot_uop_rob_idx;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_2__DOT__slot_uop_stq_idx 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_3__DOT__slot_uop_stq_idx;
        }
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__tage__DOT____VdfgTmp_ha0ba0711__0 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__tage__DOT____VdfgTmp_h8ff85b8b__0) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__tage__DOT____VdfgTmp_hc48c746c__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__tage__DOT____VdfgTmp_ha0be7704__0 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__tage__DOT____VdfgTmp_h8ff85b8b__0) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__tage__DOT____VdfgTmp_hc48c746c__0) 
              >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__tage__DOT____VdfgTmp_ha0f767db__0 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__tage__DOT____VdfgTmp_h8ff85b8b__0) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__tage__DOT____VdfgTmp_hc48c746c__0) 
              >> 2U));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7647(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7647\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__tage__DOT____VdfgTmp_ha0f2d66e__0 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__tage__DOT____VdfgTmp_h8ff85b8b__0) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__tage__DOT____VdfgTmp_hc48c746c__0) 
              >> 3U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__tage__DOT____VdfgTmp_ha72ed06a__0 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__tage__DOT____VdfgTmp_h8ff85b8b__0) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__tage__DOT____VdfgTmp_hc48c746c__0) 
              >> 4U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__tage__DOT____VdfgTmp_ha72ac087__0 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__tage__DOT____VdfgTmp_h8ff85b8b__0) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__tage__DOT____VdfgTmp_hc48c746c__0) 
              >> 5U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT____VdfgTmp_ha0ba0711__0 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT____VdfgTmp_h8ff85b8b__0) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT____VdfgTmp_hc48c746c__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT____VdfgTmp_ha0be7704__0 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT____VdfgTmp_h8ff85b8b__0) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT____VdfgTmp_hc48c746c__0) 
              >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT____VdfgTmp_ha0f767db__0 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT____VdfgTmp_h8ff85b8b__0) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT____VdfgTmp_hc48c746c__0) 
              >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT____VdfgTmp_ha0f2d66e__0 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT____VdfgTmp_h8ff85b8b__0) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT____VdfgTmp_hc48c746c__0) 
              >> 3U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT____VdfgTmp_ha72ed06a__0 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT____VdfgTmp_h8ff85b8b__0) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT____VdfgTmp_hc48c746c__0) 
              >> 4U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT____VdfgTmp_ha72ac087__0 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT____VdfgTmp_h8ff85b8b__0) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT____VdfgTmp_hc48c746c__0) 
              >> 5U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp 
        = (0x3fffU & (((0x2000U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sExp) 
                                   << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sExp)) 
                      + (3U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                       >> 0x35U)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_isInf) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__sfma__DOT___fma_io_exceptionFlags 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_invalidExc_pipe_b) 
            << 4U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                       << 2U) | ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                   & (VL_GTS_III(11, 0x6bU, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                      | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound) 
                                         & ((1U != 
                                             (3U & 
                                              ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sExp) 
                                               >> 8U))) 
                                            & ((~ (
                                                   (~ 
                                                    ((0x4000000U 
                                                      & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sig)
                                                      ? 
                                                     ((~ 
                                                       ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sExp) 
                                                        >> 8U)) 
                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_haf133fcb__0 
                                                         >> 2U))
                                                      : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_hb129c4ea__0))) 
                                                   & (((0x4000000U 
                                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sig)
                                                        ? 
                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                        >> 0x19U)
                                                        : 
                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                        >> 0x18U)) 
                                                      & ((0U 
                                                          != vlSelf->__VdfgTmp_h128c6050__0) 
                                                         & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___overflow_roundMagUp_T) 
                                                             & ((0x4000000U 
                                                                 & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sig)
                                                                 ? 
                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sig 
                                                                 >> 2U)
                                                                 : 
                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sig 
                                                                 >> 1U))) 
                                                            | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                                                               & ((IData)(
                                                                          (0x4000004U 
                                                                           == 
                                                                           (0x4000004U 
                                                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sig))) 
                                                                  | (0U 
                                                                     != 
                                                                     (3U 
                                                                      & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sig))))))))) 
                                               & ((0x4000000U 
                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sig)
                                                   ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_hb129c4ea__0)
                                                   : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___common_underflow_T_4))))))) 
                                  << 1U) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                            | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                               & (VL_GTS_III(11, 0x6bU, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                                  | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound)))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7648(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7648\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___wqueues_15_enq_valid_T 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT___tl2axi4_auto_out_aw_valid) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Faw_ready_reg));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___rqueues_15_enq_valid_T 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT___tl2axi4_auto_out_ar_valid) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Far_ready_reg));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___binder_auto_in_d_bits_denied 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__mbus_xbar__DOT__muxState_0) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT___coupler_to_memory_controller_port_named_axi4_auto_widget_in_d_bits_denied));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___binder_auto_in_d_bits_corrupt 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__mbus_xbar__DOT__muxState_0) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT___coupler_to_memory_controller_port_named_axi4_auto_widget_in_d_bits_corrupt));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___binder_auto_in_d_bits_size 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__mbus_xbar__DOT__muxState_0)
             ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT___coupler_to_memory_controller_port_named_axi4_auto_widget_in_d_bits_size)
             : 0U) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__mbus_xbar__DOT__muxState_1)
                       ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bank_auto_xbar_in_d_bits_size)
                       : 0U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___binder_auto_in_d_bits_source 
        = (0xfU & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__mbus_xbar__DOT__muxState_0)
                     ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT___coupler_to_memory_controller_port_named_axi4_auto_widget_in_d_bits_source)
                     : 0U) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__mbus_xbar__DOT__muxState_1)
                               ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__r_source) 
                                  >> 4U) : 0U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___binder_auto_in_d_bits_opcode 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__mbus_xbar__DOT__muxState_0)
             ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
             : 0U) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__mbus_xbar__DOT__muxState_1)
                       ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__r_read)
                       : 0U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
        = (0x3ffffffU & ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT___overflow_roundMagUp_T) 
                           & (0U != vlSelf->__VdfgTmp_he793faf0__0)) 
                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT__anyRound)))
                          ? ((((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__fpmu__DOT__in_pipe_b_rm)) 
                               & ((~ (IData)((0U != vlSelf->__VdfgTmp_h0da37fcc__0))) 
                                  & (0U != vlSelf->__VdfgTmp_he793faf0__0)))
                               ? (~ (1U | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                           << 1U)))
                               : 0x3ffffffU) & ((IData)(1U) 
                                                + (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_h5eaf8163__0 
                                                   | vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74)))
                          : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_hb665f660__0 
                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_h5eaf8163__0) 
                             | (((6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__fpmu__DOT__in_pipe_b_rm)) 
                                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT__anyRound))
                                 ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_h6e2738c4__0
                                 : 0U))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7649(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7649\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__alu_exe_unit_2__DOT__ALUUnit__DOT__alu__DOT___GEN_3 
        = ((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__alu_exe_unit_2__DOT__ALUUnit__DOT__alu__DOT___GEN_2 
                    >> 0xeU)) | (0x33333333U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__alu_exe_unit_2__DOT__ALUUnit__DOT__alu__DOT___GEN_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__alu_exe_unit_2__DOT__ALUUnit__DOT__alu__DOT___GEN_4 
        = (3U & ((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__alu_exe_unit_2__DOT__ALUUnit__DOT__alu__DOT___GEN_2 
                          >> 0xaU)) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__alu_exe_unit_2__DOT__ALUUnit__DOT__alu__DOT___GEN_0 
                                       >> 4U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__alu_exe_unit_2__DOT__ALUUnit__DOT__alu__DOT___GEN_5 
        = ((0xfcU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__alu_exe_unit_2__DOT__ALUUnit__DOT__alu__DOT___GEN_2) 
                     << 2U)) | (0x33U & ((0xf0U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__alu_exe_unit_2__DOT__ALUUnit__DOT__alu__DOT___GEN 
                                                   >> 8U)) 
                                         | (0xfU & 
                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__alu_exe_unit_2__DOT__ALUUnit__DOT__alu__DOT__shin_hi 
                                             >> 0x10U)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__csr__DOT___io_rw_rdata_T_155 
        = (((IData)(((0x30100U == (0x3ff00U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__alu_exe_unit_1__DOT__ALUUnit__DOT__r_uops_0_imm_packed)) 
                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__csr__DOT____VdfgTmp_hab14c173__0)))
             ? 0x800000000014112dULL : 0ULL) | (((0xfffU 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__csr__DOT___decoded_decoded_T_28))
                                                  ? 
                                                 (0xa00000000ULL 
                                                  | (((QData)((IData)(
                                                                      (3U 
                                                                       == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__csr__DOT__reg_mstatus_fs)))) 
                                                      << 0x3fU) 
                                                     | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__csr__DOT__reg_mstatus_mpv)) 
                                                         << 0x27U) 
                                                        | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__csr__DOT__reg_mstatus_gva)) 
                                                            << 0x26U) 
                                                           | (QData)((IData)(
                                                                             (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__csr__DOT__reg_mstatus_tsr) 
                                                                               << 0x16U) 
                                                                              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__csr__DOT__reg_mstatus_tw) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__csr__DOT__reg_mstatus_tvm) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__csr__DOT__reg_mstatus_mxr) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__csr__DOT__reg_mstatus_sum) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__csr__DOT__reg_mstatus_mprv) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__csr__DOT__reg_mstatus_fs) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__csr__DOT__reg_mstatus_mpp) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__csr__DOT__reg_mstatus_spp) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__csr__DOT__reg_mstatus_mpie) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__csr__DOT__reg_mstatus_spie) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__csr__DOT__reg_mstatus_mie) 
                                                                                << 3U) 
                                                                                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__csr__DOT__reg_mstatus_sie) 
                                                                                << 1U)))))))))))))))))))
                                                  : 0ULL) 
                                                | ((0xfffU 
                                                    == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__csr__DOT___decoded_decoded_T_38))
                                                    ? (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__csr__DOT___read_mtvec_T_5))
                                                    : 0ULL)));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7650(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7650\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__ctrls__DOT__monitor__DOT___GEN_39 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__ctrls__DOT__monitor__DOT__d_first_counter_1)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT__do_enq));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__ctrls__DOT__out_back_q__DOT__do_enq 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__ctrls__DOT__out_back_q__DOT__full)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT__full) 
              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__ctrls__DOT__out_iready)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___coh_wrapper_auto_l2_ctrls_ctrl_in_a_ready 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__ctrls__DOT__out_back_q__DOT__full)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__ctrls__DOT__out_iready));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__alu_exe_unit_1__DOT__ALUUnit__DOT__alu__DOT___GEN_7 
        = ((0xf0f0U & ((0xff00U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__alu_exe_unit_1__DOT__ALUUnit__DOT__alu__DOT___shout_r_T_5[0U] 
                                   >> 8U)) | (0xf0U 
                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__alu_exe_unit_1__DOT__ALUUnit__DOT__alu__DOT___shout_r_T_5[0U] 
                                                 >> 0x18U)))) 
           | (0xf0fU & ((0xff00U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__alu_exe_unit_1__DOT__ALUUnit__DOT__alu__DOT___shout_r_T_5[0U] 
                                    >> 0x10U)) | (0xffU 
                                                  & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__alu_exe_unit_1__DOT__ALUUnit__DOT__alu__DOT___shout_r_T_5[1U]))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT___nBufValid_T 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__nReady) 
           >= (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__nBufValid));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT___nICReady_T 
        = (3U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__nReady) 
                 - (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__nBufValid)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__do_bypass_1 
        = (1U & ((~ (IData)((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_rs2)))) 
                 | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__id_bypass_src_1_1) 
                    | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__id_bypass_src_1_2) 
                       | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___dcache_kill_mem_T) 
                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___id_bypass_src_T_7))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT____VdfgTmp_h56c9d99b__0 
        = ((0x400U & ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                          >> 6U)) << 0xaU)) | ((0x200U 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                   >> 3U)) 
                                               | ((0x100U 
                                                   & ((~ 
                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                        >> 0xdU)) 
                                                      << 8U)) 
                                                  | ((0x80U 
                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                         >> 7U)) 
                                                     | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT____VdfgTmp_h8f2e93cb__0)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___id_ctrl_decoder_decoded_T_46 
        = ((0x200U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                      << 9U)) | ((0x100U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                            << 7U)) 
                                 | ((0x80U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                              << 5U)) 
                                    | ((0x40U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                 << 3U)) 
                                       | ((0x20U & 
                                           ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                >> 4U)) 
                                            << 5U)) 
                                          | ((0x10U 
                                              & ((~ 
                                                  (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                   >> 5U)) 
                                                 << 4U)) 
                                             | ((8U 
                                                 & ((~ 
                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                      >> 6U)) 
                                                    << 3U)) 
                                                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT____VdfgTmp_hd3dc72fd__0))))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7651(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7651\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___id_ctrl_decoder_decoded_T_60 
        = ((0x100U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                      << 8U)) | ((0x80U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                           << 6U)) 
                                 | ((0x40U & ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                  >> 2U)) 
                                              << 6U)) 
                                    | ((0x20U & ((~ 
                                                  (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                   >> 3U)) 
                                                 << 5U)) 
                                       | ((0x10U & 
                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                            >> 1U)) 
                                          | ((8U & 
                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                               >> 3U)) 
                                             | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT____VdfgTmp_hd3dc72fd__0)))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___id_ctrl_decoder_decoded_T_12 
        = ((0x100U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                      << 8U)) | ((0x80U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                           << 6U)) 
                                 | ((0x40U & ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                  >> 2U)) 
                                              << 6U)) 
                                    | ((0x20U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                 << 1U)) 
                                       | ((0x10U & 
                                           ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                >> 5U)) 
                                            << 4U)) 
                                          | ((8U & 
                                              ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                   >> 6U)) 
                                               << 3U)) 
                                             | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT____VdfgTmp_h3d87f534__0)))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT____VdfgTmp_h169cfe6a__0 
        = ((0x40U & ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                         >> 3U)) << 6U)) | ((0x20U 
                                             & ((~ 
                                                 (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                  >> 4U)) 
                                                << 5U)) 
                                            | ((0x10U 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                   >> 1U)) 
                                               | ((8U 
                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                      >> 3U)) 
                                                  | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT____VdfgTmp_h3d87f534__0)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT____VdfgTmp_hd06d86bc__0 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
            >> 0xeU) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT____VdfgTmp_h3c54518d__0));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7652(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7652\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT____VdfgTmp_h2d652b57__0 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
            >> 0x19U) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT____VdfgTmp_h3c54518d__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT____VdfgTmp_h085d4e30__0 
        = ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
               >> 0x19U)) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT____VdfgTmp_h3c54518d__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___id_ctrl_decoder_decoded_T_22 
        = ((0x4000U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                       << 0xeU)) | ((0x2000U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                << 0xcU)) 
                                    | ((0x1000U & (
                                                   (~ 
                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                     >> 2U)) 
                                                   << 0xcU)) 
                                       | ((0x800U & 
                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                            << 7U)) 
                                          | ((0x400U 
                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                 << 5U)) 
                                             | ((0x200U 
                                                 & ((~ 
                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                      >> 6U)) 
                                                    << 9U)) 
                                                | ((0x100U 
                                                    & ((~ 
                                                        (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                         >> 0xcU)) 
                                                       << 8U)) 
                                                   | ((0x80U 
                                                       & ((~ 
                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                            >> 0xdU)) 
                                                          << 7U)) 
                                                      | ((0x40U 
                                                          & ((~ 
                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                               >> 0xeU)) 
                                                             << 6U)) 
                                                         | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT____VdfgTmp_h3bd412a6__0))))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT____VdfgTmp_h61b3d01c__0 
        = ((0x200U & ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                          >> 6U)) << 9U)) | ((0x100U 
                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                 >> 4U)) 
                                             | ((0x80U 
                                                 & ((~ 
                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                      >> 0xdU)) 
                                                    << 7U)) 
                                                | ((0x40U 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                       >> 8U)) 
                                                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT____VdfgTmp_h3bd412a6__0)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT____VdfgTmp_h8955d951__0 
        = (IData)(((0x800202fU == (0x800607fU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits)) 
                   & (0xfU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT____VdfgTmp_h0114936d__0))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7653(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7653\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT____VdfgTmp_h8a29efed__0 
        = ((0x200U & ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                          >> 0x14U)) << 9U)) | ((0x100U 
                                                 & ((~ 
                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                      >> 0x15U)) 
                                                    << 8U)) 
                                                | ((0x80U 
                                                    & ((~ 
                                                        (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                         >> 0x16U)) 
                                                       << 7U)) 
                                                   | ((0x40U 
                                                       & ((~ 
                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                            >> 0x17U)) 
                                                          << 6U)) 
                                                      | ((0x20U 
                                                          & ((~ 
                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                               >> 0x18U)) 
                                                             << 5U)) 
                                                         | ((0x10U 
                                                             & ((~ 
                                                                 (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                                  >> 0x1bU)) 
                                                                << 4U)) 
                                                            | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT____VdfgTmp_h0114936d__0)))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT____VdfgTmp_hfe2a0325__0 
        = ((0x100U & ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                          >> 6U)) << 8U)) | ((0x80U 
                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                 >> 5U)) 
                                             | ((0x40U 
                                                 & ((~ 
                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                      >> 0xdU)) 
                                                    << 6U)) 
                                                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT____VdfgTmp_h563ce947__0))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT____VdfgTmp_h0f59de4f__0 
        = ((0x200U & ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                          >> 6U)) << 9U)) | ((0x100U 
                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                 >> 4U)) 
                                             | ((0x80U 
                                                 & ((~ 
                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                      >> 0xdU)) 
                                                    << 7U)) 
                                                | ((0x40U 
                                                    & ((~ 
                                                        (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                         >> 0x19U)) 
                                                       << 6U)) 
                                                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT____VdfgTmp_h563ce947__0)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___id_ctrl_decoder_decoded_T_26 
        = ((0x1000U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                       << 0xcU)) | ((0x800U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                               << 0xaU)) 
                                    | ((0x400U & ((~ 
                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                    >> 2U)) 
                                                  << 0xaU)) 
                                       | ((0x200U & 
                                           ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                >> 3U)) 
                                            << 9U)) 
                                          | ((0x100U 
                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                 << 4U)) 
                                             | ((0x80U 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                    << 2U)) 
                                                | ((0x40U 
                                                    & ((~ 
                                                        (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                         >> 6U)) 
                                                       << 6U)) 
                                                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT____VdfgTmp_h563ce947__0))))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7654(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7654\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___id_ctrl_decoder_decoded_T_28 
        = ((0x4000U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                       << 0xeU)) | ((0x2000U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                << 0xcU)) 
                                    | ((0x1000U & (
                                                   (~ 
                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                     >> 2U)) 
                                                   << 0xcU)) 
                                       | ((0x800U & 
                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                            << 7U)) 
                                          | ((0x400U 
                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                 << 5U)) 
                                             | ((0x200U 
                                                 & ((~ 
                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                      >> 6U)) 
                                                    << 9U)) 
                                                | ((0x100U 
                                                    & ((~ 
                                                        (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                         >> 0xcU)) 
                                                       << 8U)) 
                                                   | ((0x80U 
                                                       & ((~ 
                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                            >> 0xdU)) 
                                                          << 7U)) 
                                                      | ((0x40U 
                                                          & ((~ 
                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                               >> 0xeU)) 
                                                             << 6U)) 
                                                         | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT____VdfgTmp_h563ce947__0))))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___id_ctrl_decoder_decoded_T_130 
        = ((0x2000U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                       << 0xdU)) | ((0x1000U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                << 0xbU)) 
                                    | ((0x800U & ((~ 
                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                    >> 2U)) 
                                                  << 0xbU)) 
                                       | ((0x400U & 
                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                            << 6U)) 
                                          | ((0x200U 
                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                 << 4U)) 
                                             | ((0x100U 
                                                 & ((~ 
                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                      >> 6U)) 
                                                    << 8U)) 
                                                | ((0x80U 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                       >> 7U)) 
                                                   | ((0x40U 
                                                       & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                          >> 0x13U)) 
                                                      | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT____VdfgTmp_h563ce947__0)))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq__DOT___uops_br_mask_T_1 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT___lsu_io_dmem_brupdate_b1_resolve_mask)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT____Vcellinp__mshrs__io_req_0_bits_uop_br_mask));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7655(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7655\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_hit_0 
        = (1U & (((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_tag_match_way_0)) 
                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_has_permission_0) 
                     & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__idx_match_0) 
                            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__tag_match_0))) 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs_io_req_0_bits_old_meta_meta_coh_state) 
                           == (3U & ((0xf800e9e4U | 
                                      (((0xcU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT___s2_new_hit_state_T)) 
                                        << 0x18U) | 
                                       (((0xcU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT___s2_new_hit_state_T)) 
                                         << 0x16U) 
                                        | (((0xcU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT___s2_new_hit_state_T)) 
                                            << 0x14U) 
                                           | (((0xcU 
                                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT___s2_new_hit_state_T)) 
                                               << 0x12U) 
                                              | ((0xcU 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT___s2_new_hit_state_T)) 
                                                 << 0x10U)))))) 
                                     >> (0x1fU & VL_SHIFTL_III(5,5,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT___s2_new_hit_state_T), 1U)))))))) 
                 | ((~ (IData)((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_type)))) 
                    | (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_type)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT____VdfgTmp_h7d386649__0 
        = (0xffU & ((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_req_0_addr))
                     ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__cache_resp_0_bits_data_zeroed_1) 
                        >> 8U) : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__cache_resp_0_bits_data_zeroed_1)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__wb__DOT___GEN_8 
        = ((1U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__wb__DOT__state)) 
           | (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__wb__DOT__state)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__widget__DOT__monitor__DOT___same_cycle_resp_T_3 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT___dcache_auto_out_c_valid) 
           & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__widget__DOT__monitor__DOT__c_first_counter_1)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__widget__DOT__monitor__DOT___c_first_T_1 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT___widget_auto_in_c_ready) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT___dcache_auto_out_c_valid));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7656(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7656\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT___widget_auto_out_c_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__widget__DOT__repeated_repeater_1__DOT__full) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT___dcache_auto_out_c_valid));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__muxState_1 
        = ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__beatsLeft))
            ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__winner_1)
            : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__state_1));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__muxState_0) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT___dcache_auto_out_c_bits_data[0U] 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT___wb_io_release_bits_data[0U];
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT___dcache_auto_out_c_bits_data[1U] 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT___wb_io_release_bits_data[1U];
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT___dcache_auto_out_c_bits_data[2U] 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT___wb_io_release_bits_data[2U];
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT___dcache_auto_out_c_bits_data[3U] 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT___wb_io_release_bits_data[3U];
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT___dcache_auto_out_c_bits_data[0U] = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT___dcache_auto_out_c_bits_data[1U] = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT___dcache_auto_out_c_bits_data[2U] = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT___dcache_auto_out_c_bits_data[3U] = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT___amoalu_io_out 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__amoalu__DOT__wmask 
            & ((8U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_req_0_uop_mem_cmd))
                ? ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_data_word_0 
                    & (0xffffffff00000000ULL | (QData)((IData)(
                                                               (0x7fffffffU 
                                                                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__amoalu__DOT____VdfgTmp_h6f0cee50__0) 
                                                                   << 0x1fU)))))) 
                   + (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_req_0_data 
                      & (0xffffffff00000000ULL | (QData)((IData)(
                                                                 (0x7fffffffU 
                                                                  | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__amoalu__DOT____VdfgTmp_h6f0cee50__0) 
                                                                     << 0x1fU)))))))
                : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__amoalu__DOT__logic_and) 
                    | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__amoalu__DOT__logic_xor))
                    ? (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__amoalu__DOT__logic_and)
                         ? (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_data_word_0 
                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_req_0_data)
                         : 0ULL) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__amoalu__DOT__logic_xor)
                                     ? (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_data_word_0 
                                        ^ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_req_0_data)
                                     : 0ULL)) : (((1U 
                                                   & ((1U 
                                                       & (IData)(vlSelf->__VdfgTmp_hc167e5a5__0))
                                                       ? 
                                                      (((1U 
                                                         & (IData)(
                                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_data_word_0 
                                                                    >> 0x3fU))) 
                                                        == 
                                                        (1U 
                                                         & (IData)(
                                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_req_0_data 
                                                                    >> 0x3fU))))
                                                        ? 
                                                       (((IData)(
                                                                 (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_data_word_0 
                                                                  >> 0x20U)) 
                                                         < (IData)(
                                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_req_0_data 
                                                                    >> 0x20U))) 
                                                        | (((IData)(
                                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_data_word_0 
                                                                     >> 0x20U)) 
                                                            == (IData)(
                                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_req_0_data 
                                                                        >> 0x20U))) 
                                                           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__amoalu__DOT____VdfgTmp_h4affc1d8__0)))
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_req_0_uop_mem_cmd))
                                                         ? (IData)(
                                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_req_0_data 
                                                                    >> 0x3fU))
                                                         : (IData)(
                                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_data_word_0 
                                                                    >> 0x3fU))))
                                                       : 
                                                      (((1U 
                                                         & (IData)(
                                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_data_word_0 
                                                                    >> 0x1fU))) 
                                                        == 
                                                        (1U 
                                                         & (IData)(
                                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_req_0_data 
                                                                    >> 0x1fU))))
                                                        ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__amoalu__DOT____VdfgTmp_h4affc1d8__0)
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_req_0_uop_mem_cmd))
                                                         ? (IData)(
                                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_req_0_data 
                                                                    >> 0x1fU))
                                                         : (IData)(
                                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_data_word_0 
                                                                    >> 0x1fU))))))
                                                   ? 
                                                  ((0xcU 
                                                    == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_req_0_uop_mem_cmd)) 
                                                   | (0xeU 
                                                      == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_req_0_uop_mem_cmd)))
                                                   : 
                                                  ((0xdU 
                                                    == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_req_0_uop_mem_cmd)) 
                                                   | (0xfU 
                                                      == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_req_0_uop_mem_cmd))))
                                                  ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_data_word_0
                                                  : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_req_0_data)))) 
           | ((~ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__amoalu__DOT__wmask) 
              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_data_word_0));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7657(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7657\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_0__DOT___GEN_1 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__issue_slots_0_grant) 
            & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_0__DOT__state))) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_0__DOT___GEN_0) 
              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_0__DOT____VdfgTmp_h5df2fcb1__0)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_1__DOT___GEN_0 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__issue_slots_1_grant) 
           & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_1__DOT__state)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__issue_slots_2_grant 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_48)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_49));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_50 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_49) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_48));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT___next_1_1to0 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT____VdfgTmp_h3131ad63__0)
            ? 1U : (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT____VdfgTmp_h3cfcdfa3__0)));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7658(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7658\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__fpiu__DOT__narrow__DOT__roundCarryBut2 
        = ((0x3fffffffU == (0x3fffffffU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__fpiu__DOT__narrow__DOT__shiftedSig[2U] 
                                            << 0xcU) 
                                           | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__fpiu__DOT__narrow__DOT__shiftedSig[1U] 
                                              >> 0x14U)))) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__fpiu__DOT__narrow__DOT__roundIncr));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__fpiu__DOT__conv__DOT___roundedInt_T_3 
        = (((- (QData)((IData)((1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__fpiu__DOT__in_in1[2U])))) 
            ^ (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__fpiu__DOT__conv__DOT__shiftedSig[3U])) 
                << 0x2cU) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__fpiu__DOT__conv__DOT__shiftedSig[2U])) 
                              << 0xcU) | ((QData)((IData)(
                                                          vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__fpiu__DOT__conv__DOT__shiftedSig[1U])) 
                                          >> 0x14U)))) 
           + (QData)((IData)(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__fpiu__DOT__conv__DOT__roundIncr) 
                              ^ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__fpiu__DOT__in_in1[2U]))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__fpiu__DOT__conv__DOT__roundCarryBut2 
        = ((0x3fffffffffffffffULL == (0x3fffffffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__fpiu__DOT__conv__DOT__shiftedSig[3U])) 
                                          << 0x2cU) 
                                         | (((QData)((IData)(
                                                             vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__fpiu__DOT__conv__DOT__shiftedSig[2U])) 
                                             << 0xcU) 
                                            | ((QData)((IData)(
                                                               vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__fpiu__DOT__conv__DOT__shiftedSig[1U])) 
                                               >> 0x14U))))) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__fpiu__DOT__conv__DOT__roundIncr));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7659(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7659\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__alu_exe_unit__DOT__ALUUnit__DOT__alu__DOT___GEN_3 
        = ((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__alu_exe_unit__DOT__ALUUnit__DOT__alu__DOT___GEN_2 
                    >> 0xeU)) | (0x33333333U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__alu_exe_unit__DOT__ALUUnit__DOT__alu__DOT___GEN_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__alu_exe_unit__DOT__ALUUnit__DOT__alu__DOT___GEN_4 
        = (3U & ((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__alu_exe_unit__DOT__ALUUnit__DOT__alu__DOT___GEN_2 
                          >> 0xaU)) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__alu_exe_unit__DOT__ALUUnit__DOT__alu__DOT___GEN_0 
                                       >> 4U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__alu_exe_unit__DOT__ALUUnit__DOT__alu__DOT___GEN_5 
        = ((0xfcU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__alu_exe_unit__DOT__ALUUnit__DOT__alu__DOT___GEN_2) 
                     << 2U)) | (0x33U & ((0xf0U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__alu_exe_unit__DOT__ALUUnit__DOT__alu__DOT___GEN 
                                                   >> 8U)) 
                                         | (0xfU & 
                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__alu_exe_unit__DOT__ALUUnit__DOT__alu__DOT__shin_hi 
                                             >> 0x10U)))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7660(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7660\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__icache__DOT__repl_way_prng__DOT__state_4 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__victimLFSR_prng__DOT__state_4 = 0U;
    } else {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__icache__DOT__refill_fire) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__icache__DOT__repl_way_prng__DOT__state_4 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__icache__DOT__repl_way_prng__DOT__state_3;
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__directory__io_read_valid) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__victimLFSR_prng__DOT__state_4 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__victimLFSR_prng__DOT__state_3;
        }
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_from_bus_named_fbus_bus_xing_in_d_bits_param 
        = (3U & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__muxState_4_0)
                   ? ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                       << 0x1dU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                    >> 3U)) : 0U) | 
                 ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__muxState_4_1)
                   ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___coh_wrapper_auto_coherent_jbar_in_d_bits_param)
                   : 0U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_from_bus_named_fbus_bus_xing_in_d_bits_size 
        = (0xfU & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__muxState_4_0)
                     ? ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                         << 0x1bU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                      >> 5U)) : 0U) 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__muxState_4_1)
                       ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___coh_wrapper_auto_coherent_jbar_in_d_bits_size)
                       : 0U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_from_bus_named_fbus_bus_xing_in_d_bits_sink 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__muxState_4_0)
             ? (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                      >> 0x13U)) : 0U) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__muxState_4_1)
                                           ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___coh_wrapper_auto_coherent_jbar_in_d_bits_sink)
                                           : 0U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_from_bus_named_fbus_bus_xing_in_d_bits_denied 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__muxState_4_0) 
            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_bus_xing_in_d_bits_denied)) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__muxState_4_1) 
              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___coh_wrapper_auto_coherent_jbar_in_d_bits_denied)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_from_bus_named_fbus_bus_xing_in_d_bits_corrupt 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__muxState_4_0) 
            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_bus_xing_in_d_bits_corrupt)) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__muxState_4_1) 
              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___coh_wrapper_auto_coherent_jbar_in_d_bits_corrupt)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_from_bus_named_fbus_bus_xing_in_d_bits_source 
        = (0xffU & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__muxState_4_0)
                      ? ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                          << 0x17U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                       >> 9U)) : 0U) 
                    | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__muxState_4_1)
                        ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___coh_wrapper_auto_coherent_jbar_in_d_bits_source)
                        : 0U)));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7661(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7661\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_from_bus_named_fbus_bus_xing_in_d_bits_opcode 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__muxState_4_0)
             ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_bus_xing_in_d_bits_opcode)
             : 0U) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__muxState_4_1)
                       ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___coh_wrapper_auto_coherent_jbar_in_d_bits_opcode)
                       : 0U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_from_boom_tile_tl_master_clock_xing_in_d_bits_param 
        = (3U & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__muxState_6_0)
                   ? ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                       << 0x1dU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                    >> 3U)) : 0U) | 
                 ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__muxState_6_1)
                   ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___coh_wrapper_auto_coherent_jbar_in_d_bits_param)
                   : 0U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_from_boom_tile_tl_master_clock_xing_in_d_bits_size 
        = (0xfU & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__muxState_6_0)
                     ? ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                         << 0x1bU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                      >> 5U)) : 0U) 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__muxState_6_1)
                       ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___coh_wrapper_auto_coherent_jbar_in_d_bits_size)
                       : 0U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_from_boom_tile_tl_master_clock_xing_in_d_bits_denied 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__muxState_6_0) 
            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_bus_xing_in_d_bits_denied)) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__muxState_6_1) 
              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___coh_wrapper_auto_coherent_jbar_in_d_bits_denied)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_from_boom_tile_tl_master_clock_xing_in_d_bits_corrupt 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__muxState_6_0) 
            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_bus_xing_in_d_bits_corrupt)) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__muxState_6_1) 
              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___coh_wrapper_auto_coherent_jbar_in_d_bits_corrupt)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_from_boom_tile_tl_master_clock_xing_in_d_bits_sink 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__muxState_6_0)
             ? (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                      >> 0x13U)) : 0U) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__muxState_6_1)
                                           ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___coh_wrapper_auto_coherent_jbar_in_d_bits_sink)
                                           : 0U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_from_boom_tile_tl_master_clock_xing_in_d_bits_source 
        = (0xfU & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__muxState_6_0)
                     ? ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                         << 0x17U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                      >> 9U)) : 0U) 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__muxState_6_1)
                       ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___coh_wrapper_auto_coherent_jbar_in_d_bits_source)
                       : 0U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_from_boom_tile_tl_master_clock_xing_in_d_bits_opcode 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__muxState_6_0)
             ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_bus_xing_in_d_bits_opcode)
             : 0U) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__muxState_6_1)
                       ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___coh_wrapper_auto_coherent_jbar_in_d_bits_opcode)
                       : 0U));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7662(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7662\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___GEN_80 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___d_first_T_3) 
           & ((6U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___coh_wrapper_auto_coherent_jbar_in_d_bits_opcode)) 
              & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__d_first_counter_1))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___GEN_82 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___d_first_T_3) 
           & ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__d_first_counter_2)) 
              & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___coh_wrapper_auto_coherent_jbar_in_d_bits_opcode))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__d_set 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___d_first_T_3) 
            & ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__d_first_counter_3)) 
               & (IData)((4U == (6U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___coh_wrapper_auto_coherent_jbar_in_d_bits_opcode))))))
            ? (0x7fU & ((IData)(1U) << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___coh_wrapper_auto_coherent_jbar_in_d_bits_sink)))
            : 0U);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__in_xbar__DOT__monitor__DOT___GEN_60 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__in_xbar__DOT__monitor__DOT___d_first_T_2) 
           & ((6U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_bus_xing_in_d_bits_opcode)) 
              & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__in_xbar__DOT__monitor__DOT__d_first_counter_1))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__in_xbar__DOT__monitor__DOT___GEN_61 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__in_xbar__DOT__monitor__DOT___d_first_T_2) 
           & ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__in_xbar__DOT__monitor__DOT__d_first_counter_2)) 
              & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_bus_xing_in_d_bits_opcode))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___d_first_T_2 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___in_xbar_auto_out_d_ready) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___atomics_auto_in_d_valid));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT__do_deq 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___buffer_auto_in_d_valid) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___in_xbar_auto_out_d_ready) 
              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__d_drop)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_from_rockettile_tl_master_clock_xing_in_d_bits_param 
        = (3U & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__muxState_5_0)
                   ? ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                       << 0x1dU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                    >> 3U)) : 0U) | 
                 ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__muxState_5_1)
                   ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___coh_wrapper_auto_coherent_jbar_in_d_bits_param)
                   : 0U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_from_rockettile_tl_master_clock_xing_in_d_bits_size 
        = (0xfU & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__muxState_5_0)
                     ? ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                         << 0x1bU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                      >> 5U)) : 0U) 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__muxState_5_1)
                       ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___coh_wrapper_auto_coherent_jbar_in_d_bits_size)
                       : 0U)));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7663(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7663\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_from_rockettile_tl_master_clock_xing_in_d_bits_denied 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__muxState_5_0) 
            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_bus_xing_in_d_bits_denied)) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__muxState_5_1) 
              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___coh_wrapper_auto_coherent_jbar_in_d_bits_denied)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_from_rockettile_tl_master_clock_xing_in_d_bits_corrupt 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__muxState_5_0) 
            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_bus_xing_in_d_bits_corrupt)) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__muxState_5_1) 
              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___coh_wrapper_auto_coherent_jbar_in_d_bits_corrupt)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_from_rockettile_tl_master_clock_xing_in_d_bits_sink 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__muxState_5_0)
             ? (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                      >> 0x13U)) : 0U) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__muxState_5_1)
                                           ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___coh_wrapper_auto_coherent_jbar_in_d_bits_sink)
                                           : 0U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_from_rockettile_tl_master_clock_xing_in_d_bits_source 
        = (3U & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__muxState_5_0)
                   ? ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                       << 0x17U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                    >> 9U)) : 0U) | 
                 ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__muxState_5_1)
                   ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___coh_wrapper_auto_coherent_jbar_in_d_bits_source)
                   : 0U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_from_rockettile_tl_master_clock_xing_in_d_bits_opcode 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__muxState_5_0)
             ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_bus_xing_in_d_bits_opcode)
             : 0U) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__muxState_5_1)
                       ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___coh_wrapper_auto_coherent_jbar_in_d_bits_opcode)
                       : 0U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr 
        = (0xfffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__dataArb_io_in_0_valid)
                      ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_valid)
                          ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_addr)
                          : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore1_addr))
                      : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__dataArb_io_in_1_valid)
                          ? ((0xfc0U & (((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_addr 
                                                  >> 6U)) 
                                         << 6U) | (0xffffffc0U 
                                                   & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__count) 
                                                      << 3U)))) 
                             | (0x38U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__count) 
                                         << 3U))) : 
                         ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__dataArb_io_in_2_valid)
                           ? ((0xfc0U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__probe_bits_address) 
                              | (0x38U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___releaseDataBeat_T_5) 
                                          << 3U))) : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___alu_io_adder_out)))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7664(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7664\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__alu__DOT__slt 
        = (1U & (((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT____Vcellinp__alu__io_in1 
                                 >> 0x3fU))) == (1U 
                                                 & (IData)(
                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT____Vcellinp__alu__io_in2 
                                                            >> 0x3fU))))
                  ? (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___alu_io_adder_out 
                             >> 0x3fU)) : ((2U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_ctrl_alu_fn))
                                            ? (IData)(
                                                      (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT____Vcellinp__alu__io_in2 
                                                       >> 0x3fU))
                                            : (IData)(
                                                      (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT____Vcellinp__alu__io_in1 
                                                       >> 0x3fU)))));
    vlSelf->__VdfgTmp_hf61b9a9b__0 = (1U & (((0U == 
                                              (0x7fffffffU 
                                               & (IData)(
                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_rs_0 
                                                          >> 0x21U)))) 
                                             | (0x7fffffffU 
                                                == 
                                                (0x7fffffffU 
                                                 & (IData)(
                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_rs_0 
                                                            >> 0x21U)))))
                                             ? (IData)(
                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___alu_io_adder_out 
                                                        >> 0x21U))
                                             : (~ (IData)(
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___alu_io_adder_out 
                                                           >> 0x20U)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__alu__DOT___GEN_0 
        = ((0xff00ff00U & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT____Vcellinp__alu__io_in1) 
                            << 0x10U) | (0xff00U & 
                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__alu__DOT___GEN 
                                          >> 0x10U)))) 
           | (0xff00ffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__alu__DOT___GEN));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__dataArb___05Fgrant_T_1 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__dataArb___05Fgrant_T) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__dataArb_io_in_2_valid));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_e_q__DOT__do_enq 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___tlMasterXbar_auto_in_0_e_ready) 
           & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_21)) 
              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___tlMasterXbar_auto_in_0_d_valid) 
                 & ((~ (IData)((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__counter)))) 
                    & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___canAcceptCachedGrant_T_4)) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__grantIsCached))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_d_ready 
        = (1U & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_22) 
                     | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_21))) 
                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__grantIsCached)) 
                    | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___canAcceptCachedGrant_T_4)) 
                       & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___tlMasterXbar_auto_in_0_e_ready) 
                          | (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__counter)))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7665(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7665\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ll_waddr 
        = (0x1fU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_8)
                     ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_tag) 
                        >> 1U) : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__req_tag)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN 
        = (1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_8)) 
                 & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_wxd))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT___GEN_2 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_a_q__DOT__do_enq) 
           & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__readys_readys 
        = (3U & (~ (((2U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__readys_mask)) 
                     | (1U & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT___readys_filter_T_1) 
                               >> 1U) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__readys_mask)))) 
                    & (((2U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT___readys_filter_T_1) 
                               << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___frontend_auto_icache_master_out_a_valid)) 
                       | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT___readys_filter_T_1)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___GEN_19 
        = ((0U == (0xffffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___in_xbar_auto_out_a_bits_address 
                              >> 0xdU))) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___GEN_12));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__a_isSupported 
        = ((3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___in_xbar_auto_out_a_bits_opcode))
            ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT____VdfgTmp_hf518bd0f__0)
            : ((2U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___in_xbar_auto_out_a_bits_opcode)) 
               | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT____VdfgTmp_hf518bd0f__0)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT____VdfgTmp_h14e36487__0 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT__buf_block)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT____VdfgTmp_hfd977f5c__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___setMatches_T_1 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT__request_valid) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT__request_set) 
              == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__request_bits_set)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___setMatches_T_3 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT__request_valid) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT__request_set) 
              == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__request_bits_set)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___setMatches_T_5 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__request_valid) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__request_set) 
              == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__request_bits_set)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___setMatches_T_7 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__request_valid) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__request_set) 
              == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__request_bits_set)));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7666(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7666\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___setMatches_T_9 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT__request_valid) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT__request_set) 
              == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__request_bits_set)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___setMatches_T_11 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT__request_valid) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT__request_set) 
              == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__request_bits_set)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___setMatches_T_13 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__request_valid) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__request_set) 
              == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__request_bits_set)));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__lfsr_prng__DOT__state_4 = 0U;
    } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__replace) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__lfsr_prng__DOT__state_4 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__lfsr_prng__DOT__state_3;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT__putbuffer__DOT___tail_ext_R0_data 
        = ((0x27U >= (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___sinkA_io_req_bits_put))
            ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT__putbuffer__DOT__tail_ext__DOT__Memory
           [vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___sinkA_io_req_bits_put]
            : 0U);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___view___05FWIRE_6_put 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___sinkC_io_req_valid)
            ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__put)
            : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkX__DOT__x_q__DOT__full)
                ? 0U : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___sinkA_io_req_bits_put)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT__putbuffer__DOT____VdfgTmp_h271546f1__0 
        = (1U & (IData)((0xffffffffffULL & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT__putbuffer__DOT__valid 
                                            >> (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___sinkA_io_req_bits_put)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___GEN_16 
        = ((1U | ((0x2000U & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___mshr_request_T_137) 
                                  | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___mshr_request_T_114) 
                                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___GEN_6) 
                                        | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____VdfgTmp_hdd166087__0))))) 
                              << 0xdU)) | ((0x1000U 
                                            & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___mshr_request_T_114) 
                                                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___mshr_request_T_91) 
                                                      | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___GEN_7) 
                                                         | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____VdfgTmp_hdd5b08a5__0))))) 
                                               << 0xcU)) 
                                           | ((0x800U 
                                               & ((~ 
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___GEN_6) 
                                                    | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___GEN_8) 
                                                       | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____VdfgTmp_h02a89ccb__0)))) 
                                                  << 0xbU)) 
                                              | ((0x400U 
                                                  & ((~ 
                                                      ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___GEN_7) 
                                                       | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___GEN_9) 
                                                          | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____VdfgTmp_h4fc8b0d8__0)))) 
                                                     << 0xaU)) 
                                                 | ((0x200U 
                                                     & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____VdfgTmp_hdd166087__0)) 
                                                        << 9U)) 
                                                    | ((0x100U 
                                                        & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____VdfgTmp_hdd5b08a5__0)) 
                                                           << 8U)) 
                                                       | ((0x80U 
                                                           & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____VdfgTmp_h02a89ccb__0)) 
                                                              << 7U)) 
                                                          | ((0x40U 
                                                              & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____VdfgTmp_h4fc8b0d8__0)) 
                                                                 << 6U)) 
                                                             | ((0x20U 
                                                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___GEN_15)) 
                                                                    << 5U)) 
                                                                | ((0x10U 
                                                                    & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___GEN_13)) 
                                                                       << 4U)) 
                                                                   | ((8U 
                                                                       & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___GEN_14)) 
                                                                          << 3U)) 
                                                                      | ((4U 
                                                                          & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___GEN_10)) 
                                                                             << 2U)) 
                                                                         | (2U 
                                                                            & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___robin_request_T)) 
                                                                               << 1U))))))))))))))) 
           & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___mshr_request_T_160) 
               << 0xdU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___mshr_request_T_137) 
                            << 0xcU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___mshr_request_T_114) 
                                         << 0xbU) | 
                                        (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___mshr_request_T_91) 
                                          << 0xaU) 
                                         | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___mshr_request_T_68) 
                                             << 9U) 
                                            | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___mshr_request_T_45) 
                                                << 8U) 
                                               | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___mshr_request_T_22) 
                                                   << 7U) 
                                                  | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___robin_request_T)))))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7667(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7667\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__ptw__DOT____Vcellinp__r_pte_barrier__io_x_ppn 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__ptw__DOT___GEN_23)
            ? (QData)((IData)((0xfffffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__ptw__DOT__r_2 
                                                   >> 6U)))))
            : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__ptw__DOT___r_pte_T_5)
                ? (QData)((IData)(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__ptw__DOT___hits_T) 
                                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__ptw__DOT__valid))
                                     ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__ptw__DOT__data_0
                                     : 0U) | ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__ptw__DOT___hits_T_1) 
                                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__ptw__DOT__valid) 
                                                   >> 1U))
                                                ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__ptw__DOT__data_1
                                                : 0U) 
                                              | ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__ptw__DOT___hits_T_2) 
                                                   & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__ptw__DOT__valid) 
                                                      >> 2U))
                                                   ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__ptw__DOT__data_2
                                                   : 0U) 
                                                 | ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__ptw__DOT___hits_T_3) 
                                                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__ptw__DOT__valid) 
                                                         >> 3U))
                                                      ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__ptw__DOT__data_3
                                                      : 0U) 
                                                    | ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__ptw__DOT___hits_T_4) 
                                                         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__ptw__DOT__valid) 
                                                            >> 4U))
                                                         ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__ptw__DOT__data_4
                                                         : 0U) 
                                                       | ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__ptw__DOT___hits_T_5) 
                                                            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__ptw__DOT__valid) 
                                                               >> 5U))
                                                            ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__ptw__DOT__data_5
                                                            : 0U) 
                                                          | ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__ptw__DOT___hits_T_6) 
                                                               & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__ptw__DOT__valid) 
                                                                  >> 6U))
                                                               ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__ptw__DOT__data_6
                                                               : 0U) 
                                                             | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__ptw__DOT___hits_T_7) 
                                                                 & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__ptw__DOT__valid) 
                                                                    >> 7U))
                                                                 ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__ptw__DOT__data_7
                                                                 : 0U))))))))))
                : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__ptw__DOT__mem_resp_valid)
                    ? (QData)((IData)((0xfffffU & (IData)(
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__ptw__DOT__mem_resp_data 
                                                           >> 0xaU)))))
                    : (((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT___ptw_io_requestor_0_resp_bits_homogeneous) 
                            | (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__ptw__DOT__count)))) 
                        & (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__ptw__DOT__state)))
                        ? ((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__ptw__DOT__count))
                            ? ((0xffffffffe00ULL & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__ptw__DOT__r_pte_ppn) 
                               | (QData)((IData)((0x1ffU 
                                                  & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__ptw__DOT__r_req_addr))))
                            : (((QData)((IData)((0x3ffffffU 
                                                 & (IData)(
                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__ptw__DOT__r_pte_ppn 
                                                            >> 0x12U))))) 
                                << 0x12U) | (QData)((IData)(
                                                            (0x3ffffU 
                                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__ptw__DOT__r_req_addr)))))
                        : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__ptw__DOT___r_pte_T_23)
                            ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__csr__DOT__reg_satp_ppn
                            : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__ptw__DOT__r_pte_ppn)))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7668(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7668\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__ptw__DOT___GEN_22 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__ptw__DOT___GEN_23) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__ptw__DOT___r_pte_T_5));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__tlb__DOT___GEN_30 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__tlb__DOT___GEN_29) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__tlb__DOT__special_entry_valid_0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_24 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_23) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT__special_entry_valid_0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_25 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT____VdfgTmp_h0eac4f7d__0) 
           & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT__r_superpage_repl_addr)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_27 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT____VdfgTmp_h0eac4f7d__0) 
           & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT__r_superpage_repl_addr)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_29 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT____VdfgTmp_h0eac4f7d__0) 
           & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT__r_superpage_repl_addr)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_31 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT____VdfgTmp_h0eac4f7d__0) 
           & (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT__r_superpage_repl_addr)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__tlb__DOT___GEN_32 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__tlb__DOT____VdfgTmp_hea11405f__0) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__tlb__DOT___GEN_31));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__tlb__DOT___GEN_35 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__tlb__DOT____VdfgTmp_hea11405f__0) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__tlb__DOT___GEN_34));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__tlb__DOT___GEN_38 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__tlb__DOT____VdfgTmp_hea11405f__0) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__tlb__DOT___GEN_37));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__tlb__DOT___GEN_41 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__tlb__DOT____VdfgTmp_hea11405f__0) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__tlb__DOT___GEN_40));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT____VdfgTmp_h456d870d__0 
        = (1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__ptw__DOT__resp_valid_0)) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_34)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__tlb__DOT____VdfgTmp_h456d870d__0 
        = (1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__ptw__DOT__resp_valid_1)) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_34)));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__widget__DOT__repeated_repeater__DOT__full) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__widget__DOT___repeated_repeater_io_deq_bits_mask 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__widget__DOT__repeated_repeater__DOT__saved_mask;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT___widget_auto_out_a_bits_opcode 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__widget__DOT__repeated_repeater__DOT__saved_opcode;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT___widget_auto_out_a_bits_param 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__widget__DOT__repeated_repeater__DOT__saved_param;
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__widget__DOT___repeated_repeater_io_deq_bits_mask 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT___dcache_auto_out_a_bits_mask;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT___widget_auto_out_a_bits_opcode 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT___dcache_auto_out_a_bits_opcode;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT___widget_auto_out_a_bits_param 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT___dcache_auto_out_a_bits_param;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__widget__DOT__monitor__DOT__same_cycle_resp 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__widget__DOT__monitor__DOT___same_cycle_resp_T_1) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT___dcache_auto_out_a_bits_source) 
              == (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                        >> 9U))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7669(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7669\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__widget__DOT__repeated_repeater__DOT__full) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT___widget_auto_out_a_bits_source 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__widget__DOT__repeated_repeater__DOT__saved_source;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT___widget_auto_out_a_bits_size 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__widget__DOT__repeated_repeater__DOT__saved_size;
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT___widget_auto_out_a_bits_source 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT___dcache_auto_out_a_bits_source;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT___widget_auto_out_a_bits_size 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT___dcache_auto_out_a_bits_size;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__widget__DOT__monitor__DOT___GEN_16 
        = ((0xdU > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT___dcache_auto_out_a_bits_size)) 
           & ((5U > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT___dcache_auto_out_a_bits_source)) 
              | (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT___dcache_auto_out_a_bits_source))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__widget__DOT__monitor__DOT____VdfgTmp_h033361d2__0 
        = ((0U == ((0x7ff00U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT___dcache_auto_out_a_bits_address 
                                >> 0xdU)) | ((0xf0U 
                                              & (0x80U 
                                                 ^ 
                                                 (0x7fff0U 
                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT___dcache_auto_out_a_bits_address 
                                                     >> 0xdU)))) 
                                             | (0xfU 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT___dcache_auto_out_a_bits_address 
                                                   >> 0xcU))))) 
           | ((0U == ((0xfc00U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT___dcache_auto_out_a_bits_address 
                                  >> 0x10U)) | (0x3ffU 
                                                & (0x200U 
                                                   ^ 
                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT___dcache_auto_out_a_bits_address 
                                                    >> 0x10U))))) 
              | ((0U == ((0xfc000U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT___dcache_auto_out_a_bits_address 
                                      >> 0xcU)) | (0x3fffU 
                                                   & (0x2010U 
                                                      ^ 
                                                      (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT___dcache_auto_out_a_bits_address 
                                                       >> 0xcU))))) 
                 | ((0U == ((0xf000U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT___dcache_auto_out_a_bits_address 
                                        >> 0x10U)) 
                            | (0xfffU & (0x800U ^ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT___dcache_auto_out_a_bits_address 
                                                   >> 0x10U))))) 
                    | ((0U == ((0x3cU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT___dcache_auto_out_a_bits_address 
                                         >> 0x1aU)) 
                               | (3U & (~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT___dcache_auto_out_a_bits_address 
                                           >> 0x1aU))))) 
                       | ((0U == ((0xe0000U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT___dcache_auto_out_a_bits_address 
                                               >> 0xcU)) 
                                  | (0x1ffffU & (0x10020U 
                                                 ^ 
                                                 (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT___dcache_auto_out_a_bits_address 
                                                  >> 0xcU))))) 
                          | (8U == (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT___dcache_auto_out_a_bits_address 
                                    >> 0x1cU))))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7670(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7670\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__widget__DOT__monitor__DOT___GEN_24 
        = (0U == ((0xffffcU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT___dcache_auto_out_a_bits_address 
                               >> 0xcU)) | (3U & (~ 
                                                  (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT___dcache_auto_out_a_bits_address 
                                                   >> 0xcU)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT___widget_auto_out_a_bits_address 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__widget__DOT__repeated_repeater__DOT__full)
            ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__widget__DOT__repeated_repeater__DOT__saved_address
            : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT___dcache_auto_out_a_bits_address);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__widget__DOT__monitor__DOT__mask_acc 
        = ((0U != (3U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT___dcache_auto_out_a_bits_size) 
                         >> 2U))) | ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT___dcache_auto_out_a_bits_address 
                                         >> 3U)) & 
                                     (3U == (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT___dcache_auto_out_a_bits_size)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__widget__DOT__monitor__DOT__mask_acc_1 
        = ((0U != (3U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT___dcache_auto_out_a_bits_size) 
                         >> 2U))) | ((3U == (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT___dcache_auto_out_a_bits_size))) 
                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT___dcache_auto_out_a_bits_address 
                                        >> 3U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__widget__DOT__monitor__DOT__mask_eq_2 
        = (IData)((0U == (0xcU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT___dcache_auto_out_a_bits_address)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__widget__DOT__monitor__DOT__mask_eq_3 
        = (IData)((4U == (0xcU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT___dcache_auto_out_a_bits_address)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__widget__DOT__monitor__DOT__mask_eq_4 
        = (IData)((8U == (0xcU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT___dcache_auto_out_a_bits_address)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__widget__DOT__monitor__DOT__mask_eq_5 
        = (IData)((0xcU == (0xcU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT___dcache_auto_out_a_bits_address)));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7671(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7671\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__refill_done 
        = (((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__counter)) 
            | (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__beats1))) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT___GEN_0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT___GEN_0 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT___mshrs_3_io_mem_grant_ready) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT____Vcellinp__mshrs_3__io_mem_grant_valid));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT___dcache_auto_out_d_ready 
        = ((4U == (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                         >> 9U))) | ((5U == (7U & (
                                                   vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 9U))) 
                                     | ((3U == (7U 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 9U)))
                                         ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT___mshrs_3_io_mem_grant_ready)
                                         : ((2U == 
                                             (7U & 
                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                               >> 9U)))
                                             ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT___mshrs_2_io_mem_grant_ready)
                                             : ((1U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 9U)))
                                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT___mshrs_1_io_mem_grant_ready)
                                                 : (IData)(
                                                           ((0U 
                                                             == 
                                                             (0xe00U 
                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U])) 
                                                            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT___mshrs_0_io_mem_grant_ready))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT___metaWriteArb_io_out_bits_way_en 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT___mshrs_io_meta_write_valid)
            ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT___mshrs_0_io_meta_write_valid)
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__req_way_en)
                : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT___mshrs_1_io_meta_write_valid)
                    ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__req_way_en)
                    : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT___mshrs_2_io_meta_write_valid)
                        ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__req_way_en)
                        : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__req_way_en))))
            : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__prober__DOT__way_en));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__meta_0__DOT____Vcellinp__tag_array__W0_addr 
        = (0x3fU & ((0x40U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__meta_0__DOT__rst_cnt))
                     ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT___mshrs_io_meta_write_valid)
                         ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT___mshrs_0_io_meta_write_valid)
                             ? (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__req_addr 
                                        >> 6U)) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT___mshrs_1_io_meta_write_valid)
                                                    ? (IData)(
                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__req_addr 
                                                               >> 6U))
                                                    : 
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT___mshrs_2_io_meta_write_valid)
                                                     ? (IData)(
                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__req_addr 
                                                                >> 6U))
                                                     : (IData)(
                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__req_addr 
                                                                >> 6U)))))
                         : (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__prober__DOT__req_address 
                            >> 6U)) : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__meta_0__DOT__rst_cnt)));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7672(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7672\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__meta_0__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_0_W0_data 
        = ((((0x40U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__meta_0__DOT__rst_cnt))
              ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT___mshrs_io_meta_write_valid)
                  ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT___mshrs_0_io_meta_write_valid)
                      ? ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__state))
                          ? 0U : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__new_coh_state))
                      : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT___mshrs_1_io_meta_write_valid)
                          ? ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__state))
                              ? 0U : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__new_coh_state))
                          : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT___mshrs_2_io_meta_write_valid)
                              ? ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__state))
                                  ? 0U : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__new_coh_state))
                              : ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__state))
                                  ? 0U : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__new_coh_state)))))
                  : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__prober__DOT___GEN_9)
                      ? 2U : ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__prober__DOT___GEN))
                               ? 1U : ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__prober__DOT___GEN))
                                        ? 0U : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__prober__DOT____VdfgTmp_h5b4e89bc__0) 
                                                | (5U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__prober__DOT___GEN)))))))
              : 0U) << 0x14U) | ((0x40U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__meta_0__DOT__rst_cnt))
                                  ? (0xfffffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT___mshrs_io_meta_write_valid)
                                                  ? 
                                                 ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT___mshrs_0_io_meta_write_valid)
                                                   ? (IData)(
                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__req_addr 
                                                              >> 0xcU))
                                                   : 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT___mshrs_1_io_meta_write_valid)
                                                    ? (IData)(
                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__req_addr 
                                                               >> 0xcU))
                                                    : 
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT___mshrs_2_io_meta_write_valid)
                                                     ? (IData)(
                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__req_addr 
                                                                >> 0xcU))
                                                     : (IData)(
                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__req_addr 
                                                                >> 0xcU)))))
                                                  : 
                                                 (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__prober__DOT__req_address 
                                                  >> 0xcU)))
                                  : 0U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__meta_0__DOT__tag_array_MPORT_en 
        = (1U & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__meta_0__DOT__rst_cnt) 
                     >> 6U)) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT___mshrs_io_meta_write_valid) 
                                 | (9U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__prober__DOT__state))) 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__meta_0__DOT__rst_cnt) 
                                   >> 6U))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7673(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7673\n"); );
    // Body
    vlSelf->__VdfgTmp_h35573a37__0 = (vlSelf->__VdfgTmp_h11b97efa__0 
                                      & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__divsqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_hac9988f1__0);
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__rrd_rs1_data_0_REG) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__exe_reg_rs1_data_0[0U] = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__exe_reg_rs1_data_0[1U] = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__exe_reg_rs1_data_0[2U] = 0U;
    } else if ((0x5fU >= (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregfile__DOT__read_addrs_0))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__exe_reg_rs1_data_0[0U] 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregfile__DOT__regfile_ext__DOT__Memory
            [vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregfile__DOT__read_addrs_0][0U];
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__exe_reg_rs1_data_0[1U] 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregfile__DOT__regfile_ext__DOT__Memory
            [vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregfile__DOT__read_addrs_0][1U];
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__exe_reg_rs1_data_0[2U] 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregfile__DOT__regfile_ext__DOT__Memory
            [vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregfile__DOT__read_addrs_0][2U];
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__exe_reg_rs1_data_0[0U] = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__exe_reg_rs1_data_0[1U] = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__exe_reg_rs1_data_0[2U] = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__rawA_S_isNaN 
        = (IData)((0xe0000000U == (0xe0000000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__r_buffer_fin_in1[1U])));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__rawA_S_isInf 
        = (IData)((0xc0000000U == (0xe0000000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__r_buffer_fin_in1[1U])));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__divsqrt__DOT___ds_io_latchMulAddA_0 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___io_latchMulAddB_0_T) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_B6_div) 
              | ((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_B)) 
                 | ((3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_B)) 
                    | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT____VdfgTmp_h7ad706f6__0)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__valid_leaving_PA 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__normalCase_PA)
            ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__valid_normalCase_leaving_PA)
            : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__ready_PB));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__exe_reg_uops_0_uopc 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__rrd_kill)
            ? 0U : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__rrd_uops_0_REG_uopc));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__may_fire_input 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__r_buffer_val) 
           & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__r_divsqrt_val) 
                  | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__r_out_val))) 
              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__r_buffer_fin_div) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__r_buffer_fin_sqrt))));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__r_buffer_fin_sqrt) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT____Vcellinp__divsqrt__io_b[0U] 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__r_buffer_fin_in1[0U];
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT____Vcellinp__divsqrt__io_b[1U] 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__r_buffer_fin_in1[1U];
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT____Vcellinp__divsqrt__io_b[2U] 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__r_buffer_fin_in1[2U];
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT____Vcellinp__divsqrt__io_b[0U] 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__r_buffer_fin_in2[0U];
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT____Vcellinp__divsqrt__io_b[1U] 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__r_buffer_fin_in2[1U];
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT____Vcellinp__divsqrt__io_b[2U] 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__r_buffer_fin_in2[2U];
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__csr__DOT___csr_wen_T_4) {
        if ((0xfffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__csr__DOT___decoded_decoded_T_4))) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__csr__DOT__reg_frm 
                = (7U & ((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__csr__DOT___wdata_T_2 
                                  >> 5U)) & (IData)(
                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__csr__DOT___wdata_T_6 
                                                     >> 5U))));
        } else if ((0xfffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__csr__DOT___decoded_decoded_T_2))) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__csr__DOT__reg_frm 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__csr__DOT___GEN_43;
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7674(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7674\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__exe_reg_uops_0_imm_packed 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__rrd_kill)
            ? 0U : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__rrd_uops_0_REG_imm_packed);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__tage__DOT___GEN_163 
        = ((~ (IData)((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__tage__DOT__s1_update_bits_cfi_idx_bits)))) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__tage__DOT____VdfgTmp_ha0ba0711__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__tage__DOT___GEN_164 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__tage__DOT____VdfgTmp_ha0ba0711__0) 
           & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__tage__DOT__s1_update_bits_cfi_idx_bits)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__tage__DOT___GEN_165 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__tage__DOT____VdfgTmp_ha0ba0711__0) 
           & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__tage__DOT__s1_update_bits_cfi_idx_bits)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__tage__DOT___GEN_166 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__tage__DOT____VdfgTmp_ha0ba0711__0) 
           & (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__tage__DOT__s1_update_bits_cfi_idx_bits)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__tage__DOT___GEN_167 
        = ((~ (IData)((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__tage__DOT__s1_update_bits_cfi_idx_bits)))) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__tage__DOT____VdfgTmp_ha0be7704__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__tage__DOT___GEN_168 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__tage__DOT____VdfgTmp_ha0be7704__0) 
           & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__tage__DOT__s1_update_bits_cfi_idx_bits)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__tage__DOT___GEN_169 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__tage__DOT____VdfgTmp_ha0be7704__0) 
           & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__tage__DOT__s1_update_bits_cfi_idx_bits)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__tage__DOT___GEN_170 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__tage__DOT____VdfgTmp_ha0be7704__0) 
           & (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__tage__DOT__s1_update_bits_cfi_idx_bits)));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7675(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7675\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__tage__DOT___GEN_171 
        = ((~ (IData)((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__tage__DOT__s1_update_bits_cfi_idx_bits)))) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__tage__DOT____VdfgTmp_ha0f767db__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__tage__DOT___GEN_172 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__tage__DOT____VdfgTmp_ha0f767db__0) 
           & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__tage__DOT__s1_update_bits_cfi_idx_bits)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__tage__DOT___GEN_173 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__tage__DOT____VdfgTmp_ha0f767db__0) 
           & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__tage__DOT__s1_update_bits_cfi_idx_bits)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__tage__DOT___GEN_174 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__tage__DOT____VdfgTmp_ha0f767db__0) 
           & (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__tage__DOT__s1_update_bits_cfi_idx_bits)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__tage__DOT___GEN_175 
        = ((~ (IData)((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__tage__DOT__s1_update_bits_cfi_idx_bits)))) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__tage__DOT____VdfgTmp_ha0f2d66e__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__tage__DOT___GEN_176 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__tage__DOT____VdfgTmp_ha0f2d66e__0) 
           & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__tage__DOT__s1_update_bits_cfi_idx_bits)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__tage__DOT___GEN_177 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__tage__DOT____VdfgTmp_ha0f2d66e__0) 
           & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__tage__DOT__s1_update_bits_cfi_idx_bits)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__tage__DOT___GEN_178 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__tage__DOT____VdfgTmp_ha0f2d66e__0) 
           & (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__tage__DOT__s1_update_bits_cfi_idx_bits)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__tage__DOT___GEN_179 
        = ((~ (IData)((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__tage__DOT__s1_update_bits_cfi_idx_bits)))) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__tage__DOT____VdfgTmp_ha72ed06a__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__tage__DOT___GEN_180 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__tage__DOT____VdfgTmp_ha72ed06a__0) 
           & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__tage__DOT__s1_update_bits_cfi_idx_bits)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__tage__DOT___GEN_181 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__tage__DOT____VdfgTmp_ha72ed06a__0) 
           & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__tage__DOT__s1_update_bits_cfi_idx_bits)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__tage__DOT___GEN_182 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__tage__DOT____VdfgTmp_ha72ed06a__0) 
           & (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__tage__DOT__s1_update_bits_cfi_idx_bits)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__tage__DOT___GEN_183 
        = ((~ (IData)((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__tage__DOT__s1_update_bits_cfi_idx_bits)))) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__tage__DOT____VdfgTmp_ha72ac087__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__tage__DOT___GEN_184 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__tage__DOT____VdfgTmp_ha72ac087__0) 
           & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__tage__DOT__s1_update_bits_cfi_idx_bits)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__tage__DOT___GEN_185 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__tage__DOT____VdfgTmp_ha72ac087__0) 
           & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__tage__DOT__s1_update_bits_cfi_idx_bits)));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7676(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7676\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__tage__DOT___GEN_186 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__tage__DOT____VdfgTmp_ha72ac087__0) 
           & (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__tage__DOT__s1_update_bits_cfi_idx_bits)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT___GEN_163 
        = ((~ (IData)((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__s1_update_bits_cfi_idx_bits)))) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT____VdfgTmp_ha0ba0711__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT___GEN_164 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT____VdfgTmp_ha0ba0711__0) 
           & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__s1_update_bits_cfi_idx_bits)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT___GEN_165 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT____VdfgTmp_ha0ba0711__0) 
           & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__s1_update_bits_cfi_idx_bits)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT___GEN_166 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT____VdfgTmp_ha0ba0711__0) 
           & (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__s1_update_bits_cfi_idx_bits)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT___GEN_167 
        = ((~ (IData)((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__s1_update_bits_cfi_idx_bits)))) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT____VdfgTmp_ha0be7704__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT___GEN_168 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT____VdfgTmp_ha0be7704__0) 
           & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__s1_update_bits_cfi_idx_bits)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT___GEN_169 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT____VdfgTmp_ha0be7704__0) 
           & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__s1_update_bits_cfi_idx_bits)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT___GEN_170 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT____VdfgTmp_ha0be7704__0) 
           & (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__s1_update_bits_cfi_idx_bits)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT___GEN_171 
        = ((~ (IData)((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__s1_update_bits_cfi_idx_bits)))) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT____VdfgTmp_ha0f767db__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT___GEN_172 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT____VdfgTmp_ha0f767db__0) 
           & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__s1_update_bits_cfi_idx_bits)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT___GEN_173 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT____VdfgTmp_ha0f767db__0) 
           & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__s1_update_bits_cfi_idx_bits)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT___GEN_174 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT____VdfgTmp_ha0f767db__0) 
           & (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__s1_update_bits_cfi_idx_bits)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT___GEN_175 
        = ((~ (IData)((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__s1_update_bits_cfi_idx_bits)))) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT____VdfgTmp_ha0f2d66e__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT___GEN_176 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT____VdfgTmp_ha0f2d66e__0) 
           & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__s1_update_bits_cfi_idx_bits)));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7677(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7677\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT___GEN_177 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT____VdfgTmp_ha0f2d66e__0) 
           & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__s1_update_bits_cfi_idx_bits)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT___GEN_178 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT____VdfgTmp_ha0f2d66e__0) 
           & (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__s1_update_bits_cfi_idx_bits)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT___GEN_179 
        = ((~ (IData)((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__s1_update_bits_cfi_idx_bits)))) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT____VdfgTmp_ha72ed06a__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT___GEN_180 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT____VdfgTmp_ha72ed06a__0) 
           & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__s1_update_bits_cfi_idx_bits)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT___GEN_181 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT____VdfgTmp_ha72ed06a__0) 
           & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__s1_update_bits_cfi_idx_bits)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT___GEN_182 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT____VdfgTmp_ha72ed06a__0) 
           & (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__s1_update_bits_cfi_idx_bits)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT___GEN_183 
        = ((~ (IData)((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__s1_update_bits_cfi_idx_bits)))) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT____VdfgTmp_ha72ac087__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT___GEN_184 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT____VdfgTmp_ha72ac087__0) 
           & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__s1_update_bits_cfi_idx_bits)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT___GEN_185 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT____VdfgTmp_ha72ac087__0) 
           & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__s1_update_bits_cfi_idx_bits)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT___GEN_186 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT____VdfgTmp_ha72ac087__0) 
           & (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__s1_update_bits_cfi_idx_bits)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_h367e3904__0 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_isZero) 
           | VL_GTS_III(14, 0x3ceU, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
           & (VL_GTS_III(14, 0x3ceU, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                 | (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_roundingMode_pipe_b)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
           & VL_LTS_III(4, 2U, (0xfU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp) 
                                        >> 0xaU))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_10__DOT__do_enq 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_10__DOT__full)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___wqueues_15_enq_valid_T) 
              & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT___tl2axi4_auto_out_aw_bits_id))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7678(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7678\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_11__DOT__do_enq 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_11__DOT__full)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___wqueues_15_enq_valid_T) 
              & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT___tl2axi4_auto_out_aw_bits_id))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_12__DOT__do_enq 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_12__DOT__full)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___wqueues_15_enq_valid_T) 
              & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT___tl2axi4_auto_out_aw_bits_id))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_13__DOT__do_enq 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_13__DOT__full)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___wqueues_15_enq_valid_T) 
              & (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT___tl2axi4_auto_out_aw_bits_id))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_14__DOT__do_enq 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_14__DOT__full)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___wqueues_15_enq_valid_T) 
              & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT___tl2axi4_auto_out_aw_bits_id))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_15__DOT__do_enq 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_15__DOT__full)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___wqueues_15_enq_valid_T) 
              & (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT___tl2axi4_auto_out_aw_bits_id))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_16__DOT__do_enq 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_16__DOT__full)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___wqueues_15_enq_valid_T) 
              & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT___tl2axi4_auto_out_aw_bits_id))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_17__DOT__do_enq 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_17__DOT__full)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___wqueues_15_enq_valid_T) 
              & (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT___tl2axi4_auto_out_aw_bits_id))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_18__DOT__do_enq 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_18__DOT__full)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___wqueues_15_enq_valid_T) 
              & (8U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT___tl2axi4_auto_out_aw_bits_id))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_19__DOT__do_enq 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_19__DOT__full)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___wqueues_15_enq_valid_T) 
              & (9U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT___tl2axi4_auto_out_aw_bits_id))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue__DOT__do_enq 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue__DOT__full)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___rqueues_15_enq_valid_T) 
              & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT___tl2axi4_auto_out_aw_bits_id))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_1__DOT__do_enq 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_1__DOT__full)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___rqueues_15_enq_valid_T) 
              & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT___tl2axi4_auto_out_aw_bits_id))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7679(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7679\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_2__DOT__do_enq 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_2__DOT__full)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___rqueues_15_enq_valid_T) 
              & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT___tl2axi4_auto_out_aw_bits_id))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_3__DOT__do_enq 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_3__DOT__full)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___rqueues_15_enq_valid_T) 
              & (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT___tl2axi4_auto_out_aw_bits_id))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_4__DOT__do_enq 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_4__DOT__full)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___rqueues_15_enq_valid_T) 
              & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT___tl2axi4_auto_out_aw_bits_id))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_5__DOT__do_enq 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_5__DOT__full)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___rqueues_15_enq_valid_T) 
              & (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT___tl2axi4_auto_out_aw_bits_id))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_6__DOT__do_enq 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_6__DOT__full)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___rqueues_15_enq_valid_T) 
              & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT___tl2axi4_auto_out_aw_bits_id))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_7__DOT__do_enq 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_7__DOT__full)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___rqueues_15_enq_valid_T) 
              & (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT___tl2axi4_auto_out_aw_bits_id))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_8__DOT__do_enq 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_8__DOT__full)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___rqueues_15_enq_valid_T) 
              & (8U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT___tl2axi4_auto_out_aw_bits_id))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_9__DOT__do_enq 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_9__DOT__full)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___rqueues_15_enq_valid_T) 
              & (9U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT___tl2axi4_auto_out_aw_bits_id))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_in_d_bits_denied 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__muxState_1_0) 
            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___binder_auto_in_d_bits_denied)) 
           | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__muxState_1_1) 
               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__q__DOT___ram_ext_R0_data[0U] 
                  >> 0xeU)) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__muxState_1_2) 
                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__q_1__DOT___ram_ext_R0_data[0U] 
                                  >> 0xeU))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_in_d_bits_corrupt 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__muxState_1_0) 
            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___binder_auto_in_d_bits_corrupt)) 
           | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__muxState_1_1) 
               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__q__DOT___ram_ext_R0_data[2U] 
                  >> 0xfU)) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__muxState_1_2) 
                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__q_1__DOT___ram_ext_R0_data[2U] 
                                  >> 0xfU))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7680(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7680\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_in_d_bits_size 
        = (7U & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__muxState_1_0)
                   ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___binder_auto_in_d_bits_size)
                   : 0U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__muxState_1_1)
                              ? ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__q__DOT___ram_ext_R0_data[0U] 
                                  << 0x1bU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__q__DOT___ram_ext_R0_data[0U] 
                                               >> 5U))
                              : 0U) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__muxState_1_2)
                                        ? ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__q_1__DOT___ram_ext_R0_data[0U] 
                                            << 0x1bU) 
                                           | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__q_1__DOT___ram_ext_R0_data[0U] 
                                              >> 5U))
                                        : 0U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_in_d_bits_source 
        = (7U & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__muxState_1_0)
                   ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___binder_auto_in_d_bits_source) 
                      >> 1U) : 0U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__muxState_1_1)
                                        ? ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__q__DOT___ram_ext_R0_data[0U] 
                                            << 0x18U) 
                                           | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__q__DOT___ram_ext_R0_data[0U] 
                                              >> 8U))
                                        : 0U) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__muxState_1_2)
                                                  ? 
                                                 ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__q_1__DOT___ram_ext_R0_data[0U] 
                                                   << 0x18U) 
                                                  | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__q_1__DOT___ram_ext_R0_data[0U] 
                                                     >> 8U))
                                                  : 0U))));
    vlSelf->__VdfgTmp_h54c3db12__0 = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_source) 
                                      == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___binder_auto_in_d_bits_source));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__mbus_xbar__DOT__monitor__DOT___GEN_34 
        = ((6U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___binder_auto_in_d_bits_opcode)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___binder_auto_in_d_valid) 
              & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__mbus_xbar__DOT__monitor__DOT__d_first_counter_1))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__fixer__DOT__monitor__DOT___GEN_34 
        = ((6U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___binder_auto_in_d_bits_opcode)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___binder_auto_in_d_valid) 
              & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_1))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___GEN_34 
        = ((6U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___binder_auto_in_d_bits_opcode)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___binder_auto_in_d_valid) 
              & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__d_first_counter_1))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__d_d_bits_opcode 
        = (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___binder_auto_in_d_bits_source)) 
            & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___binder_auto_in_d_bits_opcode)))
            ? 6U : (((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___binder_auto_in_d_bits_opcode)) 
                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___binder_auto_in_d_bits_source))
                     ? 5U : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___binder_auto_in_d_bits_opcode)));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7681(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7681\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp 
        = (0x7fffU & (((0x4000U & (((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__fpmu__DOT__in_pipe_b_in1[1U] 
                                     >> 0x14U) - (IData)(0x700U)) 
                                   << 1U)) | (0x3fffU 
                                              & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__fpmu__DOT__in_pipe_b_in1[1U] 
                                                  >> 0x14U) 
                                                 - (IData)(0x700U)))) 
                      + (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                               >> 0x18U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__alu_exe_unit_2__DOT__ALUUnit__DOT__alu__DOT___GEN_6 
        = (0x55555555555555ULL & (((QData)((IData)(
                                                   ((0U 
                                                     == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__iregister_read__DOT__exe_reg_uops_3_ctrl_op1_sel))
                                                     ? 
                                                    (3U 
                                                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__iregister_read__DOT__exe_reg_rs1_data_3))
                                                     : 0U))) 
                                   << 0x35U) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__alu_exe_unit_2__DOT__ALUUnit__DOT__alu__DOT___GEN_3)) 
                                                 << 0x15U) 
                                                | (QData)((IData)(
                                                                  ((0x180000U 
                                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__alu_exe_unit_2__DOT__ALUUnit__DOT__alu__DOT___GEN_1 
                                                                       << 0x11U)) 
                                                                   | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__alu_exe_unit_2__DOT__ALUUnit__DOT__alu__DOT___GEN_4) 
                                                                       << 0x11U) 
                                                                      | ((0x18000U 
                                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__alu_exe_unit_2__DOT__ALUUnit__DOT__alu__DOT___GEN_0 
                                                                             << 9U)) 
                                                                         | ((0x6000U 
                                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__alu_exe_unit_2__DOT__ALUUnit__DOT__alu__DOT___GEN 
                                                                                << 5U)) 
                                                                            | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__alu_exe_unit_2__DOT__ALUUnit__DOT__alu__DOT___GEN_5) 
                                                                                << 5U) 
                                                                               | ((0x18U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__alu_exe_unit_2__DOT__ALUUnit__DOT__alu__DOT__shin_hi 
                                                                                >> 0xfU)) 
                                                                                | ((6U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__alu_exe_unit_2__DOT__ALUUnit__DOT__alu__DOT__shin_hi 
                                                                                >> 0x13U)) 
                                                                                | (1U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__alu_exe_unit_2__DOT__ALUUnit__DOT__alu__DOT__shin_hi 
                                                                                >> 0x17U))))))))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__ctrls__DOT__monitor__DOT__a_first_done 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___coh_wrapper_auto_l2_ctrls_ctrl_in_a_ready) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT__full));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__alu_exe_unit_1__DOT__ALUUnit__DOT__alu__DOT___GEN_8 
        = (0x3333333333ULL & (((QData)((IData)((0xfU 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__alu_exe_unit_1__DOT__ALUUnit__DOT__alu__DOT___shout_r_T_5[0U] 
                                                   >> 8U)))) 
                               << 0x22U) | (((QData)((IData)(
                                                             (0xfU 
                                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__alu_exe_unit_1__DOT__ALUUnit__DOT__alu__DOT___shout_r_T_5[0U] 
                                                                 >> 0xcU)))) 
                                             << 0x1eU) 
                                            | (QData)((IData)(
                                                              ((0x3c000000U 
                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__alu_exe_unit_1__DOT__ALUUnit__DOT__alu__DOT___shout_r_T_5[0U] 
                                                                   << 0xaU)) 
                                                               | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__alu_exe_unit_1__DOT__ALUUnit__DOT__alu__DOT___GEN_7) 
                                                                   << 0xaU) 
                                                                  | ((0x3c0U 
                                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__alu_exe_unit_1__DOT__ALUUnit__DOT__alu__DOT___shout_r_T_5[1U] 
                                                                         << 2U)) 
                                                                     | ((0x3cU 
                                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__alu_exe_unit_1__DOT__ALUUnit__DOT__alu__DOT___shout_r_T_5[1U] 
                                                                            >> 6U)) 
                                                                        | (3U 
                                                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__alu_exe_unit_1__DOT__ALUUnit__DOT__alu__DOT___shout_r_T_5[1U] 
                                                                              >> 0xeU)))))))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7682(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7682\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT___nBufValid_T_6 
        = (3U & (((IData)(2U) - (1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___frontend_io_cpu_resp_bits_pc 
                                               >> 1U)))) 
                 - (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT___nICReady_T)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT____VdfgTmp_h59221be1__0 
        = (IData)(((3U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits)) 
                   & ((IData)(((0x30U == (0x7070U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits)) 
                               & (0x7fU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT____VdfgTmp_h8f2e93cb__0)))) 
                      | ((IData)(((0x5010U == (0x7078U 
                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits)) 
                                  & (0x3fU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT____VdfgTmp_hc2807336__0)))) 
                         | ((IData)(((0x18U == (0x18U 
                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits)) 
                                     & (0x7ffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT____VdfgTmp_h56c9d99b__0)))) 
                            | (IData)(((0x30U == (0x30U 
                                                  & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits)) 
                                       & (0x7ffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT____VdfgTmp_h56c9d99b__0)))))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7683(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7683\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___id_ctrl_decoder_decoded_T_38 
        = ((0x200U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                      << 9U)) | ((0x100U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                            << 7U)) 
                                 | ((0x80U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                              << 5U)) 
                                    | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT____VdfgTmp_h169cfe6a__0))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___id_ctrl_decoder_decoded_T_36 
        = ((0x100U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                      << 8U)) | ((0x80U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                           << 6U)) 
                                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT____VdfgTmp_h169cfe6a__0)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT____VdfgTmp_hc17cacf6__0 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
            >> 0xeU) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT____VdfgTmp_h2d652b57__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT____VdfgTmp_he50e20f0__0 
        = ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
               >> 0xeU)) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT____VdfgTmp_h085d4e30__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT____VdfgTmp_h85cdb45b__0 
        = (IData)(((0x70U == (0x1effff0U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits)) 
                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT____VdfgTmp_h085d4e30__0)));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7684(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7684\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___id_ctrl_decoder_decoded_T_94 
        = ((0x8000U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                       << 0xfU)) | ((0x4000U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                << 0xdU)) 
                                    | ((0x2000U & (
                                                   (~ 
                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                     >> 2U)) 
                                                   << 0xdU)) 
                                       | ((0x1000U 
                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                              << 9U)) 
                                          | ((0x800U 
                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                 << 7U)) 
                                             | ((0x400U 
                                                 & ((~ 
                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                      >> 5U)) 
                                                    << 0xaU)) 
                                                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT____VdfgTmp_h61b3d01c__0)))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___id_ctrl_decoder_decoded_T_92 
        = ((0x4000U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                       << 0xeU)) | ((0x2000U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                << 0xcU)) 
                                    | ((0x1000U & (
                                                   (~ 
                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                     >> 2U)) 
                                                   << 0xcU)) 
                                       | ((0x800U & 
                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                            << 8U)) 
                                          | ((0x400U 
                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                 << 6U)) 
                                             | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT____VdfgTmp_h61b3d01c__0))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___id_ctrl_decoder_decoded_T_98 
        = ((0x4000U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                       << 0xeU)) | ((0x2000U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                << 0xcU)) 
                                    | ((0x1000U & (
                                                   (~ 
                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                     >> 2U)) 
                                                   << 0xcU)) 
                                       | ((0x800U & 
                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                            << 7U)) 
                                          | ((0x400U 
                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                 << 5U)) 
                                             | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT____VdfgTmp_h61b3d01c__0))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___id_ctrl_decoder_decoded_orMatrixOutputs_T_12 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT____VdfgTmp_h73d944ac__0) 
            << 2U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT____VdfgTmp_h8955d951__0) 
                       << 1U) | (IData)((0x2000202fU 
                                         == (0x3800607fU 
                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits)))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7685(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7685\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT____VdfgTmp_h99c1dd66__0 
        = (IData)(((0x202fU == (0x607fU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits)) 
                   & (0x3ffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT____VdfgTmp_h8a29efed__0))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___id_ctrl_decoder_decoded_T_138 
        = ((0x10000U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                        << 0x10U)) | ((0x8000U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                  << 0xeU)) 
                                      | ((0x4000U & 
                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                           << 0xcU)) 
                                         | ((0x2000U 
                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                << 0xaU)) 
                                            | ((0x1000U 
                                                & ((~ 
                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                     >> 4U)) 
                                                   << 0xcU)) 
                                               | ((0x800U 
                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                      << 6U)) 
                                                  | ((0x400U 
                                                      & ((~ 
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                           >> 6U)) 
                                                         << 0xaU)) 
                                                     | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT____VdfgTmp_h8a29efed__0))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___id_ctrl_decoder_decoded_T_50 
        = ((0x4000U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                       << 0xeU)) | ((0x2000U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                << 0xcU)) 
                                    | ((0x1000U & (
                                                   (~ 
                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                     >> 2U)) 
                                                   << 0xcU)) 
                                       | ((0x800U & 
                                           ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                >> 3U)) 
                                            << 0xbU)) 
                                          | ((0x400U 
                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                 << 6U)) 
                                             | ((0x200U 
                                                 & ((~ 
                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                      >> 5U)) 
                                                    << 9U)) 
                                                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT____VdfgTmp_hfe2a0325__0)))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7686(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7686\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___id_ctrl_decoder_decoded_T_48 
        = ((0x2000U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                       << 0xdU)) | ((0x1000U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                << 0xbU)) 
                                    | ((0x800U & ((~ 
                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                    >> 2U)) 
                                                  << 0xbU)) 
                                       | ((0x400U & 
                                           ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                >> 3U)) 
                                            << 0xaU)) 
                                          | ((0x200U 
                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                 << 5U)) 
                                             | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT____VdfgTmp_hfe2a0325__0))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___id_ctrl_decoder_decoded_T_54 
        = ((0x8000U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                       << 0xfU)) | ((0x4000U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                << 0xdU)) 
                                    | ((0x2000U & (
                                                   (~ 
                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                     >> 2U)) 
                                                   << 0xdU)) 
                                       | ((0x1000U 
                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                              << 9U)) 
                                          | ((0x800U 
                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                 << 7U)) 
                                             | ((0x400U 
                                                 & ((~ 
                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                      >> 5U)) 
                                                    << 0xaU)) 
                                                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT____VdfgTmp_h0f59de4f__0)))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___id_ctrl_decoder_decoded_T_52 
        = ((0x4000U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                       << 0xeU)) | ((0x2000U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                << 0xcU)) 
                                    | ((0x1000U & (
                                                   (~ 
                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                     >> 2U)) 
                                                   << 0xcU)) 
                                       | ((0x800U & 
                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                            << 8U)) 
                                          | ((0x400U 
                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                 << 6U)) 
                                             | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT____VdfgTmp_h0f59de4f__0))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___id_ctrl_decoder_decoded_orMatrixOutputs_T_10 
        = (((IData)(((0x33U == (0x7fU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits)) 
                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT____VdfgTmp_h2d652b57__0))) 
            << 2U) | (((IData)(((0x33U == (0x3077U 
                                           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits)) 
                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT____VdfgTmp_h2d652b57__0))) 
                       << 1U) | (0x3fffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___id_ctrl_decoder_decoded_T_130))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7687(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7687\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_193 
        = (((- (IData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_0_bits_addr_is_virtual))) 
            << 0x18U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_23_bits_addr_is_virtual) 
                          << 0x17U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_22_bits_addr_is_virtual) 
                                        << 0x16U) | 
                                       (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_21_bits_addr_is_virtual) 
                                         << 0x15U) 
                                        | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_20_bits_addr_is_virtual) 
                                            << 0x14U) 
                                           | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_19_bits_addr_is_virtual) 
                                               << 0x13U) 
                                              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_18_bits_addr_is_virtual) 
                                                  << 0x12U) 
                                                 | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_17_bits_addr_is_virtual) 
                                                     << 0x11U) 
                                                    | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_16_bits_addr_is_virtual) 
                                                        << 0x10U) 
                                                       | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_15_bits_addr_is_virtual) 
                                                           << 0xfU) 
                                                          | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_14_bits_addr_is_virtual) 
                                                              << 0xeU) 
                                                             | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_13_bits_addr_is_virtual) 
                                                                 << 0xdU) 
                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_12_bits_addr_is_virtual) 
                                                                    << 0xcU) 
                                                                   | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_11_bits_addr_is_virtual) 
                                                                       << 0xbU) 
                                                                      | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_10_bits_addr_is_virtual) 
                                                                          << 0xaU) 
                                                                         | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_9_bits_addr_is_virtual) 
                                                                             << 9U) 
                                                                            | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_8_bits_addr_is_virtual) 
                                                                                << 8U) 
                                                                               | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_7_bits_addr_is_virtual) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_6_bits_addr_is_virtual) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_5_bits_addr_is_virtual) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_4_bits_addr_is_virtual) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_3_bits_addr_is_virtual) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_2_bits_addr_is_virtual) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_1_bits_addr_is_virtual) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_0_bits_addr_is_virtual)))))))))))))))))))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_588 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__fired_release_0) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_23_valid) 
              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_23_bits_addr_valid) 
                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__block_addr_matches_23_0))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_593 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__do_ld_search_0) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_23_valid) 
              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_23_bits_addr_valid) 
                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_23_bits_addr_is_virtual)) 
                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT____VdfgTmp_hbd2213de__0)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_592 
        = (0xffffffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__do_st_search_0) 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_23_valid) 
                           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_23_bits_addr_valid) 
                              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_590) 
                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_23_bits_addr_is_virtual)) 
                                    & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_23_bits_st_dep_mask 
                                        >> (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__lcam_stq_idx_0)) 
                                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT____VdfgTmp_hbd2213de__0))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_112 
        = (((- (IData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_0_bits_addr_valid))) 
            << 0x18U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_23_bits_addr_valid) 
                          << 0x17U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_22_bits_addr_valid) 
                                        << 0x16U) | 
                                       (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_21_bits_addr_valid) 
                                         << 0x15U) 
                                        | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_20_bits_addr_valid) 
                                            << 0x14U) 
                                           | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_19_bits_addr_valid) 
                                               << 0x13U) 
                                              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_18_bits_addr_valid) 
                                                  << 0x12U) 
                                                 | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_17_bits_addr_valid) 
                                                     << 0x11U) 
                                                    | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_16_bits_addr_valid) 
                                                        << 0x10U) 
                                                       | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_15_bits_addr_valid) 
                                                           << 0xfU) 
                                                          | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_14_bits_addr_valid) 
                                                              << 0xeU) 
                                                             | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_13_bits_addr_valid) 
                                                                 << 0xdU) 
                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_12_bits_addr_valid) 
                                                                    << 0xcU) 
                                                                   | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_11_bits_addr_valid) 
                                                                       << 0xbU) 
                                                                      | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_10_bits_addr_valid) 
                                                                          << 0xaU) 
                                                                         | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_9_bits_addr_valid) 
                                                                             << 9U) 
                                                                            | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_8_bits_addr_valid) 
                                                                                << 8U) 
                                                                               | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_7_bits_addr_valid) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_6_bits_addr_valid) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_5_bits_addr_valid) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_4_bits_addr_valid) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_3_bits_addr_valid) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_2_bits_addr_valid) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_1_bits_addr_valid) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_0_bits_addr_valid)))))))))))))))))))))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7688(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7688\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__wrap_13 
        = (0x17U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_head));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_838 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_head)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__searcher_is_older_16 
        = (IData)((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0) 
                    >> 4U) ^ (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0) 
                               >= (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_head)) 
                              ^ (0x10U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_head)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT____VdfgTmp_h2a95bec8__0 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0) 
           < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_head));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT___s3_valid_T 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_valid_REG) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_hit_0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT____VdfgTmp_hdebb470e__0 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_hit_0)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_valid_REG));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__tlMasterXbar__DOT__monitor__DOT___same_cycle_resp_T_3 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT___widget_auto_out_c_valid) 
           & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__tlMasterXbar__DOT__monitor__DOT__c_first_counter_1)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__monitor__DOT___same_cycle_resp_T_3 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT___widget_auto_out_c_valid) 
           & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__monitor__DOT__c_first_counter_1)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__nodeOut_c_q__DOT__do_enq 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT___tlMasterXbar_auto_in_0_c_ready) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT___widget_auto_out_c_valid));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT___dcache_auto_out_c_bits_source 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__muxState_0) 
            << 2U) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__muxState_1)
                       ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__prober__DOT__req_source)
                       : 0U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT___dcache_auto_out_c_bits_param 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__muxState_0)
             ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__wb__DOT__req_param)
             : 0U) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__muxState_1)
                       ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT___prober_io_rep_bits_param)
                       : 0U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT___dcache_auto_out_c_bits_size 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__muxState_0)
             ? 6U : 0U) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__muxState_1)
                            ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__prober__DOT__req_size)
                            : 0U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT___dcache_auto_out_c_bits_opcode 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__muxState_0)
             ? (5U | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__wb__DOT__req_voluntary) 
                      << 1U)) : 0U) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__muxState_1) 
                                       << 2U));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7689(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7689\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT___dcache_auto_out_c_bits_address 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__muxState_0)
             ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT___wb_io_release_bits_address
             : 0U) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__muxState_1)
                       ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__prober__DOT__req_address
                       : 0U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__issue_slots_7_in_uop_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_7__DOT__slot_uop_mem_cmd 
            = ((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__next_9))
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_10__DOT__slot_uop_mem_cmd)
                : ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__next_8))
                    ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_9__DOT__slot_uop_mem_cmd)
                    : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_8__DOT__slot_uop_mem_cmd)));
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_7__DOT__slot_uop_uses_ldq = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4__DOT__slot_uop_fp_val = 0U;
    } else {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__issue_slots_7_in_uop_valid) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_7__DOT__slot_uop_uses_ldq 
                = ((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__next_9))
                    ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_10__DOT__slot_uop_uses_ldq)
                    : ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__next_8))
                        ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_9__DOT__slot_uop_uses_ldq)
                        : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_8__DOT__slot_uop_uses_ldq)));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__issue_slots_4_in_uop_valid) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4__DOT__slot_uop_fp_val 
                = ((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__next_6))
                    ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_7__DOT__slot_uop_fp_val)
                    : ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__next_5))
                        ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_6__DOT__slot_uop_fp_val)
                        : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5__DOT__slot_uop_fp_val)));
        }
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__issue_slots_2_in_uop_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_2__DOT__slot_uop_is_amo 
            = ((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__next_4))
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5__DOT__slot_uop_is_amo)
                : ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__next_3))
                    ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4__DOT__slot_uop_is_amo)
                    : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_3__DOT__slot_uop_is_amo)));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_53 
        = (((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4__DOT__state))
             ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4__DOT____VdfgTmp_h0e181b58__0) 
                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4__DOT__p3) 
                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4__DOT____VdfgTmp_h444ba9c1__0)))
             : ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4__DOT__state)) 
                & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4__DOT__p1) 
                    | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4__DOT__p2)) 
                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4__DOT____VdfgTmp_h444ba9c1__0)))) 
           & (0U != ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4__DOT__slot_uop_fu_code) 
                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT____Vcellinp__mem_issue_unit__io_fu_types_0))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7690(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7690\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__issue_slots_5_in_uop_valid) {
        if ((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__next_7))) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5__DOT__slot_uop_fu_code 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_8__DOT__slot_uop_fu_code;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5__DOT__slot_uop_imm_packed 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_8__DOT__slot_uop_imm_packed;
        } else if ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__next_6))) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5__DOT__slot_uop_fu_code 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_7__DOT__slot_uop_fu_code;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5__DOT__slot_uop_imm_packed 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_7__DOT__slot_uop_imm_packed;
        } else {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5__DOT__slot_uop_fu_code 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_6__DOT__slot_uop_fu_code;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5__DOT__slot_uop_imm_packed 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_6__DOT__slot_uop_imm_packed;
        }
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5__DOT__slot_uop_uses_stq = 0U;
    } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__issue_slots_5_in_uop_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5__DOT__slot_uop_uses_stq 
            = ((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__next_7))
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_8__DOT__slot_uop_uses_stq)
                : ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__next_6))
                    ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_7__DOT__slot_uop_uses_stq)
                    : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_6__DOT__slot_uop_uses_stq)));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_0__DOT___GEN_4 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit_io_flush_pipeline_REG) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_0__DOT___GEN_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_1__DOT___GEN_1 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__issue_slots_1_grant) 
            & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_1__DOT__state))) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_1__DOT___GEN_0) 
              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_1__DOT____VdfgTmp_h5df2fcb1__0)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_2__DOT___GEN_0 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__issue_slots_2_grant) 
           & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_2__DOT__state)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__issue_slots_3_grant 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_50)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_51));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_52 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_51) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_50));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT____VdfgTmp_h7c8f903d__0 
        = ((~ (IData)((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_2__DOT__state)))) 
           & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT___next_1_1to0)));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__issue_slots_1_in_uop_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_1__DOT__slot_uop_mem_size 
            = ((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__next_3))
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4__DOT__slot_uop_mem_size)
                : ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__next_2))
                    ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_3__DOT__slot_uop_mem_size)
                    : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_2__DOT__slot_uop_mem_size)));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7691(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7691\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__issue_slots_7_in_uop_valid) {
        if ((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__next_9))) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_mem_cmd 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_10__DOT__slot_uop_mem_cmd;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_fu_code 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_10__DOT__slot_uop_fu_code;
        } else if ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__next_8))) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_mem_cmd 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_9__DOT__slot_uop_mem_cmd;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_fu_code 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_9__DOT__slot_uop_fu_code;
        } else {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_mem_cmd 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_8__DOT__slot_uop_mem_cmd;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_fu_code 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_8__DOT__slot_uop_fu_code;
        }
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT___GEN_66 
        = (((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__state))
             ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_6__DOT____VdfgTmp_h0e181b58__0) 
                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__p3) 
                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_6__DOT____VdfgTmp_h444ba9c1__0)))
             : ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__state)) 
                & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__p1) 
                    | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__p2)) 
                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_6__DOT____VdfgTmp_h444ba9c1__0)))) 
           & (0U != ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_fu_code) 
                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT____Vcellinp__fp_issue_unit__io_fu_types_0))));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__issue_slots_0_in_uop_valid) {
        if ((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__next_2))) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_0__DOT__slot_uop_is_amo 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_3__DOT__slot_uop_is_amo;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_0__DOT__slot_uop_rob_idx 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_3__DOT__slot_uop_rob_idx;
        } else if ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT___next_1_1to0))) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_0__DOT__slot_uop_is_amo 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_2__DOT__slot_uop_is_amo;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_0__DOT__slot_uop_rob_idx 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_2__DOT__slot_uop_rob_idx;
        } else {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_0__DOT__slot_uop_is_amo 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_1__DOT__slot_uop_is_amo;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_0__DOT__slot_uop_rob_idx 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_1__DOT__slot_uop_rob_idx;
        }
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_0__DOT__slot_uop_pdst = 0U;
    } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__issue_slots_0_in_uop_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_0__DOT__slot_uop_pdst 
            = ((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__next_2))
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_3__DOT__slot_uop_pdst)
                : ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT___next_1_1to0))
                    ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_2__DOT__slot_uop_pdst)
                    : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fp_issue_unit__DOT__slots_1__DOT__slot_uop_pdst)));
    }
}
