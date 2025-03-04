// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Valu4.h for the primary calling header

#include "verilated.h"

#include "Valu4__Syms.h"
#include "Valu4___024root.h"

void Valu4___024root___ctor_var_reset(Valu4___024root* vlSelf);

Valu4___024root::Valu4___024root(Valu4__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Valu4___024root___ctor_var_reset(this);
}

void Valu4___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Valu4___024root::~Valu4___024root() {
}
