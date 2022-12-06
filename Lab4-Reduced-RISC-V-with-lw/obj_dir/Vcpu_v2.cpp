// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vcpu_v2.h"
#include "Vcpu_v2__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vcpu_v2::Vcpu_v2(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vcpu_v2__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , a0{vlSymsp->TOP.a0}
    , a1{vlSymsp->TOP.a1}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vcpu_v2::Vcpu_v2(const char* _vcname__)
    : Vcpu_v2(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vcpu_v2::~Vcpu_v2() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vcpu_v2___024root___eval_initial(Vcpu_v2___024root* vlSelf);
void Vcpu_v2___024root___eval_settle(Vcpu_v2___024root* vlSelf);
void Vcpu_v2___024root___eval(Vcpu_v2___024root* vlSelf);
#ifdef VL_DEBUG
void Vcpu_v2___024root___eval_debug_assertions(Vcpu_v2___024root* vlSelf);
#endif  // VL_DEBUG
void Vcpu_v2___024root___final(Vcpu_v2___024root* vlSelf);

static void _eval_initial_loop(Vcpu_v2__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vcpu_v2___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vcpu_v2___024root___eval_settle(&(vlSymsp->TOP));
        Vcpu_v2___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vcpu_v2::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vcpu_v2::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vcpu_v2___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vcpu_v2___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* Vcpu_v2::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vcpu_v2::final() {
    Vcpu_v2___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vcpu_v2::hierName() const { return vlSymsp->name(); }
const char* Vcpu_v2::modelName() const { return "Vcpu_v2"; }
unsigned Vcpu_v2::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vcpu_v2::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vcpu_v2___024root__trace_init_top(Vcpu_v2___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vcpu_v2___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcpu_v2___024root*>(voidSelf);
    Vcpu_v2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vcpu_v2___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vcpu_v2___024root__trace_register(Vcpu_v2___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vcpu_v2::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vcpu_v2___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
