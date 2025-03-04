// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vlinear_feedback_shift_register__Syms.h"


void Vlinear_feedback_shift_register___024root__trace_chg_sub_0(Vlinear_feedback_shift_register___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vlinear_feedback_shift_register___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlinear_feedback_shift_register___024root__trace_chg_top_0\n"); );
    // Init
    Vlinear_feedback_shift_register___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vlinear_feedback_shift_register___024root*>(voidSelf);
    Vlinear_feedback_shift_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vlinear_feedback_shift_register___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vlinear_feedback_shift_register___024root__trace_chg_sub_0(Vlinear_feedback_shift_register___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vlinear_feedback_shift_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlinear_feedback_shift_register___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelf->clk));
    bufp->chgBit(oldp+1,(vlSelf->rst));
    bufp->chgCData(oldp+2,(vlSelf->num),8);
    bufp->chgCData(oldp+3,(vlSelf->num0),4);
    bufp->chgCData(oldp+4,(vlSelf->num1),4);
    bufp->chgCData(oldp+5,(vlSelf->seg0),7);
    bufp->chgCData(oldp+6,(vlSelf->seg1),7);
    bufp->chgBit(oldp+7,(vlSelf->linear_feedback_shift_register__DOT__x));
}

void Vlinear_feedback_shift_register___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlinear_feedback_shift_register___024root__trace_cleanup\n"); );
    // Init
    Vlinear_feedback_shift_register___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vlinear_feedback_shift_register___024root*>(voidSelf);
    Vlinear_feedback_shift_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
