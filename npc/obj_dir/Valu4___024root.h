// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Valu4.h for the primary calling header

#ifndef VERILATED_VALU4___024ROOT_H_
#define VERILATED_VALU4___024ROOT_H_  // guard

#include "verilated.h"

class Valu4__Syms;

class Valu4___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(a,3,0);
    VL_IN8(b,3,0);
    VL_IN8(ctr,2,0);
    VL_OUT8(alu_out,3,0);
    VL_OUT8(zero,0,0);
    VL_OUT8(carry,0,0);
    VL_OUT8(overflow,0,0);
    VL_OUT8(less,0,0);
    VL_OUT8(temp,3,0);
    CData/*3:0*/ top__DOT__xb;
    CData/*0:0*/ top__DOT____Vconcswap_1_h29161d17__0;
    CData/*3:0*/ top__DOT____Vconcswap_1_h6e063ac6__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Valu4__Syms* const vlSymsp;

    // CONSTRUCTORS
    Valu4___024root(Valu4__Syms* symsp, const char* v__name);
    ~Valu4___024root();
    VL_UNCOPYABLE(Valu4___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
