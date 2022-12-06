// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcpu_v2.h for the primary calling header

#ifndef VERILATED_VCPU_V2___024ROOT_H_
#define VERILATED_VCPU_V2___024ROOT_H_  // guard

#include "verilated.h"

class Vcpu_v2__Syms;

class Vcpu_v2___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    CData/*0:0*/ cpu_v2__DOT__RegWrite;
    CData/*0:0*/ cpu_v2__DOT__ALUctrl;
    CData/*0:0*/ cpu_v2__DOT__ALUsrc;
    CData/*0:0*/ cpu_v2__DOT__ImmSrc;
    CData/*0:0*/ cpu_v2__DOT__PCsrc;
    CData/*0:0*/ cpu_v2__DOT__MemWrite;
    CData/*0:0*/ cpu_v2__DOT__ResultSrc;
    CData/*0:0*/ __Vclklast__TOP__clk;
    VL_OUT(a0,31,0);
    VL_OUT(a1,31,0);
    IData/*31:0*/ cpu_v2__DOT__instr;
    IData/*31:0*/ cpu_v2__DOT__ImmOp;
    IData/*31:0*/ cpu_v2__DOT__ALUout;
    IData/*31:0*/ cpu_v2__DOT__PC_Reg__DOT__next_pc;
    IData/*31:0*/ cpu_v2__DOT__PC_Reg__DOT__tmp_pc;
    IData/*31:0*/ cpu_v2__DOT__reg_file_alu__DOT__RD1;
    IData/*31:0*/ cpu_v2__DOT__reg_file_alu__DOT__RD2;
    IData/*31:0*/ cpu_v2__DOT__reg_file_alu__DOT__ALUop2;
    VlUnpacked<CData/*7:0*/, 1024> cpu_v2__DOT__instr_mem__DOT__rom_array;
    VlUnpacked<IData/*31:0*/, 32> cpu_v2__DOT__reg_file_alu__DOT__REG__DOT__register;
    VlUnpacked<CData/*7:0*/, 256> cpu_v2__DOT__data_memory__DOT__sine_data;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vcpu_v2__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcpu_v2___024root(Vcpu_v2__Syms* symsp, const char* name);
    ~Vcpu_v2___024root();
    VL_UNCOPYABLE(Vcpu_v2___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
