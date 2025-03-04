// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vregi.h for the primary calling header

#include "verilated.h"

#include "Vregi___024root.h"

void Vregi___024root___eval_act(Vregi___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregi___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vregi___024root___nba_sequent__TOP__0(Vregi___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregi___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*7:0*/ __Vdly__data_out;
    __Vdly__data_out = 0;
    // Body
    __Vdly__data_out = vlSelf->data_out;
    __Vdly__data_out = 0U;
    __Vdly__data_out = (0xffU & ((4U & (IData)(vlSelf->ctrl))
                                  ? ((2U & (IData)(vlSelf->ctrl))
                                      ? ((1U & (IData)(vlSelf->ctrl))
                                          ? ((0xfeU 
                                              & ((IData)(vlSelf->data_out) 
                                                 << 1U)) 
                                             | (1U 
                                                & ((IData)(vlSelf->data_out) 
                                                   >> 7U)))
                                          : ((0x80U 
                                              & ((IData)(vlSelf->data_out) 
                                                 << 7U)) 
                                             | (0x7fU 
                                                & ((IData)(vlSelf->data_out) 
                                                   >> 1U))))
                                      : ((1U & (IData)(vlSelf->ctrl))
                                          ? (((IData)(vlSelf->serial_in) 
                                              << 7U) 
                                             | (0x7fU 
                                                & ((IData)(vlSelf->data_out) 
                                                   >> 1U)))
                                          : ((0x80U 
                                              & (IData)(vlSelf->data_out)) 
                                             | (0x7fU 
                                                & ((IData)(vlSelf->data_out) 
                                                   >> 1U)))))
                                  : ((2U & (IData)(vlSelf->ctrl))
                                      ? ((1U & (IData)(vlSelf->ctrl))
                                          ? ((IData)(vlSelf->data_out) 
                                             << 1U)
                                          : ((IData)(vlSelf->data_out) 
                                             >> 1U))
                                      : ((1U & (IData)(vlSelf->ctrl))
                                          ? (IData)(vlSelf->data_in)
                                          : 0U))));
    vlSelf->data_out = __Vdly__data_out;
}

void Vregi___024root___eval_nba(Vregi___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregi___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vregi___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vregi___024root___eval_triggers__act(Vregi___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vregi___024root___dump_triggers__act(Vregi___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vregi___024root___dump_triggers__nba(Vregi___024root* vlSelf);
#endif  // VL_DEBUG

void Vregi___024root___eval(Vregi___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregi___024root___eval\n"); );
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
            Vregi___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vregi___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("vsrc/regi.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vregi___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vregi___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("vsrc/regi.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vregi___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vregi___024root___eval_debug_assertions(Vregi___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregi___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->ctrl & 0xf8U))) {
        Verilated::overWidthError("ctrl");}
    if (VL_UNLIKELY((vlSelf->serial_in & 0xfeU))) {
        Verilated::overWidthError("serial_in");}
}
#endif  // VL_DEBUG
