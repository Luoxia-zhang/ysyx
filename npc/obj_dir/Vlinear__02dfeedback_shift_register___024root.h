// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vlinear__02dfeedback_shift_register.h for the primary calling header

#ifndef VERILATED_VLINEAR__02DFEEDBACK_SHIFT_REGISTER___024ROOT_H_
#define VERILATED_VLINEAR__02DFEEDBACK_SHIFT_REGISTER___024ROOT_H_  // guard

#include "verilated.h"

class Vlinear__02dfeedback_shift_register__Syms;

class Vlinear__02dfeedback_shift_register___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_OUT8(num,7,0);
    VL_OUT8(num0,3,0);
    VL_OUT8(num1,3,0);
    VL_OUT8(seg0,6,0);
    VL_OUT8(seg1,6,0);
    CData/*0:0*/ linear_feedback_shift_register__DOT__x;
    CData/*0:0*/ __Vtrigrprev__TOP__clk;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vlinear__02dfeedback_shift_register__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vlinear__02dfeedback_shift_register___024root(Vlinear__02dfeedback_shift_register__Syms* symsp, const char* v__name);
    ~Vlinear__02dfeedback_shift_register___024root();
    VL_UNCOPYABLE(Vlinear__02dfeedback_shift_register___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
