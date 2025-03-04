// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vencode38.h for the primary calling header

#include "verilated.h"

#include "Vencode38___024root.h"

void Vencode38___024root___eval_act(Vencode38___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vencode38__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencode38___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vencode38___024root___nba_sequent__TOP__0(Vencode38___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vencode38__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencode38___024root___nba_sequent__TOP__0\n"); );
    // Body
    if (vlSelf->en) {
        vlSelf->encode38__DOT__encdr__DOT__i = 8U;
        vlSelf->indicate = (0U != (IData)(vlSelf->sw));
        vlSelf->encode38__DOT__w = 0U;
        if ((1U & (IData)(vlSelf->sw))) {
            vlSelf->encode38__DOT__w = 0U;
        }
        if ((2U & (IData)(vlSelf->sw))) {
            vlSelf->encode38__DOT__w = 1U;
        }
        if ((4U & (IData)(vlSelf->sw))) {
            vlSelf->encode38__DOT__w = 2U;
        }
        if ((8U & (IData)(vlSelf->sw))) {
            vlSelf->encode38__DOT__w = 3U;
        }
        if ((0x10U & (IData)(vlSelf->sw))) {
            vlSelf->encode38__DOT__w = 4U;
        }
        if ((0x20U & (IData)(vlSelf->sw))) {
            vlSelf->encode38__DOT__w = 5U;
        }
        if ((0x40U & (IData)(vlSelf->sw))) {
            vlSelf->encode38__DOT__w = 6U;
        }
        if ((0x80U & (IData)(vlSelf->sw))) {
            vlSelf->encode38__DOT__w = 7U;
        }
    } else {
        vlSelf->encode38__DOT__w = 0U;
    }
    vlSelf->led_out = vlSelf->encode38__DOT__w;
}

extern const VlUnpacked<CData/*6:0*/, 16> Vencode38__ConstPool__TABLE_h7a9ec112_0;

VL_INLINE_OPT void Vencode38___024root___nba_sequent__TOP__1(Vencode38___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vencode38__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencode38___024root___nba_sequent__TOP__1\n"); );
    // Init
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = vlSelf->encode38__DOT____Vcellinp__seg0__b;
    vlSelf->seg_out = Vencode38__ConstPool__TABLE_h7a9ec112_0
        [__Vtableidx1];
}

VL_INLINE_OPT void Vencode38___024root___nba_sequent__TOP__2(Vencode38___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vencode38__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencode38___024root___nba_sequent__TOP__2\n"); );
    // Body
    vlSelf->encode38__DOT____Vcellinp__seg0__b = vlSelf->encode38__DOT__w;
}

void Vencode38___024root___eval_nba(Vencode38___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vencode38__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencode38___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vencode38___024root___nba_sequent__TOP__0(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vencode38___024root___nba_sequent__TOP__1(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vencode38___024root___nba_sequent__TOP__2(vlSelf);
    }
}

void Vencode38___024root___eval_triggers__act(Vencode38___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vencode38___024root___dump_triggers__act(Vencode38___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vencode38___024root___dump_triggers__nba(Vencode38___024root* vlSelf);
#endif  // VL_DEBUG

void Vencode38___024root___eval(Vencode38___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vencode38__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencode38___024root___eval\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vencode38___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vencode38___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("vsrc/encode38.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vencode38___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vencode38___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("vsrc/encode38.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vencode38___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vencode38___024root___eval_debug_assertions(Vencode38___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vencode38__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencode38___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->en & 0xfeU))) {
        Verilated::overWidthError("en");}
}
#endif  // VL_DEBUG
