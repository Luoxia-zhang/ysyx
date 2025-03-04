// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vlinear__02dfeedback_shift_register.h for the primary calling header

#include "verilated.h"

#include "Vlinear__02dfeedback_shift_register___024root.h"

VL_ATTR_COLD void Vlinear__02dfeedback_shift_register___024root___eval_static(Vlinear__02dfeedback_shift_register___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlinear__02dfeedback_shift_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlinear__02dfeedback_shift_register___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vlinear__02dfeedback_shift_register___024root___eval_initial(Vlinear__02dfeedback_shift_register___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlinear__02dfeedback_shift_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlinear__02dfeedback_shift_register___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vlinear__02dfeedback_shift_register___024root___eval_final(Vlinear__02dfeedback_shift_register___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlinear__02dfeedback_shift_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlinear__02dfeedback_shift_register___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vlinear__02dfeedback_shift_register___024root___eval_triggers__stl(Vlinear__02dfeedback_shift_register___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vlinear__02dfeedback_shift_register___024root___dump_triggers__stl(Vlinear__02dfeedback_shift_register___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vlinear__02dfeedback_shift_register___024root___eval_stl(Vlinear__02dfeedback_shift_register___024root* vlSelf);

VL_ATTR_COLD void Vlinear__02dfeedback_shift_register___024root___eval_settle(Vlinear__02dfeedback_shift_register___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlinear__02dfeedback_shift_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlinear__02dfeedback_shift_register___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vlinear__02dfeedback_shift_register___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vlinear__02dfeedback_shift_register___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("vsrc/linear-feedback_shift_register.v", 1, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vlinear__02dfeedback_shift_register___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vlinear__02dfeedback_shift_register___024root___dump_triggers__stl(Vlinear__02dfeedback_shift_register___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlinear__02dfeedback_shift_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlinear__02dfeedback_shift_register___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

extern const VlUnpacked<CData/*6:0*/, 16> Vlinear__02dfeedback_shift_register__ConstPool__TABLE_h8aed404b_0;

VL_ATTR_COLD void Vlinear__02dfeedback_shift_register___024root___stl_sequent__TOP__0(Vlinear__02dfeedback_shift_register___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlinear__02dfeedback_shift_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlinear__02dfeedback_shift_register___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*3:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelf->num0 = (0xfU & (IData)(vlSelf->num));
    vlSelf->num1 = (0xfU & ((IData)(vlSelf->num) >> 4U));
    __Vtableidx1 = vlSelf->num0;
    vlSelf->seg0 = Vlinear__02dfeedback_shift_register__ConstPool__TABLE_h8aed404b_0
        [__Vtableidx1];
    __Vtableidx2 = vlSelf->num1;
    vlSelf->seg1 = Vlinear__02dfeedback_shift_register__ConstPool__TABLE_h8aed404b_0
        [__Vtableidx2];
}

VL_ATTR_COLD void Vlinear__02dfeedback_shift_register___024root___eval_stl(Vlinear__02dfeedback_shift_register___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlinear__02dfeedback_shift_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlinear__02dfeedback_shift_register___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vlinear__02dfeedback_shift_register___024root___stl_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vlinear__02dfeedback_shift_register___024root___dump_triggers__act(Vlinear__02dfeedback_shift_register___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlinear__02dfeedback_shift_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlinear__02dfeedback_shift_register___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vlinear__02dfeedback_shift_register___024root___dump_triggers__nba(Vlinear__02dfeedback_shift_register___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlinear__02dfeedback_shift_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlinear__02dfeedback_shift_register___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vlinear__02dfeedback_shift_register___024root___ctor_var_reset(Vlinear__02dfeedback_shift_register___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlinear__02dfeedback_shift_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlinear__02dfeedback_shift_register___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->num = VL_RAND_RESET_I(8);
    vlSelf->num0 = VL_RAND_RESET_I(4);
    vlSelf->num1 = VL_RAND_RESET_I(4);
    vlSelf->seg0 = VL_RAND_RESET_I(7);
    vlSelf->seg1 = VL_RAND_RESET_I(7);
    vlSelf->linear_feedback_shift_register__DOT__x = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__clk = VL_RAND_RESET_I(1);
}
