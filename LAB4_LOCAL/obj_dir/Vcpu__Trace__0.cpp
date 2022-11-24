// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcpu__Syms.h"


void Vcpu___024root__trace_chg_sub_0(Vcpu___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vcpu___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root__trace_chg_top_0\n"); );
    // Init
    Vcpu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcpu___024root*>(voidSelf);
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vcpu___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vcpu___024root__trace_chg_sub_0(Vcpu___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->cpu__DOT__PC_Reg__DOT__tmp_pc),32);
        bufp->chgIData(oldp+1,(vlSelf->cpu__DOT__instr),32);
        bufp->chgIData(oldp+2,(vlSelf->cpu__DOT__ImmOp),32);
        bufp->chgBit(oldp+3,(vlSelf->cpu__DOT__RegWrite));
        bufp->chgBit(oldp+4,(vlSelf->cpu__DOT__ALUsrc));
        bufp->chgBit(oldp+5,(vlSelf->cpu__DOT__ImmSrc));
        bufp->chgBit(oldp+6,(vlSelf->cpu__DOT__PCsrc));
        bufp->chgBit(oldp+7,((vlSelf->cpu__DOT__reg_file_alu__DOT__RD1 
                              == vlSelf->cpu__DOT__reg_file_alu__DOT__ALUop2)));
        bufp->chgIData(oldp+8,((vlSelf->cpu__DOT__PC_Reg__DOT__tmp_pc 
                                + vlSelf->cpu__DOT__ImmOp)),32);
        bufp->chgIData(oldp+9,(((IData)(4U) + vlSelf->cpu__DOT__PC_Reg__DOT__tmp_pc)),32);
        bufp->chgIData(oldp+10,(((IData)(vlSelf->cpu__DOT__PCsrc)
                                  ? (vlSelf->cpu__DOT__PC_Reg__DOT__tmp_pc 
                                     + vlSelf->cpu__DOT__ImmOp)
                                  : ((IData)(4U) + vlSelf->cpu__DOT__PC_Reg__DOT__tmp_pc))),32);
        bufp->chgCData(oldp+11,((0x1fU & (vlSelf->cpu__DOT__instr 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+12,((0x1fU & (vlSelf->cpu__DOT__instr 
                                          >> 0x14U))),5);
        bufp->chgCData(oldp+13,((0x1fU & (vlSelf->cpu__DOT__instr 
                                          >> 7U))),5);
        bufp->chgIData(oldp+14,(vlSelf->cpu__DOT__reg_file_alu__DOT__RD1),32);
        bufp->chgIData(oldp+15,(vlSelf->cpu__DOT__reg_file_alu__DOT__RD2),32);
        bufp->chgIData(oldp+16,(vlSelf->cpu__DOT__reg_file_alu__DOT__ALUop2),32);
        bufp->chgIData(oldp+17,((vlSelf->cpu__DOT__reg_file_alu__DOT__RD1 
                                 + vlSelf->cpu__DOT__reg_file_alu__DOT__ALUop2)),32);
        bufp->chgIData(oldp+18,(vlSelf->cpu__DOT__reg_file_alu__DOT__REG__DOT__register[0]),32);
        bufp->chgIData(oldp+19,(vlSelf->cpu__DOT__reg_file_alu__DOT__REG__DOT__register[1]),32);
        bufp->chgIData(oldp+20,(vlSelf->cpu__DOT__reg_file_alu__DOT__REG__DOT__register[2]),32);
        bufp->chgIData(oldp+21,(vlSelf->cpu__DOT__reg_file_alu__DOT__REG__DOT__register[3]),32);
        bufp->chgIData(oldp+22,(vlSelf->cpu__DOT__reg_file_alu__DOT__REG__DOT__register[4]),32);
        bufp->chgIData(oldp+23,(vlSelf->cpu__DOT__reg_file_alu__DOT__REG__DOT__register[5]),32);
        bufp->chgIData(oldp+24,(vlSelf->cpu__DOT__reg_file_alu__DOT__REG__DOT__register[6]),32);
        bufp->chgIData(oldp+25,(vlSelf->cpu__DOT__reg_file_alu__DOT__REG__DOT__register[7]),32);
        bufp->chgIData(oldp+26,(vlSelf->cpu__DOT__reg_file_alu__DOT__REG__DOT__register[8]),32);
        bufp->chgIData(oldp+27,(vlSelf->cpu__DOT__reg_file_alu__DOT__REG__DOT__register[9]),32);
        bufp->chgIData(oldp+28,(vlSelf->cpu__DOT__reg_file_alu__DOT__REG__DOT__register[10]),32);
        bufp->chgIData(oldp+29,(vlSelf->cpu__DOT__reg_file_alu__DOT__REG__DOT__register[11]),32);
        bufp->chgIData(oldp+30,(vlSelf->cpu__DOT__reg_file_alu__DOT__REG__DOT__register[12]),32);
        bufp->chgIData(oldp+31,(vlSelf->cpu__DOT__reg_file_alu__DOT__REG__DOT__register[13]),32);
        bufp->chgIData(oldp+32,(vlSelf->cpu__DOT__reg_file_alu__DOT__REG__DOT__register[14]),32);
        bufp->chgIData(oldp+33,(vlSelf->cpu__DOT__reg_file_alu__DOT__REG__DOT__register[15]),32);
        bufp->chgIData(oldp+34,(vlSelf->cpu__DOT__reg_file_alu__DOT__REG__DOT__register[16]),32);
        bufp->chgIData(oldp+35,(vlSelf->cpu__DOT__reg_file_alu__DOT__REG__DOT__register[17]),32);
        bufp->chgIData(oldp+36,(vlSelf->cpu__DOT__reg_file_alu__DOT__REG__DOT__register[18]),32);
        bufp->chgIData(oldp+37,(vlSelf->cpu__DOT__reg_file_alu__DOT__REG__DOT__register[19]),32);
        bufp->chgIData(oldp+38,(vlSelf->cpu__DOT__reg_file_alu__DOT__REG__DOT__register[20]),32);
        bufp->chgIData(oldp+39,(vlSelf->cpu__DOT__reg_file_alu__DOT__REG__DOT__register[21]),32);
        bufp->chgIData(oldp+40,(vlSelf->cpu__DOT__reg_file_alu__DOT__REG__DOT__register[22]),32);
        bufp->chgIData(oldp+41,(vlSelf->cpu__DOT__reg_file_alu__DOT__REG__DOT__register[23]),32);
        bufp->chgIData(oldp+42,(vlSelf->cpu__DOT__reg_file_alu__DOT__REG__DOT__register[24]),32);
        bufp->chgIData(oldp+43,(vlSelf->cpu__DOT__reg_file_alu__DOT__REG__DOT__register[25]),32);
        bufp->chgIData(oldp+44,(vlSelf->cpu__DOT__reg_file_alu__DOT__REG__DOT__register[26]),32);
        bufp->chgIData(oldp+45,(vlSelf->cpu__DOT__reg_file_alu__DOT__REG__DOT__register[27]),32);
        bufp->chgIData(oldp+46,(vlSelf->cpu__DOT__reg_file_alu__DOT__REG__DOT__register[28]),32);
        bufp->chgIData(oldp+47,(vlSelf->cpu__DOT__reg_file_alu__DOT__REG__DOT__register[29]),32);
        bufp->chgIData(oldp+48,(vlSelf->cpu__DOT__reg_file_alu__DOT__REG__DOT__register[30]),32);
        bufp->chgIData(oldp+49,(vlSelf->cpu__DOT__reg_file_alu__DOT__REG__DOT__register[31]),32);
    }
    bufp->chgBit(oldp+50,(vlSelf->clk));
    bufp->chgBit(oldp+51,(vlSelf->rst));
    bufp->chgIData(oldp+52,(vlSelf->a0),32);
    bufp->chgIData(oldp+53,(vlSelf->a1),32);
}

void Vcpu___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root__trace_cleanup\n"); );
    // Init
    Vcpu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcpu___024root*>(voidSelf);
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
