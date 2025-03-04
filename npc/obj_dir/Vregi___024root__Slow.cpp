// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vregi.h for the primary calling header

#include "verilated.h"

#include "Vregi__Syms.h"
#include "Vregi___024root.h"

void Vregi___024root___ctor_var_reset(Vregi___024root* vlSelf);

Vregi___024root::Vregi___024root(Vregi__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vregi___024root___ctor_var_reset(this);
}

void Vregi___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vregi___024root::~Vregi___024root() {
}
