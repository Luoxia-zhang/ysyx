// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vencode38__Syms.h"


void Vencode38___024root__trace_chg_sub_0(Vencode38___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vencode38___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencode38___024root__trace_chg_top_0\n"); );
    // Init
    Vencode38___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vencode38___024root*>(voidSelf);
    Vencode38__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vencode38___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vencode38___024root__trace_chg_sub_0(Vencode38___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vencode38__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencode38___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgCData(oldp+0,(vlSelf->sw),8);
    bufp->chgBit(oldp+1,(vlSelf->en));
    bufp->chgCData(oldp+2,(vlSelf->led_out),3);
    bufp->chgBit(oldp+3,(vlSelf->indicate));
    bufp->chgCData(oldp+4,(vlSelf->seg_out),7);
    bufp->chgCData(oldp+5,(vlSelf->encode38__DOT__w),3);
    bufp->chgIData(oldp+6,(vlSelf->encode38__DOT__encdr__DOT__i),32);
    bufp->chgCData(oldp+7,(vlSelf->encode38__DOT____Vcellinp__seg0__b),4);
}

void Vencode38___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencode38___024root__trace_cleanup\n"); );
    // Init
    Vencode38___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vencode38___024root*>(voidSelf);
    Vencode38__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
