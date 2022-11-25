// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu.h for the primary calling header

#include "verilated.h"

#include "Vcpu___024root.h"

VL_INLINE_OPT void Vcpu___024root___sequent__TOP__0(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__cpu__DOT__reg_file_alu__DOT__REG__DOT__register__v0;
    IData/*31:0*/ __Vdlyvval__cpu__DOT__reg_file_alu__DOT__REG__DOT__register__v0;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__reg_file_alu__DOT__REG__DOT__register__v0;
    // Body
    __Vdlyvset__cpu__DOT__reg_file_alu__DOT__REG__DOT__register__v0 = 0U;
    vlSelf->a0 = vlSelf->cpu__DOT__reg_file_alu__DOT__REG__DOT__register
        [0xaU];
    vlSelf->a1 = vlSelf->cpu__DOT__reg_file_alu__DOT__REG__DOT__register
        [0xbU];
    if (vlSelf->cpu__DOT__RegWrite) {
        __Vdlyvval__cpu__DOT__reg_file_alu__DOT__REG__DOT__register__v0 
            = (vlSelf->cpu__DOT__reg_file_alu__DOT__RD1 
               + vlSelf->cpu__DOT__reg_file_alu__DOT__ALUop2);
        __Vdlyvset__cpu__DOT__reg_file_alu__DOT__REG__DOT__register__v0 = 1U;
        __Vdlyvdim0__cpu__DOT__reg_file_alu__DOT__REG__DOT__register__v0 
            = (0x1fU & (vlSelf->cpu__DOT__instr >> 7U));
    }
    vlSelf->cpu__DOT__PC_Reg__DOT__tmp_pc = ((IData)(vlSelf->rst)
                                              ? 0U : vlSelf->cpu__DOT__PC_Reg__DOT__next_pc);
    if (__Vdlyvset__cpu__DOT__reg_file_alu__DOT__REG__DOT__register__v0) {
        vlSelf->cpu__DOT__reg_file_alu__DOT__REG__DOT__register[__Vdlyvdim0__cpu__DOT__reg_file_alu__DOT__REG__DOT__register__v0] 
            = __Vdlyvval__cpu__DOT__reg_file_alu__DOT__REG__DOT__register__v0;
    }
    vlSelf->cpu__DOT__instr = ((vlSelf->cpu__DOT__instr_mem__DOT__rom_array
                                [(0x3ffU & ((IData)(3U) 
                                            + vlSelf->cpu__DOT__PC_Reg__DOT__tmp_pc))] 
                                << 0x18U) | ((vlSelf->cpu__DOT__instr_mem__DOT__rom_array
                                              [(0x3ffU 
                                                & ((IData)(2U) 
                                                   + vlSelf->cpu__DOT__PC_Reg__DOT__tmp_pc))] 
                                              << 0x10U) 
                                             | ((vlSelf->cpu__DOT__instr_mem__DOT__rom_array
                                                 [(0x3ffU 
                                                   & ((IData)(1U) 
                                                      + vlSelf->cpu__DOT__PC_Reg__DOT__tmp_pc))] 
                                                 << 8U) 
                                                | vlSelf->cpu__DOT__instr_mem__DOT__rom_array
                                                [(0x3ffU 
                                                  & vlSelf->cpu__DOT__PC_Reg__DOT__tmp_pc)])));
    if ((IData)((0x13U == (0x707fU & vlSelf->cpu__DOT__instr)))) {
        vlSelf->cpu__DOT__RegWrite = 1U;
        vlSelf->cpu__DOT__ALUsrc = 1U;
        vlSelf->cpu__DOT__ImmSrc = 0U;
        vlSelf->cpu__DOT__PCsrc = 0U;
    }
    vlSelf->cpu__DOT__reg_file_alu__DOT__RD1 = vlSelf->cpu__DOT__reg_file_alu__DOT__REG__DOT__register
        [(0x1fU & (vlSelf->cpu__DOT__instr >> 0xfU))];
    if ((IData)((0x1063U == (0x707fU & vlSelf->cpu__DOT__instr)))) {
        vlSelf->cpu__DOT__RegWrite = 0U;
        vlSelf->cpu__DOT__ALUsrc = 0U;
        vlSelf->cpu__DOT__ImmSrc = 1U;
    }
    if (vlSelf->cpu__DOT__ImmSrc) {
        if (vlSelf->cpu__DOT__ImmSrc) {
            vlSelf->cpu__DOT__ImmOp = (((- (IData)(
                                                   (vlSelf->cpu__DOT__instr 
                                                    >> 0x1fU))) 
                                        << 0xbU) | 
                                       ((0x400U & (vlSelf->cpu__DOT__instr 
                                                   << 3U)) 
                                        | ((0x3f0U 
                                            & (vlSelf->cpu__DOT__instr 
                                               >> 0x15U)) 
                                           | (0xfU 
                                              & (vlSelf->cpu__DOT__instr 
                                                 >> 8U)))));
        }
    } else {
        vlSelf->cpu__DOT__ImmOp = (((- (IData)((vlSelf->cpu__DOT__instr 
                                                >> 0x1fU))) 
                                    << 0xcU) | (vlSelf->cpu__DOT__instr 
                                                >> 0x14U));
    }
    vlSelf->cpu__DOT__reg_file_alu__DOT__ALUop2 = ((IData)(vlSelf->cpu__DOT__ALUsrc)
                                                    ? vlSelf->cpu__DOT__ImmOp
                                                    : 
                                                   vlSelf->cpu__DOT__reg_file_alu__DOT__REG__DOT__register
                                                   [
                                                   (0x1fU 
                                                    & (vlSelf->cpu__DOT__instr 
                                                       >> 0x14U))]);
    if ((IData)((0x1063U == (0x707fU & vlSelf->cpu__DOT__instr)))) {
        vlSelf->cpu__DOT__PCsrc = (vlSelf->cpu__DOT__reg_file_alu__DOT__RD1 
                                   != vlSelf->cpu__DOT__reg_file_alu__DOT__ALUop2);
    }
    vlSelf->cpu__DOT__PC_Reg__DOT__next_pc = ((IData)(vlSelf->cpu__DOT__PCsrc)
                                               ? (vlSelf->cpu__DOT__PC_Reg__DOT__tmp_pc 
                                                  + vlSelf->cpu__DOT__ImmOp)
                                               : ((IData)(4U) 
                                                  + vlSelf->cpu__DOT__PC_Reg__DOT__tmp_pc));
}

void Vcpu___024root___eval(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vcpu___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void Vcpu___024root___eval_debug_assertions(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
