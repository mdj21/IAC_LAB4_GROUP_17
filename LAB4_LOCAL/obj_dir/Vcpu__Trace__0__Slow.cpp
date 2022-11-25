// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcpu__Syms.h"


VL_ATTR_COLD void Vcpu___024root__trace_init_sub__TOP__0(Vcpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+51,"clk", false,-1);
    tracep->declBit(c+52,"rst", false,-1);
    tracep->declBus(c+53,"a0", false,-1, 31,0);
    tracep->declBus(c+54,"a1", false,-1, 31,0);
    tracep->pushNamePrefix("cpu ");
    tracep->declBus(c+55,"A_WIDTH", false,-1, 31,0);
    tracep->declBus(c+55,"D_WIDTH", false,-1, 31,0);
    tracep->declBus(c+56,"rs1_LSB", false,-1, 31,0);
    tracep->declBus(c+57,"rs2_LSB", false,-1, 31,0);
    tracep->declBus(c+58,"rd_LSB", false,-1, 31,0);
    tracep->declBus(c+59,"ADD_WIDTH", false,-1, 31,0);
    tracep->declBit(c+51,"clk", false,-1);
    tracep->declBit(c+52,"rst", false,-1);
    tracep->declBus(c+53,"a0", false,-1, 31,0);
    tracep->declBus(c+54,"a1", false,-1, 31,0);
    tracep->declBus(c+1,"pc", false,-1, 31,0);
    tracep->declBus(c+2,"instr", false,-1, 31,0);
    tracep->declBus(c+3,"ImmOp", false,-1, 31,0);
    tracep->declBit(c+4,"RegWrite", false,-1);
    tracep->declBit(c+60,"ALUctrl", false,-1);
    tracep->declBit(c+5,"ALUsrc", false,-1);
    tracep->declBit(c+6,"ImmSrc", false,-1);
    tracep->declBit(c+7,"PCsrc", false,-1);
    tracep->declBit(c+8,"eq", false,-1);
    tracep->pushNamePrefix("PC_Reg ");
    tracep->declBus(c+55,"ADD_WIDTH", false,-1, 31,0);
    tracep->declBus(c+3,"Immop", false,-1, 31,0);
    tracep->declBit(c+7,"pcsrc", false,-1);
    tracep->declBit(c+51,"clk", false,-1);
    tracep->declBit(c+52,"rst", false,-1);
    tracep->declBus(c+1,"PC", false,-1, 31,0);
    tracep->declBus(c+9,"branch_pc", false,-1, 31,0);
    tracep->declBus(c+10,"inc_pc", false,-1, 31,0);
    tracep->declBus(c+11,"next_pc", false,-1, 31,0);
    tracep->declBus(c+1,"tmp_pc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("control_unit ");
    tracep->declBus(c+55,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+2,"instr", false,-1, 31,0);
    tracep->declBit(c+8,"Eq", false,-1);
    tracep->declBit(c+4,"RegWrite", false,-1);
    tracep->declBit(c+5,"ALUsrc", false,-1);
    tracep->declBit(c+6,"ImmSrc", false,-1);
    tracep->declBit(c+7,"PCsrc", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("instr_mem ");
    tracep->declBus(c+55,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1,"A", false,-1, 31,0);
    tracep->declBus(c+2,"RD", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reg_file_alu ");
    tracep->declBus(c+55,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+59,"ADD_WIDTH", false,-1, 31,0);
    tracep->declBit(c+51,"clk", false,-1);
    tracep->declBus(c+12,"AD1", false,-1, 4,0);
    tracep->declBus(c+13,"AD2", false,-1, 4,0);
    tracep->declBus(c+14,"AD3", false,-1, 4,0);
    tracep->declBit(c+4,"WE3", false,-1);
    tracep->declBit(c+5,"ALUsrc", false,-1);
    tracep->declBus(c+3,"Immop", false,-1, 31,0);
    tracep->declBit(c+8,"EQ", false,-1);
    tracep->declBus(c+53,"a0", false,-1, 31,0);
    tracep->declBus(c+54,"a1", false,-1, 31,0);
    tracep->declBus(c+15,"RD1", false,-1, 31,0);
    tracep->declBus(c+16,"RD2", false,-1, 31,0);
    tracep->declBus(c+17,"ALUop2", false,-1, 31,0);
    tracep->declBus(c+18,"ALUOUT", false,-1, 31,0);
    tracep->pushNamePrefix("ALU1 ");
    tracep->declBus(c+55,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+15,"ALUop1", false,-1, 31,0);
    tracep->declBus(c+17,"ALUop2", false,-1, 31,0);
    tracep->declBus(c+18,"ALUout", false,-1, 31,0);
    tracep->declBit(c+8,"EQ", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("REG ");
    tracep->declBus(c+55,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+59,"ADD_WIDTH", false,-1, 31,0);
    tracep->declBus(c+12,"AD1", false,-1, 4,0);
    tracep->declBus(c+13,"AD2", false,-1, 4,0);
    tracep->declBus(c+14,"AD3", false,-1, 4,0);
    tracep->declBus(c+18,"WD3", false,-1, 31,0);
    tracep->declBit(c+4,"WE3", false,-1);
    tracep->declBit(c+51,"clk", false,-1);
    tracep->declBus(c+15,"RD1", false,-1, 31,0);
    tracep->declBus(c+16,"RD2", false,-1, 31,0);
    tracep->declBus(c+53,"a0", false,-1, 31,0);
    tracep->declBus(c+54,"a1", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+19+i*1,"register", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sign_extend ");
    tracep->declBus(c+55,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+2,"instr", false,-1, 31,0);
    tracep->declBit(c+6,"ImmSrc", false,-1);
    tracep->declBus(c+3,"ImmOp", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vcpu___024root__trace_init_top(Vcpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root__trace_init_top\n"); );
    // Body
    Vcpu___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vcpu___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcpu___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcpu___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vcpu___024root__trace_register(Vcpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vcpu___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vcpu___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vcpu___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vcpu___024root__trace_full_sub_0(Vcpu___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vcpu___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root__trace_full_top_0\n"); );
    // Init
    Vcpu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcpu___024root*>(voidSelf);
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vcpu___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vcpu___024root__trace_full_sub_0(Vcpu___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->cpu__DOT__PC_Reg__DOT__tmp_pc),32);
    bufp->fullIData(oldp+2,(vlSelf->cpu__DOT__instr),32);
    bufp->fullIData(oldp+3,(vlSelf->cpu__DOT__ImmOp),32);
    bufp->fullBit(oldp+4,(vlSelf->cpu__DOT__RegWrite));
    bufp->fullBit(oldp+5,(vlSelf->cpu__DOT__ALUsrc));
    bufp->fullBit(oldp+6,(vlSelf->cpu__DOT__ImmSrc));
    bufp->fullBit(oldp+7,(vlSelf->cpu__DOT__PCsrc));
    bufp->fullBit(oldp+8,((vlSelf->cpu__DOT__reg_file_alu__DOT__RD1 
                           == vlSelf->cpu__DOT__reg_file_alu__DOT__ALUop2)));
    bufp->fullIData(oldp+9,((vlSelf->cpu__DOT__PC_Reg__DOT__tmp_pc 
                             + vlSelf->cpu__DOT__ImmOp)),32);
    bufp->fullIData(oldp+10,(((IData)(4U) + vlSelf->cpu__DOT__PC_Reg__DOT__tmp_pc)),32);
    bufp->fullIData(oldp+11,(((IData)(vlSelf->cpu__DOT__PCsrc)
                               ? (vlSelf->cpu__DOT__PC_Reg__DOT__tmp_pc 
                                  + vlSelf->cpu__DOT__ImmOp)
                               : ((IData)(4U) + vlSelf->cpu__DOT__PC_Reg__DOT__tmp_pc))),32);
    bufp->fullCData(oldp+12,((0x1fU & (vlSelf->cpu__DOT__instr 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+13,((0x1fU & (vlSelf->cpu__DOT__instr 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+14,((0x1fU & (vlSelf->cpu__DOT__instr 
                                       >> 7U))),5);
    bufp->fullIData(oldp+15,(vlSelf->cpu__DOT__reg_file_alu__DOT__RD1),32);
    bufp->fullIData(oldp+16,(vlSelf->cpu__DOT__reg_file_alu__DOT__REG__DOT__register
                             [(0x1fU & (vlSelf->cpu__DOT__instr 
                                        >> 0x14U))]),32);
    bufp->fullIData(oldp+17,(vlSelf->cpu__DOT__reg_file_alu__DOT__ALUop2),32);
    bufp->fullIData(oldp+18,((vlSelf->cpu__DOT__reg_file_alu__DOT__RD1 
                              + vlSelf->cpu__DOT__reg_file_alu__DOT__ALUop2)),32);
    bufp->fullIData(oldp+19,(vlSelf->cpu__DOT__reg_file_alu__DOT__REG__DOT__register[0]),32);
    bufp->fullIData(oldp+20,(vlSelf->cpu__DOT__reg_file_alu__DOT__REG__DOT__register[1]),32);
    bufp->fullIData(oldp+21,(vlSelf->cpu__DOT__reg_file_alu__DOT__REG__DOT__register[2]),32);
    bufp->fullIData(oldp+22,(vlSelf->cpu__DOT__reg_file_alu__DOT__REG__DOT__register[3]),32);
    bufp->fullIData(oldp+23,(vlSelf->cpu__DOT__reg_file_alu__DOT__REG__DOT__register[4]),32);
    bufp->fullIData(oldp+24,(vlSelf->cpu__DOT__reg_file_alu__DOT__REG__DOT__register[5]),32);
    bufp->fullIData(oldp+25,(vlSelf->cpu__DOT__reg_file_alu__DOT__REG__DOT__register[6]),32);
    bufp->fullIData(oldp+26,(vlSelf->cpu__DOT__reg_file_alu__DOT__REG__DOT__register[7]),32);
    bufp->fullIData(oldp+27,(vlSelf->cpu__DOT__reg_file_alu__DOT__REG__DOT__register[8]),32);
    bufp->fullIData(oldp+28,(vlSelf->cpu__DOT__reg_file_alu__DOT__REG__DOT__register[9]),32);
    bufp->fullIData(oldp+29,(vlSelf->cpu__DOT__reg_file_alu__DOT__REG__DOT__register[10]),32);
    bufp->fullIData(oldp+30,(vlSelf->cpu__DOT__reg_file_alu__DOT__REG__DOT__register[11]),32);
    bufp->fullIData(oldp+31,(vlSelf->cpu__DOT__reg_file_alu__DOT__REG__DOT__register[12]),32);
    bufp->fullIData(oldp+32,(vlSelf->cpu__DOT__reg_file_alu__DOT__REG__DOT__register[13]),32);
    bufp->fullIData(oldp+33,(vlSelf->cpu__DOT__reg_file_alu__DOT__REG__DOT__register[14]),32);
    bufp->fullIData(oldp+34,(vlSelf->cpu__DOT__reg_file_alu__DOT__REG__DOT__register[15]),32);
    bufp->fullIData(oldp+35,(vlSelf->cpu__DOT__reg_file_alu__DOT__REG__DOT__register[16]),32);
    bufp->fullIData(oldp+36,(vlSelf->cpu__DOT__reg_file_alu__DOT__REG__DOT__register[17]),32);
    bufp->fullIData(oldp+37,(vlSelf->cpu__DOT__reg_file_alu__DOT__REG__DOT__register[18]),32);
    bufp->fullIData(oldp+38,(vlSelf->cpu__DOT__reg_file_alu__DOT__REG__DOT__register[19]),32);
    bufp->fullIData(oldp+39,(vlSelf->cpu__DOT__reg_file_alu__DOT__REG__DOT__register[20]),32);
    bufp->fullIData(oldp+40,(vlSelf->cpu__DOT__reg_file_alu__DOT__REG__DOT__register[21]),32);
    bufp->fullIData(oldp+41,(vlSelf->cpu__DOT__reg_file_alu__DOT__REG__DOT__register[22]),32);
    bufp->fullIData(oldp+42,(vlSelf->cpu__DOT__reg_file_alu__DOT__REG__DOT__register[23]),32);
    bufp->fullIData(oldp+43,(vlSelf->cpu__DOT__reg_file_alu__DOT__REG__DOT__register[24]),32);
    bufp->fullIData(oldp+44,(vlSelf->cpu__DOT__reg_file_alu__DOT__REG__DOT__register[25]),32);
    bufp->fullIData(oldp+45,(vlSelf->cpu__DOT__reg_file_alu__DOT__REG__DOT__register[26]),32);
    bufp->fullIData(oldp+46,(vlSelf->cpu__DOT__reg_file_alu__DOT__REG__DOT__register[27]),32);
    bufp->fullIData(oldp+47,(vlSelf->cpu__DOT__reg_file_alu__DOT__REG__DOT__register[28]),32);
    bufp->fullIData(oldp+48,(vlSelf->cpu__DOT__reg_file_alu__DOT__REG__DOT__register[29]),32);
    bufp->fullIData(oldp+49,(vlSelf->cpu__DOT__reg_file_alu__DOT__REG__DOT__register[30]),32);
    bufp->fullIData(oldp+50,(vlSelf->cpu__DOT__reg_file_alu__DOT__REG__DOT__register[31]),32);
    bufp->fullBit(oldp+51,(vlSelf->clk));
    bufp->fullBit(oldp+52,(vlSelf->rst));
    bufp->fullIData(oldp+53,(vlSelf->a0),32);
    bufp->fullIData(oldp+54,(vlSelf->a1),32);
    bufp->fullIData(oldp+55,(0x20U),32);
    bufp->fullIData(oldp+56,(0xfU),32);
    bufp->fullIData(oldp+57,(0x14U),32);
    bufp->fullIData(oldp+58,(7U),32);
    bufp->fullIData(oldp+59,(5U),32);
    bufp->fullBit(oldp+60,(vlSelf->cpu__DOT__ALUctrl));
}
