// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vbarrel_shifter__Syms.h"


VL_ATTR_COLD void Vbarrel_shifter___024root__trace_init_sub__TOP__0(Vbarrel_shifter___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vbarrel_shifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbarrel_shifter___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1,"shamt", false,-1, 2,0);
    tracep->declBus(c+2,"din", false,-1, 7,0);
    tracep->declBit(c+3,"LR", false,-1);
    tracep->declBit(c+4,"AL", false,-1);
    tracep->declBus(c+5,"dout", false,-1, 7,0);
    tracep->pushNamePrefix("barrel_shifter ");
    tracep->declBus(c+1,"shamt", false,-1, 2,0);
    tracep->declBus(c+2,"din", false,-1, 7,0);
    tracep->declBit(c+3,"LR", false,-1);
    tracep->declBit(c+4,"AL", false,-1);
    tracep->declBus(c+5,"dout", false,-1, 7,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+6,"temp", false,-1, 7,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vbarrel_shifter___024root__trace_init_top(Vbarrel_shifter___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vbarrel_shifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbarrel_shifter___024root__trace_init_top\n"); );
    // Body
    Vbarrel_shifter___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vbarrel_shifter___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vbarrel_shifter___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vbarrel_shifter___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vbarrel_shifter___024root__trace_register(Vbarrel_shifter___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vbarrel_shifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbarrel_shifter___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vbarrel_shifter___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vbarrel_shifter___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vbarrel_shifter___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vbarrel_shifter___024root__trace_full_sub_0(Vbarrel_shifter___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vbarrel_shifter___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbarrel_shifter___024root__trace_full_top_0\n"); );
    // Init
    Vbarrel_shifter___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vbarrel_shifter___024root*>(voidSelf);
    Vbarrel_shifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vbarrel_shifter___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vbarrel_shifter___024root__trace_full_sub_0(Vbarrel_shifter___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vbarrel_shifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbarrel_shifter___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->shamt),3);
    bufp->fullCData(oldp+2,(vlSelf->din),8);
    bufp->fullBit(oldp+3,(vlSelf->LR));
    bufp->fullBit(oldp+4,(vlSelf->AL));
    bufp->fullCData(oldp+5,(vlSelf->dout),8);
    bufp->fullCData(oldp+6,(vlSelf->barrel_shifter__DOT__unnamedblk1__DOT__temp),8);
}
