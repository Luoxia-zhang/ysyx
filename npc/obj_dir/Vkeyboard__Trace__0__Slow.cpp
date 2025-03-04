// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vkeyboard__Syms.h"


VL_ATTR_COLD void Vkeyboard___024root__trace_init_sub__TOP__0(Vkeyboard___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vkeyboard__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkeyboard___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+15,"clk", false,-1);
    tracep->declBit(c+16,"clrn", false,-1);
    tracep->declBit(c+17,"ps2_clk", false,-1);
    tracep->declBit(c+18,"ps2_data", false,-1);
    tracep->declBit(c+19,"nextdata_n", false,-1);
    tracep->declBus(c+20,"data", false,-1, 7,0);
    tracep->declBit(c+21,"ready", false,-1);
    tracep->declBit(c+22,"overflow", false,-1);
    tracep->pushNamePrefix("keyboard ");
    tracep->declBit(c+15,"clk", false,-1);
    tracep->declBit(c+16,"clrn", false,-1);
    tracep->declBit(c+17,"ps2_clk", false,-1);
    tracep->declBit(c+18,"ps2_data", false,-1);
    tracep->declBit(c+19,"nextdata_n", false,-1);
    tracep->declBus(c+20,"data", false,-1, 7,0);
    tracep->declBit(c+21,"ready", false,-1);
    tracep->declBit(c+22,"overflow", false,-1);
    tracep->declBus(c+1,"buffer", false,-1, 9,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+2+i*1,"fifo", true,(i+0), 7,0);
    }
    tracep->declBus(c+10,"w_ptr", false,-1, 2,0);
    tracep->declBus(c+11,"r_ptr", false,-1, 2,0);
    tracep->declBus(c+12,"count", false,-1, 3,0);
    tracep->declBus(c+13,"ps2_clk_sync", false,-1, 2,0);
    tracep->declBit(c+14,"sampling", false,-1);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vkeyboard___024root__trace_init_top(Vkeyboard___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vkeyboard__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkeyboard___024root__trace_init_top\n"); );
    // Body
    Vkeyboard___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vkeyboard___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vkeyboard___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vkeyboard___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vkeyboard___024root__trace_register(Vkeyboard___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vkeyboard__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkeyboard___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vkeyboard___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vkeyboard___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vkeyboard___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vkeyboard___024root__trace_full_sub_0(Vkeyboard___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vkeyboard___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkeyboard___024root__trace_full_top_0\n"); );
    // Init
    Vkeyboard___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vkeyboard___024root*>(voidSelf);
    Vkeyboard__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vkeyboard___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vkeyboard___024root__trace_full_sub_0(Vkeyboard___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vkeyboard__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkeyboard___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullSData(oldp+1,(vlSelf->keyboard__DOT__buffer),10);
    bufp->fullCData(oldp+2,(vlSelf->keyboard__DOT__fifo[0]),8);
    bufp->fullCData(oldp+3,(vlSelf->keyboard__DOT__fifo[1]),8);
    bufp->fullCData(oldp+4,(vlSelf->keyboard__DOT__fifo[2]),8);
    bufp->fullCData(oldp+5,(vlSelf->keyboard__DOT__fifo[3]),8);
    bufp->fullCData(oldp+6,(vlSelf->keyboard__DOT__fifo[4]),8);
    bufp->fullCData(oldp+7,(vlSelf->keyboard__DOT__fifo[5]),8);
    bufp->fullCData(oldp+8,(vlSelf->keyboard__DOT__fifo[6]),8);
    bufp->fullCData(oldp+9,(vlSelf->keyboard__DOT__fifo[7]),8);
    bufp->fullCData(oldp+10,(vlSelf->keyboard__DOT__w_ptr),3);
    bufp->fullCData(oldp+11,(vlSelf->keyboard__DOT__r_ptr),3);
    bufp->fullCData(oldp+12,(vlSelf->keyboard__DOT__count),4);
    bufp->fullCData(oldp+13,(vlSelf->keyboard__DOT__ps2_clk_sync),3);
    bufp->fullBit(oldp+14,((IData)((4U == (6U & (IData)(vlSelf->keyboard__DOT__ps2_clk_sync))))));
    bufp->fullBit(oldp+15,(vlSelf->clk));
    bufp->fullBit(oldp+16,(vlSelf->clrn));
    bufp->fullBit(oldp+17,(vlSelf->ps2_clk));
    bufp->fullBit(oldp+18,(vlSelf->ps2_data));
    bufp->fullBit(oldp+19,(vlSelf->nextdata_n));
    bufp->fullCData(oldp+20,(vlSelf->data),8);
    bufp->fullBit(oldp+21,(vlSelf->ready));
    bufp->fullBit(oldp+22,(vlSelf->overflow));
}
