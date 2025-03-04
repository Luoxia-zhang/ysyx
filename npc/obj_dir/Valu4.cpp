// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Valu4.h"
#include "Valu4__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Valu4::Valu4(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Valu4__Syms(contextp(), _vcname__, this)}
    , a{vlSymsp->TOP.a}
    , b{vlSymsp->TOP.b}
    , ctr{vlSymsp->TOP.ctr}
    , alu_out{vlSymsp->TOP.alu_out}
    , zero{vlSymsp->TOP.zero}
    , carry{vlSymsp->TOP.carry}
    , overflow{vlSymsp->TOP.overflow}
    , less{vlSymsp->TOP.less}
    , temp{vlSymsp->TOP.temp}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Valu4::Valu4(const char* _vcname__)
    : Valu4(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Valu4::~Valu4() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Valu4___024root___eval_debug_assertions(Valu4___024root* vlSelf);
#endif  // VL_DEBUG
void Valu4___024root___eval_static(Valu4___024root* vlSelf);
void Valu4___024root___eval_initial(Valu4___024root* vlSelf);
void Valu4___024root___eval_settle(Valu4___024root* vlSelf);
void Valu4___024root___eval(Valu4___024root* vlSelf);

void Valu4::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Valu4::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Valu4___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Valu4___024root___eval_static(&(vlSymsp->TOP));
        Valu4___024root___eval_initial(&(vlSymsp->TOP));
        Valu4___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Valu4___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Valu4::eventsPending() { return false; }

uint64_t Valu4::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Valu4::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Valu4___024root___eval_final(Valu4___024root* vlSelf);

VL_ATTR_COLD void Valu4::final() {
    Valu4___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Valu4::hierName() const { return vlSymsp->name(); }
const char* Valu4::modelName() const { return "Valu4"; }
unsigned Valu4::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Valu4::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Valu4___024root__trace_init_top(Valu4___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Valu4___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Valu4___024root*>(voidSelf);
    Valu4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Valu4___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Valu4___024root__trace_register(Valu4___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Valu4::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Valu4::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Valu4___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
