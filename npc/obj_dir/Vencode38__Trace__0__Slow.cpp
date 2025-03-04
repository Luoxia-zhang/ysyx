// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vencode38__Syms.h"


VL_ATTR_COLD void Vencode38___024root__trace_init_sub__TOP__0(Vencode38___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vencode38__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencode38___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1,"sw", false,-1, 7,0);
    tracep->declBit(c+2,"en", false,-1);
    tracep->declBus(c+3,"led_out", false,-1, 2,0);
    tracep->declBit(c+4,"indicate", false,-1);
    tracep->declBus(c+5,"seg_out", false,-1, 6,0);
    tracep->pushNamePrefix("encode38 ");
    tracep->declBus(c+1,"sw", false,-1, 7,0);
    tracep->declBit(c+2,"en", false,-1);
    tracep->declBus(c+3,"led_out", false,-1, 2,0);
    tracep->declBit(c+4,"indicate", false,-1);
    tracep->declBus(c+5,"seg_out", false,-1, 6,0);
    tracep->declBus(c+6,"w", false,-1, 2,0);
    tracep->pushNamePrefix("encdr ");
    tracep->declBus(c+1,"x", false,-1, 7,0);
    tracep->declBit(c+2,"en", false,-1);
    tracep->declBus(c+6,"y", false,-1, 2,0);
    tracep->declBit(c+4,"indicate", false,-1);
    tracep->declBus(c+7,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("seg0 ");
    tracep->declBus(c+8,"b", false,-1, 3,0);
    tracep->declBus(c+5,"h", false,-1, 6,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vencode38___024root__trace_init_top(Vencode38___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vencode38__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencode38___024root__trace_init_top\n"); );
    // Body
    Vencode38___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vencode38___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vencode38___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vencode38___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vencode38___024root__trace_register(Vencode38___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vencode38__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencode38___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vencode38___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vencode38___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vencode38___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vencode38___024root__trace_full_sub_0(Vencode38___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vencode38___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencode38___024root__trace_full_top_0\n"); );
    // Init
    Vencode38___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vencode38___024root*>(voidSelf);
    Vencode38__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vencode38___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vencode38___024root__trace_full_sub_0(Vencode38___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vencode38__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencode38___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->sw),8);
    bufp->fullBit(oldp+2,(vlSelf->en));
    bufp->fullCData(oldp+3,(vlSelf->led_out),3);
    bufp->fullBit(oldp+4,(vlSelf->indicate));
    bufp->fullCData(oldp+5,(vlSelf->seg_out),7);
    bufp->fullCData(oldp+6,(vlSelf->encode38__DOT__w),3);
    bufp->fullIData(oldp+7,(vlSelf->encode38__DOT__encdr__DOT__i),32);
    bufp->fullCData(oldp+8,(vlSelf->encode38__DOT____Vcellinp__seg0__b),4);
}
