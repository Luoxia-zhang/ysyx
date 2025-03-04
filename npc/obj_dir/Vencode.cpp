// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vencode.h"
#include "Vencode__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vencode::Vencode(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vencode__Syms(contextp(), _vcname__, this)}
    , x{vlSymsp->TOP.x}
    , en{vlSymsp->TOP.en}
    , y{vlSymsp->TOP.y}
    , i{vlSymsp->TOP.i}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vencode::Vencode(const char* _vcname__)
    : Vencode(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vencode::~Vencode() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vencode___024root___eval_debug_assertions(Vencode___024root* vlSelf);
#endif  // VL_DEBUG
void Vencode___024root___eval_static(Vencode___024root* vlSelf);
void Vencode___024root___eval_initial(Vencode___024root* vlSelf);
void Vencode___024root___eval_settle(Vencode___024root* vlSelf);
void Vencode___024root___eval(Vencode___024root* vlSelf);

void Vencode::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vencode::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vencode___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vencode___024root___eval_static(&(vlSymsp->TOP));
        Vencode___024root___eval_initial(&(vlSymsp->TOP));
        Vencode___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vencode___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vencode::eventsPending() { return false; }

uint64_t Vencode::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vencode::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vencode___024root___eval_final(Vencode___024root* vlSelf);

VL_ATTR_COLD void Vencode::final() {
    Vencode___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vencode::hierName() const { return vlSymsp->name(); }
const char* Vencode::modelName() const { return "Vencode"; }
unsigned Vencode::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vencode::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vencode___024root__trace_init_top(Vencode___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vencode___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vencode___024root*>(voidSelf);
    Vencode__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vencode___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vencode___024root__trace_register(Vencode___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vencode::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vencode::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vencode___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
