// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu_v2.h for the primary calling header

#include "verilated.h"

#include "Vcpu_v2__Syms.h"
#include "Vcpu_v2___024root.h"

void Vcpu_v2___024root___ctor_var_reset(Vcpu_v2___024root* vlSelf);

Vcpu_v2___024root::Vcpu_v2___024root(Vcpu_v2__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vcpu_v2___024root___ctor_var_reset(this);
}

void Vcpu_v2___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vcpu_v2___024root::~Vcpu_v2___024root() {
}
