// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vkeyboard.h for the primary calling header

#ifndef VERILATED_VKEYBOARD___024ROOT_H_
#define VERILATED_VKEYBOARD___024ROOT_H_  // guard

#include "verilated.h"

class Vkeyboard__Syms;

class Vkeyboard___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(clrn,0,0);
    VL_IN8(ps2_clk,0,0);
    VL_IN8(ps2_data,0,0);
    VL_OUT8(data,7,0);
    VL_OUT8(ready,0,0);
    VL_IN8(nextdata_n,0,0);
    VL_OUT8(overflow,0,0);
    CData/*2:0*/ keyboard__DOT__w_ptr;
    CData/*2:0*/ keyboard__DOT__r_ptr;
    CData/*3:0*/ keyboard__DOT__count;
    CData/*2:0*/ keyboard__DOT__ps2_clk_sync;
    CData/*0:0*/ keyboard__DOT____Vlvbound_h1a91ade8__0;
    CData/*0:0*/ __Vtrigrprev__TOP__clk;
    CData/*0:0*/ __VactContinue;
    SData/*9:0*/ keyboard__DOT__buffer;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*7:0*/, 8> keyboard__DOT__fifo;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vkeyboard__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vkeyboard___024root(Vkeyboard__Syms* symsp, const char* v__name);
    ~Vkeyboard___024root();
    VL_UNCOPYABLE(Vkeyboard___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
