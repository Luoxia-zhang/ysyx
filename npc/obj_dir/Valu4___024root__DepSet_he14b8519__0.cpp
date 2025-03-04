// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Valu4.h for the primary calling header

#include "verilated.h"

#include "Valu4___024root.h"

VL_INLINE_OPT void Valu4___024root___ico_sequent__TOP__0(Valu4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu4___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->alu_out = 0U;
    vlSelf->less = 0U;
    vlSelf->overflow = 0U;
    vlSelf->zero = 0U;
    vlSelf->carry = 0U;
    vlSelf->top__DOT__xb = 0U;
    vlSelf->temp = 0U;
    if ((4U & (IData)(vlSelf->ctr))) {
        if ((2U & (IData)(vlSelf->ctr))) {
            if ((1U & (IData)(vlSelf->ctr))) {
                vlSelf->top__DOT__xb = (0xfU & (~ (IData)(vlSelf->b)));
                vlSelf->carry = (1U & (((IData)(1U) 
                                        + ((IData)(vlSelf->top__DOT__xb) 
                                           + (IData)(vlSelf->a))) 
                                       >> 4U));
                vlSelf->temp = (0xfU & ((IData)(1U) 
                                        + ((IData)(vlSelf->top__DOT__xb) 
                                           + (IData)(vlSelf->a))));
                vlSelf->overflow = (((1U & ((IData)(vlSelf->a) 
                                            >> 3U)) 
                                     == (1U & ((IData)(vlSelf->top__DOT__xb) 
                                               >> 3U))) 
                                    & ((1U & ((IData)(vlSelf->temp) 
                                              >> 3U)) 
                                       != (1U & ((IData)(vlSelf->a) 
                                                 >> 3U))));
                vlSelf->zero = (1U & (~ (IData)((0U 
                                                 != (IData)(vlSelf->temp)))));
                vlSelf->alu_out = ((IData)(vlSelf->zero)
                                    ? 1U : 0U);
            } else {
                vlSelf->top__DOT__xb = (0xfU & (~ (IData)(vlSelf->b)));
                vlSelf->carry = (1U & (((IData)(1U) 
                                        + ((IData)(vlSelf->top__DOT__xb) 
                                           + (IData)(vlSelf->a))) 
                                       >> 4U));
                vlSelf->temp = (0xfU & ((IData)(1U) 
                                        + ((IData)(vlSelf->top__DOT__xb) 
                                           + (IData)(vlSelf->a))));
                vlSelf->overflow = (((1U & ((IData)(vlSelf->a) 
                                            >> 3U)) 
                                     == (1U & ((IData)(vlSelf->top__DOT__xb) 
                                               >> 3U))) 
                                    & ((1U & ((IData)(vlSelf->temp) 
                                              >> 3U)) 
                                       != (1U & ((IData)(vlSelf->a) 
                                                 >> 3U))));
                vlSelf->zero = (1U & (~ (IData)((0U 
                                                 != (IData)(vlSelf->temp)))));
                vlSelf->less = (IData)((((IData)(vlSelf->temp) 
                                         >> 3U) ^ (IData)(vlSelf->overflow)));
                vlSelf->alu_out = ((IData)(vlSelf->less)
                                    ? 1U : 0U);
            }
        } else {
            vlSelf->alu_out = ((1U & (IData)(vlSelf->ctr))
                                ? ((IData)(vlSelf->a) 
                                   ^ (IData)(vlSelf->b))
                                : ((IData)(vlSelf->a) 
                                   | (IData)(vlSelf->b)));
        }
    } else if ((2U & (IData)(vlSelf->ctr))) {
        vlSelf->alu_out = ((1U & (IData)(vlSelf->ctr))
                            ? ((IData)(vlSelf->a) & (IData)(vlSelf->b))
                            : 0U);
    } else {
        vlSelf->top__DOT__xb = (0xfU & ((- (IData)(
                                                   (1U 
                                                    & (IData)(vlSelf->ctr)))) 
                                        ^ (IData)(vlSelf->b)));
        vlSelf->top__DOT____Vconcswap_1_h29161d17__0 
            = (1U & ((((IData)(vlSelf->top__DOT__xb) 
                       + (IData)(vlSelf->a)) + (1U 
                                                & (IData)(vlSelf->alu_out))) 
                     >> 4U));
        vlSelf->top__DOT____Vconcswap_1_h6e063ac6__0 
            = (0xfU & (((IData)(vlSelf->top__DOT__xb) 
                        + (IData)(vlSelf->a)) + (1U 
                                                 & (IData)(vlSelf->alu_out))));
        vlSelf->carry = vlSelf->top__DOT____Vconcswap_1_h29161d17__0;
        vlSelf->alu_out = vlSelf->top__DOT____Vconcswap_1_h6e063ac6__0;
        vlSelf->overflow = (((1U & ((IData)(vlSelf->a) 
                                    >> 3U)) == (1U 
                                                & ((IData)(vlSelf->top__DOT__xb) 
                                                   >> 3U))) 
                            & ((1U & ((IData)(vlSelf->alu_out) 
                                      >> 3U)) != (1U 
                                                  & ((IData)(vlSelf->a) 
                                                     >> 3U))));
        vlSelf->zero = (1U & (~ (IData)((0U != (IData)(vlSelf->alu_out)))));
    }
}

void Valu4___024root___eval_ico(Valu4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu4___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        Valu4___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Valu4___024root___eval_act(Valu4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu4___024root___eval_act\n"); );
}

void Valu4___024root___eval_nba(Valu4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu4___024root___eval_nba\n"); );
}

void Valu4___024root___eval_triggers__ico(Valu4___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Valu4___024root___dump_triggers__ico(Valu4___024root* vlSelf);
#endif  // VL_DEBUG
void Valu4___024root___eval_triggers__act(Valu4___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Valu4___024root___dump_triggers__act(Valu4___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Valu4___024root___dump_triggers__nba(Valu4___024root* vlSelf);
#endif  // VL_DEBUG

void Valu4___024root___eval(Valu4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu4___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<0> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Valu4___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Valu4___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("vsrc/alu4.v", 1, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Valu4___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Valu4___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Valu4___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("vsrc/alu4.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Valu4___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Valu4___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("vsrc/alu4.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Valu4___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Valu4___024root___eval_debug_assertions(Valu4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu4___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->a & 0xf0U))) {
        Verilated::overWidthError("a");}
    if (VL_UNLIKELY((vlSelf->b & 0xf0U))) {
        Verilated::overWidthError("b");}
    if (VL_UNLIKELY((vlSelf->ctr & 0xf8U))) {
        Verilated::overWidthError("ctr");}
}
#endif  // VL_DEBUG
