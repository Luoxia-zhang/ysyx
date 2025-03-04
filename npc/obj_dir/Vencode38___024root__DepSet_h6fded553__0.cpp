// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vencode38.h for the primary calling header

#include "verilated.h"

#include "Vencode38__Syms.h"
#include "Vencode38___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vencode38___024root___dump_triggers__act(Vencode38___024root* vlSelf);
#endif  // VL_DEBUG

void Vencode38___024root___eval_triggers__act(Vencode38___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vencode38__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencode38___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = (((IData)(vlSelf->en) 
                                       != (IData)(vlSelf->__Vtrigrprev__TOP__en)) 
                                      | ((IData)(vlSelf->sw) 
                                         != (IData)(vlSelf->__Vtrigrprev__TOP__sw)));
    vlSelf->__VactTriggered.at(1U) = ((IData)(vlSelf->encode38__DOT____Vcellinp__seg0__b) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__encode38__DOT____Vcellinp__seg0__b));
    vlSelf->__Vtrigrprev__TOP__en = vlSelf->en;
    vlSelf->__Vtrigrprev__TOP__sw = vlSelf->sw;
    vlSelf->__Vtrigrprev__TOP__encode38__DOT____Vcellinp__seg0__b 
        = vlSelf->encode38__DOT____Vcellinp__seg0__b;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.at(0U) = 1U;
        vlSelf->__VactTriggered.at(1U) = 1U;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vencode38___024root___dump_triggers__act(vlSelf);
    }
#endif
}
