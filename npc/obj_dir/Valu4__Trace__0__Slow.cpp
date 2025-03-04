// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Valu4__Syms.h"


VL_ATTR_COLD void Valu4___024root__trace_init_sub__TOP__0(Valu4___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Valu4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu4___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1,"a", false,-1, 3,0);
    tracep->declBus(c+2,"b", false,-1, 3,0);
    tracep->declBus(c+3,"ctr", false,-1, 2,0);
    tracep->declBus(c+4,"alu_out", false,-1, 3,0);
    tracep->declBit(c+5,"zero", false,-1);
    tracep->declBit(c+6,"carry", false,-1);
    tracep->declBit(c+7,"overflow", false,-1);
    tracep->declBit(c+8,"less", false,-1);
    tracep->declBus(c+9,"temp", false,-1, 3,0);
    tracep->pushNamePrefix("top ");
    tracep->declBus(c+1,"a", false,-1, 3,0);
    tracep->declBus(c+2,"b", false,-1, 3,0);
    tracep->declBus(c+3,"ctr", false,-1, 2,0);
    tracep->declBus(c+4,"alu_out", false,-1, 3,0);
    tracep->declBit(c+5,"zero", false,-1);
    tracep->declBit(c+6,"carry", false,-1);
    tracep->declBit(c+7,"overflow", false,-1);
    tracep->declBit(c+8,"less", false,-1);
    tracep->declBus(c+9,"temp", false,-1, 3,0);
    tracep->declBus(c+10,"xb", false,-1, 3,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Valu4___024root__trace_init_top(Valu4___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Valu4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu4___024root__trace_init_top\n"); );
    // Body
    Valu4___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Valu4___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Valu4___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Valu4___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Valu4___024root__trace_register(Valu4___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Valu4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu4___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Valu4___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Valu4___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Valu4___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Valu4___024root__trace_full_sub_0(Valu4___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Valu4___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu4___024root__trace_full_top_0\n"); );
    // Init
    Valu4___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Valu4___024root*>(voidSelf);
    Valu4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Valu4___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Valu4___024root__trace_full_sub_0(Valu4___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Valu4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu4___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->a),4);
    bufp->fullCData(oldp+2,(vlSelf->b),4);
    bufp->fullCData(oldp+3,(vlSelf->ctr),3);
    bufp->fullCData(oldp+4,(vlSelf->alu_out),4);
    bufp->fullBit(oldp+5,(vlSelf->zero));
    bufp->fullBit(oldp+6,(vlSelf->carry));
    bufp->fullBit(oldp+7,(vlSelf->overflow));
    bufp->fullBit(oldp+8,(vlSelf->less));
    bufp->fullCData(oldp+9,(vlSelf->temp),4);
    bufp->fullCData(oldp+10,(vlSelf->top__DOT__xb),4);
}
