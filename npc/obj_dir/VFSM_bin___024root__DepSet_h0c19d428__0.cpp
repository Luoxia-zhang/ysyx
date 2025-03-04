// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFSM_bin.h for the primary calling header

#include "verilated.h"

#include "VFSM_bin___024root.h"

VL_INLINE_OPT void VFSM_bin___024root___ico_sequent__TOP__0(VFSM_bin___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFSM_bin__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM_bin___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->FSM_bin__DOT__stateMux__DOT__pair_list[0U] 
        = (0x80U | ((IData)(vlSelf->in) ? 8U : 1U));
    vlSelf->FSM_bin__DOT__stateMux__DOT__pair_list[1U] 
        = (0x70U | ((IData)(vlSelf->in) ? 8U : 1U));
    vlSelf->FSM_bin__DOT__stateMux__DOT__pair_list[2U] 
        = (0x60U | ((IData)(vlSelf->in) ? 7U : 1U));
    vlSelf->FSM_bin__DOT__stateMux__DOT__pair_list[3U] 
        = (0x50U | ((IData)(vlSelf->in) ? 6U : 1U));
    vlSelf->FSM_bin__DOT__stateMux__DOT__pair_list[4U] 
        = (0x40U | ((IData)(vlSelf->in) ? 5U : 4U));
    vlSelf->FSM_bin__DOT__stateMux__DOT__pair_list[5U] 
        = (0x30U | ((IData)(vlSelf->in) ? 5U : 4U));
    vlSelf->FSM_bin__DOT__stateMux__DOT__pair_list[6U] 
        = (0x20U | ((IData)(vlSelf->in) ? 5U : 3U));
    vlSelf->FSM_bin__DOT__stateMux__DOT__pair_list[7U] 
        = (0x10U | ((IData)(vlSelf->in) ? 5U : 2U));
    if (vlSelf->in) {
        vlSelf->FSM_bin__DOT__stateMux__DOT__pair_list[8U] = 5U;
        vlSelf->FSM_bin__DOT__stateMux__DOT__data_list[0U] = 8U;
        vlSelf->FSM_bin__DOT__stateMux__DOT__data_list[1U] = 8U;
        vlSelf->FSM_bin__DOT__stateMux__DOT__data_list[2U] = 7U;
        vlSelf->FSM_bin__DOT__stateMux__DOT__data_list[3U] = 6U;
        vlSelf->FSM_bin__DOT__stateMux__DOT__data_list[4U] = 5U;
        vlSelf->FSM_bin__DOT__stateMux__DOT__data_list[5U] = 5U;
        vlSelf->FSM_bin__DOT__stateMux__DOT__data_list[6U] = 5U;
        vlSelf->FSM_bin__DOT__stateMux__DOT__data_list[7U] = 5U;
        vlSelf->FSM_bin__DOT__stateMux__DOT__data_list[8U] = 5U;
    } else {
        vlSelf->FSM_bin__DOT__stateMux__DOT__pair_list[8U] = 1U;
        vlSelf->FSM_bin__DOT__stateMux__DOT__data_list[0U] = 1U;
        vlSelf->FSM_bin__DOT__stateMux__DOT__data_list[1U] = 1U;
        vlSelf->FSM_bin__DOT__stateMux__DOT__data_list[2U] = 1U;
        vlSelf->FSM_bin__DOT__stateMux__DOT__data_list[3U] = 1U;
        vlSelf->FSM_bin__DOT__stateMux__DOT__data_list[4U] = 4U;
        vlSelf->FSM_bin__DOT__stateMux__DOT__data_list[5U] = 4U;
        vlSelf->FSM_bin__DOT__stateMux__DOT__data_list[6U] = 3U;
        vlSelf->FSM_bin__DOT__stateMux__DOT__data_list[7U] = 2U;
        vlSelf->FSM_bin__DOT__stateMux__DOT__data_list[8U] = 1U;
    }
    vlSelf->FSM_bin__DOT__state_din = 0U;
    if (((IData)(vlSelf->FSM_bin__DOT__state_dout) 
         == vlSelf->FSM_bin__DOT__stateMux__DOT__key_list
         [0U])) {
        vlSelf->FSM_bin__DOT__state_din = vlSelf->FSM_bin__DOT__stateMux__DOT__data_list
            [0U];
    }
    if (((IData)(vlSelf->FSM_bin__DOT__state_dout) 
         == vlSelf->FSM_bin__DOT__stateMux__DOT__key_list
         [1U])) {
        vlSelf->FSM_bin__DOT__state_din = vlSelf->FSM_bin__DOT__stateMux__DOT__data_list
            [1U];
    }
    if (((IData)(vlSelf->FSM_bin__DOT__state_dout) 
         == vlSelf->FSM_bin__DOT__stateMux__DOT__key_list
         [2U])) {
        vlSelf->FSM_bin__DOT__state_din = vlSelf->FSM_bin__DOT__stateMux__DOT__data_list
            [2U];
    }
    if (((IData)(vlSelf->FSM_bin__DOT__state_dout) 
         == vlSelf->FSM_bin__DOT__stateMux__DOT__key_list
         [3U])) {
        vlSelf->FSM_bin__DOT__state_din = vlSelf->FSM_bin__DOT__stateMux__DOT__data_list
            [3U];
    }
    if (((IData)(vlSelf->FSM_bin__DOT__state_dout) 
         == vlSelf->FSM_bin__DOT__stateMux__DOT__key_list
         [4U])) {
        vlSelf->FSM_bin__DOT__state_din = vlSelf->FSM_bin__DOT__stateMux__DOT__data_list
            [4U];
    }
    if (((IData)(vlSelf->FSM_bin__DOT__state_dout) 
         == vlSelf->FSM_bin__DOT__stateMux__DOT__key_list
         [5U])) {
        vlSelf->FSM_bin__DOT__state_din = vlSelf->FSM_bin__DOT__stateMux__DOT__data_list
            [5U];
    }
    if (((IData)(vlSelf->FSM_bin__DOT__state_dout) 
         == vlSelf->FSM_bin__DOT__stateMux__DOT__key_list
         [6U])) {
        vlSelf->FSM_bin__DOT__state_din = vlSelf->FSM_bin__DOT__stateMux__DOT__data_list
            [6U];
    }
    if (((IData)(vlSelf->FSM_bin__DOT__state_dout) 
         == vlSelf->FSM_bin__DOT__stateMux__DOT__key_list
         [7U])) {
        vlSelf->FSM_bin__DOT__state_din = vlSelf->FSM_bin__DOT__stateMux__DOT__data_list
            [7U];
    }
    if (((IData)(vlSelf->FSM_bin__DOT__state_dout) 
         == vlSelf->FSM_bin__DOT__stateMux__DOT__key_list
         [8U])) {
        vlSelf->FSM_bin__DOT__state_din = vlSelf->FSM_bin__DOT__stateMux__DOT__data_list
            [8U];
    }
}

void VFSM_bin___024root___eval_ico(VFSM_bin___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFSM_bin__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM_bin___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        VFSM_bin___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void VFSM_bin___024root___eval_act(VFSM_bin___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFSM_bin__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM_bin___024root___eval_act\n"); );
}

VL_INLINE_OPT void VFSM_bin___024root___nba_sequent__TOP__0(VFSM_bin___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFSM_bin__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM_bin___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->FSM_bin__DOT__state_dout = ((IData)(vlSelf->reset)
                                         ? (IData)(vlSelf->FSM_bin__DOT__state_din)
                                         : 0U);
    vlSelf->out = 0U;
    if (((IData)(vlSelf->FSM_bin__DOT__state_dout) 
         == vlSelf->FSM_bin__DOT__outMux__DOT__key_list
         [0U])) {
        vlSelf->out = vlSelf->FSM_bin__DOT__outMux__DOT__data_list
            [0U];
    }
    if (((IData)(vlSelf->FSM_bin__DOT__state_dout) 
         == vlSelf->FSM_bin__DOT__outMux__DOT__key_list
         [1U])) {
        vlSelf->out = vlSelf->FSM_bin__DOT__outMux__DOT__data_list
            [1U];
    }
    if (((IData)(vlSelf->FSM_bin__DOT__state_dout) 
         == vlSelf->FSM_bin__DOT__outMux__DOT__key_list
         [2U])) {
        vlSelf->out = vlSelf->FSM_bin__DOT__outMux__DOT__data_list
            [2U];
    }
    if (((IData)(vlSelf->FSM_bin__DOT__state_dout) 
         == vlSelf->FSM_bin__DOT__outMux__DOT__key_list
         [3U])) {
        vlSelf->out = vlSelf->FSM_bin__DOT__outMux__DOT__data_list
            [3U];
    }
    if (((IData)(vlSelf->FSM_bin__DOT__state_dout) 
         == vlSelf->FSM_bin__DOT__outMux__DOT__key_list
         [4U])) {
        vlSelf->out = vlSelf->FSM_bin__DOT__outMux__DOT__data_list
            [4U];
    }
    if (((IData)(vlSelf->FSM_bin__DOT__state_dout) 
         == vlSelf->FSM_bin__DOT__outMux__DOT__key_list
         [5U])) {
        vlSelf->out = vlSelf->FSM_bin__DOT__outMux__DOT__data_list
            [5U];
    }
    if (((IData)(vlSelf->FSM_bin__DOT__state_dout) 
         == vlSelf->FSM_bin__DOT__outMux__DOT__key_list
         [6U])) {
        vlSelf->out = vlSelf->FSM_bin__DOT__outMux__DOT__data_list
            [6U];
    }
    if (((IData)(vlSelf->FSM_bin__DOT__state_dout) 
         == vlSelf->FSM_bin__DOT__outMux__DOT__key_list
         [7U])) {
        vlSelf->out = vlSelf->FSM_bin__DOT__outMux__DOT__data_list
            [7U];
    }
    if (((IData)(vlSelf->FSM_bin__DOT__state_dout) 
         == vlSelf->FSM_bin__DOT__outMux__DOT__key_list
         [8U])) {
        vlSelf->out = vlSelf->FSM_bin__DOT__outMux__DOT__data_list
            [8U];
    }
    vlSelf->FSM_bin__DOT__state_din = 0U;
    if (((IData)(vlSelf->FSM_bin__DOT__state_dout) 
         == vlSelf->FSM_bin__DOT__stateMux__DOT__key_list
         [0U])) {
        vlSelf->FSM_bin__DOT__state_din = vlSelf->FSM_bin__DOT__stateMux__DOT__data_list
            [0U];
    }
    if (((IData)(vlSelf->FSM_bin__DOT__state_dout) 
         == vlSelf->FSM_bin__DOT__stateMux__DOT__key_list
         [1U])) {
        vlSelf->FSM_bin__DOT__state_din = vlSelf->FSM_bin__DOT__stateMux__DOT__data_list
            [1U];
    }
    if (((IData)(vlSelf->FSM_bin__DOT__state_dout) 
         == vlSelf->FSM_bin__DOT__stateMux__DOT__key_list
         [2U])) {
        vlSelf->FSM_bin__DOT__state_din = vlSelf->FSM_bin__DOT__stateMux__DOT__data_list
            [2U];
    }
    if (((IData)(vlSelf->FSM_bin__DOT__state_dout) 
         == vlSelf->FSM_bin__DOT__stateMux__DOT__key_list
         [3U])) {
        vlSelf->FSM_bin__DOT__state_din = vlSelf->FSM_bin__DOT__stateMux__DOT__data_list
            [3U];
    }
    if (((IData)(vlSelf->FSM_bin__DOT__state_dout) 
         == vlSelf->FSM_bin__DOT__stateMux__DOT__key_list
         [4U])) {
        vlSelf->FSM_bin__DOT__state_din = vlSelf->FSM_bin__DOT__stateMux__DOT__data_list
            [4U];
    }
    if (((IData)(vlSelf->FSM_bin__DOT__state_dout) 
         == vlSelf->FSM_bin__DOT__stateMux__DOT__key_list
         [5U])) {
        vlSelf->FSM_bin__DOT__state_din = vlSelf->FSM_bin__DOT__stateMux__DOT__data_list
            [5U];
    }
    if (((IData)(vlSelf->FSM_bin__DOT__state_dout) 
         == vlSelf->FSM_bin__DOT__stateMux__DOT__key_list
         [6U])) {
        vlSelf->FSM_bin__DOT__state_din = vlSelf->FSM_bin__DOT__stateMux__DOT__data_list
            [6U];
    }
    if (((IData)(vlSelf->FSM_bin__DOT__state_dout) 
         == vlSelf->FSM_bin__DOT__stateMux__DOT__key_list
         [7U])) {
        vlSelf->FSM_bin__DOT__state_din = vlSelf->FSM_bin__DOT__stateMux__DOT__data_list
            [7U];
    }
    if (((IData)(vlSelf->FSM_bin__DOT__state_dout) 
         == vlSelf->FSM_bin__DOT__stateMux__DOT__key_list
         [8U])) {
        vlSelf->FSM_bin__DOT__state_din = vlSelf->FSM_bin__DOT__stateMux__DOT__data_list
            [8U];
    }
}

void VFSM_bin___024root___eval_nba(VFSM_bin___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFSM_bin__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM_bin___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VFSM_bin___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void VFSM_bin___024root___eval_triggers__ico(VFSM_bin___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VFSM_bin___024root___dump_triggers__ico(VFSM_bin___024root* vlSelf);
#endif  // VL_DEBUG
void VFSM_bin___024root___eval_triggers__act(VFSM_bin___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VFSM_bin___024root___dump_triggers__act(VFSM_bin___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VFSM_bin___024root___dump_triggers__nba(VFSM_bin___024root* vlSelf);
#endif  // VL_DEBUG

void VFSM_bin___024root___eval(VFSM_bin___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFSM_bin__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM_bin___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        VFSM_bin___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                VFSM_bin___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("vsrc/FSM_bin.v", 1, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            VFSM_bin___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            VFSM_bin___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    VFSM_bin___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("vsrc/FSM_bin.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                VFSM_bin___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                VFSM_bin___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("vsrc/FSM_bin.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            VFSM_bin___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void VFSM_bin___024root___eval_debug_assertions(VFSM_bin___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFSM_bin__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM_bin___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->in & 0xfeU))) {
        Verilated::overWidthError("in");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
