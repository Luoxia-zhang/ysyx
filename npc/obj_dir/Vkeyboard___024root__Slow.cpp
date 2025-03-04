// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vkeyboard.h for the primary calling header

#include "verilated.h"

#include "Vkeyboard__Syms.h"
#include "Vkeyboard___024root.h"

void Vkeyboard___024root___ctor_var_reset(Vkeyboard___024root* vlSelf);

Vkeyboard___024root::Vkeyboard___024root(Vkeyboard__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vkeyboard___024root___ctor_var_reset(this);
}

void Vkeyboard___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vkeyboard___024root::~Vkeyboard___024root() {
}
