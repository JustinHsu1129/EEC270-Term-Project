// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestDriver.h for the primary calling header

#include "VTestDriver__pch.h"
#include "VTestDriver___024root.h"

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7479(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7479\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<5>/*159:0*/ __Vtemp_19;
    // Body
    __Vtemp_1[0U] = (IData)((0x4200000000ULL | (((QData)((IData)(
                                                                 (7U 
                                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                                     >> 7U)))) 
                                                 << 0x3cU) 
                                                | (((QData)((IData)(
                                                                    (0x1fU 
                                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                                        >> 7U)))) 
                                                    << 0x37U) 
                                                   | (((QData)((IData)(
                                                                       (0x1fU 
                                                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                                           >> 7U)))) 
                                                       << 0x2dU) 
                                                      | (((QData)((IData)(
                                                                          (0x1fU 
                                                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                                              >> 7U)))) 
                                                          << 0x28U) 
                                                         | (((QData)((IData)(
                                                                             (7U 
                                                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                                                >> 7U)))) 
                                                             << 0x23U) 
                                                            | (((QData)((IData)(
                                                                                (7U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                                                >> 7U)))) 
                                                                << 0x1eU) 
                                                               | (QData)((IData)(
                                                                                (0x10842102U 
                                                                                | ((0xe000000U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                                                << 0x12U)) 
                                                                                | ((0x700000U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                                                << 0xdU)) 
                                                                                | ((0x38000U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                                                << 8U)) 
                                                                                | ((0x1c00U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                                                << 3U)) 
                                                                                | (0xe0U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                                                >> 2U)))))))))))))))));
    __Vtemp_1[1U] = (0x80000000U | (IData)(((0x4200000000ULL 
                                             | (((QData)((IData)(
                                                                 (7U 
                                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                                     >> 7U)))) 
                                                 << 0x3cU) 
                                                | (((QData)((IData)(
                                                                    (0x1fU 
                                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                                        >> 7U)))) 
                                                    << 0x37U) 
                                                   | (((QData)((IData)(
                                                                       (0x1fU 
                                                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                                           >> 7U)))) 
                                                       << 0x2dU) 
                                                      | (((QData)((IData)(
                                                                          (0x1fU 
                                                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                                              >> 7U)))) 
                                                          << 0x28U) 
                                                         | (((QData)((IData)(
                                                                             (7U 
                                                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                                                >> 7U)))) 
                                                             << 0x23U) 
                                                            | (((QData)((IData)(
                                                                                (7U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                                                >> 7U)))) 
                                                                << 0x1eU) 
                                                               | (QData)((IData)(
                                                                                (0x10842102U 
                                                                                | ((0xe000000U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                                                << 0x12U)) 
                                                                                | ((0x700000U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                                                << 0xdU)) 
                                                                                | ((0x38000U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                                                << 8U)) 
                                                                                | ((0x1c00U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                                                << 3U)) 
                                                                                | (0xe0U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                                                >> 2U)))))))))))))))) 
                                            >> 0x20U)));
    __Vtemp_19[0U] = __Vtemp_1[0U];
    __Vtemp_19[1U] = __Vtemp_1[1U];
    __Vtemp_19[2U] = (0x8404210U | ((0x1f0000U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                  << 9U)) 
                                    | ((0x3800U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                   << 4U)) 
                                       | ((0x1c0U & 
                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                            >> 1U)) 
                                          | (0xeU & 
                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                              >> 6U))))));
    __Vtemp_19[3U] = (0x108401U | ((0xe0000000U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                   << 0xeU)) 
                                   | ((0x1f000000U 
                                       & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                          << 9U)) | 
                                      (((1U & ((~ (IData)(
                                                          (0U 
                                                           != 
                                                           (0x1fU 
                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                               >> 2U))))) 
                                               | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                  >> 0xcU)))
                                         ? (0x1fU & 
                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                             >> 7U))
                                         : 0U) << 4U))));
    __Vtemp_19[4U] = ((0xf8000000U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                      << 0xcU)) | (
                                                   (0x7c00000U 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                       << 7U)) 
                                                   | ((0x3e0000U 
                                                       & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                          << 2U)) 
                                                      | ((0x1f000U 
                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                             >> 3U)) 
                                                         | ((0xf80U 
                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                                >> 8U)) 
                                                            | ((0x7cU 
                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                                   >> 0xdU)) 
                                                               | (3U 
                                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                                     >> 0x12U))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_rs1 
        = ((0x9fU >= (0xffU & ((IData)(5U) * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T_2))))
            ? (0x1fU & (((0U == (0x1fU & ((IData)(5U) 
                                          * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T_2))))
                          ? 0U : (__Vtemp_19[(((IData)(4U) 
                                               + (0xffU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T_2)))) 
                                              >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(5U) 
                                                  * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T_2)))))) 
                        | (__Vtemp_19[(7U & (((IData)(5U) 
                                              * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T_2)) 
                                             >> 5U))] 
                           >> (0x1fU & ((IData)(5U) 
                                        * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T_2))))))
            : 0U);
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7480(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7480\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT____VdfgTmp_hb57cac85__0 
        = ((0x1fU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T_2)) 
           | ((0x1eU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T_2)) 
              | ((0x1dU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T_2)) 
                 | ((0x1cU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T_2)) 
                    | ((0x1bU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T_2)) 
                       | ((0x1aU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T_2)) 
                          | ((0x19U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T_2)) 
                             | (0x18U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T_2)))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT___banked_predictors_1_io_resp_f3_3_taken 
        = ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_3__DOT__f3_entry_tag) 
             == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_3__DOT__f3_tag)) 
            & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT___columns_3_io_f3_meta_s_cnt) 
                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_3__DOT__f3_entry_p_cnt)) 
               & (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_3__DOT__f3_entry_conf)))) 
           ^ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT___tage_io_resp_f3_3_taken));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT___banked_predictors_0_io_resp_f3_3_taken 
        = ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__columns_3__DOT__f3_entry_tag) 
             == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__columns_3__DOT__f3_tag)) 
            & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT___columns_3_io_f3_meta_s_cnt) 
                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__columns_3__DOT__f3_entry_p_cnt)) 
               & (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__columns_3__DOT__f3_entry_conf)))) 
           ^ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT___tage_io_resp_f3_3_taken));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT___banked_predictors_1_io_resp_f3_2_taken 
        = ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_2__DOT__f3_entry_tag) 
             == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_2__DOT__f3_tag)) 
            & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT___columns_2_io_f3_meta_s_cnt) 
                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_2__DOT__f3_entry_p_cnt)) 
               & (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_2__DOT__f3_entry_conf)))) 
           ^ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT___tage_io_resp_f3_2_taken));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT___banked_predictors_0_io_resp_f3_2_taken 
        = ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__columns_2__DOT__f3_entry_tag) 
             == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__columns_2__DOT__f3_tag)) 
            & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT___columns_2_io_f3_meta_s_cnt) 
                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__columns_2__DOT__f3_entry_p_cnt)) 
               & (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__columns_2__DOT__f3_entry_conf)))) 
           ^ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT___tage_io_resp_f3_2_taken));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT___banked_predictors_1_io_resp_f3_1_taken 
        = ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_1__DOT__f3_entry_tag) 
             == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_1__DOT__f3_tag)) 
            & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT___columns_1_io_f3_meta_s_cnt) 
                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_1__DOT__f3_entry_p_cnt)) 
               & (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_1__DOT__f3_entry_conf)))) 
           ^ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT___tage_io_resp_f3_1_taken));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7481(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7481\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT___banked_predictors_0_io_resp_f3_1_taken 
        = ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__columns_1__DOT__f3_entry_tag) 
             == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__columns_1__DOT__f3_tag)) 
            & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT___columns_1_io_f3_meta_s_cnt) 
                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__columns_1__DOT__f3_entry_p_cnt)) 
               & (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__columns_1__DOT__f3_entry_conf)))) 
           ^ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT___tage_io_resp_f3_1_taken));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_0__DOT___GEN_32 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_0__DOT___GEN_18) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_0__DOT___GEN_31));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_0__DOT___GEN_28 
        = (1U & ((~ ((~ ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_0__DOT____VdfgTmp_h82b2c837__0)) 
                         | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_0__DOT___GEN_24))) 
                     | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_0__DOT___GEN_22))) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_0__DOT___GEN_21)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_0__DOT___GEN_27 
        = (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_0__DOT____VdfgTmp_hce5c7f05__0) 
                 | ((~ ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_0__DOT____VdfgTmp_h264d0cfe__0) 
                            | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_0__DOT____VdfgTmp_h82b2c837__0))) 
                        | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_0__DOT___GEN_21))) 
                    | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_0__DOT___GEN_19))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_0__DOT___GEN_35 
        = (1U & ((~ ((~ ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_0__DOT___GEN_29)) 
                         | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_0__DOT____VdfgTmp_h264d0cfe__0))) 
                     | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_0__DOT___GEN_31))) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_0__DOT____VdfgTmp_hce5c7f05__0)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_0__DOT___GEN_30 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_0__DOT___GEN_24) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_0__DOT___GEN_29));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_1__DOT___GEN_32 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_1__DOT___GEN_18) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_1__DOT___GEN_31));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_1__DOT___GEN_28 
        = (1U & ((~ ((~ ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_1__DOT____VdfgTmp_h82b2c837__0)) 
                         | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_1__DOT___GEN_24))) 
                     | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_1__DOT___GEN_22))) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_1__DOT___GEN_21)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_1__DOT___GEN_27 
        = (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_1__DOT____VdfgTmp_hce5c7f05__0) 
                 | ((~ ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_1__DOT____VdfgTmp_h264d0cfe__0) 
                            | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_1__DOT____VdfgTmp_h82b2c837__0))) 
                        | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_1__DOT___GEN_21))) 
                    | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_1__DOT___GEN_19))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_1__DOT___GEN_35 
        = (1U & ((~ ((~ ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_1__DOT___GEN_29)) 
                         | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_1__DOT____VdfgTmp_h264d0cfe__0))) 
                     | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_1__DOT___GEN_31))) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_1__DOT____VdfgTmp_hce5c7f05__0)));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7482(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7482\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_1__DOT___GEN_30 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_1__DOT___GEN_24) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_1__DOT___GEN_29));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_2__DOT___GEN_32 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_2__DOT___GEN_18) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_2__DOT___GEN_31));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_2__DOT___GEN_28 
        = (1U & ((~ ((~ ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_2__DOT____VdfgTmp_h82b2c837__0)) 
                         | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_2__DOT___GEN_24))) 
                     | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_2__DOT___GEN_22))) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_2__DOT___GEN_21)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_2__DOT___GEN_27 
        = (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_2__DOT____VdfgTmp_hce5c7f05__0) 
                 | ((~ ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_2__DOT____VdfgTmp_h264d0cfe__0) 
                            | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_2__DOT____VdfgTmp_h82b2c837__0))) 
                        | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_2__DOT___GEN_21))) 
                    | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_2__DOT___GEN_19))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_2__DOT___GEN_35 
        = (1U & ((~ ((~ ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_2__DOT___GEN_29)) 
                         | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_2__DOT____VdfgTmp_h264d0cfe__0))) 
                     | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_2__DOT___GEN_31))) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_2__DOT____VdfgTmp_hce5c7f05__0)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_2__DOT___GEN_30 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_2__DOT___GEN_24) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_2__DOT___GEN_29));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_3__DOT___GEN_32 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_3__DOT___GEN_18) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_3__DOT___GEN_31));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_3__DOT___GEN_28 
        = (1U & ((~ ((~ ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_3__DOT____VdfgTmp_h82b2c837__0)) 
                         | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_3__DOT___GEN_24))) 
                     | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_3__DOT___GEN_22))) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_3__DOT___GEN_21)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_3__DOT___GEN_27 
        = (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_3__DOT____VdfgTmp_hce5c7f05__0) 
                 | ((~ ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_3__DOT____VdfgTmp_h264d0cfe__0) 
                            | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_3__DOT____VdfgTmp_h82b2c837__0))) 
                        | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_3__DOT___GEN_21))) 
                    | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_3__DOT___GEN_19))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_3__DOT___GEN_35 
        = (1U & ((~ ((~ ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_3__DOT___GEN_29)) 
                         | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_3__DOT____VdfgTmp_h264d0cfe__0))) 
                     | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_3__DOT___GEN_31))) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_3__DOT____VdfgTmp_hce5c7f05__0)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_3__DOT___GEN_30 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_3__DOT___GEN_24) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_3__DOT___GEN_29));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7483(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7483\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__columns_0__DOT___GEN_32 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__columns_0__DOT___GEN_18) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__columns_0__DOT___GEN_31));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__columns_0__DOT___GEN_28 
        = (1U & ((~ ((~ ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__columns_0__DOT____VdfgTmp_h82b2c837__0)) 
                         | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__columns_0__DOT___GEN_24))) 
                     | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__columns_0__DOT___GEN_22))) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__columns_0__DOT___GEN_21)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__columns_0__DOT___GEN_27 
        = (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__columns_0__DOT____VdfgTmp_hce5c7f05__0) 
                 | ((~ ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__columns_0__DOT____VdfgTmp_h264d0cfe__0) 
                            | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__columns_0__DOT____VdfgTmp_h82b2c837__0))) 
                        | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__columns_0__DOT___GEN_21))) 
                    | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__columns_0__DOT___GEN_19))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__columns_0__DOT___GEN_35 
        = (1U & ((~ ((~ ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__columns_0__DOT___GEN_29)) 
                         | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__columns_0__DOT____VdfgTmp_h264d0cfe__0))) 
                     | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__columns_0__DOT___GEN_31))) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__columns_0__DOT____VdfgTmp_hce5c7f05__0)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__columns_0__DOT___GEN_30 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__columns_0__DOT___GEN_24) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__columns_0__DOT___GEN_29));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__columns_1__DOT___GEN_32 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__columns_1__DOT___GEN_18) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__columns_1__DOT___GEN_31));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__columns_1__DOT___GEN_28 
        = (1U & ((~ ((~ ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__columns_1__DOT____VdfgTmp_h82b2c837__0)) 
                         | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__columns_1__DOT___GEN_24))) 
                     | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__columns_1__DOT___GEN_22))) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__columns_1__DOT___GEN_21)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__columns_1__DOT___GEN_27 
        = (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__columns_1__DOT____VdfgTmp_hce5c7f05__0) 
                 | ((~ ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__columns_1__DOT____VdfgTmp_h264d0cfe__0) 
                            | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__columns_1__DOT____VdfgTmp_h82b2c837__0))) 
                        | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__columns_1__DOT___GEN_21))) 
                    | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__columns_1__DOT___GEN_19))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__columns_1__DOT___GEN_35 
        = (1U & ((~ ((~ ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__columns_1__DOT___GEN_29)) 
                         | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__columns_1__DOT____VdfgTmp_h264d0cfe__0))) 
                     | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__columns_1__DOT___GEN_31))) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__columns_1__DOT____VdfgTmp_hce5c7f05__0)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__columns_1__DOT___GEN_30 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__columns_1__DOT___GEN_24) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__columns_1__DOT___GEN_29));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__columns_2__DOT___GEN_32 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__columns_2__DOT___GEN_18) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__columns_2__DOT___GEN_31));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__columns_2__DOT___GEN_28 
        = (1U & ((~ ((~ ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__columns_2__DOT____VdfgTmp_h82b2c837__0)) 
                         | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__columns_2__DOT___GEN_24))) 
                     | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__columns_2__DOT___GEN_22))) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__columns_2__DOT___GEN_21)));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7484(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7484\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__columns_2__DOT___GEN_27 
        = (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__columns_2__DOT____VdfgTmp_hce5c7f05__0) 
                 | ((~ ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__columns_2__DOT____VdfgTmp_h264d0cfe__0) 
                            | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__columns_2__DOT____VdfgTmp_h82b2c837__0))) 
                        | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__columns_2__DOT___GEN_21))) 
                    | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__columns_2__DOT___GEN_19))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__columns_2__DOT___GEN_35 
        = (1U & ((~ ((~ ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__columns_2__DOT___GEN_29)) 
                         | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__columns_2__DOT____VdfgTmp_h264d0cfe__0))) 
                     | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__columns_2__DOT___GEN_31))) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__columns_2__DOT____VdfgTmp_hce5c7f05__0)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__columns_2__DOT___GEN_30 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__columns_2__DOT___GEN_24) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__columns_2__DOT___GEN_29));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__columns_3__DOT___GEN_32 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__columns_3__DOT___GEN_18) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__columns_3__DOT___GEN_31));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__columns_3__DOT___GEN_28 
        = (1U & ((~ ((~ ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__columns_3__DOT____VdfgTmp_h82b2c837__0)) 
                         | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__columns_3__DOT___GEN_24))) 
                     | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__columns_3__DOT___GEN_22))) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__columns_3__DOT___GEN_21)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__columns_3__DOT___GEN_27 
        = (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__columns_3__DOT____VdfgTmp_hce5c7f05__0) 
                 | ((~ ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__columns_3__DOT____VdfgTmp_h264d0cfe__0) 
                            | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__columns_3__DOT____VdfgTmp_h82b2c837__0))) 
                        | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__columns_3__DOT___GEN_21))) 
                    | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__columns_3__DOT___GEN_19))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__columns_3__DOT___GEN_35 
        = (1U & ((~ ((~ ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__columns_3__DOT___GEN_29)) 
                         | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__columns_3__DOT____VdfgTmp_h264d0cfe__0))) 
                     | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__columns_3__DOT___GEN_31))) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__columns_3__DOT____VdfgTmp_hce5c7f05__0)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__columns_3__DOT___GEN_30 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__columns_3__DOT___GEN_24) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__columns_3__DOT___GEN_29));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT___banked_predictors_1_io_resp_f3_0_taken 
        = ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_0__DOT__f3_entry_tag) 
             == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_0__DOT__f3_tag)) 
            & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT___columns_0_io_f3_meta_s_cnt) 
                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_0__DOT__f3_entry_p_cnt)) 
               & (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_0__DOT__f3_entry_conf)))) 
           ^ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT___tage_io_resp_f3_0_taken));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT___banked_predictors_0_io_resp_f3_0_taken 
        = ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__columns_0__DOT__f3_entry_tag) 
             == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__columns_0__DOT__f3_tag)) 
            & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT___columns_0_io_f3_meta_s_cnt) 
                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__columns_0__DOT__f3_entry_p_cnt)) 
               & (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__columns_0__DOT__f3_entry_conf)))) 
           ^ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT___tage_io_resp_f3_0_taken));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7485(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7485\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_13;
    // Body
    __Vtemp_1[1U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_12_bits_uop_mem_cmd) 
                      << 0x1cU) | (IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_11_bits_uop_mem_cmd)) 
                                             << 0x37U) 
                                            | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_10_bits_uop_mem_cmd)) 
                                                << 0x32U) 
                                               | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_9_bits_uop_mem_cmd)) 
                                                   << 0x2dU) 
                                                  | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_8_bits_uop_mem_cmd)) 
                                                      << 0x28U) 
                                                     | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_7_bits_uop_mem_cmd)) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_6_bits_uop_mem_cmd)) 
                                                            << 0x1eU) 
                                                           | (QData)((IData)(
                                                                             (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_5_bits_uop_mem_cmd) 
                                                                               << 0x19U) 
                                                                              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_4_bits_uop_mem_cmd) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_3_bits_uop_mem_cmd) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_2_bits_uop_mem_cmd) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_1_bits_uop_mem_cmd) 
                                                                                << 5U) 
                                                                                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_0_bits_uop_mem_cmd)))))))))))))) 
                                           >> 0x20U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_55[0U] 
        = (IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_11_bits_uop_mem_cmd)) 
                    << 0x37U) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_10_bits_uop_mem_cmd)) 
                                  << 0x32U) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_9_bits_uop_mem_cmd)) 
                                                << 0x2dU) 
                                               | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_8_bits_uop_mem_cmd)) 
                                                   << 0x28U) 
                                                  | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_7_bits_uop_mem_cmd)) 
                                                      << 0x23U) 
                                                     | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_6_bits_uop_mem_cmd)) 
                                                         << 0x1eU) 
                                                        | (QData)((IData)(
                                                                          (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_5_bits_uop_mem_cmd) 
                                                                            << 0x19U) 
                                                                           | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_4_bits_uop_mem_cmd) 
                                                                               << 0x14U) 
                                                                              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_3_bits_uop_mem_cmd) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_2_bits_uop_mem_cmd) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_1_bits_uop_mem_cmd) 
                                                                                << 5U) 
                                                                                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_0_bits_uop_mem_cmd)))))))))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_55[1U] 
        = __Vtemp_1[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_55[2U] 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_19_bits_uop_mem_cmd) 
            << 0x1fU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_18_bits_uop_mem_cmd) 
                          << 0x1aU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_17_bits_uop_mem_cmd) 
                                        << 0x15U) | 
                                       (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_16_bits_uop_mem_cmd) 
                                         << 0x10U) 
                                        | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_15_bits_uop_mem_cmd) 
                                            << 0xbU) 
                                           | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_14_bits_uop_mem_cmd) 
                                               << 6U) 
                                              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_13_bits_uop_mem_cmd) 
                                                  << 1U) 
                                                 | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_12_bits_uop_mem_cmd) 
                                                    >> 4U))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_55[3U] 
        = (((IData)((0xffffffffffULL & (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_0_bits_uop_mem_cmd)) 
                                         << 0x23U) 
                                        | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_0_bits_uop_mem_cmd)) 
                                            << 0x1eU) 
                                           | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_0_bits_uop_mem_cmd)) 
                                               << 0x19U) 
                                              | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_0_bits_uop_mem_cmd)) 
                                                  << 0x14U) 
                                                 | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_0_bits_uop_mem_cmd)) 
                                                     << 0xfU) 
                                                    | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_0_bits_uop_mem_cmd)) 
                                                        << 0xaU) 
                                                       | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_0_bits_uop_mem_cmd)) 
                                                           << 5U) 
                                                          | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_0_bits_uop_mem_cmd))))))))))) 
            << 0x18U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_23_bits_uop_mem_cmd) 
                          << 0x13U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_22_bits_uop_mem_cmd) 
                                        << 0xeU) | 
                                       (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_21_bits_uop_mem_cmd) 
                                         << 9U) | (
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_20_bits_uop_mem_cmd) 
                                                    << 4U) 
                                                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_19_bits_uop_mem_cmd) 
                                                      >> 1U))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_55[4U] 
        = (((IData)((0xffffffffffULL & (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_0_bits_uop_mem_cmd)) 
                                         << 0x23U) 
                                        | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_0_bits_uop_mem_cmd)) 
                                            << 0x1eU) 
                                           | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_0_bits_uop_mem_cmd)) 
                                               << 0x19U) 
                                              | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_0_bits_uop_mem_cmd)) 
                                                  << 0x14U) 
                                                 | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_0_bits_uop_mem_cmd)) 
                                                     << 0xfU) 
                                                    | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_0_bits_uop_mem_cmd)) 
                                                        << 0xaU) 
                                                       | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_0_bits_uop_mem_cmd)) 
                                                           << 5U) 
                                                          | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_0_bits_uop_mem_cmd))))))))))) 
            >> 8U) | ((IData)(((0xffffffffffULL & (
                                                   ((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_0_bits_uop_mem_cmd)) 
                                                    << 0x23U) 
                                                   | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_0_bits_uop_mem_cmd)) 
                                                       << 0x1eU) 
                                                      | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_0_bits_uop_mem_cmd)) 
                                                          << 0x19U) 
                                                         | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_0_bits_uop_mem_cmd)) 
                                                             << 0x14U) 
                                                            | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_0_bits_uop_mem_cmd)) 
                                                                << 0xfU) 
                                                               | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_0_bits_uop_mem_cmd)) 
                                                                   << 0xaU) 
                                                                  | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_0_bits_uop_mem_cmd)) 
                                                                      << 5U) 
                                                                     | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_0_bits_uop_mem_cmd)))))))))) 
                               >> 0x20U)) << 0x18U));
    __Vtemp_13[1U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_12_bits_uop_mem_cmd) 
                       << 0x1cU) | (IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_11_bits_uop_mem_cmd)) 
                                              << 0x37U) 
                                             | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_10_bits_uop_mem_cmd)) 
                                                 << 0x32U) 
                                                | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_9_bits_uop_mem_cmd)) 
                                                    << 0x2dU) 
                                                   | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_8_bits_uop_mem_cmd)) 
                                                       << 0x28U) 
                                                      | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_7_bits_uop_mem_cmd)) 
                                                          << 0x23U) 
                                                         | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_6_bits_uop_mem_cmd)) 
                                                             << 0x1eU) 
                                                            | (QData)((IData)(
                                                                              (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_5_bits_uop_mem_cmd) 
                                                                                << 0x19U) 
                                                                               | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_4_bits_uop_mem_cmd) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_3_bits_uop_mem_cmd) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_2_bits_uop_mem_cmd) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_1_bits_uop_mem_cmd) 
                                                                                << 5U) 
                                                                                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_0_bits_uop_mem_cmd)))))))))))))) 
                                            >> 0x20U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_162[0U] 
        = (IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_11_bits_uop_mem_cmd)) 
                    << 0x37U) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_10_bits_uop_mem_cmd)) 
                                  << 0x32U) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_9_bits_uop_mem_cmd)) 
                                                << 0x2dU) 
                                               | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_8_bits_uop_mem_cmd)) 
                                                   << 0x28U) 
                                                  | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_7_bits_uop_mem_cmd)) 
                                                      << 0x23U) 
                                                     | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_6_bits_uop_mem_cmd)) 
                                                         << 0x1eU) 
                                                        | (QData)((IData)(
                                                                          (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_5_bits_uop_mem_cmd) 
                                                                            << 0x19U) 
                                                                           | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_4_bits_uop_mem_cmd) 
                                                                               << 0x14U) 
                                                                              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_3_bits_uop_mem_cmd) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_2_bits_uop_mem_cmd) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_1_bits_uop_mem_cmd) 
                                                                                << 5U) 
                                                                                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_0_bits_uop_mem_cmd)))))))))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_162[1U] 
        = __Vtemp_13[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_162[2U] 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_19_bits_uop_mem_cmd) 
            << 0x1fU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_18_bits_uop_mem_cmd) 
                          << 0x1aU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_17_bits_uop_mem_cmd) 
                                        << 0x15U) | 
                                       (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_16_bits_uop_mem_cmd) 
                                         << 0x10U) 
                                        | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_15_bits_uop_mem_cmd) 
                                            << 0xbU) 
                                           | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_14_bits_uop_mem_cmd) 
                                               << 6U) 
                                              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_13_bits_uop_mem_cmd) 
                                                  << 1U) 
                                                 | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_12_bits_uop_mem_cmd) 
                                                    >> 4U))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_162[3U] 
        = (((IData)((0xffffffffffULL & (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_0_bits_uop_mem_cmd)) 
                                         << 0x23U) 
                                        | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_0_bits_uop_mem_cmd)) 
                                            << 0x1eU) 
                                           | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_0_bits_uop_mem_cmd)) 
                                               << 0x19U) 
                                              | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_0_bits_uop_mem_cmd)) 
                                                  << 0x14U) 
                                                 | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_0_bits_uop_mem_cmd)) 
                                                     << 0xfU) 
                                                    | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_0_bits_uop_mem_cmd)) 
                                                        << 0xaU) 
                                                       | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_0_bits_uop_mem_cmd)) 
                                                           << 5U) 
                                                          | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_0_bits_uop_mem_cmd))))))))))) 
            << 0x18U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_23_bits_uop_mem_cmd) 
                          << 0x13U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_22_bits_uop_mem_cmd) 
                                        << 0xeU) | 
                                       (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_21_bits_uop_mem_cmd) 
                                         << 9U) | (
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_20_bits_uop_mem_cmd) 
                                                    << 4U) 
                                                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_19_bits_uop_mem_cmd) 
                                                      >> 1U))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_162[4U] 
        = (((IData)((0xffffffffffULL & (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_0_bits_uop_mem_cmd)) 
                                         << 0x23U) 
                                        | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_0_bits_uop_mem_cmd)) 
                                            << 0x1eU) 
                                           | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_0_bits_uop_mem_cmd)) 
                                               << 0x19U) 
                                              | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_0_bits_uop_mem_cmd)) 
                                                  << 0x14U) 
                                                 | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_0_bits_uop_mem_cmd)) 
                                                     << 0xfU) 
                                                    | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_0_bits_uop_mem_cmd)) 
                                                        << 0xaU) 
                                                       | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_0_bits_uop_mem_cmd)) 
                                                           << 5U) 
                                                          | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_0_bits_uop_mem_cmd))))))))))) 
            >> 8U) | ((IData)(((0xffffffffffULL & (
                                                   ((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_0_bits_uop_mem_cmd)) 
                                                    << 0x23U) 
                                                   | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_0_bits_uop_mem_cmd)) 
                                                       << 0x1eU) 
                                                      | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_0_bits_uop_mem_cmd)) 
                                                          << 0x19U) 
                                                         | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_0_bits_uop_mem_cmd)) 
                                                             << 0x14U) 
                                                            | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_0_bits_uop_mem_cmd)) 
                                                                << 0xfU) 
                                                               | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_0_bits_uop_mem_cmd)) 
                                                                   << 0xaU) 
                                                                  | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_0_bits_uop_mem_cmd)) 
                                                                      << 5U) 
                                                                     | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_0_bits_uop_mem_cmd)))))))))) 
                               >> 0x20U)) << 0x18U));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7486(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7486\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_execute_head 
        = vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__stq_execute_head;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT____VdfgTmp_h53cc952c__0 
        = ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_req_0_uop_mem_cmd)) 
           | ((0x11U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_req_0_uop_mem_cmd)) 
              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT____VdfgTmp_h0d3130cf__0)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__wb__DOT__req_way_en 
        = vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__wb__DOT__req_way_en;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__wb__DOT__acked 
        = vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__wb__DOT__acked;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__wb__DOT__req_voluntary 
        = vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__wb__DOT__req_voluntary;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_data_muxed_0[0U] 
        = (((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_tag_match_way_0))
             ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__data__DOT__io_resp_0_0_REG[0U]
             : 0U) | (((2U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_tag_match_way_0))
                        ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__data__DOT__io_resp_0_1_REG[0U]
                        : 0U) | (((4U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_tag_match_way_0))
                                   ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__data__DOT__io_resp_0_2_REG[0U]
                                   : 0U) | (((8U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_tag_match_way_0))
                                              ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__data__DOT__io_resp_0_3_REG[0U]
                                              : 0U) 
                                            | (((0x10U 
                                                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_tag_match_way_0))
                                                 ? 
                                                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__data__DOT__io_resp_0_4_REG[0U]
                                                 : 0U) 
                                               | (((0x20U 
                                                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_tag_match_way_0))
                                                    ? 
                                                   vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__data__DOT__io_resp_0_5_REG[0U]
                                                    : 0U) 
                                                  | (((0x40U 
                                                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_tag_match_way_0))
                                                       ? 
                                                      vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__data__DOT__io_resp_0_6_REG[0U]
                                                       : 0U) 
                                                     | ((0x80U 
                                                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_tag_match_way_0))
                                                         ? 
                                                        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__data__DOT__io_resp_0_7_REG[0U]
                                                         : 0U))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_data_muxed_0[1U] 
        = (((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_tag_match_way_0))
             ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__data__DOT__io_resp_0_0_REG[1U]
             : 0U) | (((2U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_tag_match_way_0))
                        ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__data__DOT__io_resp_0_1_REG[1U]
                        : 0U) | (((4U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_tag_match_way_0))
                                   ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__data__DOT__io_resp_0_2_REG[1U]
                                   : 0U) | (((8U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_tag_match_way_0))
                                              ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__data__DOT__io_resp_0_3_REG[1U]
                                              : 0U) 
                                            | (((0x10U 
                                                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_tag_match_way_0))
                                                 ? 
                                                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__data__DOT__io_resp_0_4_REG[1U]
                                                 : 0U) 
                                               | (((0x20U 
                                                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_tag_match_way_0))
                                                    ? 
                                                   vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__data__DOT__io_resp_0_5_REG[1U]
                                                    : 0U) 
                                                  | (((0x40U 
                                                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_tag_match_way_0))
                                                       ? 
                                                      vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__data__DOT__io_resp_0_6_REG[1U]
                                                       : 0U) 
                                                     | ((0x80U 
                                                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_tag_match_way_0))
                                                         ? 
                                                        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__data__DOT__io_resp_0_7_REG[1U]
                                                         : 0U))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_data_muxed_0[2U] 
        = (((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_tag_match_way_0))
             ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__data__DOT__io_resp_0_0_REG[2U]
             : 0U) | (((2U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_tag_match_way_0))
                        ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__data__DOT__io_resp_0_1_REG[2U]
                        : 0U) | (((4U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_tag_match_way_0))
                                   ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__data__DOT__io_resp_0_2_REG[2U]
                                   : 0U) | (((8U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_tag_match_way_0))
                                              ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__data__DOT__io_resp_0_3_REG[2U]
                                              : 0U) 
                                            | (((0x10U 
                                                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_tag_match_way_0))
                                                 ? 
                                                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__data__DOT__io_resp_0_4_REG[2U]
                                                 : 0U) 
                                               | (((0x20U 
                                                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_tag_match_way_0))
                                                    ? 
                                                   vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__data__DOT__io_resp_0_5_REG[2U]
                                                    : 0U) 
                                                  | (((0x40U 
                                                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_tag_match_way_0))
                                                       ? 
                                                      vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__data__DOT__io_resp_0_6_REG[2U]
                                                       : 0U) 
                                                     | ((0x80U 
                                                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_tag_match_way_0))
                                                         ? 
                                                        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__data__DOT__io_resp_0_7_REG[2U]
                                                         : 0U))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_data_muxed_0[3U] 
        = (((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_tag_match_way_0))
             ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__data__DOT__io_resp_0_0_REG[3U]
             : 0U) | (((2U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_tag_match_way_0))
                        ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__data__DOT__io_resp_0_1_REG[3U]
                        : 0U) | (((4U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_tag_match_way_0))
                                   ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__data__DOT__io_resp_0_2_REG[3U]
                                   : 0U) | (((8U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_tag_match_way_0))
                                              ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__data__DOT__io_resp_0_3_REG[3U]
                                              : 0U) 
                                            | (((0x10U 
                                                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_tag_match_way_0))
                                                 ? 
                                                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__data__DOT__io_resp_0_4_REG[3U]
                                                 : 0U) 
                                               | (((0x20U 
                                                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_tag_match_way_0))
                                                    ? 
                                                   vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__data__DOT__io_resp_0_5_REG[3U]
                                                    : 0U) 
                                                  | (((0x40U 
                                                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_tag_match_way_0))
                                                       ? 
                                                      vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__data__DOT__io_resp_0_6_REG[3U]
                                                       : 0U) 
                                                     | ((0x80U 
                                                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_tag_match_way_0))
                                                         ? 
                                                        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__data__DOT__io_resp_0_7_REG[3U]
                                                         : 0U))))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7487(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7487\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__wb__DOT__data_req_cnt 
        = vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__wb__DOT__data_req_cnt;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT____Vcellinp__mshrs__io_req_0_bits_old_meta_coh_state 
        = ((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_tag_match_way_0))
            ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs_io_req_0_bits_old_meta_meta_coh_state)
            : (((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_replaced_way_en_REG))
                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_repl_meta_REG_coh_state)
                 : 0U) | (((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_replaced_way_en_REG))
                            ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_repl_meta_REG_1_coh_state)
                            : 0U) | (((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_replaced_way_en_REG))
                                       ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_repl_meta_REG_2_coh_state)
                                       : 0U) | (((3U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_replaced_way_en_REG))
                                                  ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_repl_meta_REG_3_coh_state)
                                                  : 0U) 
                                                | (((4U 
                                                     == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_replaced_way_en_REG))
                                                     ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_repl_meta_REG_4_coh_state)
                                                     : 0U) 
                                                   | (((5U 
                                                        == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_replaced_way_en_REG))
                                                        ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_repl_meta_REG_5_coh_state)
                                                        : 0U) 
                                                      | (((6U 
                                                           == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_replaced_way_en_REG))
                                                           ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_repl_meta_REG_6_coh_state)
                                                           : 0U) 
                                                         | ((7U 
                                                             == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_replaced_way_en_REG))
                                                             ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_repl_meta_REG_7_coh_state)
                                                             : 0U)))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT___amoalu_io_mask_T 
        = (((IData)(vlSelf->__VdfgTmp_he593d70b__0) 
            << 1U) | (1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_req_0_addr))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_sc_fail 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_lrsc_addr_match_0)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_sc));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__idx_match_0 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__idx_matches_0_0) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__idx_matches_0_1) 
              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__idx_matches_0_2) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__idx_matches_0_3))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__tag_match_0 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__idx_matches_0_0) 
            & ((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__state)) 
               & ((0xfffffffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__req_addr 
                                         >> 0xcU))) 
                  == (0xfffffffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_req_0_addr 
                                            >> 0xcU)))))) 
           | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__idx_matches_0_1) 
               & ((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__state)) 
                  & ((0xfffffffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__req_addr 
                                            >> 0xcU))) 
                     == (0xfffffffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_req_0_addr 
                                               >> 0xcU)))))) 
              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__idx_matches_0_2) 
                  & ((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__state)) 
                     & ((0xfffffffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__req_addr 
                                               >> 0xcU))) 
                        == (0xfffffffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_req_0_addr 
                                                  >> 0xcU)))))) 
                 | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__idx_matches_0_3) 
                    & ((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__state)) 
                       & ((0xfffffffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__req_addr 
                                                 >> 0xcU))) 
                          == (0xfffffffU & (IData)(
                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_req_0_addr 
                                                    >> 0xcU)))))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7488(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7488\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT__state 
        = vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dtlb__DOT__state;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__tlb__DOT__state 
        = vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__tlb__DOT__state;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_ignore_7 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_l)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT____VdfgTmp_h7b4f7274__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_ignore_6 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_l)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT____VdfgTmp_h7b4f7274__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_ignore_5 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_l)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT____VdfgTmp_h7b4f7274__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_ignore_4 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_l)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT____VdfgTmp_h7b4f7274__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_ignore_3 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_l)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT____VdfgTmp_h7b4f7274__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_ignore_2 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_l)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT____VdfgTmp_h7b4f7274__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_ignore_1 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_l)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT____VdfgTmp_h7b4f7274__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_ignore 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_l)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT____VdfgTmp_h7b4f7274__0));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7489(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7489\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__fpiu__DOT__store_prevUnrecoded_rawIn_1_isInf 
        = ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__fpiu__DOT__in_in1[0U] 
               >> 0x1dU)) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__fpiu__DOT____VdfgTmp_h5c2f2006__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__fpiu__DOT__classify_out_isSubnormal 
        = ((1U == (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__fpiu__DOT__classify_out_expOut) 
                         >> 6U))) | (IData)(((0x80U 
                                              == (0x180U 
                                                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__fpiu__DOT__classify_out_expOut))) 
                                             & (2U 
                                                > (0x7fU 
                                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__fpiu__DOT__classify_out_expOut))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__fpiu__DOT__classify_out_isNormal 
        = ((IData)(((0x80U == (0x180U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__fpiu__DOT__classify_out_expOut))) 
                    & (2U <= (0x7fU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__fpiu__DOT__classify_out_expOut))))) 
           | (2U == (3U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__fpiu__DOT__classify_out_expOut) 
                           >> 7U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__fpiu__DOT__classify_out_isInf 
        = (IData)((0x180U == (0x1c0U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__fpiu__DOT__classify_out_expOut))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7490(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7490\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<4>/*127:0*/ __Vtemp_5;
    VlWide<4>/*127:0*/ __Vtemp_6;
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__fpiu__DOT__dcmp__DOT__common_ltMags 
        = (VL_LTS_III(13, (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__fpiu__DOT__in_in1[1U] 
                           >> 0x14U), (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__fpiu__DOT__in_in2[1U] 
                                       >> 0x14U)) | 
           ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__fpiu__DOT__dcmp__DOT__eqExps) 
            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__fpiu__DOT__dcmp__DOT___GEN 
               < vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__fpiu__DOT__dcmp__DOT___GEN_0)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__fpiu__DOT__dcmp__DOT__common_eqMags 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__fpiu__DOT__dcmp__DOT__eqExps) 
           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__fpiu__DOT__dcmp__DOT___GEN 
              == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__fpiu__DOT__dcmp__DOT___GEN_0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__fpiu__DOT__store_unrecoded_fractOut_1 
        = (0xfffffffffffffULL & (VL_GTS_III(13, 0x402U, 
                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__fpiu__DOT__in_in1[1U] 
                                             >> 0x14U))
                                  ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__fpiu__DOT___store_unrecoded_denormFract_T_3
                                  : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__fpiu__DOT__classify_out_isInf_1)
                                      ? 0ULL : (((QData)((IData)(
                                                                 vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__fpiu__DOT__in_in1[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__fpiu__DOT__in_in1[0U]))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__fpiu__DOT__conv__DOT__excSign 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__fpiu__DOT__conv__DOT__rawIn_isNaN)) 
           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__fpiu__DOT__in_in1[2U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__fpiu__DOT__dcmp__DOT__ordered 
        = (1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__fpiu__DOT__conv__DOT__rawIn_isNaN)) 
                 & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__fpiu__DOT__dcmp__DOT__rawB_isNaN))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__fpiu__DOT__narrow__DOT__invalidExc 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__fpiu__DOT__conv__DOT__rawIn_isNaN) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__fpiu__DOT__classify_out_isInf_1));
    __Vtemp_2[0U] = (IData)(vlSelf->__VdfgTmp_h422fe0af__0);
    __Vtemp_2[1U] = (IData)((vlSelf->__VdfgTmp_h422fe0af__0 
                             >> 0x20U));
    __Vtemp_2[2U] = 0U;
    VL_SHIFTL_WWI(84,84,5, __Vtemp_3, __Vtemp_2, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__fpiu__DOT__narrow__DOT____VdfgTmp_h98301597__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__fpiu__DOT__narrow__DOT__shiftedSig[0U] 
        = __Vtemp_3[0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__fpiu__DOT__narrow__DOT__shiftedSig[1U] 
        = __Vtemp_3[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__fpiu__DOT__narrow__DOT__shiftedSig[2U] 
        = (0xfffffU & __Vtemp_3[2U]);
    __Vtemp_5[0U] = (IData)(vlSelf->__VdfgTmp_h422fe0af__0);
    __Vtemp_5[1U] = (IData)((vlSelf->__VdfgTmp_h422fe0af__0 
                             >> 0x20U));
    __Vtemp_5[2U] = 0U;
    __Vtemp_5[3U] = 0U;
    VL_SHIFTL_WWI(116,116,6, __Vtemp_6, __Vtemp_5, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__fpiu__DOT__conv__DOT____VdfgTmp_h982919f3__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__fpiu__DOT__conv__DOT__shiftedSig[0U] 
        = __Vtemp_6[0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__fpiu__DOT__conv__DOT__shiftedSig[1U] 
        = __Vtemp_6[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__fpiu__DOT__conv__DOT__shiftedSig[2U] 
        = __Vtemp_6[2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__fpiu__DOT__conv__DOT__shiftedSig[3U] 
        = (0xfffffU & __Vtemp_6[3U]);
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7491(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7491\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__next_ghist_first_bank_saw_not_taken 
        = (1U & ((0U != ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__ftq__DOT__io_get_ftq_pc_1_entry_REG_br_mask) 
                         & (((8U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___GEN_9)) 
                             | ((4U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___GEN_10)) 
                                | ((2U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___GEN_11)) 
                                   | (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___GEN_11) 
                                            | (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__cfi_idx))))))) 
                            & ((IData)(vlSelf->__VdfgTmp_hb1f1bc37__0)
                                ? (~ (0xffU & ((IData)(1U) 
                                               << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__cfi_idx))))
                                : 0xfU)))) | vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__ftq__DOT___ghist_1_R0_data[2U]));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7492(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7492\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__alu_exe_unit__DOT__ALUUnit__DOT__alu__DOT___GEN 
        = (((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__alu_exe_unit__DOT__ALUUnit__DOT____Vcellinp__alu__io_in1 
                     >> 0x10U)) << 0x10U) | (0xffffU 
                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__alu_exe_unit__DOT__ALUUnit__DOT__alu__DOT__shin_hi));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT__data_MPORT_addr 
        = ((0x20U & ((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT___GEN 
                              >> 0x20U)) << 5U)) | 
           (((IData)((0U != (0xffffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT___GEN 
                                                >> 0x10U))))) 
             << 4U) | (((IData)((0U != (0xffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT___freeIdx_T_3) 
                                                 >> 7U)))) 
                        << 3U) | (((IData)((0U != (0xfU 
                                                   & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT___freeIdx_T_5) 
                                                      >> 3U)))) 
                                   << 2U) | (((IData)(
                                                      (0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT___freeIdx_T_7) 
                                                           >> 1U)))) 
                                              << 1U) 
                                             | (IData)(
                                                       (0U 
                                                        != 
                                                        (5U 
                                                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT___freeIdx_T_7)))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT__same_cycle_resp 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___same_cycle_resp_T_1) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_source) 
              == (0x3ffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                            >> 8U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__tage__DOT___GEN_54 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__tage__DOT___GEN_53) 
           & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__tage__DOT__alloc_lfsr_prng_3__DOT__state_5) 
               << 5U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__tage__DOT__alloc_lfsr_prng_3__DOT__state_4) 
                          << 4U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__tage__DOT__alloc_lfsr_prng_3__DOT__state_3) 
                                     << 3U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__tage__DOT__alloc_lfsr_prng_3__DOT__state_2) 
                                                << 2U) 
                                               | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__tage__DOT__alloc_lfsr_prng_3__DOT__state_1) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__tage__DOT__alloc_lfsr_prng_3__DOT__state_0)))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__tage__DOT___GEN_40 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__tage__DOT___GEN_39) 
           & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__tage__DOT__alloc_lfsr_prng_2__DOT__state_5) 
               << 5U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__tage__DOT__alloc_lfsr_prng_2__DOT__state_4) 
                          << 4U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__tage__DOT__alloc_lfsr_prng_2__DOT__state_3) 
                                     << 3U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__tage__DOT__alloc_lfsr_prng_2__DOT__state_2) 
                                                << 2U) 
                                               | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__tage__DOT__alloc_lfsr_prng_2__DOT__state_1) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__tage__DOT__alloc_lfsr_prng_2__DOT__state_0)))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7493(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7493\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__tage__DOT___GEN_26 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__tage__DOT___GEN_25) 
           & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__tage__DOT__alloc_lfsr_prng_1__DOT__state_5) 
               << 5U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__tage__DOT__alloc_lfsr_prng_1__DOT__state_4) 
                          << 4U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__tage__DOT__alloc_lfsr_prng_1__DOT__state_3) 
                                     << 3U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__tage__DOT__alloc_lfsr_prng_1__DOT__state_2) 
                                                << 2U) 
                                               | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__tage__DOT__alloc_lfsr_prng_1__DOT__state_1) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__tage__DOT__alloc_lfsr_prng_1__DOT__state_0)))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__tage__DOT___GEN_12 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__tage__DOT___GEN_11) 
           & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__tage__DOT__alloc_lfsr_prng__DOT__state_5) 
               << 5U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__tage__DOT__alloc_lfsr_prng__DOT__state_4) 
                          << 4U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__tage__DOT__alloc_lfsr_prng__DOT__state_3) 
                                     << 3U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__tage__DOT__alloc_lfsr_prng__DOT__state_2) 
                                                << 2U) 
                                               | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__tage__DOT__alloc_lfsr_prng__DOT__state_1) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__tage__DOT__alloc_lfsr_prng__DOT__state_0)))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT___GEN_54 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT___GEN_53) 
           & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__alloc_lfsr_prng_3__DOT__state_5) 
               << 5U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__alloc_lfsr_prng_3__DOT__state_4) 
                          << 4U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__alloc_lfsr_prng_3__DOT__state_3) 
                                     << 3U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__alloc_lfsr_prng_3__DOT__state_2) 
                                                << 2U) 
                                               | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__alloc_lfsr_prng_3__DOT__state_1) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__alloc_lfsr_prng_3__DOT__state_0)))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT___GEN_40 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT___GEN_39) 
           & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__alloc_lfsr_prng_2__DOT__state_5) 
               << 5U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__alloc_lfsr_prng_2__DOT__state_4) 
                          << 4U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__alloc_lfsr_prng_2__DOT__state_3) 
                                     << 3U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__alloc_lfsr_prng_2__DOT__state_2) 
                                                << 2U) 
                                               | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__alloc_lfsr_prng_2__DOT__state_1) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__alloc_lfsr_prng_2__DOT__state_0)))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT___GEN_26 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT___GEN_25) 
           & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__alloc_lfsr_prng_1__DOT__state_5) 
               << 5U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__alloc_lfsr_prng_1__DOT__state_4) 
                          << 4U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__alloc_lfsr_prng_1__DOT__state_3) 
                                     << 3U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__alloc_lfsr_prng_1__DOT__state_2) 
                                                << 2U) 
                                               | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__alloc_lfsr_prng_1__DOT__state_1) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__alloc_lfsr_prng_1__DOT__state_0)))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT___GEN_12 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT___GEN_11) 
           & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__alloc_lfsr_prng__DOT__state_5) 
               << 5U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__alloc_lfsr_prng__DOT__state_4) 
                          << 4U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__alloc_lfsr_prng__DOT__state_3) 
                                     << 3U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__alloc_lfsr_prng__DOT__state_2) 
                                                << 2U) 
                                               | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__alloc_lfsr_prng__DOT__state_1) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT__alloc_lfsr_prng__DOT__state_0)))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT__putbuffer__DOT___freeIdx_T_5 
        = (0x7fU & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT__putbuffer__DOT___freeIdx_T_3) 
                     >> 8U) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT__putbuffer__DOT___freeIdx_T_3)));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7494(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7494\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__icache__DOT__repl_way_prng__DOT__state_6 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__victimLFSR_prng__DOT__state_6 = 0U;
    } else {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__icache__DOT__refill_fire) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__icache__DOT__repl_way_prng__DOT__state_6 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__icache__DOT__repl_way_prng__DOT__state_5;
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__directory__io_read_valid) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__victimLFSR_prng__DOT__state_6 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__victimLFSR_prng__DOT__state_5;
        }
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT___GEN 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__victimLFSR_prng__DOT__state_9) 
            << 2U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__victimLFSR_prng__DOT__state_8) 
                       << 1U) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__victimLFSR_prng__DOT__state_7)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__nodeIn_d_q__DOT__do_enq 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___fbus_buffer_auto_out_d_ready) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_from_bus_named_fbus_bus_xing_in_d_valid));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT___readys_filter_T_9 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__readys_mask_4)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__readys_valid_4));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__nodeIn_d_q__DOT__do_enq 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tile_prci_domain_1_auto_tl_master_clock_xing_out_d_ready) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_from_boom_tile_tl_master_clock_xing_in_d_valid));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT___readys_filter_T_13 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__readys_mask_6)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__readys_valid_6));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT__do_enq 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tile_prci_domain_auto_tl_master_clock_xing_out_d_ready) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_from_rockettile_tl_master_clock_xing_in_d_valid));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT___readys_filter_T_11 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__readys_mask_5)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__readys_valid_5));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___GEN_4 
        = (IData)((6U == (6U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_c_bits_opcode))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT___same_cycle_resp_T_3 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_valid) 
           & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__c_first_counter_1)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT___same_cycle_resp_T_3 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_valid) 
           & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT__c_first_counter_1)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___io_cpu_perf_release_T 
        = ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT__ptr_match) 
               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT__maybe_full))) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_valid));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___s1_mask_xwr_T_1 
        = ((0xcU & ((((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_vaddr 
                                     >> 1U))) ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___s1_mask_xwr_T)
                       : 0U) | (- (IData)((1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_req_size) 
                                                 >> 1U))))) 
                    << 2U)) | ((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_vaddr 
                                              >> 1U)))
                                ? 0U : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___s1_mask_xwr_T)));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7495(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7495\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_41 
        = ((0x10U & ((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                              >> 0x1fU)) << 4U)) | 
           ((0xcU & ((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                              >> 0x1bU)) << 2U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____VdfgTmp_h9103a86c__0)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_45 
        = ((0x20U & ((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                              >> 0x1fU)) << 5U)) | 
           ((0x10U & ((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                               >> 0x1cU)) << 4U)) | 
            ((8U & ((~ (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                >> 0x1bU))) << 3U)) 
             | ((4U & ((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                >> 0x19U)) << 2U)) 
                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____VdfgTmp_h9103a86c__0)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_cacheable 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_legal_address) 
           & ((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                       >> 0x1fU)) | (0U == ((8U & ((IData)(
                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                                            >> 0x1fU)) 
                                                   << 3U)) 
                                            | ((6U 
                                                & (4U 
                                                   ^ 
                                                   ((IData)(
                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                                             >> 0x1aU)) 
                                                    << 1U))) 
                                               | (1U 
                                                  & (IData)(
                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                                             >> 0x10U))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_pmp__DOT__res_hit_7 
        = ((2U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_a))
            ? ((0U == ((~ (vlSelf->__VdfgTmp_h9acc6f6a__0 
                           >> 1U)) & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_pmp__DOT____VdfgTmp_h388f1ed2__0)) 
               & (0U == (7U & ((~ (3U | ((~ ((IData)(7U) 
                                             << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_tlb_req_size))) 
                                         | (4U & (vlSelf->__VdfgTmp_h9acc6f6a__0 
                                                  << 2U))))) 
                               & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_tlb_req_vaddr) 
                                  ^ (4U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_0_addr 
                                           << 2U)))))))
            : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_a) 
               & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_pmp__DOT____VdfgTmp_h36756082__0) 
                  | ((0U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_pmp__DOT____VdfgTmp_h388f1ed2__0) 
                     & ((7U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_tlb_req_vaddr)) 
                        < (4U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_0_addr 
                                 << 2U)))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7496(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7496\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_pmp__DOT____VdfgTmp_h7004745e__0 
        = ((0U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_pmp__DOT____VdfgTmp_h388f1ed2__0) 
           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_0_addr);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_pmp__DOT____VdfgTmp_h7b1b4c8a__0 
        = ((0U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_pmp__DOT____VdfgTmp_hd711a5a4__0) 
           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_6_addr);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_pmp__DOT____VdfgTmp_h3c18f974__0 
        = ((0U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_pmp__DOT____VdfgTmp_h39ad75e1__0) 
           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_5_addr);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_pmp__DOT____VdfgTmp_h85cce2ec__0 
        = ((0U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_pmp__DOT____VdfgTmp_h8c11e193__0) 
           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_4_addr);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_pmp__DOT____VdfgTmp_h513dfc65__0 
        = ((0U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_pmp__DOT____VdfgTmp_h5a143f56__0) 
           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_3_addr);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_pmp__DOT____VdfgTmp_h056f90ca__0 
        = ((0U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_pmp__DOT____VdfgTmp_hd3b18119__0) 
           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_2_addr);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_pmp__DOT____VdfgTmp_h79f9a82b__0 
        = ((0U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_pmp__DOT____VdfgTmp_h206695ae__0) 
           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_1_addr);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_pmp__DOT__res_hit 
        = ((2U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_a))
            ? ((0U == ((~ (vlSelf->__VdfgTmp_h23204681__0 
                           >> 1U)) & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_pmp__DOT____VdfgTmp_hf9e260ef__0)) 
               & (0U == (7U & ((~ (3U | ((~ ((IData)(7U) 
                                             << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_tlb_req_size))) 
                                         | (4U & (vlSelf->__VdfgTmp_h23204681__0 
                                                  << 2U))))) 
                               & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_tlb_req_vaddr) 
                                  ^ (4U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_7_addr 
                                           << 2U)))))))
            : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_a) 
               & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_pmp__DOT____VdfgTmp_hd6939e38__0) 
                      | ((0U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_pmp__DOT____VdfgTmp_hd711a5a4__0) 
                         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_pmp__DOT____VdfgTmp_hb1bf29f6__0) 
                            < (4U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_6_addr 
                                     << 2U)))))) & 
                  (((0x1fffffffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                            >> 3U))) 
                    < (0x1fffffffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_7_addr 
                                      >> 1U))) | ((0U 
                                                   == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_pmp__DOT____VdfgTmp_hf9e260ef__0) 
                                                  & ((7U 
                                                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_tlb_req_vaddr)) 
                                                     < 
                                                     (4U 
                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_7_addr 
                                                         << 2U))))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7497(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7497\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_pmp__DOT__res_hit_6 
        = ((2U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_a))
            ? ((0U == ((~ (vlSelf->__VdfgTmp_h349a16b1__0 
                           >> 1U)) & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_pmp__DOT____VdfgTmp_h206695ae__0)) 
               & (0U == (7U & ((~ (3U | ((~ ((IData)(7U) 
                                             << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_tlb_req_size))) 
                                         | (4U & (vlSelf->__VdfgTmp_h349a16b1__0 
                                                  << 2U))))) 
                               & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_tlb_req_vaddr) 
                                  ^ (4U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_1_addr 
                                           << 2U)))))))
            : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_a) 
               & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_pmp__DOT____VdfgTmp_h36756082__0) 
                      | ((0U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_pmp__DOT____VdfgTmp_h388f1ed2__0) 
                         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_pmp__DOT____VdfgTmp_hb1bf29f6__0) 
                            < (4U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_0_addr 
                                     << 2U)))))) & 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_pmp__DOT____VdfgTmp_h1fecee06__0) 
                   | ((0U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_pmp__DOT____VdfgTmp_h206695ae__0) 
                      & ((7U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_tlb_req_vaddr)) 
                         < (4U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_1_addr 
                                  << 2U))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_pmp__DOT__res_hit_5 
        = ((2U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_a))
            ? ((0U == ((~ (vlSelf->__VdfgTmp_habe1613d__0 
                           >> 1U)) & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_pmp__DOT____VdfgTmp_hd3b18119__0)) 
               & (0U == (7U & ((~ (3U | ((~ ((IData)(7U) 
                                             << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_tlb_req_size))) 
                                         | (4U & (vlSelf->__VdfgTmp_habe1613d__0 
                                                  << 2U))))) 
                               & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_tlb_req_vaddr) 
                                  ^ (4U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_2_addr 
                                           << 2U)))))))
            : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_a) 
               & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_pmp__DOT____VdfgTmp_h1fecee06__0) 
                      | ((0U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_pmp__DOT____VdfgTmp_h206695ae__0) 
                         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_pmp__DOT____VdfgTmp_hb1bf29f6__0) 
                            < (4U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_1_addr 
                                     << 2U)))))) & 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_pmp__DOT____VdfgTmp_hd133facb__0) 
                   | ((0U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_pmp__DOT____VdfgTmp_hd3b18119__0) 
                      & ((7U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_tlb_req_vaddr)) 
                         < (4U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_2_addr 
                                  << 2U))))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7498(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7498\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_pmp__DOT__res_hit_4 
        = ((2U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_a))
            ? ((0U == ((~ (vlSelf->__VdfgTmp_h3506a561__0 
                           >> 1U)) & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_pmp__DOT____VdfgTmp_h5a143f56__0)) 
               & (0U == (7U & ((~ (3U | ((~ ((IData)(7U) 
                                             << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_tlb_req_size))) 
                                         | (4U & (vlSelf->__VdfgTmp_h3506a561__0 
                                                  << 2U))))) 
                               & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_tlb_req_vaddr) 
                                  ^ (4U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_3_addr 
                                           << 2U)))))))
            : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_a) 
               & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_pmp__DOT____VdfgTmp_hd133facb__0) 
                      | ((0U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_pmp__DOT____VdfgTmp_hd3b18119__0) 
                         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_pmp__DOT____VdfgTmp_hb1bf29f6__0) 
                            < (4U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_2_addr 
                                     << 2U)))))) & 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_pmp__DOT____VdfgTmp_h599e000e__0) 
                   | ((0U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_pmp__DOT____VdfgTmp_h5a143f56__0) 
                      & ((7U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_tlb_req_vaddr)) 
                         < (4U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_3_addr 
                                  << 2U))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_pmp__DOT__res_hit_3 
        = ((2U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_a))
            ? ((0U == ((~ (vlSelf->__VdfgTmp_hb4591c2b__0 
                           >> 1U)) & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_pmp__DOT____VdfgTmp_h8c11e193__0)) 
               & (0U == (7U & ((~ (3U | ((~ ((IData)(7U) 
                                             << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_tlb_req_size))) 
                                         | (4U & (vlSelf->__VdfgTmp_hb4591c2b__0 
                                                  << 2U))))) 
                               & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_tlb_req_vaddr) 
                                  ^ (4U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_4_addr 
                                           << 2U)))))))
            : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_a) 
               & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_pmp__DOT____VdfgTmp_h599e000e__0) 
                      | ((0U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_pmp__DOT____VdfgTmp_h5a143f56__0) 
                         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_pmp__DOT____VdfgTmp_hb1bf29f6__0) 
                            < (4U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_3_addr 
                                     << 2U)))))) & 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_pmp__DOT____VdfgTmp_h8b93da41__0) 
                   | ((0U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_pmp__DOT____VdfgTmp_h8c11e193__0) 
                      & ((7U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_tlb_req_vaddr)) 
                         < (4U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_4_addr 
                                  << 2U))))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7499(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7499\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_pmp__DOT__res_hit_2 
        = ((2U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_a))
            ? ((0U == ((~ (vlSelf->__VdfgTmp_h8f07044f__0 
                           >> 1U)) & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_pmp__DOT____VdfgTmp_h39ad75e1__0)) 
               & (0U == (7U & ((~ (3U | ((~ ((IData)(7U) 
                                             << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_tlb_req_size))) 
                                         | (4U & (vlSelf->__VdfgTmp_h8f07044f__0 
                                                  << 2U))))) 
                               & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_tlb_req_vaddr) 
                                  ^ (4U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_5_addr 
                                           << 2U)))))))
            : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_a) 
               & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_pmp__DOT____VdfgTmp_h8b93da41__0) 
                      | ((0U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_pmp__DOT____VdfgTmp_h8c11e193__0) 
                         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_pmp__DOT____VdfgTmp_hb1bf29f6__0) 
                            < (4U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_4_addr 
                                     << 2U)))))) & 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_pmp__DOT____VdfgTmp_h37174e73__0) 
                   | ((0U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_pmp__DOT____VdfgTmp_h39ad75e1__0) 
                      & ((7U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_tlb_req_vaddr)) 
                         < (4U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_5_addr 
                                  << 2U))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_pmp__DOT__res_hit_1 
        = ((2U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_a))
            ? ((0U == ((~ (vlSelf->__VdfgTmp_h891347ec__0 
                           >> 1U)) & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_pmp__DOT____VdfgTmp_hd711a5a4__0)) 
               & (0U == (7U & ((~ (3U | ((~ ((IData)(7U) 
                                             << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_tlb_req_size))) 
                                         | (4U & (vlSelf->__VdfgTmp_h891347ec__0 
                                                  << 2U))))) 
                               & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_tlb_req_vaddr) 
                                  ^ (4U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_6_addr 
                                           << 2U)))))))
            : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_a) 
               & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_pmp__DOT____VdfgTmp_h37174e73__0) 
                      | ((0U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_pmp__DOT____VdfgTmp_h39ad75e1__0) 
                         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_pmp__DOT____VdfgTmp_hb1bf29f6__0) 
                            < (4U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_5_addr 
                                     << 2U)))))) & 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_pmp__DOT____VdfgTmp_hd6939e38__0) 
                   | ((0U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_pmp__DOT____VdfgTmp_hd711a5a4__0) 
                      & ((7U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_tlb_req_vaddr)) 
                         < (4U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_6_addr 
                                  << 2U))))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7500(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7500\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_mask 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_pma_cacheable)
            ? 0xffU : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_write)
                        ? ((0x11U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_cmd))
                            ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore1_mask)
                            : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___dcacheArb_io_requestor_0_resp_bits_has_data)
                                ? ((0xfU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_cmd))
                                    ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____VdfgTmp_hf7daac28__0)
                                    : ((0xeU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_cmd))
                                        ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____VdfgTmp_hf7daac28__0)
                                        : ((0xdU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_cmd))
                                            ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____VdfgTmp_hf7daac28__0)
                                            : ((0xcU 
                                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_cmd))
                                                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____VdfgTmp_hf7daac28__0)
                                                : (
                                                   (8U 
                                                    == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_cmd))
                                                    ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____VdfgTmp_hf7daac28__0)
                                                    : 
                                                   ((0xbU 
                                                     == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_cmd))
                                                     ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____VdfgTmp_hf7daac28__0)
                                                     : 
                                                    ((0xaU 
                                                      == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_cmd))
                                                      ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____VdfgTmp_hf7daac28__0)
                                                      : 
                                                     ((9U 
                                                       == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_cmd))
                                                       ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____VdfgTmp_hf7daac28__0)
                                                       : 
                                                      ((4U 
                                                        == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_cmd))
                                                        ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____VdfgTmp_hf7daac28__0)
                                                        : 0U)))))))))
                                : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____VdfgTmp_hf7daac28__0)))
                        : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____VdfgTmp_hf7daac28__0)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_rs_1 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_reg_rs_bypass_1)
            ? (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_0[
                                (((IData)(0x3fU) + 
                                  (0xffU & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_reg_rs_lsb_1), 6U))) 
                                 >> 5U)])) << ((0U 
                                                == 
                                                (0x1fU 
                                                 & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_reg_rs_lsb_1), 6U)))
                                                ? 0x20U
                                                : ((IData)(0x40U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_reg_rs_lsb_1), 6U))))) 
               | (((0U == (0x1fU & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_reg_rs_lsb_1), 6U)))
                    ? 0ULL : ((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_0[
                                              (((IData)(0x1fU) 
                                                + (0xffU 
                                                   & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_reg_rs_lsb_1), 6U))) 
                                               >> 5U)])) 
                              << ((IData)(0x20U) - 
                                  (0x1fU & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_reg_rs_lsb_1), 6U))))) 
                  | ((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_0[
                                     (7U & (VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_reg_rs_lsb_1), 6U) 
                                            >> 5U))])) 
                     >> (0x1fU & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_reg_rs_lsb_1), 6U)))))
            : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_reg_rs_msb_1 
                << 2U) | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_reg_rs_lsb_1))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_rs_0 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_reg_rs_bypass_0)
            ? (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_0[
                                (((IData)(0x3fU) + 
                                  (0xffU & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_reg_rs_lsb_0), 6U))) 
                                 >> 5U)])) << ((0U 
                                                == 
                                                (0x1fU 
                                                 & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_reg_rs_lsb_0), 6U)))
                                                ? 0x20U
                                                : ((IData)(0x40U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_reg_rs_lsb_0), 6U))))) 
               | (((0U == (0x1fU & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_reg_rs_lsb_0), 6U)))
                    ? 0ULL : ((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_0[
                                              (((IData)(0x1fU) 
                                                + (0xffU 
                                                   & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_reg_rs_lsb_0), 6U))) 
                                               >> 5U)])) 
                              << ((IData)(0x20U) - 
                                  (0x1fU & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_reg_rs_lsb_0), 6U))))) 
                  | ((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_0[
                                     (7U & (VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_reg_rs_lsb_0), 6U) 
                                            >> 5U))])) 
                     >> (0x1fU & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_reg_rs_lsb_0), 6U)))))
            : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_reg_rs_msb_0 
                << 2U) | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_reg_rs_lsb_0))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT____VdfgTmp_h4c116375__0 
        = (0x1fU & ((IData)(5U) * ((IData)(2U) - ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___rob_io_commit_valids_2)
                                                   ? 0U
                                                   : 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___rob_io_commit_valids_1)
                                                    ? 1U
                                                    : 2U)))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7501(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7501\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT____Vcellinp__rob_debug_inst_mem__R0_en 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___io_ifu_commit_valid_T) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___rob_io_commit_valids_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___rob_io_com_xcpt_valid 
        = ((~ ((0x10ULL == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__r_xcpt_uop_exc_cause) 
               | (0x11ULL == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__r_xcpt_uop_exc_cause))) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__exception_thrown));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT___GEN_29 
        = ((0U == (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address 
                   >> 0xdU)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT___GEN_22));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_valid_flush_line 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_valid_hit_maybe_flush_pre_data_ecc_and_waw) 
           & ((5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_cmd)) 
              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_size)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_valid_hit_pre_data_ecc_and_waw 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_valid_hit_maybe_flush_pre_data_ecc_and_waw) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_readwrite));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_valid_cached_miss 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_valid_miss) 
           & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__uncachedInFlight_0)) 
              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_pma_cacheable)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_valid_uncached_pending 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_valid_miss) 
           & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_pma_cacheable)) 
              & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__uncachedInFlight_0))));
    if ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__in_xbar__DOT__beatsLeft))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__in_xbar__DOT__muxState_1 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__in_xbar__DOT__winner_1;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__in_xbar__DOT__muxState_0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__in_xbar__DOT__winner_0;
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__in_xbar__DOT__muxState_1 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__in_xbar__DOT__state_1;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__in_xbar__DOT__muxState_0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__in_xbar__DOT__state_0;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT___readys_mask_T_3 
        = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT___readys_mask_T) 
                 | VL_SHIFTL_III(3,3,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT___readys_mask_T), 1U)));
    if ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__beatsLeft))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__muxState_0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__winner_0;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__muxState_1 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__winner_1;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__muxState_2 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__winner_2;
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__muxState_0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__state_0;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__muxState_1 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__state_1;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__muxState_2 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__state_2;
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7502(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7502\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT___readys_mask_T_11 
        = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT___readys_mask_T_8) 
                 | VL_SHIFTL_III(3,3,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT___readys_mask_T_8), 1U)));
    if ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__beatsLeft_1))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__muxState_1_0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__winner_1_0;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__muxState_1_1 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__winner_1_1;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__muxState_1_2 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__winner_1_2;
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__muxState_1_0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__state_1_0;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__muxState_1_1 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__state_1_1;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__muxState_1_2 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__state_1_2;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__lfsr_prng__DOT__state_6 = 0U;
    } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__replace) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__lfsr_prng__DOT__state_6 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__lfsr_prng__DOT__state_5;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT___freeIdx_T_5 
        = (0x7fU & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT___freeIdx_T_3) 
                     >> 8U) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT___freeIdx_T_3)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__iregister_read__DOT__rrd_uops_3_REG_br_mask 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___int_issue_unit_io_iss_uops_2_br_mask) 
           & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT___lsu_io_dmem_brupdate_b1_resolve_mask)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__iregister_read__DOT__rrd_uops_2_REG_br_mask 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___int_issue_unit_io_iss_uops_1_br_mask) 
           & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT___lsu_io_dmem_brupdate_b1_resolve_mask)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__iregister_read__DOT__rrd_uops_1_REG_br_mask 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___int_issue_unit_io_iss_uops_0_br_mask) 
           & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT___lsu_io_dmem_brupdate_b1_resolve_mask)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__downvert_d2s__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp 
        = (0x7fffU & (((0x4000U & (((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__r_out_wdata_double[1U] 
                                     >> 0x14U) - (IData)(0x700U)) 
                                   << 1U)) | (0x3fffU 
                                              & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__r_out_wdata_double[1U] 
                                                  >> 0x14U) 
                                                 - (IData)(0x700U)))) 
                      + (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__downvert_d2s__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                               >> 0x18U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__iregister_read__DOT__exe_reg_uops_2_dst_rtype 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__iregister_read__DOT__rrd_kill_2)
            ? 2U : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__iregister_read__DOT__rrd_uops_2_REG_dst_rtype));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7503(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7503\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT___GEN_53 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT___GEN_52) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___sinkC_io_resp_bits_last));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT___GEN_53 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT___GEN_52) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___sinkC_io_resp_bits_last));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT___GEN_53 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT___GEN_52) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___sinkC_io_resp_bits_last));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT___GEN_53 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT___GEN_52) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___sinkC_io_resp_bits_last));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT___GEN_53 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT___GEN_52) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___sinkC_io_resp_bits_last));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT___GEN_53 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT___GEN_52) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___sinkC_io_resp_bits_last));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT___GEN_53 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT___GEN_52) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___sinkC_io_resp_bits_last));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___GEN_18 
        = ((1U | (0x7eU & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___mshr_insertOH_T_6) 
                               | VL_SHIFTL_III(6,6,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___mshr_insertOH_T_6), 4U))) 
                           << 1U))) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____VdfgTmp_h19ea8b5c__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___GEN_9 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___mshr_request_T_22) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___robin_request_T) 
              >> 6U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___GEN_10 
        = (0x3fU & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___robin_request_T) 
                     >> 1U) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___robin_request_T)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__ftq__DOT____VdfgTmp_ha99cd3a1__0 
        = ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__ftq__DOT____VdfgTmp_h233ed708__0) 
             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__ftq__DOT__prev_entry_cfi_taken))
             ? (~ ((IData)(1U) << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__ftq__DOT__prev_entry_cfi_idx_bits)))
             : 0xffU) & (((IData)((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__ftq__DOT__prev_entry_cfi_idx_bits))) 
                          << 7U) | ((0x40U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__ftq__DOT___GEN_1)) 
                                    | ((0x20U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__ftq__DOT___GEN_2)) 
                                       | ((0x10U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__ftq__DOT___GEN_3)) 
                                          | ((8U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__ftq__DOT___GEN_4)) 
                                             | ((4U 
                                                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__ftq__DOT___GEN_5)) 
                                                | ((2U 
                                                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__ftq__DOT___GEN_6)) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__ftq__DOT___GEN_6) 
                                                         | (7U 
                                                            == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__ftq__DOT__prev_entry_cfi_idx_bits))))))))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7504(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7504\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__alu_exe_unit_2__DOT____Vcellinp__ALUUnit__io_req_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__iregister_read__DOT__exe_reg_valids_3) 
           & ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__iregister_read__DOT__exe_reg_uops_3_fu_code)) 
              | ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__iregister_read__DOT__exe_reg_uops_3_fu_code)) 
                 | ((0x20U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__iregister_read__DOT__exe_reg_uops_3_fu_code)) 
                    & (0x6cU != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__iregister_read__DOT__exe_reg_uops_3_uopc))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__ptw__DOT__pte_v 
        = (1U & ((~ ((IData)((0ULL != (0xeULL & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__ptw__DOT__mem_resp_data))) 
                     & (((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__ptw__DOT__count) 
                             >> 1U)) & (0U != (0x1ffU 
                                               & (IData)(
                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__ptw__DOT__mem_resp_data 
                                                          >> 0xaU))))) 
                        | ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__ptw__DOT__count)) 
                           & (0U != (0x1ffU & (IData)(
                                                      (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__ptw__DOT__mem_resp_data 
                                                       >> 0x13U)))))))) 
                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__ptw__DOT__mem_resp_data)));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7505(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7505\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__ptw__DOT___GEN_27 
        = ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__ptw__DOT__state)) 
           | (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__ptw__DOT__state)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT___ptw_io_requestor_0_req_ready 
        = (1U & ((~ (IData)((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__ptw__DOT__state)))) 
                 & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__ptw__DOT__l2_refill))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT___hellaCacheArb_io_mem_s1_kill 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__ptw__DOT__l2_hit) 
           | (2U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__ptw__DOT__state)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__ptw__DOT___hits_T 
        = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__ptw__DOT__tags_0 
           == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__ptw__DOT___GEN_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__ptw__DOT___hits_T_1 
        = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__ptw__DOT__tags_1 
           == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__ptw__DOT___GEN_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__ptw__DOT___hits_T_2 
        = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__ptw__DOT__tags_2 
           == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__ptw__DOT___GEN_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__ptw__DOT___hits_T_3 
        = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__ptw__DOT__tags_3 
           == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__ptw__DOT___GEN_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__ptw__DOT___hits_T_4 
        = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__ptw__DOT__tags_4 
           == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__ptw__DOT___GEN_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__ptw__DOT___hits_T_5 
        = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__ptw__DOT__tags_5 
           == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__ptw__DOT___GEN_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__ptw__DOT___hits_T_6 
        = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__ptw__DOT__tags_6 
           == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__ptw__DOT___GEN_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__ptw__DOT___hits_T_7 
        = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__ptw__DOT__tags_7 
           == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__ptw__DOT___GEN_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__ptw__DOT___GEN_17 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__ptw__DOT__r_pte_ppn) 
            << 0xcU) & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__ptw__DOT__pmpHomogeneous_pgMask_7);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2389 
        = ((1U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__hella_state)) 
           | (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__hella_state)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_2388 
        = ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__hella_state)) 
           & ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__ptw__DOT__state)) 
              | (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__ptw__DOT__state))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_862 
        = ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__hella_state)) 
           | (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__hella_state)));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7506(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7506\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT___mshrs_3_io_wb_req_valid 
        = ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT____VdfgTmp_h90903b45__0) 
               | (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__state)))) 
           & (9U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__state)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT___mshrs_3_io_meta_write_valid 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT____VdfgTmp_h90903b45__0)) 
           & ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__state)) 
              | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT___GEN_17)) 
                 & (0xdU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__state)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT___mshrs_3_io_req_pri_rdy 
        = (1U & ((~ (IData)((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__state)))) 
                 | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT___GEN_22)) 
                    & (0x11U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__state)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT___mshrs_2_io_wb_req_valid 
        = ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT____VdfgTmp_h90903b45__0) 
               | (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__state)))) 
           & (9U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__state)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT___mshrs_2_io_meta_write_valid 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT____VdfgTmp_h90903b45__0)) 
           & ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__state)) 
              | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT___GEN_17)) 
                 & (0xdU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__state)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT___mshrs_2_io_req_pri_rdy 
        = (1U & ((~ (IData)((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__state)))) 
                 | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT___GEN_22)) 
                    & (0x11U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__state)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT___mshrs_1_io_wb_req_valid 
        = ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT____VdfgTmp_h90903b45__0) 
               | (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__state)))) 
           & (9U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__state)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT___mshrs_1_io_meta_write_valid 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT____VdfgTmp_h90903b45__0)) 
           & ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__state)) 
              | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT___GEN_17)) 
                 & (0xdU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__state)))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7507(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7507\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT___mshrs_1_io_req_pri_rdy 
        = (1U & ((~ (IData)((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__state)))) 
                 | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT___GEN_22)) 
                    & (0x11U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__state)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__widget__DOT__monitor__DOT___same_cycle_resp_T_1 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT___dcache_auto_out_a_valid) 
           & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__widget__DOT__monitor__DOT__a_first_counter_1)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT___widget_auto_out_a_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__widget__DOT__repeated_repeater__DOT__full) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT___dcache_auto_out_a_valid));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__muxState_2 
        = ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__beatsLeft))
            ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__winner_2)
            : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__state_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__winner_3 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT___GEN_7)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT___mshrs_3_io_mem_acquire_valid));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT____VdfgTmp_haef7240b__0 
        = (1U & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT___mshrs_3_io_mem_acquire_valid) 
                    | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT___GEN_7))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT___mshrs_2_io_lb_write_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT____VdfgTmp_h6047b731__0) 
           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT____Vcellinp__mshrs_2__io_mem_grant_valid)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT___mshrs_1_io_lb_write_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT____VdfgTmp_h6047b731__0) 
           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT____Vcellinp__mshrs_1__io_mem_grant_valid)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT___GEN_0 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT___mshrs_0_io_mem_grant_ready) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT____Vcellinp__mshrs_0__io_mem_grant_valid));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT___mshrs_0_io_lb_write_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT___mshrs_0_io_mem_grant_ready) 
           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT____Vcellinp__mshrs_0__io_mem_grant_valid)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT___mshrs_io_meta_read_bits_idx 
        = (0x3fU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT___mshrs_0_io_meta_read_valid)
                     ? (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__req_addr 
                                >> 6U)) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT___mshrs_1_io_meta_read_valid)
                                            ? (IData)(
                                                      (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__req_addr 
                                                       >> 6U))
                                            : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT___mshrs_2_io_meta_read_valid)
                                                ? (IData)(
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__req_addr 
                                                           >> 6U))
                                                : (IData)(
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__req_addr 
                                                           >> 6U))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7508(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7508\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__meta_read_arb__DOT___grant_T 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT___mshrs_0_io_meta_read_valid) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT___mshrs_1_io_meta_read_valid));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT___mshrs_0_io_wb_req_valid 
        = ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT____VdfgTmp_h90903b45__0) 
               | (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__state)))) 
           & (9U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__state)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT___mshrs_0_io_meta_write_valid 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT____VdfgTmp_h90903b45__0)) 
           & ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__state)) 
              | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT___GEN_17)) 
                 & (0xdU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__state)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT___GEN_48 
        = (1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__grantack_valid)) 
                 | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT___widget_auto_in_e_ready) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__beatsLeft_1)
                         ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__state_1_2)
                         : (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT___io_mem_finish_valid_T)))) 
                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT___mshrs_2_io_mem_finish_valid))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT___dcache_auto_out_e_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__beatsLeft_1)
            ? (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT___mshrs_0_io_mem_finish_valid) 
                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__state_1_0)) 
               | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT___mshrs_1_io_mem_finish_valid) 
                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__state_1_1)) 
                  | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT___mshrs_2_io_mem_finish_valid) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__state_1_2)) 
                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT___mshrs_3_io_mem_finish_valid) 
                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__state_1_3)))))
            : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT___io_mem_finish_valid_T) 
               | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT___mshrs_2_io_mem_finish_valid) 
                  | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT___mshrs_3_io_mem_finish_valid))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__winner_1_2 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT___io_mem_finish_valid_T)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT___mshrs_2_io_mem_finish_valid));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT____VdfgTmp_hb3fde14c__0 
        = (1U & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT___mshrs_2_io_mem_finish_valid) 
                    | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT___io_mem_finish_valid_T))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT___mshrs_0_io_req_pri_rdy 
        = (1U & ((~ (IData)((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__state)))) 
                 | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT___GEN_22)) 
                    & (0x11U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__state)))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7509(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7509\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_6;
    VlWide<3>/*95:0*/ __Vtemp_7;
    VlWide<3>/*95:0*/ __Vtemp_10;
    VlWide<3>/*95:0*/ __Vtemp_11;
    VlWide<3>/*95:0*/ __Vtemp_14;
    VlWide<3>/*95:0*/ __Vtemp_15;
    VlWide<3>/*95:0*/ __Vtemp_18;
    VlWide<3>/*95:0*/ __Vtemp_19;
    VlWide<3>/*95:0*/ __Vtemp_22;
    VlWide<3>/*95:0*/ __Vtemp_23;
    // Body
    __Vtemp_2[0U] = 0U;
    __Vtemp_2[1U] = 0U;
    __Vtemp_2[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_3, __Vtemp_2, (0x3fU 
                                                   & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__divsqrt__DOT__ds__DOT___divSqrtRecF64ToRaw_io_rawOut_sExp))));
    __Vtemp_6[0U] = 0U;
    __Vtemp_6[1U] = 0U;
    __Vtemp_6[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_7, __Vtemp_6, (0x3fU 
                                                   & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__divsqrt__DOT__ds__DOT___divSqrtRecF64ToRaw_io_rawOut_sExp))));
    __Vtemp_10[0U] = 0U;
    __Vtemp_10[1U] = 0U;
    __Vtemp_10[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_11, __Vtemp_10, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__divsqrt__DOT__ds__DOT___divSqrtRecF64ToRaw_io_rawOut_sExp))));
    __Vtemp_14[0U] = 0U;
    __Vtemp_14[1U] = 0U;
    __Vtemp_14[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_15, __Vtemp_14, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__divsqrt__DOT__ds__DOT___divSqrtRecF64ToRaw_io_rawOut_sExp))));
    __Vtemp_18[0U] = 0U;
    __Vtemp_18[1U] = 0U;
    __Vtemp_18[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_19, __Vtemp_18, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__divsqrt__DOT__ds__DOT___divSqrtRecF64ToRaw_io_rawOut_sExp))));
    __Vtemp_22[0U] = 0U;
    __Vtemp_22[1U] = 0U;
    __Vtemp_22[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_23, __Vtemp_22, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__divsqrt__DOT__ds__DOT___divSqrtRecF64ToRaw_io_rawOut_sExp))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__divsqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_0 
        = (0x55555U & ((0x60000U & __Vtemp_3[0U]) | 
                       ((0x18000U & (__Vtemp_7[0U] 
                                     >> 4U)) | ((0x6000U 
                                                 & (__Vtemp_11[0U] 
                                                    >> 8U)) 
                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__divsqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN) 
                                                    << 5U) 
                                                   | ((0x18U 
                                                       & ((__Vtemp_15[1U] 
                                                           << 4U) 
                                                          | (8U 
                                                             & (__Vtemp_15[0U] 
                                                                >> 0x1cU)))) 
                                                      | ((6U 
                                                          & __Vtemp_19[1U]) 
                                                         | (1U 
                                                            & (__Vtemp_23[1U] 
                                                               >> 4U)))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__divsqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase 
        = (1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__divsqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                 & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__divsqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isSpecialInfOut) 
                       | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__isZero_PC)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT___GEN 
        = (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sqrtOp_PC)) 
            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__leaving_PC)) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__leaving_PC) 
              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sqrtOp_PC)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___zComplSigT_C1_T_5_53 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT____VdfgTmp_hd0a42db5__0) 
           & (~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__divsqrt__DOT__mul__DOT__reg_result_s3[3U] 
                 >> 8U)));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7510(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7510\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___GEN 
        = (0x1fffffffffffffULL & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT____VdfgTmp_hd0a42db5__0)
                                    ? (~ (((QData)((IData)(
                                                           vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__divsqrt__DOT__mul__DOT__reg_result_s3[3U])) 
                                           << 0x2dU) 
                                          | (((QData)((IData)(
                                                              vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__divsqrt__DOT__mul__DOT__reg_result_s3[2U])) 
                                              << 0xdU) 
                                             | ((QData)((IData)(
                                                                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__divsqrt__DOT__mul__DOT__reg_result_s3[1U])) 
                                                >> 0x13U))))
                                    : 0ULL) | (((~ 
                                                 (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__divsqrt__DOT__mul__DOT__reg_result_s3[3U] 
                                                  >> 8U)) 
                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_C1_div))
                                                ? (~ 
                                                   (((QData)((IData)(
                                                                     vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__divsqrt__DOT__mul__DOT__reg_result_s3[3U])) 
                                                     << 0x2eU) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__divsqrt__DOT__mul__DOT__reg_result_s3[2U])) 
                                                        << 0xeU) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__divsqrt__DOT__mul__DOT__reg_result_s3[1U])) 
                                                          >> 0x12U))))
                                                : 0ULL)));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__entering_PA) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sign_PA 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sign_S;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__majorExc_PA 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__majorExc_S;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__isInf_PA 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__isInf_S;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__isZero_PA 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__isZero_S;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__isNaN_PA 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__isNaN_S;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__normalCase_PB 
        = (1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__isNaN_PB)) 
                 & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__isInf_PB) 
                       | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__isZero_PB)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_C4_sqrt 
        = ((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_C)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sqrtOp_PB));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT____VdfgTmp_ha3159ae7__0 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sqrtOp_PB) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__valid_PB));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__entering_PA_normalCase) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__fractB_PA 
            = (0xfffffffffffffULL & (((QData)((IData)(
                                                      vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT____Vcellinp__divsqrt__io_b[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT____Vcellinp__divsqrt__io_b[0U]))));
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__valid_PA = 0U;
    } else if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__entering_PA) 
                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__leaving_PA))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__valid_PA 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__entering_PA;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_B2_sqrt 
        = ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_B)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sqrtOp_PB));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___io_latchMulAddB_0_T 
        = ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_A)) 
           | (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_B)));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7511(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7511\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_B2_div 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sqrtOp_PB)) 
           & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_B)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_B1_sqrt 
        = ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_B)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sqrtOp_PB));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__entering_PA_normalCase_div) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__fractA_PA 
            = (0xfffffffffffffULL & (((QData)((IData)(
                                                      vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__r_buffer_fin_in1[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__r_buffer_fin_in1[0U]))));
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__entering_PA) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sqrtOp_PA 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__r_buffer_fin_sqrt;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__entering_PA_normalCase) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sExp_PA 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__r_buffer_fin_sqrt)
                ? (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT____Vcellinp__divsqrt__io_b[1U] 
                   >> 0x14U) : (((VL_LTS_III(14, 0xdffU, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sExpQuot_S_div))
                                   ? 6U : (0xfU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sExpQuot_S_div) 
                                                   >> 9U))) 
                                 << 9U) | (0x1ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sExpQuot_S_div))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__roundingMode_PA 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT__r_buffer_fin_rm;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__alu_exe_unit_1__DOT__IntToFPUnit__DOT__fp_decoder__DOT____VdfgTmp_h66ae96c2__0 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__iregister_read__DOT__exe_reg_uops_2_uopc) 
           & (0x1fU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__alu_exe_unit_1__DOT__IntToFPUnit__DOT__fp_decoder__DOT___decoder_decoded_T_64)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__alu_exe_unit_1__DOT__IntToFPUnit__DOT__fp_decoder__DOT____VdfgTmp_h627e5d18__0 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__iregister_read__DOT__exe_reg_uops_2_uopc) 
            >> 1U) & (0x1fU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__alu_exe_unit_1__DOT__IntToFPUnit__DOT__fp_decoder__DOT___decoder_decoded_T_64)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__alu_exe_unit_1__DOT__IntToFPUnit__DOT__fp_decoder__DOT___decoder_decoded_T_50 
        = ((8U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__iregister_read__DOT__exe_reg_uops_2_uopc)) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__alu_exe_unit_1__DOT__IntToFPUnit__DOT__fp_decoder__DOT____VdfgTmp_h4189df84__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__alu_exe_unit_1__DOT__IntToFPUnit__DOT__fp_decoder__DOT____VdfgTmp_hba9007b4__0 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__iregister_read__DOT__exe_reg_uops_2_uopc) 
            >> 3U) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__alu_exe_unit_1__DOT__IntToFPUnit__DOT__fp_decoder__DOT____VdfgTmp_h1fa4f049__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__alu_exe_unit_1__DOT__IntToFPUnit__DOT__fp_decoder__DOT____VdfgTmp_h6cea989c__0 
        = ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__iregister_read__DOT__exe_reg_uops_2_uopc) 
               >> 3U)) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__alu_exe_unit_1__DOT__IntToFPUnit__DOT__fp_decoder__DOT____VdfgTmp_h41c35d8b__0));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7512(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7512\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_764 
        = ((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_762)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dword_addr_matches_47_0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_757 
        = ((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_755)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dword_addr_matches_46_0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_750 
        = ((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_748)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dword_addr_matches_45_0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_743 
        = ((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_741)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dword_addr_matches_44_0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_736 
        = ((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_734)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dword_addr_matches_43_0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_729 
        = ((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_727)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dword_addr_matches_42_0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_722 
        = ((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_720)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dword_addr_matches_41_0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_715 
        = ((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_713)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dword_addr_matches_40_0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_708 
        = ((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_706)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dword_addr_matches_39_0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_701 
        = ((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_699)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dword_addr_matches_38_0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_694 
        = ((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_692)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dword_addr_matches_37_0));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7513(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7513\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_687 
        = ((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_685)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dword_addr_matches_36_0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_680 
        = ((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_678)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dword_addr_matches_35_0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_673 
        = ((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_671)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dword_addr_matches_34_0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_666 
        = ((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_664)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dword_addr_matches_33_0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_659 
        = ((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_657)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dword_addr_matches_32_0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_652 
        = ((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_650)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dword_addr_matches_31_0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_645 
        = ((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_643)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dword_addr_matches_30_0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_638 
        = ((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_636)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dword_addr_matches_29_0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_631 
        = ((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_629)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dword_addr_matches_28_0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_624 
        = ((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_622)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dword_addr_matches_27_0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_617 
        = ((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_615)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dword_addr_matches_26_0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_610 
        = ((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_608)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dword_addr_matches_25_0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_603 
        = ((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_601)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__dword_addr_matches_24_0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_318 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__do_ld_search_0) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_0_valid) 
              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_0_bits_addr_valid) 
                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_0_bits_addr_is_virtual)) 
                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT____VdfgTmp_h51c09e98__0)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_317 
        = (0xffffffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__do_st_search_0) 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_0_valid) 
                           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_0_bits_addr_valid) 
                              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_314) 
                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_0_bits_addr_is_virtual)) 
                                    & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_0_bits_st_dep_mask 
                                        >> (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__lcam_stq_idx_0)) 
                                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT____VdfgTmp_h51c09e98__0))))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7514(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7514\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_351 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__do_ld_search_0) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_1_valid) 
              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_1_bits_addr_valid) 
                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_1_bits_addr_is_virtual)) 
                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT____VdfgTmp_h44876366__0)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_350 
        = (0xffffffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__do_st_search_0) 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_1_valid) 
                           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_1_bits_addr_valid) 
                              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_348) 
                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_1_bits_addr_is_virtual)) 
                                    & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_1_bits_st_dep_mask 
                                        >> (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__lcam_stq_idx_0)) 
                                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT____VdfgTmp_h44876366__0))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_362 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__do_ld_search_0) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_2_valid) 
              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_2_bits_addr_valid) 
                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_2_bits_addr_is_virtual)) 
                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT____VdfgTmp_h8ab4afe6__0)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_361 
        = (0xffffffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__do_st_search_0) 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_2_valid) 
                           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_2_bits_addr_valid) 
                              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_359) 
                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_2_bits_addr_is_virtual)) 
                                    & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_2_bits_st_dep_mask 
                                        >> (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__lcam_stq_idx_0)) 
                                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT____VdfgTmp_h8ab4afe6__0))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_373 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__do_ld_search_0) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_3_valid) 
              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_3_bits_addr_valid) 
                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_3_bits_addr_is_virtual)) 
                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT____VdfgTmp_hcc2af8c6__0)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_372 
        = (0xffffffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__do_st_search_0) 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_3_valid) 
                           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_3_bits_addr_valid) 
                              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_370) 
                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_3_bits_addr_is_virtual)) 
                                    & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_3_bits_st_dep_mask 
                                        >> (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__lcam_stq_idx_0)) 
                                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT____VdfgTmp_hcc2af8c6__0))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_384 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__do_ld_search_0) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_4_valid) 
              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_4_bits_addr_valid) 
                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_4_bits_addr_is_virtual)) 
                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT____VdfgTmp_h8e97d424__0)))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7515(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7515\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_383 
        = (0xffffffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__do_st_search_0) 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_4_valid) 
                           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_4_bits_addr_valid) 
                              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_381) 
                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_4_bits_addr_is_virtual)) 
                                    & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_4_bits_st_dep_mask 
                                        >> (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__lcam_stq_idx_0)) 
                                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT____VdfgTmp_h8e97d424__0))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_395 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__do_ld_search_0) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_5_valid) 
              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_5_bits_addr_valid) 
                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_5_bits_addr_is_virtual)) 
                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT____VdfgTmp_h87938471__0)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_394 
        = (0xffffffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__do_st_search_0) 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_5_valid) 
                           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_5_bits_addr_valid) 
                              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_392) 
                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_5_bits_addr_is_virtual)) 
                                    & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_5_bits_st_dep_mask 
                                        >> (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__lcam_stq_idx_0)) 
                                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT____VdfgTmp_h87938471__0))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_406 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__do_ld_search_0) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_6_valid) 
              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_6_bits_addr_valid) 
                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_6_bits_addr_is_virtual)) 
                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT____VdfgTmp_h9de5f385__0)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_405 
        = (0xffffffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__do_st_search_0) 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_6_valid) 
                           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_6_bits_addr_valid) 
                              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_403) 
                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_6_bits_addr_is_virtual)) 
                                    & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_6_bits_st_dep_mask 
                                        >> (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__lcam_stq_idx_0)) 
                                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT____VdfgTmp_h9de5f385__0))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_417 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__do_ld_search_0) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_7_valid) 
              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_7_bits_addr_valid) 
                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_7_bits_addr_is_virtual)) 
                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT____VdfgTmp_h07379a7e__0)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_416 
        = (0xffffffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__do_st_search_0) 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_7_valid) 
                           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_7_bits_addr_valid) 
                              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_414) 
                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_7_bits_addr_is_virtual)) 
                                    & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_7_bits_st_dep_mask 
                                        >> (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__lcam_stq_idx_0)) 
                                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT____VdfgTmp_h07379a7e__0))))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7516(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7516\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_428 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__do_ld_search_0) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_8_valid) 
              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_8_bits_addr_valid) 
                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_8_bits_addr_is_virtual)) 
                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT____VdfgTmp_h4a55adba__0)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_427 
        = (0xffffffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__do_st_search_0) 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_8_valid) 
                           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_8_bits_addr_valid) 
                              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_425) 
                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_8_bits_addr_is_virtual)) 
                                    & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_8_bits_st_dep_mask 
                                        >> (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__lcam_stq_idx_0)) 
                                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT____VdfgTmp_h4a55adba__0))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_439 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__do_ld_search_0) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_9_valid) 
              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_9_bits_addr_valid) 
                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_9_bits_addr_is_virtual)) 
                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT____VdfgTmp_h139cf641__0)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_438 
        = (0xffffffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__do_st_search_0) 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_9_valid) 
                           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_9_bits_addr_valid) 
                              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_436) 
                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_9_bits_addr_is_virtual)) 
                                    & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_9_bits_st_dep_mask 
                                        >> (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__lcam_stq_idx_0)) 
                                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT____VdfgTmp_h139cf641__0))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_450 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__do_ld_search_0) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_10_valid) 
              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_10_bits_addr_valid) 
                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_10_bits_addr_is_virtual)) 
                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT____VdfgTmp_h293b2b4f__0)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_449 
        = (0xffffffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__do_st_search_0) 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_10_valid) 
                           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_10_bits_addr_valid) 
                              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_447) 
                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_10_bits_addr_is_virtual)) 
                                    & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_10_bits_st_dep_mask 
                                        >> (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__lcam_stq_idx_0)) 
                                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT____VdfgTmp_h293b2b4f__0))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_461 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__do_ld_search_0) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_11_valid) 
              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_11_bits_addr_valid) 
                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_11_bits_addr_is_virtual)) 
                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT____VdfgTmp_h90b22220__0)))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7517(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7517\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_460 
        = (0xffffffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__do_st_search_0) 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_11_valid) 
                           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_11_bits_addr_valid) 
                              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_458) 
                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_11_bits_addr_is_virtual)) 
                                    & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_11_bits_st_dep_mask 
                                        >> (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__lcam_stq_idx_0)) 
                                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT____VdfgTmp_h90b22220__0))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_472 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__do_ld_search_0) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_12_valid) 
              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_12_bits_addr_valid) 
                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_12_bits_addr_is_virtual)) 
                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT____VdfgTmp_h766cd9c3__0)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_471 
        = (0xffffffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__do_st_search_0) 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_12_valid) 
                           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_12_bits_addr_valid) 
                              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_469) 
                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_12_bits_addr_is_virtual)) 
                                    & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_12_bits_st_dep_mask 
                                        >> (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__lcam_stq_idx_0)) 
                                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT____VdfgTmp_h766cd9c3__0))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_483 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__do_ld_search_0) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_13_valid) 
              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_13_bits_addr_valid) 
                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_13_bits_addr_is_virtual)) 
                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT____VdfgTmp_h67de61d1__0)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_482 
        = (0xffffffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__do_st_search_0) 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_13_valid) 
                           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_13_bits_addr_valid) 
                              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_480) 
                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_13_bits_addr_is_virtual)) 
                                    & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_13_bits_st_dep_mask 
                                        >> (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__lcam_stq_idx_0)) 
                                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT____VdfgTmp_h67de61d1__0))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_494 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__do_ld_search_0) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_14_valid) 
              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_14_bits_addr_valid) 
                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_14_bits_addr_is_virtual)) 
                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT____VdfgTmp_h072c3c6a__0)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_493 
        = (0xffffffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__do_st_search_0) 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_14_valid) 
                           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_14_bits_addr_valid) 
                              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_491) 
                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_14_bits_addr_is_virtual)) 
                                    & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_14_bits_st_dep_mask 
                                        >> (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__lcam_stq_idx_0)) 
                                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT____VdfgTmp_h072c3c6a__0))))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7518(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7518\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_505 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__do_ld_search_0) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_15_valid) 
              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_15_bits_addr_valid) 
                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_15_bits_addr_is_virtual)) 
                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT____VdfgTmp_hce781083__0)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_504 
        = (0xffffffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__do_st_search_0) 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_15_valid) 
                           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_15_bits_addr_valid) 
                              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_502) 
                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_15_bits_addr_is_virtual)) 
                                    & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_15_bits_st_dep_mask 
                                        >> (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__lcam_stq_idx_0)) 
                                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT____VdfgTmp_hce781083__0))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_516 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__do_ld_search_0) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_16_valid) 
              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_16_bits_addr_valid) 
                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_16_bits_addr_is_virtual)) 
                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT____VdfgTmp_h2343dc46__0)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_515 
        = (0xffffffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__do_st_search_0) 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_16_valid) 
                           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_16_bits_addr_valid) 
                              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_513) 
                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_16_bits_addr_is_virtual)) 
                                    & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_16_bits_st_dep_mask 
                                        >> (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__lcam_stq_idx_0)) 
                                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT____VdfgTmp_h2343dc46__0))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_527 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__do_ld_search_0) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_17_valid) 
              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_17_bits_addr_valid) 
                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_17_bits_addr_is_virtual)) 
                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT____VdfgTmp_ha8e13091__0)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_526 
        = (0xffffffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__do_st_search_0) 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_17_valid) 
                           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_17_bits_addr_valid) 
                              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_524) 
                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_17_bits_addr_is_virtual)) 
                                    & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_17_bits_st_dep_mask 
                                        >> (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__lcam_stq_idx_0)) 
                                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT____VdfgTmp_ha8e13091__0))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_538 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__do_ld_search_0) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_18_valid) 
              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_18_bits_addr_valid) 
                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_18_bits_addr_is_virtual)) 
                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT____VdfgTmp_hf864b843__0)))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7519(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7519\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_537 
        = (0xffffffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__do_st_search_0) 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_18_valid) 
                           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_18_bits_addr_valid) 
                              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_535) 
                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_18_bits_addr_is_virtual)) 
                                    & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_18_bits_st_dep_mask 
                                        >> (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__lcam_stq_idx_0)) 
                                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT____VdfgTmp_hf864b843__0))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_549 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__do_ld_search_0) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_19_valid) 
              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_19_bits_addr_valid) 
                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_19_bits_addr_is_virtual)) 
                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT____VdfgTmp_h20ff19bc__0)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_548 
        = (0xffffffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__do_st_search_0) 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_19_valid) 
                           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_19_bits_addr_valid) 
                              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_546) 
                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_19_bits_addr_is_virtual)) 
                                    & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_19_bits_st_dep_mask 
                                        >> (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__lcam_stq_idx_0)) 
                                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT____VdfgTmp_h20ff19bc__0))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_560 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__do_ld_search_0) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_20_valid) 
              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_20_bits_addr_valid) 
                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_20_bits_addr_is_virtual)) 
                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT____VdfgTmp_ha57131a7__0)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_559 
        = (0xffffffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__do_st_search_0) 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_20_valid) 
                           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_20_bits_addr_valid) 
                              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_557) 
                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_20_bits_addr_is_virtual)) 
                                    & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_20_bits_st_dep_mask 
                                        >> (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__lcam_stq_idx_0)) 
                                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT____VdfgTmp_ha57131a7__0))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_571 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__do_ld_search_0) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_21_valid) 
              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_21_bits_addr_valid) 
                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_21_bits_addr_is_virtual)) 
                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT____VdfgTmp_h6432baa6__0)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_570 
        = (0xffffffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__do_st_search_0) 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_21_valid) 
                           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_21_bits_addr_valid) 
                              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_568) 
                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_21_bits_addr_is_virtual)) 
                                    & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_21_bits_st_dep_mask 
                                        >> (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__lcam_stq_idx_0)) 
                                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT____VdfgTmp_h6432baa6__0))))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7520(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7520\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_582 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__do_ld_search_0) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_22_valid) 
              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_22_bits_addr_valid) 
                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_22_bits_addr_is_virtual)) 
                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT____VdfgTmp_h4afb8d25__0)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_581 
        = (0xffffffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__do_st_search_0) 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_22_valid) 
                           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_22_bits_addr_valid) 
                              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___GEN_579) 
                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_22_bits_addr_is_virtual)) 
                                    & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__ldq_22_bits_st_dep_mask 
                                        >> (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__lcam_stq_idx_0)) 
                                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT____VdfgTmp_h4afb8d25__0))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__tage__DOT___GEN_160 
        = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__tage__DOT___GEN_159) 
                 | (7U & (((IData)(1U) << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__tage__DOT___GEN_156)) 
                          >> 5U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT___GEN_160 
        = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT___GEN_159) 
                 | (7U & (((IData)(1U) << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__tage__DOT___GEN_156)) 
                          >> 5U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__isMinCAlign 
        = (1U & ((~ (IData)((0U != (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__dfma__DOT__in_in1[1U] 
                                    >> 0x1dU)))) | 
                 ((~ (IData)((0U != (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__dfma__DOT__in_in2[1U] 
                                     >> 0x1dU)))) | 
                  VL_GTS_III(14, 0U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___sNatCAlignDist_T)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__rrd_rs2_data_0_REG 
        = (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT___fregister_read_io_rf_read_ports_1_addr));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregfile__DOT__read_addrs_1 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT___fregister_read_io_rf_read_ports_1_addr;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__fpiu_io_in_bits_req_in2_expOut_expCode 
        = ((4U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__exe_reg_rs2_data_0[1U] 
                  >> 0x12U)) | (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__exe_reg_rs2_data_0[0U] 
                                      >> 0x1dU)));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7521(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7521\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FDivSqrtUnit__DOT____Vcellinp__in2_upconvert_s2d__io_in 
        = ((((QData)((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__exe_reg_rs2_data_0[0U] 
                              >> 0x1fU))) << 0x20U) 
            | (QData)((IData)(((0x80000000U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__exe_reg_rs2_data_0[1U] 
                                               << 0xbU)) 
                               | (0x7fffffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__exe_reg_rs2_data_0[0U]))))) 
           | ((0x1fU == (0x1fU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__exe_reg_rs2_data_0[2U] 
                                   << 4U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__exe_reg_rs2_data_0[1U] 
                                             >> 0x1cU))))
               ? 0ULL : 0xe0400000ULL));
    vlSelf->__VdfgTmp_h2758b5eb__0 = ((0x100U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__exe_reg_rs2_data_0[1U] 
                                                 >> 0xcU)) 
                                      | (0xffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__exe_reg_rs2_data_0[0U] 
                                                  >> 0x17U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__fp_sdq_io_enq_bits_data_unrecoded_rawIn_isInf 
        = (IData)((0xc0000000U == (0xe0000000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__exe_reg_rs2_data_0[1U])));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT____VdfgTmp_h25b26020__0 
        = (1U & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__exe_reg_rs2_data_0[1U] 
                  >> 0x14U) & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__exe_reg_rs2_data_0[0U] 
                               >> 0x1eU)));
    vlSelf->__VdfgTmp_h9fc46037__0 = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sig 
                                       >> 1U) & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_h27edd7a7__0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__isMinCAlign 
        = (1U & ((~ (IData)((0U != (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__sfma__DOT__in_in1[0U] 
                                    >> 0x1dU)))) | 
                 ((~ (IData)((0U != (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__sfma__DOT__in_in2[0U] 
                                     >> 0x1dU)))) | 
                  VL_GTS_III(11, 0U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___sNatCAlignDist_T)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__rrd_rs3_data_0_REG 
        = (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT___fregister_read_io_rf_read_ports_2_addr));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregfile__DOT__read_addrs_2 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT___fregister_read_io_rf_read_ports_2_addr;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
        = (0x3ffffffU & ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___overflow_roundMagUp_T) 
                           & (0U != vlSelf->__VdfgTmp_h128c6050__0)) 
                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound)))
                          ? ((((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_roundingMode_pipe_b)) 
                               & ((~ (IData)((0U != vlSelf->__VdfgTmp_hd0d70f63__0))) 
                                  & (0U != vlSelf->__VdfgTmp_h128c6050__0)))
                               ? (~ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1)
                               : 0x3ffffffU) & ((IData)(1U) 
                                                + (0x1ffffffU 
                                                   & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sig 
                                                       >> 2U) 
                                                      | vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_h8582494a__0))))
                          : ((0x1ffffffU & ((~ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_h8582494a__0) 
                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sig 
                                               >> 2U))) 
                             | (((6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_roundingMode_pipe_b)) 
                                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound))
                                 ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_h11073285__0
                                 : 0U))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7522(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7522\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT____Vcellinp__repeater__io_repeat 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_opcode) 
            >> 2U) & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__aFragnum)));
    vlSelf->__VdfgTmp_h52f1e389__0 = (0x3fU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT___repeater_io_deq_bits_address 
                                               | (0x38U 
                                                  & ((~ 
                                                      ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__aFragnum) 
                                                       | (0x3ffU 
                                                          & (((IData)(0x3fU) 
                                                              << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT___repeater_io_deq_bits_size)) 
                                                             >> 3U)))) 
                                                     << 3U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_source 
        = ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__repeater__DOT__full)
              ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__repeater__DOT__saved_source)
              : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_source)) 
            << 4U) | ((8U & ((~ ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__gennum))
                                  ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__dToggle)
                                  : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__aToggle_r))) 
                             << 3U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__aFragnum)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor_1__DOT__same_cycle_resp 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor_1__DOT___same_cycle_resp_T_1) 
           & (IData)(vlSelf->__VdfgTmp_hde662d73__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__monitor__DOT__same_cycle_resp 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__monitor__DOT___same_cycle_resp_T_1) 
           & (IData)(vlSelf->__VdfgTmp_hde662d73__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT___same_cycle_resp_T_1 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT__a_first_counter_1)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_valid));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__same_cycle_resp 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___same_cycle_resp_T_1) 
           & (IData)(vlSelf->__VdfgTmp_h471e06f0__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__same_cycle_resp 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT___same_cycle_resp_T_1) 
           & (IData)(vlSelf->__VdfgTmp_h471e06f0__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_deq_ready 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___queue_arw_deq_q_io_deq_bits_wen)
            ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Faw_ready_reg) 
               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT____VdfgTmp_h42f03b9a__0))
            : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Far_ready_reg) 
               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT____VdfgTmp_h1a71d5b7__0)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___a_first_T_1 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT___coupler_to_memory_controller_port_named_axi4_auto_widget_in_a_ready) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT___coupler_to_memory_controller_port_named_axi4_auto_tl_out_a_valid));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__nodeOut_w_deq_q__io_enq_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____VdfgTmp_h8e6dc944__0) 
           & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____VdfgTmp_he7c8db21__0)) 
              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___out_w_valid_T_3)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____VdfgTmp_h8e6dc944__0) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____VdfgTmp_he7c8db21__0) 
              | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__doneAW)) 
                 & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__nodeOut_w_deq_q__DOT__full)))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7523(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7523\n"); );
    // Body
    if ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__beatsLeft_1))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__muxState_1_1 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__winner_1_1;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__in_d_valid 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT___q_1_io_deq_valid) 
               | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT___in_d_valid_T));
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__muxState_1_1 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__state_1_1;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__in_d_valid 
            = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___binder_auto_in_d_valid) 
                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__state_1_0)) 
               | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT___q_io_deq_valid) 
                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__state_1_1)) 
                  | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT___q_1_io_deq_valid) 
                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__state_1_2))));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__winner_1_2 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT___in_d_valid_T)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT___q_1_io_deq_valid));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__mbus_xbar__DOT__readys_readys 
        = (3U & (~ (((2U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__mbus_xbar__DOT__readys_mask)) 
                     | (1U & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__mbus_xbar__DOT___readys_filter_T_1) 
                               >> 1U) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__mbus_xbar__DOT__readys_mask)))) 
                    & (((2U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__mbus_xbar__DOT___readys_filter_T_1) 
                               << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bank_auto_xbar_in_d_valid)) 
                       | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__mbus_xbar__DOT___readys_filter_T_1)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_19 
        = (1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___csr_io_trace_0_exception)) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__trapToDebug)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_18 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___csr_io_trace_0_exception) 
           & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_debug)) 
              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__trapToDebug)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___io_rw_rdata_T_137 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_hf4f477a8__0)
             ? (0x2080000000000000ULL | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_bp_0_control_dmode)) 
                                          << 0x3bU) 
                                         | (QData)((IData)(
                                                           (0x40U 
                                                            | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_bp_0_control_action) 
                                                                << 0xcU) 
                                                               | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_bp_0_control_tmatch) 
                                                                   << 7U) 
                                                                  | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_bp_0_control_x) 
                                                                      << 2U) 
                                                                     | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_bp_0_control_w) 
                                                                         << 1U) 
                                                                        | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_bp_0_control_r))))))))))
             : 0ULL) | (((0xfffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___decoded_decoded_T_118))
                          ? (((QData)((IData)((0x7fffffffU 
                                               & (- (IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_bp_0_address 
                                                                        >> 0x20U)))))))) 
                              << 0x21U) | vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_bp_0_address)
                          : 0ULL) | (((0xfffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___decoded_decoded_T_2))
                                       ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_misa
                                       : 0ULL) | ((
                                                   (0xfffU 
                                                    == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___decoded_decoded_T))
                                                    ? 
                                                   (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_mstatus_mpv)) 
                                                     << 0x27U) 
                                                    | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_mstatus_gva)) 
                                                        << 0x26U) 
                                                       | (QData)((IData)(
                                                                         (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_mstatus_mpp) 
                                                                           << 0xbU) 
                                                                          | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_mstatus_mpie) 
                                                                              << 7U) 
                                                                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_mstatus_mie) 
                                                                                << 3U)))))))
                                                    : 0ULL) 
                                                  | ((0xfffU 
                                                      == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___decoded_decoded_T_6))
                                                      ? (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___read_mtvec_T_5))
                                                      : 0ULL)))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7524(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7524\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_26 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_reg_valid) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___mem_npc_misaligned_T_3));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__fpmu__DOT__narrower__DOT__rawIn_isNaN) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__fpmu__DOT__narrower__DOT____Vcellinp__roundAnyRawFNToRecFN__io_invalidExc));
    vlSelf->__VdfgTmp_h0da37fcc__0 = ((((IData)((0U 
                                                 != 
                                                 (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__fpmu__DOT__in_pipe_b_in1[1U] 
                                                  >> 0x1dU))) 
                                        << 0x19U) | 
                                       ((0x1fffffeU 
                                         & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__fpmu__DOT__in_pipe_b_in1[1U] 
                                             << 5U) 
                                            | (0x1eU 
                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__fpmu__DOT__in_pipe_b_in1[0U] 
                                                  >> 0x1bU)))) 
                                        | (0U != (0xfffffffU 
                                                  & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__fpmu__DOT__in_pipe_b_in1[0U])))) 
                                      & (1U | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                               << 1U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_h6e2738c4__0 
        = ((0x2000000U | vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_hb665f660__0) 
           & (1U | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT__FPUUnit__DOT__fpu__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                    << 1U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__alu_exe_unit_2__DOT__ALUUnit__DOT__alu__DOT___GEN_0 
        = ((0xff00ff00U & ((((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__iregister_read__DOT__exe_reg_uops_3_ctrl_op1_sel))
                              ? (0xffffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__iregister_read__DOT__exe_reg_rs1_data_3))
                              : 0U) << 0x10U) | (0xff00U 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__alu_exe_unit_2__DOT__ALUUnit__DOT__alu__DOT___GEN 
                                                    >> 0x10U)))) 
           | (0xff00ffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__alu_exe_unit_2__DOT__ALUUnit__DOT__alu__DOT___GEN));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__csr__DOT___decoded_decoded_T_6 
        = ((0x200U & ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__alu_exe_unit_1__DOT__ALUUnit__DOT__r_uops_0_imm_packed 
                          >> 0xaU)) << 9U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__csr__DOT____VdfgTmp_h72b9d335__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__csr__DOT____VdfgTmp_h05e4c8f4__0 
        = ((0x200U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__alu_exe_unit_1__DOT__ALUUnit__DOT__r_uops_0_imm_packed 
                      >> 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__csr__DOT____VdfgTmp_h72b9d335__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__csr__DOT____VdfgTmp_he17b0cdf__0 
        = ((0x400U & ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__alu_exe_unit_1__DOT__ALUUnit__DOT__r_uops_0_imm_packed 
                          >> 9U)) << 0xaU)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__csr__DOT____VdfgTmp_h0074be98__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__csr__DOT____VdfgTmp_hb66410c3__0 
        = ((0x400U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__alu_exe_unit_1__DOT__ALUUnit__DOT__r_uops_0_imm_packed 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__csr__DOT____VdfgTmp_h0074be98__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__csr__DOT___decoded_decoded_T_118 
        = ((0x800U & ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__alu_exe_unit_1__DOT__ALUUnit__DOT__r_uops_0_imm_packed 
                          >> 8U)) << 0xbU)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__csr__DOT____VdfgTmp_h184c6a56__0));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7525(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7525\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__csr__DOT___decoded_decoded_T_120 
        = ((0x800U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__alu_exe_unit_1__DOT__ALUUnit__DOT__r_uops_0_imm_packed 
                      << 3U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__csr__DOT____VdfgTmp_h184c6a56__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__csr__DOT___decoded_decoded_T_122 
        = ((0x800U & ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__alu_exe_unit_1__DOT__ALUUnit__DOT__r_uops_0_imm_packed 
                          >> 8U)) << 0xbU)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__csr__DOT____VdfgTmp_he149b148__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__csr__DOT___decoded_decoded_T_124 
        = ((0x800U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__alu_exe_unit_1__DOT__ALUUnit__DOT__r_uops_0_imm_packed 
                      << 3U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__csr__DOT____VdfgTmp_he149b148__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__csr__DOT___decoded_decoded_T_126 
        = ((0x800U & ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__alu_exe_unit_1__DOT__ALUUnit__DOT__r_uops_0_imm_packed 
                          >> 8U)) << 0xbU)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__csr__DOT____VdfgTmp_h8b804e1c__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__csr__DOT___decoded_decoded_T_128 
        = ((0x800U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__alu_exe_unit_1__DOT__ALUUnit__DOT__r_uops_0_imm_packed 
                      << 3U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__csr__DOT____VdfgTmp_h8b804e1c__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__csr__DOT___decoded_decoded_T_130 
        = ((0x800U & ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__alu_exe_unit_1__DOT__ALUUnit__DOT__r_uops_0_imm_packed 
                          >> 8U)) << 0xbU)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__csr__DOT____VdfgTmp_h500d5586__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__csr__DOT___decoded_decoded_T_132 
        = ((0x800U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__alu_exe_unit_1__DOT__ALUUnit__DOT__r_uops_0_imm_packed 
                      << 3U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__csr__DOT____VdfgTmp_h500d5586__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__csr__DOT____VdfgTmp_h7544da5c__0 
        = ((0x200U & ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__alu_exe_unit_1__DOT__ALUUnit__DOT__r_uops_0_imm_packed 
                          >> 0xaU)) << 9U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__csr__DOT____VdfgTmp_h63d6404d__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__csr__DOT____VdfgTmp_h3688b5dc__0 
        = ((0x200U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__alu_exe_unit_1__DOT__ALUUnit__DOT__r_uops_0_imm_packed 
                      >> 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__csr__DOT____VdfgTmp_h63d6404d__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__csr__DOT___decoded_decoded_T_106 
        = ((0x800U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__alu_exe_unit_1__DOT__ALUUnit__DOT__r_uops_0_imm_packed 
                      << 3U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__csr__DOT____VdfgTmp_hef9ee057__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__csr__DOT___decoded_decoded_T_104 
        = ((0x800U & ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__alu_exe_unit_1__DOT__ALUUnit__DOT__r_uops_0_imm_packed 
                          >> 8U)) << 0xbU)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__csr__DOT____VdfgTmp_hef9ee057__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__csr__DOT___decoded_decoded_T_108 
        = ((0x800U & ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__alu_exe_unit_1__DOT__ALUUnit__DOT__r_uops_0_imm_packed 
                          >> 8U)) << 0xbU)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__csr__DOT____VdfgTmp_hbffacb4b__0));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7526(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7526\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__csr__DOT___decoded_decoded_T_110 
        = ((0x800U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__alu_exe_unit_1__DOT__ALUUnit__DOT__r_uops_0_imm_packed 
                      << 3U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__csr__DOT____VdfgTmp_hbffacb4b__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__intsink__DOT__chain__DOT__output_chain__DOT__sync_1 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__intsink__DOT__chain__DOT__output_chain__DOT__sync_2;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__ctrls__DOT__out_oready 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__ctrls__DOT__out_back_q__DOT__ram[0U] 
                 | ((3U | ((8U & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__ctrls__DOT__flushOutValid) 
                                   | ((~ (IData)((0xffffffffU 
                                                  == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__ctrls__DOT___out_womask_T_5))) 
                                      | (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__ctrls__DOT___GEN_1)))) 
                                  << 3U)) | (4U & (
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__ctrls__DOT__flushOutValid) 
                                                    | ((~ (IData)(
                                                                  (0xffffffffffffffffULL 
                                                                   == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__ctrls__DOT__out_backMask))) 
                                                       | (0U 
                                                          != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__ctrls__DOT___GEN_1)))) 
                                                   << 2U)))) 
                    >> (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__ctrls__DOT___GEN_3))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___coupler_to_l2_ctrl_auto_tl_in_a_ready 
        = (1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__repeater__DOT__full)) 
                 & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT__full))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__ctrls__DOT__monitor__DOT__same_cycle_resp 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__ctrls__DOT__monitor__DOT___same_cycle_resp_T_1) 
           & ((0x3fffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT__ram[0U] 
                          >> 8U)) == (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__ctrls__DOT__out_back_q__DOT__ram[2U] 
                                      >> 0x12U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__ctrls__DOT___out_wifireMux_T_2 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT__full) 
           & ((4U != (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT__ram[0U])) 
              & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__ctrls__DOT__out_back_q__DOT__full))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__ctrls__DOT___GEN_2 
        = ((2U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT__ram[0U] 
                  >> 0x1eU)) | (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT__ram[0U] 
                                      >> 0x1cU)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__ctrls__DOT____VdfgTmp_h0ca0bf26__0 
        = ((0U != (3U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT__ram[1U])) 
           | (IData)((0U != (0x6e000000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT__ram[0U]))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7527(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7527\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__ctrls__DOT___out_wimask_T_5 
        = (((- (IData)((1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT__ram[1U] 
                              >> 0x13U)))) << 0x18U) 
           | ((0xff0000U & ((- (IData)((1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT__ram[1U] 
                                              >> 0x12U)))) 
                            << 0x10U)) | ((0xff00U 
                                           & ((- (IData)(
                                                         (1U 
                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT__ram[1U] 
                                                             >> 0x11U)))) 
                                              << 8U)) 
                                          | (0xffU 
                                             & (- (IData)(
                                                          (1U 
                                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT__ram[1U] 
                                                              >> 0x10U))))))));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__repeater__DOT___GEN) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt 
            = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[3U] 
                     >> 0x19U));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__rrd_uops_0_REG_fu_code 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT___fp_issue_unit_io_iss_uops_0_fu_code;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT____Vcellinp__FPUUnit__io_req_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__exe_reg_valids_0) 
           & (IData)((0U != (0x240U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__exe_reg_uops_0_fu_code)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fpu_exe_unit__DOT____Vcellinp__FDivSqrtUnit__io_req_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__exe_reg_valids_0) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT__fregister_read__DOT__exe_reg_uops_0_fu_code) 
              >> 7U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__alu_exe_unit_1__DOT__IntToFPUnit__DOT__ifpu__DOT___GEN_0[0U] 
        = (IData)((((QData)((IData)(vlSelf->__VdfgTmp_h02bffc13__0)) 
                    << 0x34U) | ((IData)(vlSelf->__VdfgTmp_he5483fa5__0)
                                  ? (0xfffffffffffffULL 
                                     & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__alu_exe_unit_1__DOT__IntToFPUnit__DOT__ifpu__DOT__i2f_1__DOT__roundAnyRawFNToRecFN__DOT__roundedSig)
                                  : 0ULL)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__alu_exe_unit_1__DOT__IntToFPUnit__DOT__ifpu__DOT___GEN_0[1U] 
        = ((0xefefffffU | (- (IData)((7U != (7U & ((IData)(vlSelf->__VdfgTmp_h02bffc13__0) 
                                                   >> 9U)))))) 
           & (IData)(((((QData)((IData)(vlSelf->__VdfgTmp_h02bffc13__0)) 
                        << 0x34U) | ((IData)(vlSelf->__VdfgTmp_he5483fa5__0)
                                      ? (0xfffffffffffffULL 
                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__alu_exe_unit_1__DOT__IntToFPUnit__DOT__ifpu__DOT__i2f_1__DOT__roundAnyRawFNToRecFN__DOT__roundedSig)
                                      : 0ULL)) >> 0x20U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__alu_exe_unit_1__DOT__IntToFPUnit__DOT__ifpu__DOT___GEN_0[2U] 
        = ((1U | (- (IData)((7U != (7U & ((IData)(vlSelf->__VdfgTmp_h02bffc13__0) 
                                          >> 9U)))))) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__alu_exe_unit_1__DOT__IntToFPUnit__DOT__ifpu__DOT__i2f__DOT__intAsRawFloat_sign));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__alu_exe_unit_1__DOT__ALUUnit__DOT__alu__DOT___GEN_6 
        = (0x55555555555555ULL & (((QData)((IData)(
                                                   ((0U 
                                                     == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__iregister_read__DOT__exe_reg_uops_2_ctrl_op1_sel))
                                                     ? 
                                                    (3U 
                                                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__iregister_read__DOT__exe_reg_rs1_data_2))
                                                     : 0U))) 
                                   << 0x35U) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__alu_exe_unit_1__DOT__ALUUnit__DOT__alu__DOT___GEN_3)) 
                                                 << 0x15U) 
                                                | (QData)((IData)(
                                                                  ((0x180000U 
                                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__alu_exe_unit_1__DOT__ALUUnit__DOT__alu__DOT___GEN_1 
                                                                       << 0x11U)) 
                                                                   | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__alu_exe_unit_1__DOT__ALUUnit__DOT__alu__DOT___GEN_4) 
                                                                       << 0x11U) 
                                                                      | ((0x18000U 
                                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__alu_exe_unit_1__DOT__ALUUnit__DOT__alu__DOT___GEN_0 
                                                                             << 9U)) 
                                                                         | ((0x6000U 
                                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__alu_exe_unit_1__DOT__ALUUnit__DOT__alu__DOT___GEN 
                                                                                << 5U)) 
                                                                            | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__alu_exe_unit_1__DOT__ALUUnit__DOT__alu__DOT___GEN_5) 
                                                                                << 5U) 
                                                                               | ((0x18U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__alu_exe_unit_1__DOT__ALUUnit__DOT__alu__DOT__shin_hi 
                                                                                >> 0xfU)) 
                                                                                | ((6U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__alu_exe_unit_1__DOT__ALUUnit__DOT__alu__DOT__shin_hi 
                                                                                >> 0x13U)) 
                                                                                | (1U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__alu_exe_unit_1__DOT__ALUUnit__DOT__alu__DOT__shin_hi 
                                                                                >> 0x17U))))))))))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7528(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7528\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s2_replay 
        = (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__fq__DOT___valid_4_T_4)) 
            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s2_valid)) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s2_replay_REG));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT___valid_T_1 
        = (3U & (((IData)(1U) << (3U & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___frontend_io_cpu_resp_valid)
                                          ? ((IData)(2U) 
                                             - (1U 
                                                & (IData)(
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___frontend_io_cpu_resp_bits_pc 
                                                           >> 1U))))
                                          : 0U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__nBufValid)))) 
                 - (IData)(1U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor_1__DOT__a_set_wo_ready 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___frontend_auto_icache_master_out_a_valid) 
           & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor_1__DOT__a_first_counter_1)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_15 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___bpu_io_xcpt_if) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_xcpt0_pf_inst) 
              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_xcpt0_ae_inst) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_xcpt0_gf_inst))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_14 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_xcpt1_pf_inst) 
            << 2U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_xcpt1_gf_inst) 
                       << 1U) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_xcpt1_ae_inst)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__id_bypass_src_0_1 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_19) 
           & ((0x1fU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_reg_inst 
                        >> 7U)) == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_rs1)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___id_bypass_src_T_3 
        = ((0x1fU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_reg_inst 
                     >> 7U)) == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_rs1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_rs2 
        = (0x1fU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT____VdfgTmp_hb57cac85__0)
                     ? (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                        >> 0x14U) : (((0x17U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T_2)) 
                                      | ((0x16U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T_2)) 
                                         | ((0x15U 
                                             == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T_2)) 
                                            | ((0x14U 
                                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T_2)) 
                                               | ((0x13U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T_2)) 
                                                  | ((0x12U 
                                                      == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T_2)) 
                                                     | ((0x11U 
                                                         == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T_2)) 
                                                        | (0x10U 
                                                           == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T_2)))))))))
                                      ? (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                         >> 2U) : (
                                                   ((0xfU 
                                                     == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T_2)) 
                                                    | (0xeU 
                                                       == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T_2)))
                                                    ? 0U
                                                    : 
                                                   (8U 
                                                    | (7U 
                                                       & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                          >> 2U)))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7529(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7529\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT____VdfgTmp_hb57cac85__0)
            ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw
            : ((0x17U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T_2))
                ? (0x13023U | ((0x1c000000U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                               << 0x13U)) 
                               | ((0x2000000U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                 << 0xdU)) 
                                  | ((0x1f00000U & 
                                      (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                       << 0x12U)) | 
                                     (0xc00U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw)))))
                : ((0x16U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T_2))
                    ? (0x12023U | ((0xc000000U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                  << 0x13U)) 
                                   | ((0x2000000U & 
                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                        << 0xdU)) | 
                                      ((0x1f00000U 
                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                           << 0x12U)) 
                                       | (0xe00U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw)))))
                    : ((0x15U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T_2))
                        ? (0x13027U | ((0x1c000000U 
                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                           << 0x13U)) 
                                       | ((0x2000000U 
                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                              << 0xdU)) 
                                          | ((0x1f00000U 
                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                 << 0x12U)) 
                                             | (0xc00U 
                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw)))))
                        : ((0x14U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T_2))
                            ? ((0x1000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw)
                                ? ((0U != (0x1fU & 
                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                            >> 2U)))
                                    ? (0x33U | ((0x1f00000U 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                    << 0x12U)) 
                                                | ((0xf8000U 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                       << 8U)) 
                                                   | (0xf80U 
                                                      & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw))))
                                    : ((0U != (0x1fU 
                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                  >> 7U)))
                                        ? (0xe7U | 
                                           ((0x1f00000U 
                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                << 0x12U)) 
                                            | (0xf8000U 
                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                  << 8U))))
                                        : (0x100073U 
                                           | ((0x1e00000U 
                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                  << 0x12U)) 
                                              | (0xf8000U 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                    << 8U))))))
                                : ((0x1f00000U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                  << 0x12U)) 
                                   | ((0U != (0x1fU 
                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                 >> 2U)))
                                       ? (0x33U | (0xf80U 
                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw))
                                       : ((0xf8000U 
                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                              << 8U)) 
                                          | ((0U != 
                                              (0x1fU 
                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                  >> 7U)))
                                              ? 0x67U
                                              : 0x1fU)))))
                            : ((0x13U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T_2))
                                ? (0x13000U | ((0x1c000000U 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                   << 0x18U)) 
                                               | ((0x2000000U 
                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                      << 0xdU)) 
                                                  | ((0x1800000U 
                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                         << 0x12U)) 
                                                     | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT____VdfgTmp_h5115230c__0)))))
                                : ((0x12U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T_2))
                                    ? (0x12000U | (
                                                   (0xc000000U 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                       << 0x18U)) 
                                                   | ((0x2000000U 
                                                       & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                          << 0xdU)) 
                                                      | ((0x1c00000U 
                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                             << 0x12U)) 
                                                         | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT____VdfgTmp_h5115230c__0)))))
                                    : ((0x11U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T_2))
                                        ? (0x13007U 
                                           | ((0x1c000000U 
                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                  << 0x18U)) 
                                              | ((0x2000000U 
                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                     << 0xdU)) 
                                                 | ((0x1800000U 
                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                        << 0x12U)) 
                                                    | (0xf80U 
                                                       & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw)))))
                                        : ((0x10U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T_2))
                                            ? (0x1013U 
                                               | ((0x2000000U 
                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                      << 0xdU)) 
                                                  | ((0x1f00000U 
                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                         << 0x12U)) 
                                                     | ((0xf8000U 
                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                            << 8U)) 
                                                        | (0xf80U 
                                                           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw)))))
                                            : ((0xfU 
                                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T_2))
                                                ? (0x41000U 
                                                   | (((- (IData)(
                                                                  (1U 
                                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                                      >> 0xcU)))) 
                                                       << 0x1cU) 
                                                      | ((0xc000000U 
                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                             << 0x15U)) 
                                                         | ((0x2000000U 
                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                                << 0x17U)) 
                                                            | ((0x38000U 
                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                                   << 8U)) 
                                                               | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT____VdfgTmp_h8bcf0086__0))))))
                                                : (
                                                   (0xeU 
                                                    == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T_2))
                                                    ? 
                                                   (0x40000U 
                                                    | (((- (IData)(
                                                                   (1U 
                                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                                       >> 0xcU)))) 
                                                        << 0x1cU) 
                                                       | ((0xc000000U 
                                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                              << 0x15U)) 
                                                          | ((0x2000000U 
                                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                                 << 0x17U)) 
                                                             | ((0x38000U 
                                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                                    << 8U)) 
                                                                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT____VdfgTmp_h8bcf0086__0))))))
                                                    : 
                                                   ((0xdU 
                                                     == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T_2))
                                                     ? 
                                                    (0x6fU 
                                                     | ((0x80000000U 
                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                            << 0x13U)) 
                                                        | ((0x40000000U 
                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                               << 0x16U)) 
                                                           | ((0x30000000U 
                                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                                  << 0x13U)) 
                                                              | ((0x8000000U 
                                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                                     << 0x15U)) 
                                                                 | ((0x4000000U 
                                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                                        << 0x13U)) 
                                                                    | ((0x2000000U 
                                                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                                           << 0x17U)) 
                                                                       | ((0x1000000U 
                                                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                                              << 0xdU)) 
                                                                          | ((0xe00000U 
                                                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                                                << 0x12U)) 
                                                                             | (0x1ff000U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                                                >> 0xcU)))) 
                                                                                << 0xcU)))))))))))
                                                     : 
                                                    ((0xcU 
                                                      == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T_2))
                                                      ? 
                                                     ((3U 
                                                       == 
                                                       (3U 
                                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                           >> 0xaU)))
                                                       ? 
                                                      (0x840433U 
                                                       | (((0U 
                                                            == 
                                                            (3U 
                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                                >> 5U))) 
                                                           << 0x1eU) 
                                                          | ((0x700000U 
                                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                                 << 0x12U)) 
                                                             | ((0x38000U 
                                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                                    << 8U)) 
                                                                | ((((0x17U 
                                                                      >= 
                                                                      (0x1fU 
                                                                       & ((IData)(3U) 
                                                                          * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_s_funct_T_2))))
                                                                      ? 
                                                                     (7U 
                                                                      & ((0x680f80U 
                                                                          | (0x3fU 
                                                                             & (((1U 
                                                                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_s_funct_T_2)) 
                                                                                << 5U) 
                                                                                | ((1U 
                                                                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_s_funct_T_2)) 
                                                                                << 2U)))) 
                                                                         >> 
                                                                         (0x1fU 
                                                                          & ((IData)(3U) 
                                                                             * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_s_funct_T_2)))))
                                                                      : 0U) 
                                                                    << 0xcU) 
                                                                   | ((0x380U 
                                                                       & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw) 
                                                                      | (8U 
                                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                                            >> 9U))))))))
                                                       : 
                                                      (0x13U 
                                                       | ((((2U 
                                                             == 
                                                             (3U 
                                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                                 >> 0xaU)))
                                                             ? 
                                                            (0x11dU 
                                                             | ((0x3f8000U 
                                                                 & ((- (IData)(
                                                                               (1U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                                                >> 0xcU)))) 
                                                                    << 0xfU)) 
                                                                | ((0x7c00U 
                                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                                       << 8U)) 
                                                                   | (0xe0U 
                                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                                         >> 2U)))))
                                                             : 
                                                            (0x115U 
                                                             | (((1U 
                                                                  == 
                                                                  (3U 
                                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                                      >> 0xaU))) 
                                                                 << 0x14U) 
                                                                | ((0x8000U 
                                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                                       << 3U)) 
                                                                   | ((0x7c00U 
                                                                       & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                                          << 8U)) 
                                                                      | (0xe0U 
                                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                                            >> 2U))))))) 
                                                           << 0xaU) 
                                                          | (0x380U 
                                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw))))
                                                      : 
                                                     ((0xbU 
                                                       == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T_2))
                                                       ? 
                                                      (((- (IData)(
                                                                   (1U 
                                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                                       >> 0xcU)))) 
                                                        << 0x1dU) 
                                                       | (((0U 
                                                            == 
                                                            (0x1fU 
                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                                >> 7U))) 
                                                           | (2U 
                                                              == 
                                                              (0x1fU 
                                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                                  >> 7U))))
                                                           ? 
                                                          ((0x18000000U 
                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                               << 0x18U)) 
                                                           | ((0x4000000U 
                                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                                  << 0x15U)) 
                                                              | ((0x2000000U 
                                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                                     << 0x17U)) 
                                                                 | ((0x1000000U 
                                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                                        << 0x12U)) 
                                                                    | ((0xf8000U 
                                                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                                           << 8U)) 
                                                                       | ((0xf80U 
                                                                           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw) 
                                                                          | ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x7cU 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw)) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x7fU 
                                                                                & (- (IData)(
                                                                                (1U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                                                >> 0xcU))))))))
                                                                              ? 0x13U
                                                                              : 0x1fU)))))))
                                                           : 
                                                          (0x37U 
                                                           | ((0x1ffe0000U 
                                                               & ((- (IData)(
                                                                             (1U 
                                                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                                                >> 0xcU)))) 
                                                                  << 0x11U)) 
                                                              | ((0x1f000U 
                                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                                     << 0xaU)) 
                                                                 | ((0xf80U 
                                                                     & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw) 
                                                                    | ((0U 
                                                                        == 
                                                                        ((0xfe0U 
                                                                          & ((- (IData)(
                                                                                (1U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                                                >> 0xcU)))) 
                                                                             << 5U)) 
                                                                         | (0x1fU 
                                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                                               >> 2U)))) 
                                                                       << 3U)))))))
                                                       : 
                                                      ((0xaU 
                                                        == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T_2))
                                                        ? 
                                                       (0x13U 
                                                        | (((- (IData)(
                                                                       (1U 
                                                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                                           >> 0xcU)))) 
                                                            << 0x19U) 
                                                           | ((0x1f00000U 
                                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                                  << 0x12U)) 
                                                              | (0xf80U 
                                                                 & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw))))
                                                        : 
                                                       ((9U 
                                                         == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T_2))
                                                         ? 
                                                        (0x1bU 
                                                         | (((- (IData)(
                                                                        (1U 
                                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                                            >> 0xcU)))) 
                                                             << 0x19U) 
                                                            | ((0x1f00000U 
                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                                   << 0x12U)) 
                                                               | ((0xf8000U 
                                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                                      << 8U)) 
                                                                  | ((0xf80U 
                                                                      & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw) 
                                                                     | ((0U 
                                                                         == 
                                                                         (0x1fU 
                                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                                             >> 7U))) 
                                                                        << 2U))))))
                                                         : 
                                                        ((8U 
                                                          == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T_2))
                                                          ? 
                                                         (0x13U 
                                                          | (((- (IData)(
                                                                         (1U 
                                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                                             >> 0xcU)))) 
                                                              << 0x19U) 
                                                             | ((0x1f00000U 
                                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                                    << 0x12U)) 
                                                                | ((0xf8000U 
                                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                                       << 8U)) 
                                                                   | (0xf80U 
                                                                      & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw)))))
                                                          : 
                                                         ((7U 
                                                           == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T_2))
                                                           ? 
                                                          (0x843023U 
                                                           | ((0xc000000U 
                                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                                  << 0x15U)) 
                                                              | ((0x2000000U 
                                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                                     << 0xdU)) 
                                                                 | ((0x700000U 
                                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                                        << 0x12U)) 
                                                                    | ((0x38000U 
                                                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                                           << 8U)) 
                                                                       | (0xc00U 
                                                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw))))))
                                                           : 
                                                          ((6U 
                                                            == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T_2))
                                                            ? 
                                                           (0x842023U 
                                                            | ((0x4000000U 
                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                                   << 0x15U)) 
                                                               | ((0x2000000U 
                                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                                      << 0xdU)) 
                                                                  | ((0x700000U 
                                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                                         << 0x12U)) 
                                                                     | ((0x38000U 
                                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                                            << 8U)) 
                                                                        | ((0xc00U 
                                                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw) 
                                                                           | (0x200U 
                                                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                                                << 3U))))))))
                                                            : 
                                                           ((5U 
                                                             == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T_2))
                                                             ? 
                                                            (0x843027U 
                                                             | ((0xc000000U 
                                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                                    << 0x15U)) 
                                                                | ((0x2000000U 
                                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                                       << 0xdU)) 
                                                                   | ((0x700000U 
                                                                       & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                                          << 0x12U)) 
                                                                      | ((0x38000U 
                                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                                             << 8U)) 
                                                                         | (0xc00U 
                                                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw))))))
                                                             : 
                                                            ((4U 
                                                              == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T_2))
                                                              ? 
                                                             (0x84203fU 
                                                              | ((0x4000000U 
                                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                                     << 0x15U)) 
                                                                 | ((0x2000000U 
                                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                                        << 0xdU)) 
                                                                    | ((0x700000U 
                                                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                                           << 0x12U)) 
                                                                       | ((0x38000U 
                                                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                                              << 8U)) 
                                                                          | ((0xc00U 
                                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw) 
                                                                             | (0x200U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                                                << 3U))))))))
                                                              : 
                                                             ((3U 
                                                               == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T_2))
                                                               ? 
                                                              (0x43403U 
                                                               | ((0xc000000U 
                                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                                      << 0x15U)) 
                                                                  | ((0x3800000U 
                                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                                         << 0xdU)) 
                                                                     | ((0x38000U 
                                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                                            << 8U)) 
                                                                        | (0x380U 
                                                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                                              << 5U))))))
                                                               : 
                                                              ((2U 
                                                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T_2))
                                                                ? 
                                                               (0x42403U 
                                                                | ((0x4000000U 
                                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                                       << 0x15U)) 
                                                                   | ((0x3800000U 
                                                                       & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                                          << 0xdU)) 
                                                                      | ((0x400000U 
                                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                                             << 0x10U)) 
                                                                         | ((0x38000U 
                                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                                                << 8U)) 
                                                                            | (0x380U 
                                                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                                                << 5U)))))))
                                                                : 
                                                               ((1U 
                                                                 == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T_2))
                                                                 ? 
                                                                (0x43407U 
                                                                 | ((0xc000000U 
                                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                                        << 0x15U)) 
                                                                    | ((0x3800000U 
                                                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                                           << 0xdU)) 
                                                                       | ((0x38000U 
                                                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                                              << 8U)) 
                                                                          | (0x380U 
                                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                                                << 5U))))))
                                                                 : 
                                                                (0x10400U 
                                                                 | ((0x3c000000U 
                                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                                        << 0x13U)) 
                                                                    | ((0x3000000U 
                                                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                                           << 0xdU)) 
                                                                       | ((0x800000U 
                                                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                                              << 0x12U)) 
                                                                          | ((0x400000U 
                                                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                                                << 0x10U)) 
                                                                             | ((0x380U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                                                << 5U)) 
                                                                                | ((0U 
                                                                                != 
                                                                                (0xffU 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
                                                                                >> 5U)))
                                                                                 ? 0x13U
                                                                                 : 0x1fU)))))))))))))))))))))))))))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7530(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7530\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_0__DOT___GEN_33 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_0__DOT____VdfgTmp_h530a5401__0) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_0__DOT___GEN_32));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_0__DOT___GEN_34 
        = (1U & ((~ ((~ ((~ ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_0__DOT___GEN_30)) 
                             | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_0__DOT___GEN_22))) 
                         | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_0__DOT___GEN_32))) 
                     | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_0__DOT___GEN_16))) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_0__DOT___GEN_15)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_1__DOT___GEN_33 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_1__DOT____VdfgTmp_h530a5401__0) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_1__DOT___GEN_32));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_1__DOT___GEN_34 
        = (1U & ((~ ((~ ((~ ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_1__DOT___GEN_30)) 
                             | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_1__DOT___GEN_22))) 
                         | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_1__DOT___GEN_32))) 
                     | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_1__DOT___GEN_16))) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_1__DOT___GEN_15)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_2__DOT___GEN_33 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_2__DOT____VdfgTmp_h530a5401__0) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_2__DOT___GEN_32));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_2__DOT___GEN_34 
        = (1U & ((~ ((~ ((~ ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_2__DOT___GEN_30)) 
                             | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_2__DOT___GEN_22))) 
                         | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_2__DOT___GEN_32))) 
                     | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_2__DOT___GEN_16))) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_2__DOT___GEN_15)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_3__DOT___GEN_33 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_3__DOT____VdfgTmp_h530a5401__0) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_3__DOT___GEN_32));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_3__DOT___GEN_34 
        = (1U & ((~ ((~ ((~ ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_3__DOT___GEN_30)) 
                             | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_3__DOT___GEN_22))) 
                         | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_3__DOT___GEN_32))) 
                     | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_3__DOT___GEN_16))) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__loop__DOT__columns_3__DOT___GEN_15)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__columns_0__DOT___GEN_33 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__columns_0__DOT____VdfgTmp_h530a5401__0) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__columns_0__DOT___GEN_32));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__columns_0__DOT___GEN_34 
        = (1U & ((~ ((~ ((~ ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__columns_0__DOT___GEN_30)) 
                             | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__columns_0__DOT___GEN_22))) 
                         | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__columns_0__DOT___GEN_32))) 
                     | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__columns_0__DOT___GEN_16))) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__columns_0__DOT___GEN_15)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__columns_1__DOT___GEN_33 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__columns_1__DOT____VdfgTmp_h530a5401__0) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__loop__DOT__columns_1__DOT___GEN_32));
}
