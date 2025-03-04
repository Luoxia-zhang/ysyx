// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vlinear__02dfeedback_shift_register.h"
#include "Vlinear__02dfeedback_shift_register__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vlinear__02dfeedback_shift_register::Vlinear__02dfeedback_shift_register(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vlinear__02dfeedback_shift_register__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , num{vlSymsp->TOP.num}
    , num0{vlSymsp->TOP.num0}
    , num1{vlSymsp->TOP.num1}
    , seg0{vlSymsp->TOP.seg0}
    , seg1{vlSymsp->TOP.seg1}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vlinear__02dfeedback_shift_register::Vlinear__02dfeedback_shift_register(const char* _vcname__)
    : Vlinear__02dfeedback_shift_register(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vlinear__02dfeedback_shift_register::~Vlinear__02dfeedback_shift_register() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vlinear__02dfeedback_shift_register___024root___eval_debug_assertions(Vlinear__02dfeedback_shift_register___024root* vlSelf);
#endif  // VL_DEBUG
void Vlinear__02dfeedback_shift_register___024root___eval_static(Vlinear__02dfeedback_shift_register___024root* vlSelf);
void Vlinear__02dfeedback_shift_register___024root___eval_initial(Vlinear__02dfeedback_shift_register___024root* vlSelf);
void Vlinear__02dfeedback_shift_register___024root___eval_settle(Vlinear__02dfeedback_shift_register___024root* vlSelf);
void Vlinear__02dfeedback_shift_register___024root___eval(Vlinear__02dfeedback_shift_register___024root* vlSelf);

void Vlinear__02dfeedback_shift_register::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vlinear__02dfeedback_shift_register::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vlinear__02dfeedback_shift_register___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vlinear__02dfeedback_shift_register___024root___eval_static(&(vlSymsp->TOP));
        Vlinear__02dfeedback_shift_register___024root___eval_initial(&(vlSymsp->TOP));
        Vlinear__02dfeedback_shift_register___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vlinear__02dfeedback_shift_register___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vlinear__02dfeedback_shift_register::eventsPending() { return false; }

uint64_t Vlinear__02dfeedback_shift_register::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vlinear__02dfeedback_shift_register::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vlinear__02dfeedback_shift_register___024root___eval_final(Vlinear__02dfeedback_shift_register___024root* vlSelf);

VL_ATTR_COLD void Vlinear__02dfeedback_shift_register::final() {
    Vlinear__02dfeedback_shift_register___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vlinear__02dfeedback_shift_register::hierName() const { return vlSymsp->name(); }
const char* Vlinear__02dfeedback_shift_register::modelName() const { return "Vlinear__02dfeedback_shift_register"; }
unsigned Vlinear__02dfeedback_shift_register::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vlinear__02dfeedback_shift_register::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vlinear__02dfeedback_shift_register___024root__trace_init_top(Vlinear__02dfeedback_shift_register___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vlinear__02dfeedback_shift_register___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vlinear__02dfeedback_shift_register___024root*>(voidSelf);
    Vlinear__02dfeedback_shift_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vlinear__02dfeedback_shift_register___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vlinear__02dfeedback_shift_register___024root__trace_register(Vlinear__02dfeedback_shift_register___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vlinear__02dfeedback_shift_register::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vlinear__02dfeedback_shift_register::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vlinear__02dfeedback_shift_register___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
