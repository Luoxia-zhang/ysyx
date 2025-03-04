// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vencode38.h for the primary calling header

#ifndef VERILATED_VENCODE38___024ROOT_H_
#define VERILATED_VENCODE38___024ROOT_H_  // guard

#include "verilated.h"

class Vencode38__Syms;

class Vencode38___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(en,0,0);
    VL_IN8(sw,7,0);
    VL_OUT8(led_out,2,0);
    VL_OUT8(indicate,0,0);
    VL_OUT8(seg_out,6,0);
    CData/*2:0*/ encode38__DOT__w;
    CData/*3:0*/ encode38__DOT____Vcellinp__seg0__b;
    CData/*0:0*/ __Vtrigrprev__TOP__en;
    CData/*7:0*/ __Vtrigrprev__TOP__sw;
    CData/*3:0*/ __Vtrigrprev__TOP__encode38__DOT____Vcellinp__seg0__b;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ encode38__DOT__encdr__DOT__i;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vencode38__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vencode38___024root(Vencode38__Syms* symsp, const char* v__name);
    ~Vencode38___024root();
    VL_UNCOPYABLE(Vencode38___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
