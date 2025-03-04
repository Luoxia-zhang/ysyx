// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Valu4.h for the primary calling header

#include "verilated.h"

#include "Valu4__Syms.h"
#include "Valu4___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Valu4___024root___dump_triggers__ico(Valu4___024root* vlSelf);
#endif  // VL_DEBUG

void Valu4___024root___eval_triggers__ico(Valu4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu4___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.at(0U) = (0U == vlSelf->__VicoIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Valu4___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Valu4___024root___dump_triggers__act(Valu4___024root* vlSelf);
#endif  // VL_DEBUG

void Valu4___024root___eval_triggers__act(Valu4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu4___024root___eval_triggers__act\n"); );
    // Body
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Valu4___024root___dump_triggers__act(vlSelf);
    }
#endif
}
