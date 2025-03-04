// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vregi.h"
#include "Vregi__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vregi::Vregi(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vregi__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , ctrl{vlSymsp->TOP.ctrl}
    , data_in{vlSymsp->TOP.data_in}
    , serial_in{vlSymsp->TOP.serial_in}
    , data_out{vlSymsp->TOP.data_out}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vregi::Vregi(const char* _vcname__)
    : Vregi(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vregi::~Vregi() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vregi___024root___eval_debug_assertions(Vregi___024root* vlSelf);
#endif  // VL_DEBUG
void Vregi___024root___eval_static(Vregi___024root* vlSelf);
void Vregi___024root___eval_initial(Vregi___024root* vlSelf);
void Vregi___024root___eval_settle(Vregi___024root* vlSelf);
void Vregi___024root___eval(Vregi___024root* vlSelf);

void Vregi::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vregi::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vregi___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vregi___024root___eval_static(&(vlSymsp->TOP));
        Vregi___024root___eval_initial(&(vlSymsp->TOP));
        Vregi___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vregi___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vregi::eventsPending() { return false; }

uint64_t Vregi::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vregi::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vregi___024root___eval_final(Vregi___024root* vlSelf);

VL_ATTR_COLD void Vregi::final() {
    Vregi___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vregi::hierName() const { return vlSymsp->name(); }
const char* Vregi::modelName() const { return "Vregi"; }
unsigned Vregi::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vregi::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vregi___024root__trace_init_top(Vregi___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vregi___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vregi___024root*>(voidSelf);
    Vregi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vregi___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vregi___024root__trace_register(Vregi___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vregi::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vregi::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vregi___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
