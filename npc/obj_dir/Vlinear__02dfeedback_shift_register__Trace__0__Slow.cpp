// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vlinear__02dfeedback_shift_register__Syms.h"


VL_ATTR_COLD void Vlinear__02dfeedback_shift_register___024root__trace_init_sub__TOP__0(Vlinear__02dfeedback_shift_register___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vlinear__02dfeedback_shift_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlinear__02dfeedback_shift_register___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"rst", false,-1);
    tracep->declBus(c+3,"num", false,-1, 7,0);
    tracep->declBus(c+4,"num0", false,-1, 3,0);
    tracep->declBus(c+5,"num1", false,-1, 3,0);
    tracep->declBus(c+6,"seg0", false,-1, 6,0);
    tracep->declBus(c+7,"seg1", false,-1, 6,0);
    tracep->pushNamePrefix("linear_feedback_shift_register ");
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"rst", false,-1);
    tracep->declBus(c+3,"num", false,-1, 7,0);
    tracep->declBus(c+4,"num0", false,-1, 3,0);
    tracep->declBus(c+5,"num1", false,-1, 3,0);
    tracep->declBus(c+6,"seg0", false,-1, 6,0);
    tracep->declBus(c+7,"seg1", false,-1, 6,0);
    tracep->declBit(c+8,"x", false,-1);
    tracep->pushNamePrefix("my_seg ");
    tracep->declBus(c+4,"num", false,-1, 3,0);
    tracep->declBus(c+6,"segs", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("your_seg ");
    tracep->declBus(c+5,"num", false,-1, 3,0);
    tracep->declBus(c+7,"segs", false,-1, 6,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vlinear__02dfeedback_shift_register___024root__trace_init_top(Vlinear__02dfeedback_shift_register___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vlinear__02dfeedback_shift_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlinear__02dfeedback_shift_register___024root__trace_init_top\n"); );
    // Body
    Vlinear__02dfeedback_shift_register___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vlinear__02dfeedback_shift_register___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vlinear__02dfeedback_shift_register___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vlinear__02dfeedback_shift_register___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vlinear__02dfeedback_shift_register___024root__trace_register(Vlinear__02dfeedback_shift_register___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vlinear__02dfeedback_shift_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlinear__02dfeedback_shift_register___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vlinear__02dfeedback_shift_register___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vlinear__02dfeedback_shift_register___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vlinear__02dfeedback_shift_register___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vlinear__02dfeedback_shift_register___024root__trace_full_sub_0(Vlinear__02dfeedback_shift_register___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vlinear__02dfeedback_shift_register___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlinear__02dfeedback_shift_register___024root__trace_full_top_0\n"); );
    // Init
    Vlinear__02dfeedback_shift_register___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vlinear__02dfeedback_shift_register___024root*>(voidSelf);
    Vlinear__02dfeedback_shift_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vlinear__02dfeedback_shift_register___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vlinear__02dfeedback_shift_register___024root__trace_full_sub_0(Vlinear__02dfeedback_shift_register___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vlinear__02dfeedback_shift_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlinear__02dfeedback_shift_register___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->clk));
    bufp->fullBit(oldp+2,(vlSelf->rst));
    bufp->fullCData(oldp+3,(vlSelf->num),8);
    bufp->fullCData(oldp+4,(vlSelf->num0),4);
    bufp->fullCData(oldp+5,(vlSelf->num1),4);
    bufp->fullCData(oldp+6,(vlSelf->seg0),7);
    bufp->fullCData(oldp+7,(vlSelf->seg1),7);
    bufp->fullBit(oldp+8,(vlSelf->linear_feedback_shift_register__DOT__x));
}
