// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vlinear_feedback_shift_register.h for the primary calling header

#include "verilated.h"

#include "Vlinear_feedback_shift_register__Syms.h"
#include "Vlinear_feedback_shift_register___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vlinear_feedback_shift_register___024root___dump_triggers__stl(Vlinear_feedback_shift_register___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vlinear_feedback_shift_register___024root___eval_triggers__stl(Vlinear_feedback_shift_register___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlinear_feedback_shift_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlinear_feedback_shift_register___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.at(0U) = (0U == vlSelf->__VstlIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vlinear_feedback_shift_register___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
