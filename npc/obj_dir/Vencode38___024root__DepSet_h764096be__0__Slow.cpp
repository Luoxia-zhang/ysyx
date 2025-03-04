// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vencode38.h for the primary calling header

#include "verilated.h"

#include "Vencode38___024root.h"

VL_ATTR_COLD void Vencode38___024root___eval_static(Vencode38___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vencode38__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencode38___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vencode38___024root___eval_initial(Vencode38___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vencode38__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencode38___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigrprev__TOP__en = vlSelf->en;
    vlSelf->__Vtrigrprev__TOP__sw = vlSelf->sw;
    vlSelf->__Vtrigrprev__TOP__encode38__DOT____Vcellinp__seg0__b 
        = vlSelf->encode38__DOT____Vcellinp__seg0__b;
}

VL_ATTR_COLD void Vencode38___024root___eval_final(Vencode38___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vencode38__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencode38___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vencode38___024root___eval_triggers__stl(Vencode38___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vencode38___024root___dump_triggers__stl(Vencode38___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vencode38___024root___eval_stl(Vencode38___024root* vlSelf);

VL_ATTR_COLD void Vencode38___024root___eval_settle(Vencode38___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vencode38__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencode38___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vencode38___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vencode38___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("vsrc/encode38.v", 1, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vencode38___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vencode38___024root___dump_triggers__stl(Vencode38___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vencode38__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencode38___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vencode38___024root___stl_sequent__TOP__0(Vencode38___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vencode38__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencode38___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->led_out = vlSelf->encode38__DOT__w;
    vlSelf->encode38__DOT____Vcellinp__seg0__b = vlSelf->encode38__DOT__w;
}

VL_ATTR_COLD void Vencode38___024root___eval_stl(Vencode38___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vencode38__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencode38___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vencode38___024root___stl_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vencode38___024root___dump_triggers__act(Vencode38___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vencode38__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencode38___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([changed] en or [changed] sw)\n");
    }
    if (vlSelf->__VactTriggered.at(1U)) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([changed] encode38.__Vcellinp__seg0__b)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vencode38___024root___dump_triggers__nba(Vencode38___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vencode38__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencode38___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([changed] en or [changed] sw)\n");
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([changed] encode38.__Vcellinp__seg0__b)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vencode38___024root___ctor_var_reset(Vencode38___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vencode38__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencode38___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->sw = VL_RAND_RESET_I(8);
    vlSelf->en = VL_RAND_RESET_I(1);
    vlSelf->led_out = VL_RAND_RESET_I(3);
    vlSelf->indicate = VL_RAND_RESET_I(1);
    vlSelf->seg_out = VL_RAND_RESET_I(7);
    vlSelf->encode38__DOT__w = VL_RAND_RESET_I(3);
    vlSelf->encode38__DOT____Vcellinp__seg0__b = VL_RAND_RESET_I(4);
    vlSelf->encode38__DOT__encdr__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigrprev__TOP__en = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__sw = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigrprev__TOP__encode38__DOT____Vcellinp__seg0__b = VL_RAND_RESET_I(4);
    vlSelf->__VactDidInit = 0;
}
