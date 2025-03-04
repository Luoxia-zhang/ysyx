// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vkeyboard.h for the primary calling header

#include "verilated.h"

#include "Vkeyboard___024root.h"

void Vkeyboard___024root___eval_act(Vkeyboard___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vkeyboard__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkeyboard___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vkeyboard___024root___nba_sequent__TOP__0(Vkeyboard___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vkeyboard__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkeyboard___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*2:0*/ __Vdly__keyboard__DOT__ps2_clk_sync;
    __Vdly__keyboard__DOT__ps2_clk_sync = 0;
    CData/*2:0*/ __Vdly__keyboard__DOT__r_ptr;
    __Vdly__keyboard__DOT__r_ptr = 0;
    CData/*2:0*/ __Vdlyvdim0__keyboard__DOT__fifo__v0;
    __Vdlyvdim0__keyboard__DOT__fifo__v0 = 0;
    CData/*7:0*/ __Vdlyvval__keyboard__DOT__fifo__v0;
    __Vdlyvval__keyboard__DOT__fifo__v0 = 0;
    CData/*0:0*/ __Vdlyvset__keyboard__DOT__fifo__v0;
    __Vdlyvset__keyboard__DOT__fifo__v0 = 0;
    CData/*2:0*/ __Vdly__keyboard__DOT__w_ptr;
    __Vdly__keyboard__DOT__w_ptr = 0;
    CData/*3:0*/ __Vdly__keyboard__DOT__count;
    __Vdly__keyboard__DOT__count = 0;
    // Body
    __Vdly__keyboard__DOT__ps2_clk_sync = vlSelf->keyboard__DOT__ps2_clk_sync;
    __Vdly__keyboard__DOT__count = vlSelf->keyboard__DOT__count;
    __Vdly__keyboard__DOT__w_ptr = vlSelf->keyboard__DOT__w_ptr;
    __Vdly__keyboard__DOT__r_ptr = vlSelf->keyboard__DOT__r_ptr;
    __Vdlyvset__keyboard__DOT__fifo__v0 = 0U;
    __Vdly__keyboard__DOT__ps2_clk_sync = ((6U & ((IData)(vlSelf->keyboard__DOT__ps2_clk_sync) 
                                                  << 1U)) 
                                           | (IData)(vlSelf->ps2_clk));
    if (vlSelf->clrn) {
        if (vlSelf->ready) {
            if ((1U & (~ (IData)(vlSelf->nextdata_n)))) {
                __Vdly__keyboard__DOT__r_ptr = (7U 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->keyboard__DOT__r_ptr)));
                if (((IData)(vlSelf->keyboard__DOT__w_ptr) 
                     == (7U & ((IData)(1U) + (IData)(vlSelf->keyboard__DOT__r_ptr))))) {
                    vlSelf->ready = 0U;
                }
            }
        }
        if ((IData)((4U == (6U & (IData)(vlSelf->keyboard__DOT__ps2_clk_sync))))) {
            if ((0xaU == (IData)(vlSelf->keyboard__DOT__count))) {
                if ((((~ (IData)(vlSelf->keyboard__DOT__buffer)) 
                      & (IData)(vlSelf->ps2_data)) 
                     & VL_REDXOR_32((0x1ffU & ((IData)(vlSelf->keyboard__DOT__buffer) 
                                               >> 1U))))) {
                    __Vdlyvval__keyboard__DOT__fifo__v0 
                        = (0xffU & ((IData)(vlSelf->keyboard__DOT__buffer) 
                                    >> 1U));
                    __Vdlyvset__keyboard__DOT__fifo__v0 = 1U;
                    __Vdlyvdim0__keyboard__DOT__fifo__v0 
                        = vlSelf->keyboard__DOT__w_ptr;
                    vlSelf->ready = 1U;
                    __Vdly__keyboard__DOT__w_ptr = 
                        (7U & ((IData)(1U) + (IData)(vlSelf->keyboard__DOT__w_ptr)));
                    vlSelf->overflow = ((IData)(vlSelf->overflow) 
                                        | ((IData)(vlSelf->keyboard__DOT__r_ptr) 
                                           == (7U & 
                                               ((IData)(1U) 
                                                + (IData)(vlSelf->keyboard__DOT__w_ptr)))));
                }
                __Vdly__keyboard__DOT__count = 0U;
            } else {
                vlSelf->keyboard__DOT____Vlvbound_h1a91ade8__0 
                    = vlSelf->ps2_data;
                if ((9U >= (IData)(vlSelf->keyboard__DOT__count))) {
                    vlSelf->keyboard__DOT__buffer = 
                        (((~ ((IData)(1U) << (IData)(vlSelf->keyboard__DOT__count))) 
                          & (IData)(vlSelf->keyboard__DOT__buffer)) 
                         | (0x3ffU & ((IData)(vlSelf->keyboard__DOT____Vlvbound_h1a91ade8__0) 
                                      << (IData)(vlSelf->keyboard__DOT__count))));
                }
                __Vdly__keyboard__DOT__count = (0xfU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->keyboard__DOT__count)));
            }
        }
    } else {
        __Vdly__keyboard__DOT__count = 0U;
        __Vdly__keyboard__DOT__w_ptr = 0U;
        __Vdly__keyboard__DOT__r_ptr = 0U;
        vlSelf->overflow = 0U;
        vlSelf->ready = 0U;
    }
    vlSelf->keyboard__DOT__ps2_clk_sync = __Vdly__keyboard__DOT__ps2_clk_sync;
    vlSelf->keyboard__DOT__w_ptr = __Vdly__keyboard__DOT__w_ptr;
    vlSelf->keyboard__DOT__count = __Vdly__keyboard__DOT__count;
    vlSelf->keyboard__DOT__r_ptr = __Vdly__keyboard__DOT__r_ptr;
    if (__Vdlyvset__keyboard__DOT__fifo__v0) {
        vlSelf->keyboard__DOT__fifo[__Vdlyvdim0__keyboard__DOT__fifo__v0] 
            = __Vdlyvval__keyboard__DOT__fifo__v0;
    }
    vlSelf->data = vlSelf->keyboard__DOT__fifo[vlSelf->keyboard__DOT__r_ptr];
}

void Vkeyboard___024root___eval_nba(Vkeyboard___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vkeyboard__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkeyboard___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vkeyboard___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vkeyboard___024root___eval_triggers__act(Vkeyboard___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vkeyboard___024root___dump_triggers__act(Vkeyboard___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vkeyboard___024root___dump_triggers__nba(Vkeyboard___024root* vlSelf);
#endif  // VL_DEBUG

void Vkeyboard___024root___eval(Vkeyboard___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vkeyboard__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkeyboard___024root___eval\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vkeyboard___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vkeyboard___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("vsrc/keyboard.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vkeyboard___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vkeyboard___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("vsrc/keyboard.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vkeyboard___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vkeyboard___024root___eval_debug_assertions(Vkeyboard___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vkeyboard__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkeyboard___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->clrn & 0xfeU))) {
        Verilated::overWidthError("clrn");}
    if (VL_UNLIKELY((vlSelf->ps2_clk & 0xfeU))) {
        Verilated::overWidthError("ps2_clk");}
    if (VL_UNLIKELY((vlSelf->ps2_data & 0xfeU))) {
        Verilated::overWidthError("ps2_data");}
    if (VL_UNLIKELY((vlSelf->nextdata_n & 0xfeU))) {
        Verilated::overWidthError("nextdata_n");}
}
#endif  // VL_DEBUG
