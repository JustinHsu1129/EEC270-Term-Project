// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestDriver.h for the primary calling header

#include "VTestDriver__pch.h"
#include "VTestDriver___024root.h"

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__8330(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__8330\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<5>/*159:0*/ __Vtemp_20;
    VlWide<3>/*95:0*/ __Vtemp_21;
    VlWide<5>/*159:0*/ __Vtemp_40;
    // Body
    __Vtemp_1[1U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_12_ftq_idx) 
                      << 0x1cU) | (IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_11_ftq_idx)) 
                                             << 0x37U) 
                                            | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_10_ftq_idx)) 
                                                << 0x32U) 
                                               | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_9_ftq_idx)) 
                                                   << 0x2dU) 
                                                  | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_8_ftq_idx)) 
                                                      << 0x28U) 
                                                     | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_7_ftq_idx)) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_6_ftq_idx)) 
                                                            << 0x1eU) 
                                                           | (QData)((IData)(
                                                                             (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_5_ftq_idx) 
                                                                               << 0x19U) 
                                                                              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_4_ftq_idx) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_3_ftq_idx) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_ftq_idx) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_ftq_idx) 
                                                                                << 5U) 
                                                                                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_0_ftq_idx)))))))))))))) 
                                           >> 0x20U)));
    __Vtemp_20[0U] = (IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_11_ftq_idx)) 
                               << 0x37U) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_10_ftq_idx)) 
                                             << 0x32U) 
                                            | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_9_ftq_idx)) 
                                                << 0x2dU) 
                                               | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_8_ftq_idx)) 
                                                   << 0x28U) 
                                                  | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_7_ftq_idx)) 
                                                      << 0x23U) 
                                                     | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_6_ftq_idx)) 
                                                         << 0x1eU) 
                                                        | (QData)((IData)(
                                                                          (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_5_ftq_idx) 
                                                                            << 0x19U) 
                                                                           | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_4_ftq_idx) 
                                                                               << 0x14U) 
                                                                              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_3_ftq_idx) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_ftq_idx) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_ftq_idx) 
                                                                                << 5U) 
                                                                                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_0_ftq_idx)))))))))))))));
    __Vtemp_20[1U] = __Vtemp_1[1U];
    __Vtemp_20[2U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_19_ftq_idx) 
                       << 0x1fU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_18_ftq_idx) 
                                     << 0x1aU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_17_ftq_idx) 
                                                   << 0x15U) 
                                                  | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_16_ftq_idx) 
                                                      << 0x10U) 
                                                     | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_15_ftq_idx) 
                                                         << 0xbU) 
                                                        | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_14_ftq_idx) 
                                                            << 6U) 
                                                           | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_13_ftq_idx) 
                                                               << 1U) 
                                                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_12_ftq_idx) 
                                                                 >> 4U))))))));
    __Vtemp_20[3U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_25_ftq_idx) 
                       << 0x1dU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_24_ftq_idx) 
                                     << 0x18U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_23_ftq_idx) 
                                                   << 0x13U) 
                                                  | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_22_ftq_idx) 
                                                      << 0xeU) 
                                                     | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_21_ftq_idx) 
                                                         << 9U) 
                                                        | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_20_ftq_idx) 
                                                            << 4U) 
                                                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_19_ftq_idx) 
                                                              >> 1U)))))));
    __Vtemp_20[4U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_31_ftq_idx) 
                       << 0x1bU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_30_ftq_idx) 
                                     << 0x16U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_29_ftq_idx) 
                                                   << 0x11U) 
                                                  | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_28_ftq_idx) 
                                                      << 0xcU) 
                                                     | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_27_ftq_idx) 
                                                         << 7U) 
                                                        | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_26_ftq_idx) 
                                                            << 2U) 
                                                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_25_ftq_idx) 
                                                              >> 3U)))))));
    __Vtemp_21[1U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_12_ftq_idx) 
                       << 0x1cU) | (IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_11_ftq_idx)) 
                                              << 0x37U) 
                                             | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_10_ftq_idx)) 
                                                 << 0x32U) 
                                                | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_9_ftq_idx)) 
                                                    << 0x2dU) 
                                                   | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_8_ftq_idx)) 
                                                       << 0x28U) 
                                                      | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_7_ftq_idx)) 
                                                          << 0x23U) 
                                                         | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_6_ftq_idx)) 
                                                             << 0x1eU) 
                                                            | (QData)((IData)(
                                                                              (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_5_ftq_idx) 
                                                                                << 0x19U) 
                                                                               | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_4_ftq_idx) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_3_ftq_idx) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_2_ftq_idx) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_1_ftq_idx) 
                                                                                << 5U) 
                                                                                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_0_ftq_idx)))))))))))))) 
                                            >> 0x20U)));
    __Vtemp_40[0U] = (IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_11_ftq_idx)) 
                               << 0x37U) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_10_ftq_idx)) 
                                             << 0x32U) 
                                            | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_9_ftq_idx)) 
                                                << 0x2dU) 
                                               | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_8_ftq_idx)) 
                                                   << 0x28U) 
                                                  | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_7_ftq_idx)) 
                                                      << 0x23U) 
                                                     | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_6_ftq_idx)) 
                                                         << 0x1eU) 
                                                        | (QData)((IData)(
                                                                          (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_5_ftq_idx) 
                                                                            << 0x19U) 
                                                                           | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_4_ftq_idx) 
                                                                               << 0x14U) 
                                                                              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_3_ftq_idx) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_2_ftq_idx) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_1_ftq_idx) 
                                                                                << 5U) 
                                                                                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_0_ftq_idx)))))))))))))));
    __Vtemp_40[1U] = __Vtemp_21[1U];
    __Vtemp_40[2U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_19_ftq_idx) 
                       << 0x1fU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_18_ftq_idx) 
                                     << 0x1aU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_17_ftq_idx) 
                                                   << 0x15U) 
                                                  | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_16_ftq_idx) 
                                                      << 0x10U) 
                                                     | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_15_ftq_idx) 
                                                         << 0xbU) 
                                                        | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_14_ftq_idx) 
                                                            << 6U) 
                                                           | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_13_ftq_idx) 
                                                               << 1U) 
                                                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_12_ftq_idx) 
                                                                 >> 4U))))))));
    __Vtemp_40[3U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_25_ftq_idx) 
                       << 0x1dU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_24_ftq_idx) 
                                     << 0x18U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_23_ftq_idx) 
                                                   << 0x13U) 
                                                  | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_22_ftq_idx) 
                                                      << 0xeU) 
                                                     | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_21_ftq_idx) 
                                                         << 9U) 
                                                        | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_20_ftq_idx) 
                                                            << 4U) 
                                                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_19_ftq_idx) 
                                                              >> 1U)))))));
    __Vtemp_40[4U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_31_ftq_idx) 
                       << 0x1bU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_30_ftq_idx) 
                                     << 0x16U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_29_ftq_idx) 
                                                   << 0x11U) 
                                                  | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_28_ftq_idx) 
                                                      << 0xcU) 
                                                     | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_27_ftq_idx) 
                                                         << 7U) 
                                                        | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_26_ftq_idx) 
                                                            << 2U) 
                                                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_25_ftq_idx) 
                                                              >> 3U)))))));
    if ((0x9fU >= (0xffU & ((IData)(5U) * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__com_idx))))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___rob_io_commit_uops_0_ftq_idx 
            = (0x1fU & (((0U == (0x1fU & ((IData)(5U) 
                                          * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__com_idx))))
                          ? 0U : (__Vtemp_20[(((IData)(4U) 
                                               + (0xffU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__com_idx)))) 
                                              >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(5U) 
                                                  * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__com_idx)))))) 
                        | (__Vtemp_20[(7U & (((IData)(5U) 
                                              * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__com_idx)) 
                                             >> 5U))] 
                           >> (0x1fU & ((IData)(5U) 
                                        * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__com_idx))))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___rob_io_commit_uops_2_ftq_idx 
            = (0x1fU & (((0U == (0x1fU & ((IData)(5U) 
                                          * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__com_idx))))
                          ? 0U : (__Vtemp_40[(((IData)(4U) 
                                               + (0xffU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__com_idx)))) 
                                              >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(5U) 
                                                  * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__com_idx)))))) 
                        | (__Vtemp_40[(7U & (((IData)(5U) 
                                              * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__com_idx)) 
                                             >> 5U))] 
                           >> (0x1fU & ((IData)(5U) 
                                        * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__com_idx))))));
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___rob_io_commit_uops_0_ftq_idx = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___rob_io_commit_uops_2_ftq_idx = 0U;
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__8331(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__8331\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<5>/*159:0*/ __Vtemp_20;
    // Body
    __Vtemp_1[1U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_12_ftq_idx) 
                      << 0x1cU) | (IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_11_ftq_idx)) 
                                             << 0x37U) 
                                            | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_10_ftq_idx)) 
                                                << 0x32U) 
                                               | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_9_ftq_idx)) 
                                                   << 0x2dU) 
                                                  | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_8_ftq_idx)) 
                                                      << 0x28U) 
                                                     | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_7_ftq_idx)) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_6_ftq_idx)) 
                                                            << 0x1eU) 
                                                           | (QData)((IData)(
                                                                             (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_5_ftq_idx) 
                                                                               << 0x19U) 
                                                                              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_4_ftq_idx) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_3_ftq_idx) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_2_ftq_idx) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_1_ftq_idx) 
                                                                                << 5U) 
                                                                                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_0_ftq_idx)))))))))))))) 
                                           >> 0x20U)));
    __Vtemp_20[0U] = (IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_11_ftq_idx)) 
                               << 0x37U) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_10_ftq_idx)) 
                                             << 0x32U) 
                                            | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_9_ftq_idx)) 
                                                << 0x2dU) 
                                               | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_8_ftq_idx)) 
                                                   << 0x28U) 
                                                  | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_7_ftq_idx)) 
                                                      << 0x23U) 
                                                     | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_6_ftq_idx)) 
                                                         << 0x1eU) 
                                                        | (QData)((IData)(
                                                                          (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_5_ftq_idx) 
                                                                            << 0x19U) 
                                                                           | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_4_ftq_idx) 
                                                                               << 0x14U) 
                                                                              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_3_ftq_idx) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_2_ftq_idx) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_1_ftq_idx) 
                                                                                << 5U) 
                                                                                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_0_ftq_idx)))))))))))))));
    __Vtemp_20[1U] = __Vtemp_1[1U];
    __Vtemp_20[2U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_19_ftq_idx) 
                       << 0x1fU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_18_ftq_idx) 
                                     << 0x1aU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_17_ftq_idx) 
                                                   << 0x15U) 
                                                  | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_16_ftq_idx) 
                                                      << 0x10U) 
                                                     | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_15_ftq_idx) 
                                                         << 0xbU) 
                                                        | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_14_ftq_idx) 
                                                            << 6U) 
                                                           | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_13_ftq_idx) 
                                                               << 1U) 
                                                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_12_ftq_idx) 
                                                                 >> 4U))))))));
    __Vtemp_20[3U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_25_ftq_idx) 
                       << 0x1dU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_24_ftq_idx) 
                                     << 0x18U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_23_ftq_idx) 
                                                   << 0x13U) 
                                                  | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_22_ftq_idx) 
                                                      << 0xeU) 
                                                     | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_21_ftq_idx) 
                                                         << 9U) 
                                                        | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_20_ftq_idx) 
                                                            << 4U) 
                                                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_19_ftq_idx) 
                                                              >> 1U)))))));
    __Vtemp_20[4U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_31_ftq_idx) 
                       << 0x1bU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_30_ftq_idx) 
                                     << 0x16U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_29_ftq_idx) 
                                                   << 0x11U) 
                                                  | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_28_ftq_idx) 
                                                      << 0xcU) 
                                                     | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_27_ftq_idx) 
                                                         << 7U) 
                                                        | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_26_ftq_idx) 
                                                            << 2U) 
                                                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_25_ftq_idx) 
                                                              >> 3U)))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___rob_io_commit_uops_1_ftq_idx 
        = ((0x9fU >= (0xffU & ((IData)(5U) * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__com_idx))))
            ? (0x1fU & (((0U == (0x1fU & ((IData)(5U) 
                                          * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__com_idx))))
                          ? 0U : (__Vtemp_20[(((IData)(4U) 
                                               + (0xffU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__com_idx)))) 
                                              >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(5U) 
                                                  * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__com_idx)))))) 
                        | (__Vtemp_20[(7U & (((IData)(5U) 
                                              * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__com_idx)) 
                                             >> 5U))] 
                           >> (0x1fU & ((IData)(5U) 
                                        * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__com_idx))))))
            : 0U);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__commit_load_2 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_105 
            >> (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__com_idx)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___rob_io_commit_valids_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___rob_io_commit_arch_valids_0 
        = ((~ ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_predicated_31) 
                 << 0x1fU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_predicated_30) 
                               << 0x1eU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_predicated_29) 
                                             << 0x1dU) 
                                            | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_predicated_28) 
                                                << 0x1cU) 
                                               | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_predicated_27) 
                                                   << 0x1bU) 
                                                  | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_predicated_26) 
                                                      << 0x1aU) 
                                                     | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_predicated_25) 
                                                         << 0x19U) 
                                                        | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_predicated_24) 
                                                            << 0x18U) 
                                                           | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_predicated_23) 
                                                               << 0x17U) 
                                                              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_predicated_22) 
                                                                  << 0x16U) 
                                                                 | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_predicated_21) 
                                                                     << 0x15U) 
                                                                    | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_predicated_20) 
                                                                        << 0x14U) 
                                                                       | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_predicated_19) 
                                                                           << 0x13U) 
                                                                          | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_predicated_18) 
                                                                              << 0x12U) 
                                                                             | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_predicated_17) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_predicated_16) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_predicated_15) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_predicated_14) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_predicated_13) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_predicated_12) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_predicated_11) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_predicated_10) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_predicated_9) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_predicated_8) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_predicated_7) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_predicated_6) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_predicated_5) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_predicated_4) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_predicated_3) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_predicated_2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_predicated_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_predicated_0)))))))))))))))))))))))))))))))) 
               >> (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__com_idx))) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___rob_io_commit_valids_0));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__8332(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__8332\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___rob_io_commit_arch_valids_1 
        = ((~ ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_predicated_1_31) 
                 << 0x1fU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_predicated_1_30) 
                               << 0x1eU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_predicated_1_29) 
                                             << 0x1dU) 
                                            | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_predicated_1_28) 
                                                << 0x1cU) 
                                               | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_predicated_1_27) 
                                                   << 0x1bU) 
                                                  | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_predicated_1_26) 
                                                      << 0x1aU) 
                                                     | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_predicated_1_25) 
                                                         << 0x19U) 
                                                        | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_predicated_1_24) 
                                                            << 0x18U) 
                                                           | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_predicated_1_23) 
                                                               << 0x17U) 
                                                              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_predicated_1_22) 
                                                                  << 0x16U) 
                                                                 | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_predicated_1_21) 
                                                                     << 0x15U) 
                                                                    | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_predicated_1_20) 
                                                                        << 0x14U) 
                                                                       | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_predicated_1_19) 
                                                                           << 0x13U) 
                                                                          | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_predicated_1_18) 
                                                                              << 0x12U) 
                                                                             | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_predicated_1_17) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_predicated_1_16) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_predicated_1_15) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_predicated_1_14) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_predicated_1_13) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_predicated_1_12) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_predicated_1_11) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_predicated_1_10) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_predicated_1_9) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_predicated_1_8) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_predicated_1_7) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_predicated_1_6) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_predicated_1_5) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_predicated_1_4) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_predicated_1_3) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_predicated_1_2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_predicated_1_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_predicated_1_0)))))))))))))))))))))))))))))))) 
               >> (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__com_idx))) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___rob_io_commit_valids_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___rob_io_commit_arch_valids_2 
        = ((~ ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_predicated_2_31) 
                 << 0x1fU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_predicated_2_30) 
                               << 0x1eU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_predicated_2_29) 
                                             << 0x1dU) 
                                            | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_predicated_2_28) 
                                                << 0x1cU) 
                                               | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_predicated_2_27) 
                                                   << 0x1bU) 
                                                  | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_predicated_2_26) 
                                                      << 0x1aU) 
                                                     | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_predicated_2_25) 
                                                         << 0x19U) 
                                                        | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_predicated_2_24) 
                                                            << 0x18U) 
                                                           | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_predicated_2_23) 
                                                               << 0x17U) 
                                                              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_predicated_2_22) 
                                                                  << 0x16U) 
                                                                 | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_predicated_2_21) 
                                                                     << 0x15U) 
                                                                    | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_predicated_2_20) 
                                                                        << 0x14U) 
                                                                       | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_predicated_2_19) 
                                                                           << 0x13U) 
                                                                          | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_predicated_2_18) 
                                                                              << 0x12U) 
                                                                             | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_predicated_2_17) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_predicated_2_16) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_predicated_2_15) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_predicated_2_14) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_predicated_2_13) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_predicated_2_12) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_predicated_2_11) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_predicated_2_10) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_predicated_2_9) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_predicated_2_8) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_predicated_2_7) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_predicated_2_6) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_predicated_2_5) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_predicated_2_4) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_predicated_2_3) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_predicated_2_2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_predicated_2_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_predicated_2_0)))))))))))))))))))))))))))))))) 
               >> (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__com_idx))) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___rob_io_commit_valids_2));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__8333(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__8333\n"); );
    // Init
    VlWide<7>/*223:0*/ __Vtemp_23;
    VlWide<7>/*223:0*/ __Vtemp_46;
    // Body
    __Vtemp_23[0U] = (IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_8_uopc)) 
                               << 0x38U) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_7_uopc)) 
                                             << 0x31U) 
                                            | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_6_uopc)) 
                                                << 0x2aU) 
                                               | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_5_uopc)) 
                                                   << 0x23U) 
                                                  | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_4_uopc)) 
                                                      << 0x1cU) 
                                                     | (QData)((IData)(
                                                                       (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_3_uopc) 
                                                                         << 0x15U) 
                                                                        | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_uopc) 
                                                                            << 0xeU) 
                                                                           | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_uopc) 
                                                                               << 7U) 
                                                                              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_0_uopc))))))))))));
    __Vtemp_23[1U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_9_uopc) 
                       << 0x1fU) | (IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_8_uopc)) 
                                              << 0x38U) 
                                             | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_7_uopc)) 
                                                 << 0x31U) 
                                                | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_6_uopc)) 
                                                    << 0x2aU) 
                                                   | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_5_uopc)) 
                                                       << 0x23U) 
                                                      | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_4_uopc)) 
                                                          << 0x1cU) 
                                                         | (QData)((IData)(
                                                                           (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_3_uopc) 
                                                                             << 0x15U) 
                                                                            | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_uopc) 
                                                                                << 0xeU) 
                                                                               | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_uopc) 
                                                                                << 7U) 
                                                                                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_0_uopc))))))))))) 
                                            >> 0x20U)));
    __Vtemp_23[2U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_13_uopc) 
                       << 0x1bU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_12_uopc) 
                                     << 0x14U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_11_uopc) 
                                                   << 0xdU) 
                                                  | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_10_uopc) 
                                                      << 6U) 
                                                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_9_uopc) 
                                                        >> 1U)))));
    __Vtemp_23[3U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_18_uopc) 
                       << 0x1eU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_17_uopc) 
                                     << 0x17U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_16_uopc) 
                                                   << 0x10U) 
                                                  | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_15_uopc) 
                                                      << 9U) 
                                                     | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_14_uopc) 
                                                         << 2U) 
                                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_13_uopc) 
                                                           >> 5U))))));
    __Vtemp_23[4U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_22_uopc) 
                       << 0x1aU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_21_uopc) 
                                     << 0x13U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_20_uopc) 
                                                   << 0xcU) 
                                                  | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_19_uopc) 
                                                      << 5U) 
                                                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_18_uopc) 
                                                        >> 2U)))));
    __Vtemp_23[5U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_27_uopc) 
                       << 0x1dU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_26_uopc) 
                                     << 0x16U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_25_uopc) 
                                                   << 0xfU) 
                                                  | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_24_uopc) 
                                                      << 8U) 
                                                     | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_23_uopc) 
                                                         << 1U) 
                                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_22_uopc) 
                                                           >> 6U))))));
    __Vtemp_23[6U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_31_uopc) 
                       << 0x19U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_30_uopc) 
                                     << 0x12U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_29_uopc) 
                                                   << 0xbU) 
                                                  | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_28_uopc) 
                                                      << 4U) 
                                                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_27_uopc) 
                                                        >> 3U)))));
    __Vtemp_46[0U] = (IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_8_uopc)) 
                               << 0x38U) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_7_uopc)) 
                                             << 0x31U) 
                                            | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_6_uopc)) 
                                                << 0x2aU) 
                                               | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_5_uopc)) 
                                                   << 0x23U) 
                                                  | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_4_uopc)) 
                                                      << 0x1cU) 
                                                     | (QData)((IData)(
                                                                       (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_3_uopc) 
                                                                         << 0x15U) 
                                                                        | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_2_uopc) 
                                                                            << 0xeU) 
                                                                           | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_1_uopc) 
                                                                               << 7U) 
                                                                              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_0_uopc))))))))))));
    __Vtemp_46[1U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_9_uopc) 
                       << 0x1fU) | (IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_8_uopc)) 
                                              << 0x38U) 
                                             | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_7_uopc)) 
                                                 << 0x31U) 
                                                | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_6_uopc)) 
                                                    << 0x2aU) 
                                                   | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_5_uopc)) 
                                                       << 0x23U) 
                                                      | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_4_uopc)) 
                                                          << 0x1cU) 
                                                         | (QData)((IData)(
                                                                           (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_3_uopc) 
                                                                             << 0x15U) 
                                                                            | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_2_uopc) 
                                                                                << 0xeU) 
                                                                               | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_1_uopc) 
                                                                                << 7U) 
                                                                                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_0_uopc))))))))))) 
                                            >> 0x20U)));
    __Vtemp_46[2U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_13_uopc) 
                       << 0x1bU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_12_uopc) 
                                     << 0x14U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_11_uopc) 
                                                   << 0xdU) 
                                                  | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_10_uopc) 
                                                      << 6U) 
                                                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_9_uopc) 
                                                        >> 1U)))));
    __Vtemp_46[3U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_18_uopc) 
                       << 0x1eU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_17_uopc) 
                                     << 0x17U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_16_uopc) 
                                                   << 0x10U) 
                                                  | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_15_uopc) 
                                                      << 9U) 
                                                     | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_14_uopc) 
                                                         << 2U) 
                                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_13_uopc) 
                                                           >> 5U))))));
    __Vtemp_46[4U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_22_uopc) 
                       << 0x1aU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_21_uopc) 
                                     << 0x13U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_20_uopc) 
                                                   << 0xcU) 
                                                  | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_19_uopc) 
                                                      << 5U) 
                                                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_18_uopc) 
                                                        >> 2U)))));
    __Vtemp_46[5U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_27_uopc) 
                       << 0x1dU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_26_uopc) 
                                     << 0x16U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_25_uopc) 
                                                   << 0xfU) 
                                                  | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_24_uopc) 
                                                      << 8U) 
                                                     | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_23_uopc) 
                                                         << 1U) 
                                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_22_uopc) 
                                                           >> 6U))))));
    __Vtemp_46[6U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_31_uopc) 
                       << 0x19U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_30_uopc) 
                                     << 0x12U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_29_uopc) 
                                                   << 0xbU) 
                                                  | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_28_uopc) 
                                                      << 4U) 
                                                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_27_uopc) 
                                                        >> 3U)))));
    if ((0xdfU >= (0xffU & ((IData)(7U) * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__com_idx))))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT____VdfgTmp_h13adeb46__0 
            = (0x7fU & (((0U == (0x1fU & ((IData)(7U) 
                                          * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__com_idx))))
                          ? 0U : (__Vtemp_23[(((IData)(6U) 
                                               + (0xffU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__com_idx)))) 
                                              >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(7U) 
                                                  * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__com_idx)))))) 
                        | (__Vtemp_23[(7U & (((IData)(7U) 
                                              * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__com_idx)) 
                                             >> 5U))] 
                           >> (0x1fU & ((IData)(7U) 
                                        * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__com_idx))))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT____VdfgTmp_h9901e384__0 
            = (0x7fU & (((0U == (0x1fU & ((IData)(7U) 
                                          * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__com_idx))))
                          ? 0U : (__Vtemp_46[(((IData)(6U) 
                                               + (0xffU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__com_idx)))) 
                                              >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(7U) 
                                                  * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__com_idx)))))) 
                        | (__Vtemp_46[(7U & (((IData)(7U) 
                                              * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__com_idx)) 
                                             >> 5U))] 
                           >> (0x1fU & ((IData)(7U) 
                                        * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__com_idx))))));
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT____VdfgTmp_h13adeb46__0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT____VdfgTmp_h9901e384__0 = 0U;
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__8334(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__8334\n"); );
    // Init
    VlWide<7>/*223:0*/ __Vtemp_23;
    // Body
    __Vtemp_23[0U] = (IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_8_uopc)) 
                               << 0x38U) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_7_uopc)) 
                                             << 0x31U) 
                                            | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_6_uopc)) 
                                                << 0x2aU) 
                                               | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_5_uopc)) 
                                                   << 0x23U) 
                                                  | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_4_uopc)) 
                                                      << 0x1cU) 
                                                     | (QData)((IData)(
                                                                       (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_3_uopc) 
                                                                         << 0x15U) 
                                                                        | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_2_uopc) 
                                                                            << 0xeU) 
                                                                           | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_1_uopc) 
                                                                               << 7U) 
                                                                              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_0_uopc))))))))))));
    __Vtemp_23[1U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_9_uopc) 
                       << 0x1fU) | (IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_8_uopc)) 
                                              << 0x38U) 
                                             | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_7_uopc)) 
                                                 << 0x31U) 
                                                | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_6_uopc)) 
                                                    << 0x2aU) 
                                                   | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_5_uopc)) 
                                                       << 0x23U) 
                                                      | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_4_uopc)) 
                                                          << 0x1cU) 
                                                         | (QData)((IData)(
                                                                           (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_3_uopc) 
                                                                             << 0x15U) 
                                                                            | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_2_uopc) 
                                                                                << 0xeU) 
                                                                               | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_1_uopc) 
                                                                                << 7U) 
                                                                                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_0_uopc))))))))))) 
                                            >> 0x20U)));
    __Vtemp_23[2U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_13_uopc) 
                       << 0x1bU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_12_uopc) 
                                     << 0x14U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_11_uopc) 
                                                   << 0xdU) 
                                                  | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_10_uopc) 
                                                      << 6U) 
                                                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_9_uopc) 
                                                        >> 1U)))));
    __Vtemp_23[3U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_18_uopc) 
                       << 0x1eU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_17_uopc) 
                                     << 0x17U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_16_uopc) 
                                                   << 0x10U) 
                                                  | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_15_uopc) 
                                                      << 9U) 
                                                     | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_14_uopc) 
                                                         << 2U) 
                                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_13_uopc) 
                                                           >> 5U))))));
    __Vtemp_23[4U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_22_uopc) 
                       << 0x1aU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_21_uopc) 
                                     << 0x13U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_20_uopc) 
                                                   << 0xcU) 
                                                  | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_19_uopc) 
                                                      << 5U) 
                                                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_18_uopc) 
                                                        >> 2U)))));
    __Vtemp_23[5U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_27_uopc) 
                       << 0x1dU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_26_uopc) 
                                     << 0x16U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_25_uopc) 
                                                   << 0xfU) 
                                                  | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_24_uopc) 
                                                      << 8U) 
                                                     | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_23_uopc) 
                                                         << 1U) 
                                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_22_uopc) 
                                                           >> 6U))))));
    __Vtemp_23[6U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_31_uopc) 
                       << 0x19U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_30_uopc) 
                                     << 0x12U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_29_uopc) 
                                                   << 0xbU) 
                                                  | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_28_uopc) 
                                                      << 4U) 
                                                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_27_uopc) 
                                                        >> 3U)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT____VdfgTmp_h195c348a__0 
        = ((0xdfU >= (0xffU & ((IData)(7U) * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__com_idx))))
            ? (0x7fU & (((0U == (0x1fU & ((IData)(7U) 
                                          * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__com_idx))))
                          ? 0U : (__Vtemp_23[(((IData)(6U) 
                                               + (0xffU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__com_idx)))) 
                                              >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(7U) 
                                                  * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__com_idx)))))) 
                        | (__Vtemp_23[(7U & (((IData)(7U) 
                                              * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__com_idx)) 
                                             >> 5U))] 
                           >> (0x1fU & ((IData)(7U) 
                                        * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__com_idx))))))
            : 0U);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__commit_load_1 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_67 
            >> (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__com_idx)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___rob_io_commit_valids_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT___core_io_lsu_commit_uops_2_uses_stq 
        = (1U & ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_31_uses_stq) 
                   << 0x1fU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_30_uses_stq) 
                                 << 0x1eU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_29_uses_stq) 
                                               << 0x1dU) 
                                              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_28_uses_stq) 
                                                  << 0x1cU) 
                                                 | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_27_uses_stq) 
                                                     << 0x1bU) 
                                                    | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_26_uses_stq) 
                                                        << 0x1aU) 
                                                       | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_25_uses_stq) 
                                                           << 0x19U) 
                                                          | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_24_uses_stq) 
                                                              << 0x18U) 
                                                             | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_23_uses_stq) 
                                                                 << 0x17U) 
                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_22_uses_stq) 
                                                                    << 0x16U) 
                                                                   | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_21_uses_stq) 
                                                                       << 0x15U) 
                                                                      | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_20_uses_stq) 
                                                                          << 0x14U) 
                                                                         | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_19_uses_stq) 
                                                                             << 0x13U) 
                                                                            | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_18_uses_stq) 
                                                                                << 0x12U) 
                                                                               | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_17_uses_stq) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_16_uses_stq) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_15_uses_stq) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_14_uses_stq) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_13_uses_stq) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_12_uses_stq) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_11_uses_stq) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_10_uses_stq) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_9_uses_stq) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_8_uses_stq) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_7_uses_stq) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_6_uses_stq) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_5_uses_stq) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_4_uses_stq) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_3_uses_stq) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_2_uses_stq) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_1_uses_stq) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_0_uses_stq)))))))))))))))))))))))))))))))) 
                 >> (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__com_idx)));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__8335(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__8335\n"); );
    // Init
    VlWide<6>/*191:0*/ __Vtemp_22;
    // Body
    __Vtemp_22[0U] = (IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_9_ldst)) 
                               << 0x36U) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_8_ldst)) 
                                             << 0x30U) 
                                            | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_7_ldst)) 
                                                << 0x2aU) 
                                               | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_6_ldst)) 
                                                   << 0x24U) 
                                                  | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_5_ldst)) 
                                                      << 0x1eU) 
                                                     | (QData)((IData)(
                                                                       (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_4_ldst) 
                                                                         << 0x18U) 
                                                                        | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_3_ldst) 
                                                                            << 0x12U) 
                                                                           | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_ldst) 
                                                                               << 0xcU) 
                                                                              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_ldst) 
                                                                                << 6U) 
                                                                                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_0_ldst)))))))))))));
    __Vtemp_22[1U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_10_ldst) 
                       << 0x1cU) | (IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_9_ldst)) 
                                              << 0x36U) 
                                             | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_8_ldst)) 
                                                 << 0x30U) 
                                                | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_7_ldst)) 
                                                    << 0x2aU) 
                                                   | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_6_ldst)) 
                                                       << 0x24U) 
                                                      | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_5_ldst)) 
                                                          << 0x1eU) 
                                                         | (QData)((IData)(
                                                                           (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_4_ldst) 
                                                                             << 0x18U) 
                                                                            | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_3_ldst) 
                                                                                << 0x12U) 
                                                                               | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_ldst) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_ldst) 
                                                                                << 6U) 
                                                                                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_0_ldst)))))))))))) 
                                            >> 0x20U)));
    __Vtemp_22[2U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_15_ldst) 
                       << 0x1aU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_14_ldst) 
                                     << 0x14U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_13_ldst) 
                                                   << 0xeU) 
                                                  | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_12_ldst) 
                                                      << 8U) 
                                                     | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_11_ldst) 
                                                         << 2U) 
                                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_10_ldst) 
                                                           >> 4U))))));
    __Vtemp_22[3U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_21_ldst) 
                       << 0x1eU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_20_ldst) 
                                     << 0x18U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_19_ldst) 
                                                   << 0x12U) 
                                                  | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_18_ldst) 
                                                      << 0xcU) 
                                                     | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_17_ldst) 
                                                         << 6U) 
                                                        | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_16_ldst))))));
    __Vtemp_22[4U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_26_ldst) 
                       << 0x1cU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_25_ldst) 
                                     << 0x16U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_24_ldst) 
                                                   << 0x10U) 
                                                  | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_23_ldst) 
                                                      << 0xaU) 
                                                     | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_22_ldst) 
                                                         << 4U) 
                                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_21_ldst) 
                                                           >> 2U))))));
    __Vtemp_22[5U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_31_ldst) 
                       << 0x1aU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_30_ldst) 
                                     << 0x14U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_29_ldst) 
                                                   << 0xeU) 
                                                  | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_28_ldst) 
                                                      << 8U) 
                                                     | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_27_ldst) 
                                                         << 2U) 
                                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_26_ldst) 
                                                           >> 4U))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___rob_io_commit_uops_0_ldst 
        = ((0xbfU >= (0xffU & ((IData)(6U) * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__com_idx))))
            ? (0x3fU & (((0U == (0x1fU & ((IData)(6U) 
                                          * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__com_idx))))
                          ? 0U : (__Vtemp_22[(((IData)(5U) 
                                               + (0xffU 
                                                  & ((IData)(6U) 
                                                     * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__com_idx)))) 
                                              >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(6U) 
                                                  * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__com_idx)))))) 
                        | (__Vtemp_22[(7U & (((IData)(6U) 
                                              * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__com_idx)) 
                                             >> 5U))] 
                           >> (0x1fU & ((IData)(6U) 
                                        * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__com_idx))))))
            : 0U);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___rob_io_commit_uops_0_ldst_val 
        = (1U & ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_31_ldst_val) 
                   << 0x1fU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_30_ldst_val) 
                                 << 0x1eU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_29_ldst_val) 
                                               << 0x1dU) 
                                              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_28_ldst_val) 
                                                  << 0x1cU) 
                                                 | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_27_ldst_val) 
                                                     << 0x1bU) 
                                                    | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_26_ldst_val) 
                                                        << 0x1aU) 
                                                       | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_25_ldst_val) 
                                                           << 0x19U) 
                                                          | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_24_ldst_val) 
                                                              << 0x18U) 
                                                             | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_23_ldst_val) 
                                                                 << 0x17U) 
                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_22_ldst_val) 
                                                                    << 0x16U) 
                                                                   | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_21_ldst_val) 
                                                                       << 0x15U) 
                                                                      | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_20_ldst_val) 
                                                                          << 0x14U) 
                                                                         | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_19_ldst_val) 
                                                                             << 0x13U) 
                                                                            | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_18_ldst_val) 
                                                                                << 0x12U) 
                                                                               | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_17_ldst_val) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_16_ldst_val) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_15_ldst_val) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_14_ldst_val) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_13_ldst_val) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_12_ldst_val) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_11_ldst_val) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_10_ldst_val) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_9_ldst_val) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_8_ldst_val) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_7_ldst_val) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_6_ldst_val) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_5_ldst_val) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_4_ldst_val) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_3_ldst_val) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_ldst_val) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_ldst_val) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_0_ldst_val)))))))))))))))))))))))))))))))) 
                 >> (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__com_idx)));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__8336(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__8336\n"); );
    // Init
    VlWide<7>/*223:0*/ __Vtemp_23;
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___rob_io_commit_uops_0_dst_rtype 
        = (3U & (IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_31_dst_rtype)) 
                           << 0x3eU) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_30_dst_rtype)) 
                                         << 0x3cU) 
                                        | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_29_dst_rtype)) 
                                            << 0x3aU) 
                                           | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_28_dst_rtype)) 
                                               << 0x38U) 
                                              | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_27_dst_rtype)) 
                                                  << 0x36U) 
                                                 | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_26_dst_rtype)) 
                                                     << 0x34U) 
                                                    | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_25_dst_rtype)) 
                                                        << 0x32U) 
                                                       | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_24_dst_rtype)) 
                                                           << 0x30U) 
                                                          | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_23_dst_rtype)) 
                                                              << 0x2eU) 
                                                             | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_22_dst_rtype)) 
                                                                 << 0x2cU) 
                                                                | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_21_dst_rtype)) 
                                                                    << 0x2aU) 
                                                                   | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_20_dst_rtype)) 
                                                                       << 0x28U) 
                                                                      | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_19_dst_rtype)) 
                                                                          << 0x26U) 
                                                                         | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_18_dst_rtype)) 
                                                                             << 0x24U) 
                                                                            | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_17_dst_rtype)) 
                                                                                << 0x22U) 
                                                                               | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_16_dst_rtype)) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_15_dst_rtype) 
                                                                                << 0x1eU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_14_dst_rtype) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_13_dst_rtype) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_12_dst_rtype) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_11_dst_rtype) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_10_dst_rtype) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_9_dst_rtype) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_8_dst_rtype) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_7_dst_rtype) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_6_dst_rtype) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_5_dst_rtype) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_4_dst_rtype) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_3_dst_rtype) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_dst_rtype) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_dst_rtype) 
                                                                                << 2U) 
                                                                                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_0_dst_rtype)))))))))))))))))))))))))))))))))) 
                         >> (0x3fU & VL_SHIFTL_III(6,6,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__com_idx), 1U)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__commit_load 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_28 
            >> (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__com_idx)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___rob_io_commit_valids_0));
    __Vtemp_23[0U] = (IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_8_stale_pdst)) 
                               << 0x38U) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_7_stale_pdst)) 
                                             << 0x31U) 
                                            | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_6_stale_pdst)) 
                                                << 0x2aU) 
                                               | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_5_stale_pdst)) 
                                                   << 0x23U) 
                                                  | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_4_stale_pdst)) 
                                                      << 0x1cU) 
                                                     | (QData)((IData)(
                                                                       (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_3_stale_pdst) 
                                                                         << 0x15U) 
                                                                        | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_stale_pdst) 
                                                                            << 0xeU) 
                                                                           | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_stale_pdst) 
                                                                               << 7U) 
                                                                              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_0_stale_pdst))))))))))));
    __Vtemp_23[1U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_9_stale_pdst) 
                       << 0x1fU) | (IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_8_stale_pdst)) 
                                              << 0x38U) 
                                             | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_7_stale_pdst)) 
                                                 << 0x31U) 
                                                | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_6_stale_pdst)) 
                                                    << 0x2aU) 
                                                   | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_5_stale_pdst)) 
                                                       << 0x23U) 
                                                      | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_4_stale_pdst)) 
                                                          << 0x1cU) 
                                                         | (QData)((IData)(
                                                                           (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_3_stale_pdst) 
                                                                             << 0x15U) 
                                                                            | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_stale_pdst) 
                                                                                << 0xeU) 
                                                                               | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_stale_pdst) 
                                                                                << 7U) 
                                                                                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_0_stale_pdst))))))))))) 
                                            >> 0x20U)));
    __Vtemp_23[2U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_13_stale_pdst) 
                       << 0x1bU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_12_stale_pdst) 
                                     << 0x14U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_11_stale_pdst) 
                                                   << 0xdU) 
                                                  | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_10_stale_pdst) 
                                                      << 6U) 
                                                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_9_stale_pdst) 
                                                        >> 1U)))));
    __Vtemp_23[3U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_18_stale_pdst) 
                       << 0x1eU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_17_stale_pdst) 
                                     << 0x17U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_16_stale_pdst) 
                                                   << 0x10U) 
                                                  | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_15_stale_pdst) 
                                                      << 9U) 
                                                     | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_14_stale_pdst) 
                                                         << 2U) 
                                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_13_stale_pdst) 
                                                           >> 5U))))));
    __Vtemp_23[4U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_22_stale_pdst) 
                       << 0x1aU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_21_stale_pdst) 
                                     << 0x13U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_20_stale_pdst) 
                                                   << 0xcU) 
                                                  | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_19_stale_pdst) 
                                                      << 5U) 
                                                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_18_stale_pdst) 
                                                        >> 2U)))));
    __Vtemp_23[5U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_27_stale_pdst) 
                       << 0x1dU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_26_stale_pdst) 
                                     << 0x16U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_25_stale_pdst) 
                                                   << 0xfU) 
                                                  | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_24_stale_pdst) 
                                                      << 8U) 
                                                     | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_23_stale_pdst) 
                                                         << 1U) 
                                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_22_stale_pdst) 
                                                           >> 6U))))));
    __Vtemp_23[6U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_31_stale_pdst) 
                       << 0x19U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_30_stale_pdst) 
                                     << 0x12U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_29_stale_pdst) 
                                                   << 0xbU) 
                                                  | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_28_stale_pdst) 
                                                      << 4U) 
                                                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_27_stale_pdst) 
                                                        >> 3U)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___rob_io_commit_uops_0_stale_pdst 
        = ((0xdfU >= (0xffU & ((IData)(7U) * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__com_idx))))
            ? (0x7fU & (((0U == (0x1fU & ((IData)(7U) 
                                          * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__com_idx))))
                          ? 0U : (__Vtemp_23[(((IData)(6U) 
                                               + (0xffU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__com_idx)))) 
                                              >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(7U) 
                                                  * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__com_idx)))))) 
                        | (__Vtemp_23[(7U & (((IData)(7U) 
                                              * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__com_idx)) 
                                             >> 5U))] 
                           >> (0x1fU & ((IData)(7U) 
                                        * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__com_idx))))))
            : 0U);
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__8337(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__8337\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT___core_io_lsu_commit_uops_1_uses_stq 
        = (1U & ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_31_uses_stq) 
                   << 0x1fU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_30_uses_stq) 
                                 << 0x1eU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_29_uses_stq) 
                                               << 0x1dU) 
                                              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_28_uses_stq) 
                                                  << 0x1cU) 
                                                 | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_27_uses_stq) 
                                                     << 0x1bU) 
                                                    | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_26_uses_stq) 
                                                        << 0x1aU) 
                                                       | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_25_uses_stq) 
                                                           << 0x19U) 
                                                          | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_24_uses_stq) 
                                                              << 0x18U) 
                                                             | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_23_uses_stq) 
                                                                 << 0x17U) 
                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_22_uses_stq) 
                                                                    << 0x16U) 
                                                                   | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_21_uses_stq) 
                                                                       << 0x15U) 
                                                                      | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_20_uses_stq) 
                                                                          << 0x14U) 
                                                                         | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_19_uses_stq) 
                                                                             << 0x13U) 
                                                                            | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_18_uses_stq) 
                                                                                << 0x12U) 
                                                                               | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_17_uses_stq) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_16_uses_stq) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_15_uses_stq) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_14_uses_stq) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_13_uses_stq) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_12_uses_stq) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_11_uses_stq) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_10_uses_stq) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_9_uses_stq) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_8_uses_stq) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_7_uses_stq) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_6_uses_stq) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_5_uses_stq) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_4_uses_stq) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_3_uses_stq) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_2_uses_stq) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_1_uses_stq) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_0_uses_stq)))))))))))))))))))))))))))))))) 
                 >> (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__com_idx)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__flush_commit_mask_0 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___rob_io_commit_valids_0) 
           & ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_31_flush_on_commit) 
                << 0x1fU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_30_flush_on_commit) 
                              << 0x1eU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_29_flush_on_commit) 
                                            << 0x1dU) 
                                           | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_28_flush_on_commit) 
                                               << 0x1cU) 
                                              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_27_flush_on_commit) 
                                                  << 0x1bU) 
                                                 | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_26_flush_on_commit) 
                                                     << 0x1aU) 
                                                    | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_25_flush_on_commit) 
                                                        << 0x19U) 
                                                       | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_24_flush_on_commit) 
                                                           << 0x18U) 
                                                          | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_23_flush_on_commit) 
                                                              << 0x17U) 
                                                             | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_22_flush_on_commit) 
                                                                 << 0x16U) 
                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_21_flush_on_commit) 
                                                                    << 0x15U) 
                                                                   | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_20_flush_on_commit) 
                                                                       << 0x14U) 
                                                                      | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_19_flush_on_commit) 
                                                                          << 0x13U) 
                                                                         | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_18_flush_on_commit) 
                                                                             << 0x12U) 
                                                                            | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_17_flush_on_commit) 
                                                                                << 0x11U) 
                                                                               | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_16_flush_on_commit) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_15_flush_on_commit) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_14_flush_on_commit) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_13_flush_on_commit) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_12_flush_on_commit) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_11_flush_on_commit) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_10_flush_on_commit) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_9_flush_on_commit) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_8_flush_on_commit) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_7_flush_on_commit) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_6_flush_on_commit) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_5_flush_on_commit) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_4_flush_on_commit) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_3_flush_on_commit) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_flush_on_commit) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_flush_on_commit) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_0_flush_on_commit)))))))))))))))))))))))))))))))) 
              >> (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__com_idx)));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__8338(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__8338\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__flush_commit_mask_1 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___rob_io_commit_valids_1) 
           & ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_31_flush_on_commit) 
                << 0x1fU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_30_flush_on_commit) 
                              << 0x1eU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_29_flush_on_commit) 
                                            << 0x1dU) 
                                           | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_28_flush_on_commit) 
                                               << 0x1cU) 
                                              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_27_flush_on_commit) 
                                                  << 0x1bU) 
                                                 | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_26_flush_on_commit) 
                                                     << 0x1aU) 
                                                    | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_25_flush_on_commit) 
                                                        << 0x19U) 
                                                       | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_24_flush_on_commit) 
                                                           << 0x18U) 
                                                          | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_23_flush_on_commit) 
                                                              << 0x17U) 
                                                             | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_22_flush_on_commit) 
                                                                 << 0x16U) 
                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_21_flush_on_commit) 
                                                                    << 0x15U) 
                                                                   | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_20_flush_on_commit) 
                                                                       << 0x14U) 
                                                                      | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_19_flush_on_commit) 
                                                                          << 0x13U) 
                                                                         | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_18_flush_on_commit) 
                                                                             << 0x12U) 
                                                                            | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_17_flush_on_commit) 
                                                                                << 0x11U) 
                                                                               | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_16_flush_on_commit) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_15_flush_on_commit) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_14_flush_on_commit) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_13_flush_on_commit) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_12_flush_on_commit) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_11_flush_on_commit) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_10_flush_on_commit) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_9_flush_on_commit) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_8_flush_on_commit) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_7_flush_on_commit) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_6_flush_on_commit) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_5_flush_on_commit) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_4_flush_on_commit) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_3_flush_on_commit) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_2_flush_on_commit) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_1_flush_on_commit) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_0_flush_on_commit)))))))))))))))))))))))))))))))) 
              >> (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__com_idx)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__flush_commit_mask_2 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___rob_io_commit_valids_2) 
           & ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_31_flush_on_commit) 
                << 0x1fU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_30_flush_on_commit) 
                              << 0x1eU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_29_flush_on_commit) 
                                            << 0x1dU) 
                                           | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_28_flush_on_commit) 
                                               << 0x1cU) 
                                              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_27_flush_on_commit) 
                                                  << 0x1bU) 
                                                 | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_26_flush_on_commit) 
                                                     << 0x1aU) 
                                                    | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_25_flush_on_commit) 
                                                        << 0x19U) 
                                                       | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_24_flush_on_commit) 
                                                           << 0x18U) 
                                                          | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_23_flush_on_commit) 
                                                              << 0x17U) 
                                                             | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_22_flush_on_commit) 
                                                                 << 0x16U) 
                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_21_flush_on_commit) 
                                                                    << 0x15U) 
                                                                   | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_20_flush_on_commit) 
                                                                       << 0x14U) 
                                                                      | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_19_flush_on_commit) 
                                                                          << 0x13U) 
                                                                         | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_18_flush_on_commit) 
                                                                             << 0x12U) 
                                                                            | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_17_flush_on_commit) 
                                                                                << 0x11U) 
                                                                               | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_16_flush_on_commit) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_15_flush_on_commit) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_14_flush_on_commit) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_13_flush_on_commit) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_12_flush_on_commit) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_11_flush_on_commit) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_10_flush_on_commit) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_9_flush_on_commit) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_8_flush_on_commit) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_7_flush_on_commit) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_6_flush_on_commit) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_5_flush_on_commit) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_4_flush_on_commit) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_3_flush_on_commit) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_2_flush_on_commit) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_1_flush_on_commit) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_0_flush_on_commit)))))))))))))))))))))))))))))))) 
              >> (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__com_idx)));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__8339(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__8339\n"); );
    // Init
    VlWide<6>/*191:0*/ __Vtemp_22;
    // Body
    __Vtemp_22[0U] = (IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_9_ldst)) 
                               << 0x36U) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_8_ldst)) 
                                             << 0x30U) 
                                            | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_7_ldst)) 
                                                << 0x2aU) 
                                               | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_6_ldst)) 
                                                   << 0x24U) 
                                                  | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_5_ldst)) 
                                                      << 0x1eU) 
                                                     | (QData)((IData)(
                                                                       (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_4_ldst) 
                                                                         << 0x18U) 
                                                                        | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_3_ldst) 
                                                                            << 0x12U) 
                                                                           | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_2_ldst) 
                                                                               << 0xcU) 
                                                                              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_1_ldst) 
                                                                                << 6U) 
                                                                                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_0_ldst)))))))))))));
    __Vtemp_22[1U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_10_ldst) 
                       << 0x1cU) | (IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_9_ldst)) 
                                              << 0x36U) 
                                             | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_8_ldst)) 
                                                 << 0x30U) 
                                                | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_7_ldst)) 
                                                    << 0x2aU) 
                                                   | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_6_ldst)) 
                                                       << 0x24U) 
                                                      | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_5_ldst)) 
                                                          << 0x1eU) 
                                                         | (QData)((IData)(
                                                                           (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_4_ldst) 
                                                                             << 0x18U) 
                                                                            | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_3_ldst) 
                                                                                << 0x12U) 
                                                                               | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_2_ldst) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_1_ldst) 
                                                                                << 6U) 
                                                                                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_0_ldst)))))))))))) 
                                            >> 0x20U)));
    __Vtemp_22[2U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_15_ldst) 
                       << 0x1aU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_14_ldst) 
                                     << 0x14U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_13_ldst) 
                                                   << 0xeU) 
                                                  | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_12_ldst) 
                                                      << 8U) 
                                                     | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_11_ldst) 
                                                         << 2U) 
                                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_10_ldst) 
                                                           >> 4U))))));
    __Vtemp_22[3U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_21_ldst) 
                       << 0x1eU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_20_ldst) 
                                     << 0x18U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_19_ldst) 
                                                   << 0x12U) 
                                                  | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_18_ldst) 
                                                      << 0xcU) 
                                                     | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_17_ldst) 
                                                         << 6U) 
                                                        | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_16_ldst))))));
    __Vtemp_22[4U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_26_ldst) 
                       << 0x1cU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_25_ldst) 
                                     << 0x16U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_24_ldst) 
                                                   << 0x10U) 
                                                  | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_23_ldst) 
                                                      << 0xaU) 
                                                     | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_22_ldst) 
                                                         << 4U) 
                                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_21_ldst) 
                                                           >> 2U))))));
    __Vtemp_22[5U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_31_ldst) 
                       << 0x1aU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_30_ldst) 
                                     << 0x14U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_29_ldst) 
                                                   << 0xeU) 
                                                  | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_28_ldst) 
                                                      << 8U) 
                                                     | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_27_ldst) 
                                                         << 2U) 
                                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_26_ldst) 
                                                           >> 4U))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___rob_io_commit_uops_1_ldst 
        = ((0xbfU >= (0xffU & ((IData)(6U) * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__com_idx))))
            ? (0x3fU & (((0U == (0x1fU & ((IData)(6U) 
                                          * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__com_idx))))
                          ? 0U : (__Vtemp_22[(((IData)(5U) 
                                               + (0xffU 
                                                  & ((IData)(6U) 
                                                     * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__com_idx)))) 
                                              >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(6U) 
                                                  * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__com_idx)))))) 
                        | (__Vtemp_22[(7U & (((IData)(6U) 
                                              * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__com_idx)) 
                                             >> 5U))] 
                           >> (0x1fU & ((IData)(6U) 
                                        * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__com_idx))))))
            : 0U);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___rob_io_commit_uops_1_ldst_val 
        = (1U & ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_31_ldst_val) 
                   << 0x1fU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_30_ldst_val) 
                                 << 0x1eU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_29_ldst_val) 
                                               << 0x1dU) 
                                              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_28_ldst_val) 
                                                  << 0x1cU) 
                                                 | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_27_ldst_val) 
                                                     << 0x1bU) 
                                                    | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_26_ldst_val) 
                                                        << 0x1aU) 
                                                       | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_25_ldst_val) 
                                                           << 0x19U) 
                                                          | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_24_ldst_val) 
                                                              << 0x18U) 
                                                             | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_23_ldst_val) 
                                                                 << 0x17U) 
                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_22_ldst_val) 
                                                                    << 0x16U) 
                                                                   | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_21_ldst_val) 
                                                                       << 0x15U) 
                                                                      | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_20_ldst_val) 
                                                                          << 0x14U) 
                                                                         | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_19_ldst_val) 
                                                                             << 0x13U) 
                                                                            | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_18_ldst_val) 
                                                                                << 0x12U) 
                                                                               | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_17_ldst_val) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_16_ldst_val) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_15_ldst_val) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_14_ldst_val) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_13_ldst_val) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_12_ldst_val) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_11_ldst_val) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_10_ldst_val) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_9_ldst_val) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_8_ldst_val) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_7_ldst_val) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_6_ldst_val) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_5_ldst_val) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_4_ldst_val) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_3_ldst_val) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_2_ldst_val) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_1_ldst_val) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_0_ldst_val)))))))))))))))))))))))))))))))) 
                 >> (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__com_idx)));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__8340(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__8340\n"); );
    // Init
    VlWide<7>/*223:0*/ __Vtemp_23;
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___rob_io_commit_uops_1_dst_rtype 
        = (3U & (IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_31_dst_rtype)) 
                           << 0x3eU) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_30_dst_rtype)) 
                                         << 0x3cU) 
                                        | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_29_dst_rtype)) 
                                            << 0x3aU) 
                                           | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_28_dst_rtype)) 
                                               << 0x38U) 
                                              | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_27_dst_rtype)) 
                                                  << 0x36U) 
                                                 | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_26_dst_rtype)) 
                                                     << 0x34U) 
                                                    | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_25_dst_rtype)) 
                                                        << 0x32U) 
                                                       | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_24_dst_rtype)) 
                                                           << 0x30U) 
                                                          | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_23_dst_rtype)) 
                                                              << 0x2eU) 
                                                             | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_22_dst_rtype)) 
                                                                 << 0x2cU) 
                                                                | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_21_dst_rtype)) 
                                                                    << 0x2aU) 
                                                                   | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_20_dst_rtype)) 
                                                                       << 0x28U) 
                                                                      | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_19_dst_rtype)) 
                                                                          << 0x26U) 
                                                                         | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_18_dst_rtype)) 
                                                                             << 0x24U) 
                                                                            | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_17_dst_rtype)) 
                                                                                << 0x22U) 
                                                                               | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_16_dst_rtype)) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_15_dst_rtype) 
                                                                                << 0x1eU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_14_dst_rtype) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_13_dst_rtype) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_12_dst_rtype) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_11_dst_rtype) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_10_dst_rtype) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_9_dst_rtype) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_8_dst_rtype) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_7_dst_rtype) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_6_dst_rtype) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_5_dst_rtype) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_4_dst_rtype) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_3_dst_rtype) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_2_dst_rtype) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_1_dst_rtype) 
                                                                                << 2U) 
                                                                                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_0_dst_rtype)))))))))))))))))))))))))))))))))) 
                         >> (0x3fU & VL_SHIFTL_III(6,6,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__com_idx), 1U)))));
    __Vtemp_23[0U] = (IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_8_stale_pdst)) 
                               << 0x38U) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_7_stale_pdst)) 
                                             << 0x31U) 
                                            | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_6_stale_pdst)) 
                                                << 0x2aU) 
                                               | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_5_stale_pdst)) 
                                                   << 0x23U) 
                                                  | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_4_stale_pdst)) 
                                                      << 0x1cU) 
                                                     | (QData)((IData)(
                                                                       (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_3_stale_pdst) 
                                                                         << 0x15U) 
                                                                        | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_2_stale_pdst) 
                                                                            << 0xeU) 
                                                                           | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_1_stale_pdst) 
                                                                               << 7U) 
                                                                              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_0_stale_pdst))))))))))));
    __Vtemp_23[1U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_9_stale_pdst) 
                       << 0x1fU) | (IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_8_stale_pdst)) 
                                              << 0x38U) 
                                             | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_7_stale_pdst)) 
                                                 << 0x31U) 
                                                | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_6_stale_pdst)) 
                                                    << 0x2aU) 
                                                   | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_5_stale_pdst)) 
                                                       << 0x23U) 
                                                      | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_4_stale_pdst)) 
                                                          << 0x1cU) 
                                                         | (QData)((IData)(
                                                                           (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_3_stale_pdst) 
                                                                             << 0x15U) 
                                                                            | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_2_stale_pdst) 
                                                                                << 0xeU) 
                                                                               | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_1_stale_pdst) 
                                                                                << 7U) 
                                                                                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_0_stale_pdst))))))))))) 
                                            >> 0x20U)));
    __Vtemp_23[2U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_13_stale_pdst) 
                       << 0x1bU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_12_stale_pdst) 
                                     << 0x14U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_11_stale_pdst) 
                                                   << 0xdU) 
                                                  | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_10_stale_pdst) 
                                                      << 6U) 
                                                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_9_stale_pdst) 
                                                        >> 1U)))));
    __Vtemp_23[3U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_18_stale_pdst) 
                       << 0x1eU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_17_stale_pdst) 
                                     << 0x17U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_16_stale_pdst) 
                                                   << 0x10U) 
                                                  | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_15_stale_pdst) 
                                                      << 9U) 
                                                     | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_14_stale_pdst) 
                                                         << 2U) 
                                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_13_stale_pdst) 
                                                           >> 5U))))));
    __Vtemp_23[4U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_22_stale_pdst) 
                       << 0x1aU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_21_stale_pdst) 
                                     << 0x13U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_20_stale_pdst) 
                                                   << 0xcU) 
                                                  | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_19_stale_pdst) 
                                                      << 5U) 
                                                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_18_stale_pdst) 
                                                        >> 2U)))));
    __Vtemp_23[5U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_27_stale_pdst) 
                       << 0x1dU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_26_stale_pdst) 
                                     << 0x16U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_25_stale_pdst) 
                                                   << 0xfU) 
                                                  | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_24_stale_pdst) 
                                                      << 8U) 
                                                     | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_23_stale_pdst) 
                                                         << 1U) 
                                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_22_stale_pdst) 
                                                           >> 6U))))));
    __Vtemp_23[6U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_31_stale_pdst) 
                       << 0x19U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_30_stale_pdst) 
                                     << 0x12U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_29_stale_pdst) 
                                                   << 0xbU) 
                                                  | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_28_stale_pdst) 
                                                      << 4U) 
                                                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_27_stale_pdst) 
                                                        >> 3U)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___rob_io_commit_uops_1_stale_pdst 
        = ((0xdfU >= (0xffU & ((IData)(7U) * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__com_idx))))
            ? (0x7fU & (((0U == (0x1fU & ((IData)(7U) 
                                          * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__com_idx))))
                          ? 0U : (__Vtemp_23[(((IData)(6U) 
                                               + (0xffU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__com_idx)))) 
                                              >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(7U) 
                                                  * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__com_idx)))))) 
                        | (__Vtemp_23[(7U & (((IData)(7U) 
                                              * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__com_idx)) 
                                             >> 5U))] 
                           >> (0x1fU & ((IData)(7U) 
                                        * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__com_idx))))))
            : 0U);
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__8341(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__8341\n"); );
    // Init
    VlWide<6>/*191:0*/ __Vtemp_22;
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT___core_io_lsu_commit_uops_0_uses_stq 
        = (1U & ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_31_uses_stq) 
                   << 0x1fU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_30_uses_stq) 
                                 << 0x1eU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_29_uses_stq) 
                                               << 0x1dU) 
                                              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_28_uses_stq) 
                                                  << 0x1cU) 
                                                 | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_27_uses_stq) 
                                                     << 0x1bU) 
                                                    | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_26_uses_stq) 
                                                        << 0x1aU) 
                                                       | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_25_uses_stq) 
                                                           << 0x19U) 
                                                          | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_24_uses_stq) 
                                                              << 0x18U) 
                                                             | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_23_uses_stq) 
                                                                 << 0x17U) 
                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_22_uses_stq) 
                                                                    << 0x16U) 
                                                                   | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_21_uses_stq) 
                                                                       << 0x15U) 
                                                                      | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_20_uses_stq) 
                                                                          << 0x14U) 
                                                                         | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_19_uses_stq) 
                                                                             << 0x13U) 
                                                                            | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_18_uses_stq) 
                                                                                << 0x12U) 
                                                                               | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_17_uses_stq) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_16_uses_stq) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_15_uses_stq) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_14_uses_stq) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_13_uses_stq) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_12_uses_stq) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_11_uses_stq) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_10_uses_stq) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_9_uses_stq) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_8_uses_stq) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_7_uses_stq) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_6_uses_stq) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_5_uses_stq) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_4_uses_stq) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_3_uses_stq) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_uses_stq) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_uses_stq) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_0_uses_stq)))))))))))))))))))))))))))))))) 
                 >> (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__com_idx)));
    __Vtemp_22[0U] = (IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_9_ldst)) 
                               << 0x36U) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_8_ldst)) 
                                             << 0x30U) 
                                            | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_7_ldst)) 
                                                << 0x2aU) 
                                               | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_6_ldst)) 
                                                   << 0x24U) 
                                                  | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_5_ldst)) 
                                                      << 0x1eU) 
                                                     | (QData)((IData)(
                                                                       (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_4_ldst) 
                                                                         << 0x18U) 
                                                                        | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_3_ldst) 
                                                                            << 0x12U) 
                                                                           | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_2_ldst) 
                                                                               << 0xcU) 
                                                                              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_1_ldst) 
                                                                                << 6U) 
                                                                                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_0_ldst)))))))))))));
    __Vtemp_22[1U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_10_ldst) 
                       << 0x1cU) | (IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_9_ldst)) 
                                              << 0x36U) 
                                             | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_8_ldst)) 
                                                 << 0x30U) 
                                                | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_7_ldst)) 
                                                    << 0x2aU) 
                                                   | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_6_ldst)) 
                                                       << 0x24U) 
                                                      | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_5_ldst)) 
                                                          << 0x1eU) 
                                                         | (QData)((IData)(
                                                                           (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_4_ldst) 
                                                                             << 0x18U) 
                                                                            | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_3_ldst) 
                                                                                << 0x12U) 
                                                                               | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_2_ldst) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_1_ldst) 
                                                                                << 6U) 
                                                                                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_0_ldst)))))))))))) 
                                            >> 0x20U)));
    __Vtemp_22[2U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_15_ldst) 
                       << 0x1aU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_14_ldst) 
                                     << 0x14U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_13_ldst) 
                                                   << 0xeU) 
                                                  | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_12_ldst) 
                                                      << 8U) 
                                                     | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_11_ldst) 
                                                         << 2U) 
                                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_10_ldst) 
                                                           >> 4U))))));
    __Vtemp_22[3U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_21_ldst) 
                       << 0x1eU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_20_ldst) 
                                     << 0x18U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_19_ldst) 
                                                   << 0x12U) 
                                                  | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_18_ldst) 
                                                      << 0xcU) 
                                                     | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_17_ldst) 
                                                         << 6U) 
                                                        | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_16_ldst))))));
    __Vtemp_22[4U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_26_ldst) 
                       << 0x1cU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_25_ldst) 
                                     << 0x16U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_24_ldst) 
                                                   << 0x10U) 
                                                  | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_23_ldst) 
                                                      << 0xaU) 
                                                     | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_22_ldst) 
                                                         << 4U) 
                                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_21_ldst) 
                                                           >> 2U))))));
    __Vtemp_22[5U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_31_ldst) 
                       << 0x1aU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_30_ldst) 
                                     << 0x14U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_29_ldst) 
                                                   << 0xeU) 
                                                  | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_28_ldst) 
                                                      << 8U) 
                                                     | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_27_ldst) 
                                                         << 2U) 
                                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_26_ldst) 
                                                           >> 4U))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___rob_io_commit_uops_2_ldst 
        = ((0xbfU >= (0xffU & ((IData)(6U) * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__com_idx))))
            ? (0x3fU & (((0U == (0x1fU & ((IData)(6U) 
                                          * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__com_idx))))
                          ? 0U : (__Vtemp_22[(((IData)(5U) 
                                               + (0xffU 
                                                  & ((IData)(6U) 
                                                     * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__com_idx)))) 
                                              >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(6U) 
                                                  * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__com_idx)))))) 
                        | (__Vtemp_22[(7U & (((IData)(6U) 
                                              * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__com_idx)) 
                                             >> 5U))] 
                           >> (0x1fU & ((IData)(6U) 
                                        * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__com_idx))))))
            : 0U);
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__8342(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__8342\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___rob_io_commit_uops_2_ldst_val 
        = (1U & ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_31_ldst_val) 
                   << 0x1fU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_30_ldst_val) 
                                 << 0x1eU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_29_ldst_val) 
                                               << 0x1dU) 
                                              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_28_ldst_val) 
                                                  << 0x1cU) 
                                                 | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_27_ldst_val) 
                                                     << 0x1bU) 
                                                    | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_26_ldst_val) 
                                                        << 0x1aU) 
                                                       | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_25_ldst_val) 
                                                           << 0x19U) 
                                                          | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_24_ldst_val) 
                                                              << 0x18U) 
                                                             | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_23_ldst_val) 
                                                                 << 0x17U) 
                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_22_ldst_val) 
                                                                    << 0x16U) 
                                                                   | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_21_ldst_val) 
                                                                       << 0x15U) 
                                                                      | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_20_ldst_val) 
                                                                          << 0x14U) 
                                                                         | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_19_ldst_val) 
                                                                             << 0x13U) 
                                                                            | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_18_ldst_val) 
                                                                                << 0x12U) 
                                                                               | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_17_ldst_val) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_16_ldst_val) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_15_ldst_val) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_14_ldst_val) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_13_ldst_val) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_12_ldst_val) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_11_ldst_val) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_10_ldst_val) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_9_ldst_val) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_8_ldst_val) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_7_ldst_val) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_6_ldst_val) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_5_ldst_val) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_4_ldst_val) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_3_ldst_val) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_2_ldst_val) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_1_ldst_val) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_0_ldst_val)))))))))))))))))))))))))))))))) 
                 >> (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__com_idx)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___rob_io_commit_uops_2_dst_rtype 
        = (3U & (IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_31_dst_rtype)) 
                           << 0x3eU) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_30_dst_rtype)) 
                                         << 0x3cU) 
                                        | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_29_dst_rtype)) 
                                            << 0x3aU) 
                                           | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_28_dst_rtype)) 
                                               << 0x38U) 
                                              | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_27_dst_rtype)) 
                                                  << 0x36U) 
                                                 | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_26_dst_rtype)) 
                                                     << 0x34U) 
                                                    | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_25_dst_rtype)) 
                                                        << 0x32U) 
                                                       | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_24_dst_rtype)) 
                                                           << 0x30U) 
                                                          | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_23_dst_rtype)) 
                                                              << 0x2eU) 
                                                             | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_22_dst_rtype)) 
                                                                 << 0x2cU) 
                                                                | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_21_dst_rtype)) 
                                                                    << 0x2aU) 
                                                                   | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_20_dst_rtype)) 
                                                                       << 0x28U) 
                                                                      | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_19_dst_rtype)) 
                                                                          << 0x26U) 
                                                                         | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_18_dst_rtype)) 
                                                                             << 0x24U) 
                                                                            | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_17_dst_rtype)) 
                                                                                << 0x22U) 
                                                                               | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_16_dst_rtype)) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_15_dst_rtype) 
                                                                                << 0x1eU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_14_dst_rtype) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_13_dst_rtype) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_12_dst_rtype) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_11_dst_rtype) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_10_dst_rtype) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_9_dst_rtype) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_8_dst_rtype) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_7_dst_rtype) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_6_dst_rtype) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_5_dst_rtype) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_4_dst_rtype) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_3_dst_rtype) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_2_dst_rtype) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_1_dst_rtype) 
                                                                                << 2U) 
                                                                                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_0_dst_rtype)))))))))))))))))))))))))))))))))) 
                         >> (0x3fU & VL_SHIFTL_III(6,6,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__com_idx), 1U)))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__8343(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__8343\n"); );
    // Init
    VlWide<7>/*223:0*/ __Vtemp_23;
    // Body
    __Vtemp_23[0U] = (IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_8_stale_pdst)) 
                               << 0x38U) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_7_stale_pdst)) 
                                             << 0x31U) 
                                            | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_6_stale_pdst)) 
                                                << 0x2aU) 
                                               | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_5_stale_pdst)) 
                                                   << 0x23U) 
                                                  | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_4_stale_pdst)) 
                                                      << 0x1cU) 
                                                     | (QData)((IData)(
                                                                       (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_3_stale_pdst) 
                                                                         << 0x15U) 
                                                                        | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_2_stale_pdst) 
                                                                            << 0xeU) 
                                                                           | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_1_stale_pdst) 
                                                                               << 7U) 
                                                                              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_0_stale_pdst))))))))))));
    __Vtemp_23[1U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_9_stale_pdst) 
                       << 0x1fU) | (IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_8_stale_pdst)) 
                                              << 0x38U) 
                                             | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_7_stale_pdst)) 
                                                 << 0x31U) 
                                                | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_6_stale_pdst)) 
                                                    << 0x2aU) 
                                                   | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_5_stale_pdst)) 
                                                       << 0x23U) 
                                                      | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_4_stale_pdst)) 
                                                          << 0x1cU) 
                                                         | (QData)((IData)(
                                                                           (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_3_stale_pdst) 
                                                                             << 0x15U) 
                                                                            | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_2_stale_pdst) 
                                                                                << 0xeU) 
                                                                               | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_1_stale_pdst) 
                                                                                << 7U) 
                                                                                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_0_stale_pdst))))))))))) 
                                            >> 0x20U)));
    __Vtemp_23[2U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_13_stale_pdst) 
                       << 0x1bU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_12_stale_pdst) 
                                     << 0x14U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_11_stale_pdst) 
                                                   << 0xdU) 
                                                  | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_10_stale_pdst) 
                                                      << 6U) 
                                                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_9_stale_pdst) 
                                                        >> 1U)))));
    __Vtemp_23[3U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_18_stale_pdst) 
                       << 0x1eU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_17_stale_pdst) 
                                     << 0x17U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_16_stale_pdst) 
                                                   << 0x10U) 
                                                  | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_15_stale_pdst) 
                                                      << 9U) 
                                                     | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_14_stale_pdst) 
                                                         << 2U) 
                                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_13_stale_pdst) 
                                                           >> 5U))))));
    __Vtemp_23[4U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_22_stale_pdst) 
                       << 0x1aU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_21_stale_pdst) 
                                     << 0x13U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_20_stale_pdst) 
                                                   << 0xcU) 
                                                  | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_19_stale_pdst) 
                                                      << 5U) 
                                                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_18_stale_pdst) 
                                                        >> 2U)))));
    __Vtemp_23[5U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_27_stale_pdst) 
                       << 0x1dU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_26_stale_pdst) 
                                     << 0x16U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_25_stale_pdst) 
                                                   << 0xfU) 
                                                  | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_24_stale_pdst) 
                                                      << 8U) 
                                                     | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_23_stale_pdst) 
                                                         << 1U) 
                                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_22_stale_pdst) 
                                                           >> 6U))))));
    __Vtemp_23[6U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_31_stale_pdst) 
                       << 0x19U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_30_stale_pdst) 
                                     << 0x12U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_29_stale_pdst) 
                                                   << 0xbU) 
                                                  | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_28_stale_pdst) 
                                                      << 4U) 
                                                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_27_stale_pdst) 
                                                        >> 3U)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___rob_io_commit_uops_2_stale_pdst 
        = ((0xdfU >= (0xffU & ((IData)(7U) * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__com_idx))))
            ? (0x7fU & (((0U == (0x1fU & ((IData)(7U) 
                                          * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__com_idx))))
                          ? 0U : (__Vtemp_23[(((IData)(6U) 
                                               + (0xffU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__com_idx)))) 
                                              >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(7U) 
                                                  * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__com_idx)))))) 
                        | (__Vtemp_23[(7U & (((IData)(7U) 
                                              * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__com_idx)) 
                                             >> 5U))] 
                           >> (0x1fU & ((IData)(7U) 
                                        * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__com_idx))))))
            : 0U);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT____VdfgTmp_h9d426cbb__0 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__maybe_full)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___empty_T));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___rob_io_empty 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___empty_T) 
           & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT____VdfgTmp_he7872993__0)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__full 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___empty_T) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__maybe_full));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__8345(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__8345\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__fb__DOT___deq_valids_T_7 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__fb__DOT__slot_will_hit_tail) 
           | (((IData)((0U != (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__fb__DOT__slot_will_hit_tail)))) 
               << 2U) | (2U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__frontend__DOT__fb__DOT__slot_will_hit_tail) 
                               << 1U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__csr__DOT__io_decode_2_write_flush_addr_m 
        = ((0xc00U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_2_io_deq_uop_inst 
                      >> 0x14U)) | (0x3ffU & (0x300U 
                                              | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_2_io_deq_uop_inst 
                                                 >> 0x14U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__decode_units_2__DOT____VdfgTmp_h00c5ef80__0 
        = (IData)((0x37U == (0x7fU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_2_io_deq_uop_inst)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__decode_units_2__DOT____VdfgTmp_hfc7be11e__0 
        = (IData)((0x2013U == (0x207fU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_2_io_deq_uop_inst)));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__8346(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__8346\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__decode_units_2__DOT____VdfgTmp_h6f25b936__0 
        = (IData)((0x3000U == (0x3000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_2_io_deq_uop_inst)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__decode_units_2__DOT____VdfgTmp_h2b69e4c1__0 
        = (IData)((0x2000040U == (0x6000070U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_2_io_deq_uop_inst)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__decode_units_2__DOT____VdfgTmp_he2547875__0 
        = (IData)((0x2000U == (0x3000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_2_io_deq_uop_inst)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__decode_units_2__DOT____VdfgTmp_hd33752c6__0 
        = (IData)((0x20000000U == (0x7c000000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_2_io_deq_uop_inst)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__decode_units_2__DOT____VdfgTmp_hfc32b620__0 
        = (IData)((0x5073U == (0x507fU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_2_io_deq_uop_inst)));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__8347(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__8347\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__decode_units_2__DOT____VdfgTmp_h665e22ec__0 
        = (IData)((0x5000U == (0xbe007040U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_2_io_deq_uop_inst)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__decode_units_2__DOT____VdfgTmp_h5020f4b5__0 
        = (IData)((0x17U == (0x7fU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_2_io_deq_uop_inst)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__decode_units_2__DOT____VdfgTmp_h7efa4929__0 
        = ((4U & ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_2_io_deq_uop_inst 
                      >> 5U)) << 2U)) | ((2U & ((~ 
                                                 (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_2_io_deq_uop_inst 
                                                  >> 6U)) 
                                                << 1U)) 
                                         | (1U & (~ 
                                                  (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_2_io_deq_uop_inst 
                                                   >> 0xcU)))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__8348(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__8348\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__csr__DOT___io_decode_2_system_illegal_T 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__csr__DOT__reg_mstatus_prv) 
           < (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_2_io_deq_uop_inst 
                    >> 0x1cU)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__decode_units_2__DOT____VdfgTmp_hec9ceb3b__0 
        = (IData)((0x63U == (0x207fU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_2_io_deq_uop_inst)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_2_io_deq_uop_frs3_en 
        = (IData)((0x43U == (0x73U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_2_io_deq_uop_inst)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__decode_units_2__DOT____VdfgTmp_hc77556ca__0 
        = (IData)((0x43U == (0x4000073U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_2_io_deq_uop_inst)));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__8349(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__8349\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__decode_units_2__DOT____VdfgTmp_h69c81271__0 
        = (IData)((0x2000U == (0x6000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_2_io_deq_uop_inst)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__decode_units_2__DOT____VdfgTmp_he1345777__0 
        = ((2U & ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_2_io_deq_uop_inst 
                      >> 6U)) << 1U)) | (1U & (~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_2_io_deq_uop_inst 
                                                  >> 0xeU))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__decode_units_2__DOT____VdfgTmp_hea551ac3__0 
        = (IData)((0x4063U == (0x407fU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_2_io_deq_uop_inst)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__decode_units_2__DOT____VdfgTmp_hc7786686__0 
        = (IData)((0x17U == (0x5fU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_2_io_deq_uop_inst)));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__8350(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__8350\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__decode_units_2__DOT____VdfgTmp_h6258dd23__0 
        = (IData)((0x202fU == (0x1800607fU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_2_io_deq_uop_inst)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__decode_units_2__DOT____VdfgTmp_hfd0bf434__0 
        = (IData)((3U == (0x207fU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_2_io_deq_uop_inst)));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__8351(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__8351\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__decode_units_2__DOT____VdfgTmp_h9f734475__0 
        = (IData)((0x40U == (0x4000070U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_2_io_deq_uop_inst)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__decode_units_2__DOT____VdfgTmp_h5b525d00__0 
        = ((0x10U & ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_2_io_deq_uop_inst 
                         >> 4U)) << 4U)) | ((8U & (
                                                   (~ 
                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_2_io_deq_uop_inst 
                                                     >> 5U)) 
                                                   << 3U)) 
                                            | ((4U 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_2_io_deq_uop_inst 
                                                   >> 4U)) 
                                               | ((2U 
                                                   & ((~ 
                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_2_io_deq_uop_inst 
                                                        >> 0x19U)) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & (~ 
                                                        (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_2_io_deq_uop_inst 
                                                         >> 0x1aU)))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__decode_units_2__DOT____VdfgTmp_h16cb97a0__0 
        = (IData)((0x6fU == (0x7fU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_2_io_deq_uop_inst)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__decode_units_2__DOT____VdfgTmp_h699e6bf8__0 
        = ((2U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_2_io_deq_uop_inst 
                  >> 0xcU)) | (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_2_io_deq_uop_inst 
                                     >> 0xeU)));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__8352(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__8352\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__decode_units_2__DOT____VdfgTmp_h03692747__0 
        = ((0x40U & ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_2_io_deq_uop_inst 
                         >> 0xeU)) << 6U)) | ((0x20U 
                                               & ((~ 
                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_2_io_deq_uop_inst 
                                                    >> 0x1aU)) 
                                                  << 5U)) 
                                              | ((0x10U 
                                                  & ((~ 
                                                      (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_2_io_deq_uop_inst 
                                                       >> 0x1bU)) 
                                                     << 4U)) 
                                                 | ((8U 
                                                     & ((~ 
                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_2_io_deq_uop_inst 
                                                          >> 0x1cU)) 
                                                        << 3U)) 
                                                    | ((4U 
                                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_2_io_deq_uop_inst 
                                                           >> 0x1bU)) 
                                                       | ((2U 
                                                           & ((~ 
                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_2_io_deq_uop_inst 
                                                                >> 0x1eU)) 
                                                              << 1U)) 
                                                          | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_2_io_deq_uop_inst 
                                                             >> 0x1fU)))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__decode_units_2__DOT____VdfgTmp_hdbc17214__0 
        = (IData)((0U == (0x6000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_2_io_deq_uop_inst)));
    vlSelf->__VdfgTmp_h9528e537__0 = (IData)((0x40000000U 
                                              == (0xc0000000U 
                                                  & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_2_io_deq_uop_inst)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__decode_units_2__DOT____VdfgTmp_h87e3c9bc__0 
        = (IData)((0xc0000000U == (0xc0000000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_2_io_deq_uop_inst)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__decode_units_2__DOT____VdfgTmp_h6b59b8ac__0 
        = ((2U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_2_io_deq_uop_inst 
                  >> 0xcU)) | (1U & (~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_2_io_deq_uop_inst 
                                        >> 0xeU))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__decode_units_2__DOT____VdfgTmp_h7c2cf003__0 
        = ((0x20U & ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_2_io_deq_uop_inst 
                         >> 0xeU)) << 5U)) | ((0x10U 
                                               & ((~ 
                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_2_io_deq_uop_inst 
                                                    >> 0x1aU)) 
                                                  << 4U)) 
                                              | ((8U 
                                                  & ((~ 
                                                      (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_2_io_deq_uop_inst 
                                                       >> 0x1bU)) 
                                                     << 3U)) 
                                                 | ((4U 
                                                     & ((~ 
                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_2_io_deq_uop_inst 
                                                          >> 0x1cU)) 
                                                        << 2U)) 
                                                    | ((2U 
                                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_2_io_deq_uop_inst 
                                                           >> 0x1cU)) 
                                                       | (1U 
                                                          & (~ 
                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_2_io_deq_uop_inst 
                                                              >> 0x1eU))))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__8353(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__8353\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__decode_units_2__DOT____VdfgTmp_he7f8edd6__0 
        = (IData)((0x1073U == (0x107fU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_2_io_deq_uop_inst)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__decode_units_2__DOT____VdfgTmp_he4061df9__0 
        = (IData)((0x2073U == (0x207fU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_2_io_deq_uop_inst)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__decode_units_2__DOT____VdfgTmp_h9a42d8e1__0 
        = ((0x10U & ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_2_io_deq_uop_inst 
                         >> 0x1aU)) << 4U)) | ((8U 
                                                & ((~ 
                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_2_io_deq_uop_inst 
                                                     >> 0x1bU)) 
                                                   << 3U)) 
                                               | ((4U 
                                                   & ((~ 
                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_2_io_deq_uop_inst 
                                                        >> 0x1cU)) 
                                                      << 2U)) 
                                                  | ((2U 
                                                      & ((~ 
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_2_io_deq_uop_inst 
                                                           >> 0x1dU)) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_2_io_deq_uop_inst 
                                                           >> 0x1eU))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__8354(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__8354\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__decode_units_2__DOT____VdfgTmp_hdee2f5cc__0 
        = ((2U & ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_2_io_deq_uop_inst 
                      >> 0xdU)) << 1U)) | (1U & (~ 
                                                 (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_2_io_deq_uop_inst 
                                                  >> 0xeU))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__decode_units_2__DOT____VdfgTmp_h8c8607c6__0 
        = ((0x10U & ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_2_io_deq_uop_inst 
                         >> 0x1aU)) << 4U)) | ((8U 
                                                & ((~ 
                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_2_io_deq_uop_inst 
                                                     >> 0x1bU)) 
                                                   << 3U)) 
                                               | ((4U 
                                                   & ((~ 
                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_2_io_deq_uop_inst 
                                                        >> 0x1cU)) 
                                                      << 2U)) 
                                                  | ((2U 
                                                      & ((~ 
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_2_io_deq_uop_inst 
                                                           >> 0x1dU)) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (~ 
                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_2_io_deq_uop_inst 
                                                            >> 0x1fU)))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__decode_units_2__DOT____VdfgTmp_h89163bd4__0 
        = ((2U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_2_io_deq_uop_inst 
                  >> 0x1dU)) | (1U & (~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_2_io_deq_uop_inst 
                                         >> 0x1fU))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__decode_units_2__DOT____VdfgTmp_h846ba620__0 
        = ((2U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_2_io_deq_uop_inst 
                  >> 0x1dU)) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_2_io_deq_uop_inst 
                                >> 0x1fU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__csr__DOT____VdfgTmp_h96bff86d__0 
        = (IData)((0U == (0xc0000000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_2_io_deq_uop_inst)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__decode_units_2__DOT____VdfgTmp_hfc9b200f__0 
        = ((2U & ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_2_io_deq_uop_inst 
                      >> 0x1eU)) << 1U)) | (1U & (~ 
                                                  (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_2_io_deq_uop_inst 
                                                   >> 0x1fU))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__csr__DOT__io_decode_1_write_flush_addr_m 
        = ((0xc00U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_1_io_deq_uop_inst 
                      >> 0x14U)) | (0x3ffU & (0x300U 
                                              | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_1_io_deq_uop_inst 
                                                 >> 0x14U))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__8355(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__8355\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__decode_units_1__DOT____VdfgTmp_h00c5ef80__0 
        = (IData)((0x37U == (0x7fU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_1_io_deq_uop_inst)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__decode_units_1__DOT____VdfgTmp_hfc7be11e__0 
        = (IData)((0x2013U == (0x207fU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_1_io_deq_uop_inst)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__decode_units_1__DOT____VdfgTmp_h7efa4929__0 
        = ((4U & ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_1_io_deq_uop_inst 
                      >> 5U)) << 2U)) | ((2U & ((~ 
                                                 (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_1_io_deq_uop_inst 
                                                  >> 6U)) 
                                                << 1U)) 
                                         | (1U & (~ 
                                                  (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_1_io_deq_uop_inst 
                                                   >> 0xcU)))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__8356(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__8356\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__decode_units_1__DOT____VdfgTmp_h6f25b936__0 
        = (IData)((0x3000U == (0x3000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_1_io_deq_uop_inst)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__decode_units_1__DOT____VdfgTmp_h2b69e4c1__0 
        = (IData)((0x2000040U == (0x6000070U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_1_io_deq_uop_inst)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__decode_units_1__DOT____VdfgTmp_he2547875__0 
        = (IData)((0x2000U == (0x3000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_1_io_deq_uop_inst)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__decode_units_1__DOT____VdfgTmp_hd33752c6__0 
        = (IData)((0x20000000U == (0x7c000000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_1_io_deq_uop_inst)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__decode_units_1__DOT____VdfgTmp_hfc32b620__0 
        = (IData)((0x5073U == (0x507fU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_1_io_deq_uop_inst)));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__8357(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__8357\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__decode_units_1__DOT____VdfgTmp_h665e22ec__0 
        = (IData)((0x5000U == (0xbe007040U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_1_io_deq_uop_inst)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__csr__DOT___io_decode_1_system_illegal_T 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__csr__DOT__reg_mstatus_prv) 
           < (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_1_io_deq_uop_inst 
                    >> 0x1cU)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__decode_units_1__DOT____VdfgTmp_h5020f4b5__0 
        = (IData)((0x17U == (0x7fU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_1_io_deq_uop_inst)));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__8358(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__8358\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__decode_units_1__DOT____VdfgTmp_hc77556ca__0 
        = (IData)((0x43U == (0x4000073U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_1_io_deq_uop_inst)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_1_io_deq_uop_frs3_en 
        = (IData)((0x43U == (0x73U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_1_io_deq_uop_inst)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__decode_units_1__DOT____VdfgTmp_hec9ceb3b__0 
        = (IData)((0x63U == (0x207fU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_1_io_deq_uop_inst)));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__8359(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__8359\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__decode_units_1__DOT____VdfgTmp_h69c81271__0 
        = (IData)((0x2000U == (0x6000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_1_io_deq_uop_inst)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__decode_units_1__DOT____VdfgTmp_he1345777__0 
        = ((2U & ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_1_io_deq_uop_inst 
                      >> 6U)) << 1U)) | (1U & (~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_1_io_deq_uop_inst 
                                                  >> 0xeU))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__decode_units_1__DOT____VdfgTmp_hc7786686__0 
        = (IData)((0x17U == (0x5fU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_1_io_deq_uop_inst)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__decode_units_1__DOT____VdfgTmp_h6258dd23__0 
        = (IData)((0x202fU == (0x1800607fU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_1_io_deq_uop_inst)));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__8360(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__8360\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__decode_units_1__DOT____VdfgTmp_hfd0bf434__0 
        = (IData)((3U == (0x207fU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_1_io_deq_uop_inst)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__decode_units_1__DOT____VdfgTmp_hea551ac3__0 
        = (IData)((0x4063U == (0x407fU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_1_io_deq_uop_inst)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__decode_units_1__DOT____VdfgTmp_h16cb97a0__0 
        = (IData)((0x6fU == (0x7fU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_1_io_deq_uop_inst)));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__8361(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__8361\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__decode_units_1__DOT____VdfgTmp_h9f734475__0 
        = (IData)((0x40U == (0x4000070U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_1_io_deq_uop_inst)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__decode_units_1__DOT____VdfgTmp_h5b525d00__0 
        = ((0x10U & ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_1_io_deq_uop_inst 
                         >> 4U)) << 4U)) | ((8U & (
                                                   (~ 
                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_1_io_deq_uop_inst 
                                                     >> 5U)) 
                                                   << 3U)) 
                                            | ((4U 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_1_io_deq_uop_inst 
                                                   >> 4U)) 
                                               | ((2U 
                                                   & ((~ 
                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_1_io_deq_uop_inst 
                                                        >> 0x19U)) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & (~ 
                                                        (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_1_io_deq_uop_inst 
                                                         >> 0x1aU)))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__decode_units_1__DOT____VdfgTmp_h699e6bf8__0 
        = ((2U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_1_io_deq_uop_inst 
                  >> 0xcU)) | (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_1_io_deq_uop_inst 
                                     >> 0xeU)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__decode_units_1__DOT____VdfgTmp_h03692747__0 
        = ((0x40U & ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_1_io_deq_uop_inst 
                         >> 0xeU)) << 6U)) | ((0x20U 
                                               & ((~ 
                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_1_io_deq_uop_inst 
                                                    >> 0x1aU)) 
                                                  << 5U)) 
                                              | ((0x10U 
                                                  & ((~ 
                                                      (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_1_io_deq_uop_inst 
                                                       >> 0x1bU)) 
                                                     << 4U)) 
                                                 | ((8U 
                                                     & ((~ 
                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_1_io_deq_uop_inst 
                                                          >> 0x1cU)) 
                                                        << 3U)) 
                                                    | ((4U 
                                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_1_io_deq_uop_inst 
                                                           >> 0x1bU)) 
                                                       | ((2U 
                                                           & ((~ 
                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_1_io_deq_uop_inst 
                                                                >> 0x1eU)) 
                                                              << 1U)) 
                                                          | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_1_io_deq_uop_inst 
                                                             >> 0x1fU)))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__8362(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__8362\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__decode_units_1__DOT____VdfgTmp_hdbc17214__0 
        = (IData)((0U == (0x6000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_1_io_deq_uop_inst)));
    vlSelf->__VdfgTmp_hd0ec416a__0 = (IData)((0x40000000U 
                                              == (0xc0000000U 
                                                  & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_1_io_deq_uop_inst)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__decode_units_1__DOT____VdfgTmp_h87e3c9bc__0 
        = (IData)((0xc0000000U == (0xc0000000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_1_io_deq_uop_inst)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__decode_units_1__DOT____VdfgTmp_h6b59b8ac__0 
        = ((2U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_1_io_deq_uop_inst 
                  >> 0xcU)) | (1U & (~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_1_io_deq_uop_inst 
                                        >> 0xeU))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__decode_units_1__DOT____VdfgTmp_he7f8edd6__0 
        = (IData)((0x1073U == (0x107fU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_1_io_deq_uop_inst)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__decode_units_1__DOT____VdfgTmp_h7c2cf003__0 
        = ((0x20U & ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_1_io_deq_uop_inst 
                         >> 0xeU)) << 5U)) | ((0x10U 
                                               & ((~ 
                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_1_io_deq_uop_inst 
                                                    >> 0x1aU)) 
                                                  << 4U)) 
                                              | ((8U 
                                                  & ((~ 
                                                      (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_1_io_deq_uop_inst 
                                                       >> 0x1bU)) 
                                                     << 3U)) 
                                                 | ((4U 
                                                     & ((~ 
                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_1_io_deq_uop_inst 
                                                          >> 0x1cU)) 
                                                        << 2U)) 
                                                    | ((2U 
                                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_1_io_deq_uop_inst 
                                                           >> 0x1cU)) 
                                                       | (1U 
                                                          & (~ 
                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_1_io_deq_uop_inst 
                                                              >> 0x1eU))))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__8363(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__8363\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__decode_units_1__DOT____VdfgTmp_he4061df9__0 
        = (IData)((0x2073U == (0x207fU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_1_io_deq_uop_inst)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__decode_units_1__DOT____VdfgTmp_h9a42d8e1__0 
        = ((0x10U & ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_1_io_deq_uop_inst 
                         >> 0x1aU)) << 4U)) | ((8U 
                                                & ((~ 
                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_1_io_deq_uop_inst 
                                                     >> 0x1bU)) 
                                                   << 3U)) 
                                               | ((4U 
                                                   & ((~ 
                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_1_io_deq_uop_inst 
                                                        >> 0x1cU)) 
                                                      << 2U)) 
                                                  | ((2U 
                                                      & ((~ 
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_1_io_deq_uop_inst 
                                                           >> 0x1dU)) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_1_io_deq_uop_inst 
                                                           >> 0x1eU))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__decode_units_1__DOT____VdfgTmp_hdee2f5cc__0 
        = ((2U & ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_1_io_deq_uop_inst 
                      >> 0xdU)) << 1U)) | (1U & (~ 
                                                 (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_1_io_deq_uop_inst 
                                                  >> 0xeU))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__decode_units_1__DOT____VdfgTmp_h8c8607c6__0 
        = ((0x10U & ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_1_io_deq_uop_inst 
                         >> 0x1aU)) << 4U)) | ((8U 
                                                & ((~ 
                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_1_io_deq_uop_inst 
                                                     >> 0x1bU)) 
                                                   << 3U)) 
                                               | ((4U 
                                                   & ((~ 
                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_1_io_deq_uop_inst 
                                                        >> 0x1cU)) 
                                                      << 2U)) 
                                                  | ((2U 
                                                      & ((~ 
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_1_io_deq_uop_inst 
                                                           >> 0x1dU)) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (~ 
                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_1_io_deq_uop_inst 
                                                            >> 0x1fU)))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__8364(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__8364\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__decode_units_1__DOT____VdfgTmp_h89163bd4__0 
        = ((2U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_1_io_deq_uop_inst 
                  >> 0x1dU)) | (1U & (~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_1_io_deq_uop_inst 
                                         >> 0x1fU))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__decode_units_1__DOT____VdfgTmp_h846ba620__0 
        = ((2U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_1_io_deq_uop_inst 
                  >> 0x1dU)) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_1_io_deq_uop_inst 
                                >> 0x1fU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__csr__DOT____VdfgTmp_h6ef1b955__0 
        = (IData)((0U == (0xc0000000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_1_io_deq_uop_inst)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__decode_units_1__DOT____VdfgTmp_hfc9b200f__0 
        = ((2U & ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_1_io_deq_uop_inst 
                      >> 0x1eU)) << 1U)) | (1U & (~ 
                                                  (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_1_io_deq_uop_inst 
                                                   >> 0x1fU))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__csr__DOT__io_decode_0_write_flush_addr_m 
        = ((0xc00U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_0_io_deq_uop_inst 
                      >> 0x14U)) | (0x3ffU & (0x300U 
                                              | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_0_io_deq_uop_inst 
                                                 >> 0x14U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__decode_units_0__DOT____VdfgTmp_h00c5ef80__0 
        = (IData)((0x37U == (0x7fU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_0_io_deq_uop_inst)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__decode_units_0__DOT____VdfgTmp_hfc7be11e__0 
        = (IData)((0x2013U == (0x207fU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_0_io_deq_uop_inst)));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__8365(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__8365\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__decode_units_0__DOT____VdfgTmp_h7efa4929__0 
        = ((4U & ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_0_io_deq_uop_inst 
                      >> 5U)) << 2U)) | ((2U & ((~ 
                                                 (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_0_io_deq_uop_inst 
                                                  >> 6U)) 
                                                << 1U)) 
                                         | (1U & (~ 
                                                  (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_0_io_deq_uop_inst 
                                                   >> 0xcU)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__csr__DOT___io_decode_0_system_illegal_T 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__csr__DOT__reg_mstatus_prv) 
           < (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_0_io_deq_uop_inst 
                    >> 0x1cU)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__decode_units_0__DOT____VdfgTmp_hc77556ca__0 
        = (IData)((0x43U == (0x4000073U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_0_io_deq_uop_inst)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__decode_units_0__DOT____VdfgTmp_h6f25b936__0 
        = (IData)((0x3000U == (0x3000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_0_io_deq_uop_inst)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__decode_units_0__DOT____VdfgTmp_h2b69e4c1__0 
        = (IData)((0x2000040U == (0x6000070U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_0_io_deq_uop_inst)));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__8366(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__8366\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__decode_units_0__DOT____VdfgTmp_he2547875__0 
        = (IData)((0x2000U == (0x3000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_0_io_deq_uop_inst)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__decode_units_0__DOT____VdfgTmp_hd33752c6__0 
        = (IData)((0x20000000U == (0x7c000000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_0_io_deq_uop_inst)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__decode_units_0__DOT____VdfgTmp_hfc32b620__0 
        = (IData)((0x5073U == (0x507fU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_0_io_deq_uop_inst)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__decode_units_0__DOT____VdfgTmp_h665e22ec__0 
        = (IData)((0x5000U == (0xbe007040U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_0_io_deq_uop_inst)));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__8367(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__8367\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__decode_units_0__DOT____VdfgTmp_h5020f4b5__0 
        = (IData)((0x17U == (0x7fU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_0_io_deq_uop_inst)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_0_io_deq_uop_frs3_en 
        = (IData)((0x43U == (0x73U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_0_io_deq_uop_inst)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__decode_units_0__DOT____VdfgTmp_hec9ceb3b__0 
        = (IData)((0x63U == (0x207fU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_0_io_deq_uop_inst)));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__8368(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__8368\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__decode_units_0__DOT____VdfgTmp_h69c81271__0 
        = (IData)((0x2000U == (0x6000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_0_io_deq_uop_inst)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__decode_units_0__DOT____VdfgTmp_he1345777__0 
        = ((2U & ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_0_io_deq_uop_inst 
                      >> 6U)) << 1U)) | (1U & (~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_0_io_deq_uop_inst 
                                                  >> 0xeU))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__decode_units_0__DOT____VdfgTmp_hc7786686__0 
        = (IData)((0x17U == (0x5fU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_0_io_deq_uop_inst)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__decode_units_0__DOT____VdfgTmp_h6258dd23__0 
        = (IData)((0x202fU == (0x1800607fU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_0_io_deq_uop_inst)));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__8369(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__8369\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__decode_units_0__DOT____VdfgTmp_hfd0bf434__0 
        = (IData)((3U == (0x207fU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_0_io_deq_uop_inst)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__decode_units_0__DOT____VdfgTmp_h16cb97a0__0 
        = (IData)((0x6fU == (0x7fU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_0_io_deq_uop_inst)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__decode_units_0__DOT____VdfgTmp_hea551ac3__0 
        = (IData)((0x4063U == (0x407fU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_0_io_deq_uop_inst)));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__8370(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__8370\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__decode_units_0__DOT____VdfgTmp_h9f734475__0 
        = (IData)((0x40U == (0x4000070U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_0_io_deq_uop_inst)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__decode_units_0__DOT____VdfgTmp_h5b525d00__0 
        = ((0x10U & ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_0_io_deq_uop_inst 
                         >> 4U)) << 4U)) | ((8U & (
                                                   (~ 
                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_0_io_deq_uop_inst 
                                                     >> 5U)) 
                                                   << 3U)) 
                                            | ((4U 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_0_io_deq_uop_inst 
                                                   >> 4U)) 
                                               | ((2U 
                                                   & ((~ 
                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_0_io_deq_uop_inst 
                                                        >> 0x19U)) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & (~ 
                                                        (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_0_io_deq_uop_inst 
                                                         >> 0x1aU)))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__decode_units_0__DOT____VdfgTmp_h699e6bf8__0 
        = ((2U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_0_io_deq_uop_inst 
                  >> 0xcU)) | (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_0_io_deq_uop_inst 
                                     >> 0xeU)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__decode_units_0__DOT____VdfgTmp_h03692747__0 
        = ((0x40U & ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_0_io_deq_uop_inst 
                         >> 0xeU)) << 6U)) | ((0x20U 
                                               & ((~ 
                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_0_io_deq_uop_inst 
                                                    >> 0x1aU)) 
                                                  << 5U)) 
                                              | ((0x10U 
                                                  & ((~ 
                                                      (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_0_io_deq_uop_inst 
                                                       >> 0x1bU)) 
                                                     << 4U)) 
                                                 | ((8U 
                                                     & ((~ 
                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_0_io_deq_uop_inst 
                                                          >> 0x1cU)) 
                                                        << 3U)) 
                                                    | ((4U 
                                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_0_io_deq_uop_inst 
                                                           >> 0x1bU)) 
                                                       | ((2U 
                                                           & ((~ 
                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_0_io_deq_uop_inst 
                                                                >> 0x1eU)) 
                                                              << 1U)) 
                                                          | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_0_io_deq_uop_inst 
                                                             >> 0x1fU)))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__8371(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__8371\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__decode_units_0__DOT____VdfgTmp_hdbc17214__0 
        = (IData)((0U == (0x6000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_0_io_deq_uop_inst)));
    vlSelf->__VdfgTmp_hc6151438__0 = (IData)((0x40000000U 
                                              == (0xc0000000U 
                                                  & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_0_io_deq_uop_inst)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__decode_units_0__DOT____VdfgTmp_h87e3c9bc__0 
        = (IData)((0xc0000000U == (0xc0000000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_0_io_deq_uop_inst)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__decode_units_0__DOT____VdfgTmp_he7f8edd6__0 
        = (IData)((0x1073U == (0x107fU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_0_io_deq_uop_inst)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__decode_units_0__DOT____VdfgTmp_h6b59b8ac__0 
        = ((2U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_0_io_deq_uop_inst 
                  >> 0xcU)) | (1U & (~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_0_io_deq_uop_inst 
                                        >> 0xeU))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__decode_units_0__DOT____VdfgTmp_he4061df9__0 
        = (IData)((0x2073U == (0x207fU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_0_io_deq_uop_inst)));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__8372(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__8372\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__decode_units_0__DOT____VdfgTmp_h7c2cf003__0 
        = ((0x20U & ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_0_io_deq_uop_inst 
                         >> 0xeU)) << 5U)) | ((0x10U 
                                               & ((~ 
                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_0_io_deq_uop_inst 
                                                    >> 0x1aU)) 
                                                  << 4U)) 
                                              | ((8U 
                                                  & ((~ 
                                                      (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_0_io_deq_uop_inst 
                                                       >> 0x1bU)) 
                                                     << 3U)) 
                                                 | ((4U 
                                                     & ((~ 
                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_0_io_deq_uop_inst 
                                                          >> 0x1cU)) 
                                                        << 2U)) 
                                                    | ((2U 
                                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_0_io_deq_uop_inst 
                                                           >> 0x1cU)) 
                                                       | (1U 
                                                          & (~ 
                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_0_io_deq_uop_inst 
                                                              >> 0x1eU))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__decode_units_0__DOT____VdfgTmp_h9a42d8e1__0 
        = ((0x10U & ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_0_io_deq_uop_inst 
                         >> 0x1aU)) << 4U)) | ((8U 
                                                & ((~ 
                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_0_io_deq_uop_inst 
                                                     >> 0x1bU)) 
                                                   << 3U)) 
                                               | ((4U 
                                                   & ((~ 
                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_0_io_deq_uop_inst 
                                                        >> 0x1cU)) 
                                                      << 2U)) 
                                                  | ((2U 
                                                      & ((~ 
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_0_io_deq_uop_inst 
                                                           >> 0x1dU)) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_0_io_deq_uop_inst 
                                                           >> 0x1eU))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__decode_units_0__DOT____VdfgTmp_h8c8607c6__0 
        = ((0x10U & ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_0_io_deq_uop_inst 
                         >> 0x1aU)) << 4U)) | ((8U 
                                                & ((~ 
                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_0_io_deq_uop_inst 
                                                     >> 0x1bU)) 
                                                   << 3U)) 
                                               | ((4U 
                                                   & ((~ 
                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_0_io_deq_uop_inst 
                                                        >> 0x1cU)) 
                                                      << 2U)) 
                                                  | ((2U 
                                                      & ((~ 
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_0_io_deq_uop_inst 
                                                           >> 0x1dU)) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (~ 
                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_0_io_deq_uop_inst 
                                                            >> 0x1fU)))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__decode_units_0__DOT____VdfgTmp_hdee2f5cc__0 
        = ((2U & ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_0_io_deq_uop_inst 
                      >> 0xdU)) << 1U)) | (1U & (~ 
                                                 (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_0_io_deq_uop_inst 
                                                  >> 0xeU))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__8373(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__8373\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__decode_units_0__DOT____VdfgTmp_h89163bd4__0 
        = ((2U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_0_io_deq_uop_inst 
                  >> 0x1dU)) | (1U & (~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_0_io_deq_uop_inst 
                                         >> 0x1fU))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__decode_units_0__DOT____VdfgTmp_h846ba620__0 
        = ((2U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_0_io_deq_uop_inst 
                  >> 0x1dU)) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_0_io_deq_uop_inst 
                                >> 0x1fU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__csr__DOT____VdfgTmp_h8020cbb5__0 
        = (IData)((0U == (0xc0000000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_0_io_deq_uop_inst)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__decode_units_0__DOT____VdfgTmp_hfc9b200f__0 
        = ((2U & ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_0_io_deq_uop_inst 
                      >> 0x1eU)) << 1U)) | (1U & (~ 
                                                  (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___decode_units_0_io_deq_uop_inst 
                                                   >> 0x1fU))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT___s0_type_T_1 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT___meta_read_arb_io_in_0_ready) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT___mshrs_io_meta_read_valid));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT___dcache_io_lsu_req_ready 
        = (1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__dataReadArb__DOT___io_out_valid_T)) 
                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__metaReadArb__DOT___grant_T_2)) 
                    & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__meta_0__DOT__tag_array_MPORT_en)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__respq__DOT___GEN_8 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__respq__DOT__do_enq) 
           & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__respq__DOT__enq_ptr_value)));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__8374(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__8374\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__respq__DOT___GEN_10 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__respq__DOT__do_enq) 
           & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__respq__DOT__enq_ptr_value)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__respq__DOT___GEN_12 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__respq__DOT__do_enq) 
           & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__respq__DOT__enq_ptr_value)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__respq__DOT___GEN_13 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__respq__DOT__do_enq) 
           & (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__respq__DOT__enq_ptr_value)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__io_resp_bits_data_zeroed_1 
        = (0xffffU & ((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq__DOT___ram_ext_R0_data 
                                     >> 1U))) ? (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__io_resp_bits_data_zeroed 
                                                 >> 0x10U)
                       : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__io_resp_bits_data_zeroed));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__io_resp_bits_data_zeroed_1 
        = (0xffffU & ((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq__DOT___ram_ext_R0_data 
                                     >> 1U))) ? (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__io_resp_bits_data_zeroed 
                                                 >> 0x10U)
                       : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__io_resp_bits_data_zeroed));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__io_resp_bits_data_zeroed_1 
        = (0xffffU & ((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__rpq__DOT___ram_ext_R0_data 
                                     >> 1U))) ? (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__io_resp_bits_data_zeroed 
                                                 >> 0x10U)
                       : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__io_resp_bits_data_zeroed));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__io_resp_bits_data_zeroed_1 
        = (0xffffU & ((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__rpq__DOT___ram_ext_R0_data 
                                     >> 1U))) ? (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__io_resp_bits_data_zeroed 
                                                 >> 0x10U)
                       : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__io_resp_bits_data_zeroed));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__csr__DOT___GEN_55 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__csr__DOT___GEN_39) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__csr__DOT__reg_mstatus_sie));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__csr__DOT___GEN_57 
        = (1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__csr__DOT___GEN_33)) 
                 & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__csr__DOT___GEN_39)
                     ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__csr__DOT__reg_mstatus_spp)
                     : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__csr__DOT__reg_mstatus_prv))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__csr__DOT___GEN_56 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__csr__DOT___GEN_33) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__csr__DOT___GEN_39)
               ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__csr__DOT__reg_mstatus_spie)
               : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__csr__DOT__reg_mstatus_sie)));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__8375(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__8375\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq__DOT___GEN_81 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT___GEN_46) 
           & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq__DOT__enq_ptr_value)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq__DOT___GEN_83 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT___GEN_46) 
           & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq__DOT__enq_ptr_value)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq__DOT___GEN_85 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT___GEN_46) 
           & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq__DOT__enq_ptr_value)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq__DOT___GEN_87 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT___GEN_46) 
           & (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq__DOT__enq_ptr_value)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq__DOT___GEN_89 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT___GEN_46) 
           & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq__DOT__enq_ptr_value)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq__DOT___GEN_91 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT___GEN_46) 
           & (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq__DOT__enq_ptr_value)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq__DOT___GEN_93 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT___GEN_46) 
           & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq__DOT__enq_ptr_value)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq__DOT___GEN_95 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT___GEN_46) 
           & (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq__DOT__enq_ptr_value)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq__DOT___GEN_97 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT___GEN_46) 
           & (8U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq__DOT__enq_ptr_value)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq__DOT___GEN_99 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT___GEN_46) 
           & (9U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq__DOT__enq_ptr_value)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq__DOT___GEN_101 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT___GEN_46) 
           & (0xaU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq__DOT__enq_ptr_value)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq__DOT___GEN_103 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT___GEN_46) 
           & (0xbU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq__DOT__enq_ptr_value)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq__DOT___GEN_105 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT___GEN_46) 
           & (0xcU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq__DOT__enq_ptr_value)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq__DOT___GEN_107 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT___GEN_46) 
           & (0xdU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq__DOT__enq_ptr_value)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq__DOT___GEN_109 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT___GEN_46) 
           & (0xeU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq__DOT__enq_ptr_value)));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__8376(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__8376\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq__DOT___GEN_110 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT___GEN_46) 
           & (0xfU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq__DOT__enq_ptr_value)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq__DOT___GEN_81 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT___GEN_46) 
           & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq__DOT__enq_ptr_value)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq__DOT___GEN_83 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT___GEN_46) 
           & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq__DOT__enq_ptr_value)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq__DOT___GEN_85 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT___GEN_46) 
           & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq__DOT__enq_ptr_value)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq__DOT___GEN_87 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT___GEN_46) 
           & (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq__DOT__enq_ptr_value)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq__DOT___GEN_89 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT___GEN_46) 
           & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq__DOT__enq_ptr_value)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq__DOT___GEN_91 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT___GEN_46) 
           & (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq__DOT__enq_ptr_value)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq__DOT___GEN_93 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT___GEN_46) 
           & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq__DOT__enq_ptr_value)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq__DOT___GEN_95 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT___GEN_46) 
           & (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq__DOT__enq_ptr_value)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq__DOT___GEN_97 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT___GEN_46) 
           & (8U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq__DOT__enq_ptr_value)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq__DOT___GEN_99 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT___GEN_46) 
           & (9U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq__DOT__enq_ptr_value)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq__DOT___GEN_101 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT___GEN_46) 
           & (0xaU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq__DOT__enq_ptr_value)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq__DOT___GEN_103 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT___GEN_46) 
           & (0xbU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq__DOT__enq_ptr_value)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq__DOT___GEN_105 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT___GEN_46) 
           & (0xcU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq__DOT__enq_ptr_value)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq__DOT___GEN_107 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT___GEN_46) 
           & (0xdU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq__DOT__enq_ptr_value)));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__8377(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__8377\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq__DOT___GEN_109 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT___GEN_46) 
           & (0xeU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq__DOT__enq_ptr_value)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq__DOT___GEN_110 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT___GEN_46) 
           & (0xfU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq__DOT__enq_ptr_value)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__rpq__DOT___GEN_81 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT___GEN_46) 
           & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__rpq__DOT__enq_ptr_value)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__rpq__DOT___GEN_83 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT___GEN_46) 
           & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__rpq__DOT__enq_ptr_value)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__rpq__DOT___GEN_85 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT___GEN_46) 
           & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__rpq__DOT__enq_ptr_value)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__rpq__DOT___GEN_87 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT___GEN_46) 
           & (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__rpq__DOT__enq_ptr_value)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__rpq__DOT___GEN_89 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT___GEN_46) 
           & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__rpq__DOT__enq_ptr_value)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__rpq__DOT___GEN_91 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT___GEN_46) 
           & (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__rpq__DOT__enq_ptr_value)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__rpq__DOT___GEN_93 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT___GEN_46) 
           & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__rpq__DOT__enq_ptr_value)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__rpq__DOT___GEN_95 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT___GEN_46) 
           & (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__rpq__DOT__enq_ptr_value)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__rpq__DOT___GEN_97 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT___GEN_46) 
           & (8U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__rpq__DOT__enq_ptr_value)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__rpq__DOT___GEN_99 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT___GEN_46) 
           & (9U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__rpq__DOT__enq_ptr_value)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__rpq__DOT___GEN_101 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT___GEN_46) 
           & (0xaU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__rpq__DOT__enq_ptr_value)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__rpq__DOT___GEN_103 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT___GEN_46) 
           & (0xbU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__rpq__DOT__enq_ptr_value)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__rpq__DOT___GEN_105 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT___GEN_46) 
           & (0xcU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__rpq__DOT__enq_ptr_value)));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__8378(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__8378\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__rpq__DOT___GEN_107 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT___GEN_46) 
           & (0xdU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__rpq__DOT__enq_ptr_value)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__rpq__DOT___GEN_109 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT___GEN_46) 
           & (0xeU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__rpq__DOT__enq_ptr_value)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__rpq__DOT___GEN_110 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT___GEN_46) 
           & (0xfU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__rpq__DOT__enq_ptr_value)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__rpq__DOT___GEN_81 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT___GEN_46) 
           & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__rpq__DOT__enq_ptr_value)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__rpq__DOT___GEN_83 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT___GEN_46) 
           & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__rpq__DOT__enq_ptr_value)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__rpq__DOT___GEN_85 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT___GEN_46) 
           & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__rpq__DOT__enq_ptr_value)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__rpq__DOT___GEN_87 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT___GEN_46) 
           & (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__rpq__DOT__enq_ptr_value)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__rpq__DOT___GEN_89 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT___GEN_46) 
           & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__rpq__DOT__enq_ptr_value)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__rpq__DOT___GEN_91 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT___GEN_46) 
           & (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__rpq__DOT__enq_ptr_value)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__rpq__DOT___GEN_93 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT___GEN_46) 
           & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__rpq__DOT__enq_ptr_value)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__rpq__DOT___GEN_95 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT___GEN_46) 
           & (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__rpq__DOT__enq_ptr_value)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__rpq__DOT___GEN_97 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT___GEN_46) 
           & (8U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__rpq__DOT__enq_ptr_value)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__rpq__DOT___GEN_99 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT___GEN_46) 
           & (9U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__rpq__DOT__enq_ptr_value)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__rpq__DOT___GEN_101 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT___GEN_46) 
           & (0xaU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__rpq__DOT__enq_ptr_value)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__rpq__DOT___GEN_103 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT___GEN_46) 
           & (0xbU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__rpq__DOT__enq_ptr_value)));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__8379(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__8379\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__rpq__DOT___GEN_105 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT___GEN_46) 
           & (0xcU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__rpq__DOT__enq_ptr_value)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__rpq__DOT___GEN_107 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT___GEN_46) 
           & (0xdU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__rpq__DOT__enq_ptr_value)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__rpq__DOT___GEN_109 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT___GEN_46) 
           & (0xeU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__rpq__DOT__enq_ptr_value)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__rpq__DOT___GEN_110 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT___GEN_46) 
           & (0xfU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__rpq__DOT__enq_ptr_value)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_store_failed 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_valid_REG) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_nack_0) 
              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_send_nack_0) 
                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_req_0_uop_uses_stq))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT___dcache_io_lsu_nack_0_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_valid_REG) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_send_nack_0) 
              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT____VdfgTmp_h03d319a3__0) 
                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT____VdfgTmp_hd3243fa1__0))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__respq__DOT__do_deq 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__respq__DOT____VdfgTmp_h561e4c45__0) 
           & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__respq__DOT___GEN_0)) 
              | (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__cache_resp_0_valid))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT___hellaCacheArb_io_requestor_0_resp_bits_data 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__cache_resp_0_valid)
            ? (((((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_req_0_uop_mem_size)) 
                  | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_sc))
                  ? (- (QData)((IData)(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_req_0_uop_mem_signed) 
                                        & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_sc)) 
                                           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT____VdfgTmp_h7d386649__0) 
                                              >> 7U))))))
                  : ((0xffffffffffff00ULL & (((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_req_0_uop_mem_size))
                                               ? (- (QData)((IData)(
                                                                    ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_req_0_uop_mem_signed) 
                                                                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__cache_resp_0_bits_data_zeroed_1) 
                                                                        >> 0xfU)))))
                                               : (((QData)((IData)(
                                                                   ((2U 
                                                                     == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_req_0_uop_mem_size))
                                                                     ? 
                                                                    (- (IData)(
                                                                               ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_req_0_uop_mem_signed) 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__cache_resp_0_bits_data_zeroed 
                                                                                >> 0x1fU))))
                                                                     : (IData)(
                                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_data_word_0 
                                                                                >> 0x20U))))) 
                                                   << 0x10U) 
                                                  | (QData)((IData)(
                                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__cache_resp_0_bits_data_zeroed 
                                                                     >> 0x10U))))) 
                                             << 8U)) 
                     | (QData)((IData)((0xffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__cache_resp_0_bits_data_zeroed_1) 
                                                 >> 8U)))))) 
                << 8U) | (QData)((IData)(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_sc)
                                             ? 0U : 
                                            (0x7fU 
                                             & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT____VdfgTmp_h7d386649__0) 
                                                >> 1U))) 
                                           << 1U) | 
                                          (1U & (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_sc)) 
                                                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT____VdfgTmp_h7d386649__0)) 
                                                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_sc_fail)))))))
            : (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__respq__DOT___ram_ext_R0_data[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__respq__DOT___ram_ext_R0_data[0U]))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__8380(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__8380\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__cache_resp_0_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT___dcache_io_lsu_resp_0_bits_uop_stq_idx 
            = (0x1fU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_req_0_uop_stq_idx));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT___dcache_io_lsu_resp_0_bits_uop_ldq_idx 
            = (0x1fU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_req_0_uop_ldq_idx));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT___dcache_io_lsu_resp_0_bits_uop_uses_stq 
            = (1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_req_0_uop_uses_stq));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT___dcache_io_lsu_resp_0_bits_uop_uses_ldq 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__s2_req_0_uop_uses_ldq;
    } else {
        if ((0x13U >= (0x1fU & ((IData)(5U) * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__respq__DOT__deq_ptr_value))))) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT___dcache_io_lsu_resp_0_bits_uop_stq_idx 
                = (0x1fU & ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__respq__DOT__uops_3_stq_idx) 
                              << 0xfU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__respq__DOT__uops_2_stq_idx) 
                                           << 0xaU) 
                                          | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__respq__DOT__uops_1_stq_idx) 
                                              << 5U) 
                                             | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__respq__DOT__uops_0_stq_idx)))) 
                            >> (0x1fU & ((IData)(5U) 
                                         * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__respq__DOT__deq_ptr_value)))));
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT___dcache_io_lsu_resp_0_bits_uop_ldq_idx 
                = (0x1fU & ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__respq__DOT__uops_3_ldq_idx) 
                              << 0xfU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__respq__DOT__uops_2_ldq_idx) 
                                           << 0xaU) 
                                          | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__respq__DOT__uops_1_ldq_idx) 
                                              << 5U) 
                                             | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__respq__DOT__uops_0_ldq_idx)))) 
                            >> (0x1fU & ((IData)(5U) 
                                         * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__respq__DOT__deq_ptr_value)))));
        } else {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT___dcache_io_lsu_resp_0_bits_uop_stq_idx 
                = (0x1fU & 0U);
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT___dcache_io_lsu_resp_0_bits_uop_ldq_idx 
                = (0x1fU & 0U);
        }
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT___dcache_io_lsu_resp_0_bits_uop_uses_stq 
            = (1U & ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__respq__DOT__uops_3_uses_stq) 
                       << 3U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__respq__DOT__uops_2_uses_stq) 
                                  << 2U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__respq__DOT__uops_1_uses_stq) 
                                             << 1U) 
                                            | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__respq__DOT__uops_0_uses_stq)))) 
                     >> (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__respq__DOT__deq_ptr_value)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT___dcache_io_lsu_resp_0_bits_uop_uses_ldq 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__dcache__DOT___mshrs_io_resp_bits_uop_uses_ldq;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___stq_bits_data_bits_T) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___stq_bits_data_bits_T_1 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__iregister_read__DOT__exe_reg_rs2_data_0;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__sidx 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__iregister_read__DOT__exe_reg_uops_0_stq_idx;
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___stq_bits_data_bits_T_1 
            = (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT___fpu_exe_unit_io_ll_iresp_bits_data[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__FpPipeline__DOT___fpu_exe_unit_io_ll_iresp_bits_data[0U])));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__sidx 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT___core_io_lsu_fp_stdata_bits_uop_stq_idx;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT__will_fire_sfence_0_will_fire 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT___core_io_lsu_exe_0_req_valid) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___memExeUnit_io_lsu_io_req_bits_sfence_valid) 
              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___will_fire_release_0_will_fire_T_6) 
                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__lsu__DOT___will_fire_sfence_0_will_fire_T_14))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__8381(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__8381\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_0__DOT___GEN_1 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__issue_slots_0_grant) 
            & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_0__DOT__state))) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_0__DOT___GEN_0) 
              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_0__DOT____VdfgTmp_h5df2fcb1__0)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__issue_slots_1_grant 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_89) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_86) 
              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_83)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_97 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT___slots_2_io_request) 
           & ((~ (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT___slots_2_io_request) 
                   & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_87)) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT____VdfgTmp_h3e77ff84__0))) 
                  | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_92))) 
              & (0U != (9U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_2__DOT__slot_uop_fu_code) 
                              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__REG_5))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_95 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_87)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_94));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_96 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_94) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_87));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_103 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT___slots_3_io_request) 
           & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_101)) 
              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT____VdfgTmp_h3ee0bf47__0)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_110 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_102)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_109));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_111 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_109) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_102));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT____Vcellinp__slots_3__io_clear 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT____VdfgTmp_h7c8f903d__0) 
           | (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT____VdfgTmp_h86264ef4__0)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__next_2 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT____VdfgTmp_h7c8f903d__0)
            ? 1U : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT____VdfgTmp_h86264ef4__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___dec_brmask_logic_io_br_tag_0 
        = ((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__dec_brmask_logic__DOT__branch_mask))
            ? ((2U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__dec_brmask_logic__DOT__branch_mask))
                ? ((4U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__dec_brmask_logic__DOT__branch_mask))
                    ? ((8U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__dec_brmask_logic__DOT__branch_mask))
                        ? ((0x10U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__dec_brmask_logic__DOT__branch_mask))
                            ? ((0x20U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__dec_brmask_logic__DOT__branch_mask))
                                ? ((0x40U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__dec_brmask_logic__DOT__branch_mask))
                                    ? ((0x80U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__dec_brmask_logic__DOT__branch_mask))
                                        ? ((0x100U 
                                            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__dec_brmask_logic__DOT__branch_mask))
                                            ? ((0x200U 
                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__dec_brmask_logic__DOT__branch_mask))
                                                ? (
                                                   (0x400U 
                                                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__dec_brmask_logic__DOT__branch_mask))
                                                    ? 
                                                   ((0x800U 
                                                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__dec_brmask_logic__DOT__branch_mask))
                                                     ? 
                                                    ((0x1000U 
                                                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__dec_brmask_logic__DOT__branch_mask))
                                                      ? 
                                                     ((0x2000U 
                                                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__dec_brmask_logic__DOT__branch_mask))
                                                       ? 
                                                      ((0x4000U 
                                                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__dec_brmask_logic__DOT__branch_mask))
                                                        ? 
                                                       (0xfU 
                                                        & (- (IData)(
                                                                     (1U 
                                                                      & (~ 
                                                                         ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__dec_brmask_logic__DOT__branch_mask) 
                                                                          >> 0xfU))))))
                                                        : 0xeU)
                                                       : 0xdU)
                                                      : 0xcU)
                                                     : 0xbU)
                                                    : 0xaU)
                                                : 9U)
                                            : 8U) : 7U)
                                    : 6U) : 5U) : 4U)
                        : 3U) : 2U) : 1U) : 0U);
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__8382(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__8382\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___rob_pnr_lsb_T_12 
        = (3U & ((~ ((2U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_132)) 
                     | (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_132) 
                              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_tail_vals_2))))) 
                 | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_pnr_unsafe_1) 
                     << 1U) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_pnr_unsafe_0))));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_head_vals_0) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___rob_io_com_xcpt_bits_edge_inst 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT____VdfgTmp_h9d7f6e6e__0;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___rob_io_com_xcpt_bits_pc_lob 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT____VdfgTmp_h6da515f2__0;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___rob_io_com_xcpt_bits_ftq_idx 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___rob_io_commit_uops_0_ftq_idx;
    } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_head_vals_1) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___rob_io_com_xcpt_bits_edge_inst 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT____VdfgTmp_ha51548b2__0;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___rob_io_com_xcpt_bits_pc_lob 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT____VdfgTmp_h18263105__0;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___rob_io_com_xcpt_bits_ftq_idx 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___rob_io_commit_uops_1_ftq_idx;
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___rob_io_com_xcpt_bits_edge_inst 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT____VdfgTmp_h69e471b1__0;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___rob_io_com_xcpt_bits_pc_lob 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT____VdfgTmp_h0df17563__0;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___rob_io_com_xcpt_bits_ftq_idx 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___rob_io_commit_uops_2_ftq_idx;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT___core_io_ifu_flush_icache 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___rob_io_commit_arch_valids_0) 
            & ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_31_is_fencei) 
                 << 0x1fU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_30_is_fencei) 
                               << 0x1eU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_29_is_fencei) 
                                             << 0x1dU) 
                                            | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_28_is_fencei) 
                                                << 0x1cU) 
                                               | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_27_is_fencei) 
                                                   << 0x1bU) 
                                                  | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_26_is_fencei) 
                                                      << 0x1aU) 
                                                     | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_25_is_fencei) 
                                                         << 0x19U) 
                                                        | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_24_is_fencei) 
                                                            << 0x18U) 
                                                           | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_23_is_fencei) 
                                                               << 0x17U) 
                                                              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_22_is_fencei) 
                                                                  << 0x16U) 
                                                                 | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_21_is_fencei) 
                                                                     << 0x15U) 
                                                                    | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_20_is_fencei) 
                                                                        << 0x14U) 
                                                                       | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_19_is_fencei) 
                                                                           << 0x13U) 
                                                                          | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_18_is_fencei) 
                                                                              << 0x12U) 
                                                                             | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_17_is_fencei) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_16_is_fencei) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_15_is_fencei) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_14_is_fencei) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_13_is_fencei) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_12_is_fencei) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_11_is_fencei) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_10_is_fencei) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_9_is_fencei) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_8_is_fencei) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_7_is_fencei) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_6_is_fencei) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_5_is_fencei) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_4_is_fencei) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_3_is_fencei) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_is_fencei) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_is_fencei) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_0_is_fencei)))))))))))))))))))))))))))))))) 
               >> (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__com_idx))) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__io_ifu_flush_icache_REG) 
              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___rob_io_commit_arch_valids_1) 
                  & ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_31_is_fencei) 
                       << 0x1fU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_30_is_fencei) 
                                     << 0x1eU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_29_is_fencei) 
                                                   << 0x1dU) 
                                                  | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_28_is_fencei) 
                                                      << 0x1cU) 
                                                     | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_27_is_fencei) 
                                                         << 0x1bU) 
                                                        | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_26_is_fencei) 
                                                            << 0x1aU) 
                                                           | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_25_is_fencei) 
                                                               << 0x19U) 
                                                              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_24_is_fencei) 
                                                                  << 0x18U) 
                                                                 | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_23_is_fencei) 
                                                                     << 0x17U) 
                                                                    | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_22_is_fencei) 
                                                                        << 0x16U) 
                                                                       | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_21_is_fencei) 
                                                                           << 0x15U) 
                                                                          | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_20_is_fencei) 
                                                                              << 0x14U) 
                                                                             | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_19_is_fencei) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_18_is_fencei) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_17_is_fencei) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_16_is_fencei) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_15_is_fencei) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_14_is_fencei) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_13_is_fencei) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_12_is_fencei) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_11_is_fencei) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_10_is_fencei) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_9_is_fencei) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_8_is_fencei) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_7_is_fencei) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_6_is_fencei) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_5_is_fencei) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_4_is_fencei) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_3_is_fencei) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_2_is_fencei) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_1_is_fencei) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_1_0_is_fencei)))))))))))))))))))))))))))))))) 
                     >> (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__com_idx))) 
                 | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__io_ifu_flush_icache_REG_1) 
                    | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT___rob_io_commit_arch_valids_2) 
                        & ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_31_is_fencei) 
                             << 0x1fU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_30_is_fencei) 
                                           << 0x1eU) 
                                          | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_29_is_fencei) 
                                              << 0x1dU) 
                                             | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_28_is_fencei) 
                                                 << 0x1cU) 
                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_27_is_fencei) 
                                                    << 0x1bU) 
                                                   | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_26_is_fencei) 
                                                       << 0x1aU) 
                                                      | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_25_is_fencei) 
                                                          << 0x19U) 
                                                         | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_24_is_fencei) 
                                                             << 0x18U) 
                                                            | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_23_is_fencei) 
                                                                << 0x17U) 
                                                               | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_22_is_fencei) 
                                                                   << 0x16U) 
                                                                  | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_21_is_fencei) 
                                                                      << 0x15U) 
                                                                     | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_20_is_fencei) 
                                                                         << 0x14U) 
                                                                        | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_19_is_fencei) 
                                                                            << 0x13U) 
                                                                           | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_18_is_fencei) 
                                                                               << 0x12U) 
                                                                              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_17_is_fencei) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_16_is_fencei) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_15_is_fencei) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_14_is_fencei) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_13_is_fencei) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_12_is_fencei) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_11_is_fencei) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_10_is_fencei) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_9_is_fencei) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_8_is_fencei) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_7_is_fencei) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_6_is_fencei) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_5_is_fencei) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_4_is_fencei) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_3_is_fencei) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_2_is_fencei) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_1_is_fencei) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_uop_2_0_is_fencei)))))))))))))))))))))))))))))))) 
                           >> (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__com_idx))) 
                       | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_boom_tile__DOT__core__DOT__io_ifu_flush_icache_REG_2))))));
}
