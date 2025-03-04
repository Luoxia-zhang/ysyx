// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vlinear_feedback_shift_register.h for the primary calling header

#include "verilated.h"

#include "Vlinear_feedback_shift_register___024root.h"

void Vlinear_feedback_shift_register___024root___eval_act(Vlinear_feedback_shift_register___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlinear_feedback_shift_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlinear_feedback_shift_register___024root___eval_act\n"); );
}

extern const VlUnpacked<CData/*6:0*/, 16> Vlinear_feedback_shift_register__ConstPool__TABLE_h8aed404b_0;

VL_INLINE_OPT void Vlinear_feedback_shift_register___024root___nba_sequent__TOP__0(Vlinear_feedback_shift_register___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlinear_feedback_shift_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlinear_feedback_shift_register___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*3:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*7:0*/ __Vdly__num;
    __Vdly__num = 0;
    CData/*0:0*/ __Vdly__linear_feedback_shift_register__DOT__x;
    __Vdly__linear_feedback_shift_register__DOT__x = 0;
    // Body
    __Vdly__linear_feedback_shift_register__DOT__x 
        = vlSelf->linear_feedback_shift_register__DOT__x;
    __Vdly__num = vlSelf->num;
    if (vlSelf->rst) {
        __Vdly__num = 1U;
    } else {
        __Vdly__linear_feedback_shift_register__DOT__x 
            = (1U & VL_REDXOR_8((0x1dU & (IData)(vlSelf->num))));
        __Vdly__num = (((IData)(vlSelf->linear_feedback_shift_register__DOT__x) 
                        << 7U) | (0x7fU & ((IData)(vlSelf->num) 
                                           >> 1U)));
    }
    vlSelf->linear_feedback_shift_register__DOT__x 
        = __Vdly__linear_feedback_shift_register__DOT__x;
    vlSelf->num = __Vdly__num;
    vlSelf->num0 = (0xfU & (IData)(vlSelf->num));
    vlSelf->num1 = (0xfU & ((IData)(vlSelf->num) >> 4U));
    __Vtableidx1 = vlSelf->num0;
    vlSelf->seg0 = Vlinear_feedback_shift_register__ConstPool__TABLE_h8aed404b_0
        [__Vtableidx1];
    __Vtableidx2 = vlSelf->num1;
    vlSelf->seg1 = Vlinear_feedback_shift_register__ConstPool__TABLE_h8aed404b_0
        [__Vtableidx2];
}

void Vlinear_feedback_shift_register___024root___eval_nba(Vlinear_feedback_shift_register___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlinear_feedback_shift_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlinear_feedback_shift_register___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vlinear_feedback_shift_register___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vlinear_feedback_shift_register___024root___eval_triggers__act(Vlinear_feedback_shift_register___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vlinear_feedback_shift_register___024root___dump_triggers__act(Vlinear_feedback_shift_register___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vlinear_feedback_shift_register___024root___dump_triggers__nba(Vlinear_feedback_shift_register___024root* vlSelf);
#endif  // VL_DEBUG

void Vlinear_feedback_shift_register___024root___eval(Vlinear_feedback_shift_register___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlinear_feedback_shift_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlinear_feedback_shift_register___024root___eval\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
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
            Vlinear_feedback_shift_register___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vlinear_feedback_shift_register___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("vsrc/linear_feedback_shift_register.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vlinear_feedback_shift_register___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vlinear_feedback_shift_register___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("vsrc/linear_feedback_shift_register.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vlinear_feedback_shift_register___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vlinear_feedback_shift_register___024root___eval_debug_assertions(Vlinear_feedback_shift_register___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlinear_feedback_shift_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlinear_feedback_shift_register___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
