// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu_v2.h for the primary calling header

#include "verilated.h"

#include "Vcpu_v2___024root.h"

VL_ATTR_COLD void Vcpu_v2___024root___initial__TOP__0(Vcpu_v2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_v2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_v2___024root___initial__TOP__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_ha019f1da__0;
    VlWide<3>/*95:0*/ __Vtemp_ha00c3b92__0;
    // Body
    VL_WRITEF("Loading ROM.\n");
    __Vtemp_ha019f1da__0[0U] = 0x2e6d656dU;
    __Vtemp_ha019f1da__0[1U] = 0x72526f6dU;
    __Vtemp_ha019f1da__0[2U] = 0x696e7374U;
    VL_READMEM_N(true, 8, 1024, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_ha019f1da__0)
                 ,  &(vlSelf->cpu_v2__DOT__instr_mem__DOT__rom_array)
                 , 0, ~0ULL);
    VL_WRITEF("Loading Sine Data.\n");
    __Vtemp_ha00c3b92__0[0U] = 0x2e6d656dU;
    __Vtemp_ha00c3b92__0[1U] = 0x65726f6dU;
    __Vtemp_ha00c3b92__0[2U] = 0x73696eU;
    VL_READMEM_N(true, 8, 256, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_ha00c3b92__0)
                 ,  &(vlSelf->cpu_v2__DOT__data_memory__DOT__sine_data)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void Vcpu_v2___024root___settle__TOP__0(Vcpu_v2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_v2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_v2___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->cpu_v2__DOT__instr = ((vlSelf->cpu_v2__DOT__instr_mem__DOT__rom_array
                                   [(0x3ffU & ((IData)(3U) 
                                               + vlSelf->cpu_v2__DOT__PC_Reg__DOT__tmp_pc))] 
                                   << 0x18U) | ((vlSelf->cpu_v2__DOT__instr_mem__DOT__rom_array
                                                 [(0x3ffU 
                                                   & ((IData)(2U) 
                                                      + vlSelf->cpu_v2__DOT__PC_Reg__DOT__tmp_pc))] 
                                                 << 0x10U) 
                                                | ((vlSelf->cpu_v2__DOT__instr_mem__DOT__rom_array
                                                    [
                                                    (0x3ffU 
                                                     & ((IData)(1U) 
                                                        + vlSelf->cpu_v2__DOT__PC_Reg__DOT__tmp_pc))] 
                                                    << 8U) 
                                                   | vlSelf->cpu_v2__DOT__instr_mem__DOT__rom_array
                                                   [
                                                   (0x3ffU 
                                                    & vlSelf->cpu_v2__DOT__PC_Reg__DOT__tmp_pc)])));
    if ((IData)((0x13U == (0x707fU & vlSelf->cpu_v2__DOT__instr)))) {
        vlSelf->cpu_v2__DOT__RegWrite = 1U;
        vlSelf->cpu_v2__DOT__MemWrite = 0U;
        vlSelf->cpu_v2__DOT__ResultSrc = 0U;
        vlSelf->cpu_v2__DOT__ALUsrc = 1U;
        vlSelf->cpu_v2__DOT__ImmSrc = 0U;
        vlSelf->cpu_v2__DOT__PCsrc = 0U;
    }
    if ((IData)((0x1063U == (0x707fU & vlSelf->cpu_v2__DOT__instr)))) {
        vlSelf->cpu_v2__DOT__RegWrite = 0U;
        vlSelf->cpu_v2__DOT__MemWrite = 0U;
        vlSelf->cpu_v2__DOT__ResultSrc = 0U;
        vlSelf->cpu_v2__DOT__ALUsrc = 0U;
        vlSelf->cpu_v2__DOT__ImmSrc = 1U;
    }
    vlSelf->cpu_v2__DOT__reg_file_alu__DOT__RD1 = vlSelf->cpu_v2__DOT__reg_file_alu__DOT__REG__DOT__register
        [(0x1fU & (vlSelf->cpu_v2__DOT__instr >> 0xfU))];
    vlSelf->cpu_v2__DOT__reg_file_alu__DOT__RD2 = vlSelf->cpu_v2__DOT__reg_file_alu__DOT__REG__DOT__register
        [(0x1fU & (vlSelf->cpu_v2__DOT__instr >> 0x14U))];
    if ((IData)((0x2003U == (0x707fU & vlSelf->cpu_v2__DOT__instr)))) {
        vlSelf->cpu_v2__DOT__RegWrite = 1U;
        vlSelf->cpu_v2__DOT__MemWrite = 0U;
        vlSelf->cpu_v2__DOT__ResultSrc = 1U;
        vlSelf->cpu_v2__DOT__ALUsrc = 1U;
        vlSelf->cpu_v2__DOT__ImmSrc = 0U;
    }
    if (vlSelf->cpu_v2__DOT__ImmSrc) {
        if (vlSelf->cpu_v2__DOT__ImmSrc) {
            vlSelf->cpu_v2__DOT__ImmOp = (((- (IData)(
                                                      (vlSelf->cpu_v2__DOT__instr 
                                                       >> 0x1fU))) 
                                           << 0xbU) 
                                          | ((0x400U 
                                              & (vlSelf->cpu_v2__DOT__instr 
                                                 << 3U)) 
                                             | ((0x3f0U 
                                                 & (vlSelf->cpu_v2__DOT__instr 
                                                    >> 0x15U)) 
                                                | (0xfU 
                                                   & (vlSelf->cpu_v2__DOT__instr 
                                                      >> 8U)))));
        }
    } else {
        vlSelf->cpu_v2__DOT__ImmOp = (((- (IData)((vlSelf->cpu_v2__DOT__instr 
                                                   >> 0x1fU))) 
                                       << 0xcU) | (vlSelf->cpu_v2__DOT__instr 
                                                   >> 0x14U));
    }
    vlSelf->cpu_v2__DOT__reg_file_alu__DOT__ALUop2 
        = ((IData)(vlSelf->cpu_v2__DOT__ALUsrc) ? vlSelf->cpu_v2__DOT__ImmOp
            : vlSelf->cpu_v2__DOT__reg_file_alu__DOT__RD2);
    if ((IData)((0x1063U == (0x707fU & vlSelf->cpu_v2__DOT__instr)))) {
        vlSelf->cpu_v2__DOT__PCsrc = (vlSelf->cpu_v2__DOT__reg_file_alu__DOT__RD1 
                                      != vlSelf->cpu_v2__DOT__reg_file_alu__DOT__ALUop2);
    }
    if ((IData)((0x2003U == (0x707fU & vlSelf->cpu_v2__DOT__instr)))) {
        vlSelf->cpu_v2__DOT__PCsrc = 0U;
    }
    vlSelf->cpu_v2__DOT__ALUout = (vlSelf->cpu_v2__DOT__reg_file_alu__DOT__RD1 
                                   + vlSelf->cpu_v2__DOT__reg_file_alu__DOT__ALUop2);
    vlSelf->cpu_v2__DOT__PC_Reg__DOT__next_pc = ((IData)(vlSelf->cpu_v2__DOT__PCsrc)
                                                  ? 
                                                 (vlSelf->cpu_v2__DOT__PC_Reg__DOT__tmp_pc 
                                                  + vlSelf->cpu_v2__DOT__ImmOp)
                                                  : 
                                                 ((IData)(4U) 
                                                  + vlSelf->cpu_v2__DOT__PC_Reg__DOT__tmp_pc));
}

VL_ATTR_COLD void Vcpu_v2___024root___eval_initial(Vcpu_v2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_v2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_v2___024root___eval_initial\n"); );
    // Body
    Vcpu_v2___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vcpu_v2___024root___eval_settle(Vcpu_v2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_v2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_v2___024root___eval_settle\n"); );
    // Body
    Vcpu_v2___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vcpu_v2___024root___final(Vcpu_v2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_v2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_v2___024root___final\n"); );
}

VL_ATTR_COLD void Vcpu_v2___024root___ctor_var_reset(Vcpu_v2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_v2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_v2___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->a0 = VL_RAND_RESET_I(32);
    vlSelf->a1 = VL_RAND_RESET_I(32);
    vlSelf->cpu_v2__DOT__instr = VL_RAND_RESET_I(32);
    vlSelf->cpu_v2__DOT__ImmOp = VL_RAND_RESET_I(32);
    vlSelf->cpu_v2__DOT__RegWrite = VL_RAND_RESET_I(1);
    vlSelf->cpu_v2__DOT__ALUctrl = VL_RAND_RESET_I(1);
    vlSelf->cpu_v2__DOT__ALUsrc = VL_RAND_RESET_I(1);
    vlSelf->cpu_v2__DOT__ImmSrc = VL_RAND_RESET_I(1);
    vlSelf->cpu_v2__DOT__PCsrc = VL_RAND_RESET_I(1);
    vlSelf->cpu_v2__DOT__ALUout = VL_RAND_RESET_I(32);
    vlSelf->cpu_v2__DOT__MemWrite = VL_RAND_RESET_I(1);
    vlSelf->cpu_v2__DOT__ResultSrc = VL_RAND_RESET_I(1);
    vlSelf->cpu_v2__DOT__PC_Reg__DOT__next_pc = VL_RAND_RESET_I(32);
    vlSelf->cpu_v2__DOT__PC_Reg__DOT__tmp_pc = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<1024; ++__Vi0) {
        vlSelf->cpu_v2__DOT__instr_mem__DOT__rom_array[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->cpu_v2__DOT__reg_file_alu__DOT__RD1 = VL_RAND_RESET_I(32);
    vlSelf->cpu_v2__DOT__reg_file_alu__DOT__RD2 = VL_RAND_RESET_I(32);
    vlSelf->cpu_v2__DOT__reg_file_alu__DOT__ALUop2 = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->cpu_v2__DOT__reg_file_alu__DOT__REG__DOT__register[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->cpu_v2__DOT__data_memory__DOT__sine_data[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
