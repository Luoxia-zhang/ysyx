// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vbarrel_shifter.h for the primary calling header

#ifndef VERILATED_VBARREL_SHIFTER___024ROOT_H_
#define VERILATED_VBARREL_SHIFTER___024ROOT_H_  // guard

#include "verilated.h"

class Vbarrel_shifter__Syms;

class Vbarrel_shifter___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(shamt,2,0);
    VL_IN8(din,7,0);
    VL_IN8(LR,0,0);
    VL_IN8(AL,0,0);
    VL_OUT8(dout,7,0);
    CData/*7:0*/ barrel_shifter__DOT__unnamedblk1__DOT__temp;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vbarrel_shifter__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vbarrel_shifter___024root(Vbarrel_shifter__Syms* symsp, const char* v__name);
    ~Vbarrel_shifter___024root();
    VL_UNCOPYABLE(Vbarrel_shifter___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
