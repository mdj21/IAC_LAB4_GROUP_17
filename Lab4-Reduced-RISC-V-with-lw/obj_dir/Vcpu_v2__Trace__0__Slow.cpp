// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcpu_v2__Syms.h"


VL_ATTR_COLD void Vcpu_v2___024root__trace_init_sub__TOP__0(Vcpu_v2___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_v2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_v2___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+55,"clk", false,-1);
    tracep->declBit(c+56,"rst", false,-1);
    tracep->declBus(c+57,"a0", false,-1, 31,0);
    tracep->declBus(c+58,"a1", false,-1, 31,0);
    tracep->pushNamePrefix("cpu_v2 ");
    tracep->declBus(c+59,"A_WIDTH", false,-1, 31,0);
    tracep->declBus(c+59,"D_WIDTH", false,-1, 31,0);
    tracep->declBus(c+60,"rs1_LSB", false,-1, 31,0);
    tracep->declBus(c+61,"rs2_LSB", false,-1, 31,0);
    tracep->declBus(c+62,"rd_LSB", false,-1, 31,0);
    tracep->declBus(c+63,"ADD_WIDTH", false,-1, 31,0);
    tracep->declBit(c+55,"clk", false,-1);
    tracep->declBit(c+56,"rst", false,-1);
    tracep->declBus(c+57,"a0", false,-1, 31,0);
    tracep->declBus(c+58,"a1", false,-1, 31,0);
    tracep->declBus(c+1,"pc", false,-1, 31,0);
    tracep->declBus(c+2,"instr", false,-1, 31,0);
    tracep->declBus(c+3,"ImmOp", false,-1, 31,0);
    tracep->declBit(c+4,"RegWrite", false,-1);
    tracep->declBit(c+64,"ALUctrl", false,-1);
    tracep->declBit(c+5,"ALUsrc", false,-1);
    tracep->declBit(c+6,"ImmSrc", false,-1);
    tracep->declBit(c+7,"PCsrc", false,-1);
    tracep->declBus(c+8,"ALUout", false,-1, 31,0);
    tracep->declBit(c+9,"eq", false,-1);
    tracep->declBus(c+10,"RD2", false,-1, 31,0);
    tracep->declBus(c+11,"ReadData", false,-1, 31,0);
    tracep->declBit(c+12,"MemWrite", false,-1);
    tracep->declBit(c+13,"ResultSrc", false,-1);
    tracep->pushNamePrefix("PC_Reg ");
    tracep->declBus(c+59,"ADD_WIDTH", false,-1, 31,0);
    tracep->declBus(c+3,"Immop", false,-1, 31,0);
    tracep->declBit(c+7,"pcsrc", false,-1);
    tracep->declBit(c+55,"clk", false,-1);
    tracep->declBit(c+56,"rst", false,-1);
    tracep->declBus(c+1,"PC", false,-1, 31,0);
    tracep->declBus(c+14,"branch_pc", false,-1, 31,0);
    tracep->declBus(c+15,"inc_pc", false,-1, 31,0);
    tracep->declBus(c+16,"next_pc", false,-1, 31,0);
    tracep->declBus(c+1,"tmp_pc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("control_unit ");
    tracep->declBus(c+59,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+2,"instr", false,-1, 31,0);
    tracep->declBit(c+9,"Eq", false,-1);
    tracep->declBit(c+4,"RegWrite", false,-1);
    tracep->declBit(c+5,"ALUsrc", false,-1);
    tracep->declBit(c+6,"ImmSrc", false,-1);
    tracep->declBit(c+7,"PCsrc", false,-1);
    tracep->declBit(c+12,"MemWrite", false,-1);
    tracep->declBit(c+13,"ResultSrc", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("data_memory ");
    tracep->declBus(c+59,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+59,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+8,"A", false,-1, 31,0);
    tracep->declBus(c+10,"WD", false,-1, 31,0);
    tracep->declBit(c+12,"WE", false,-1);
    tracep->declBit(c+55,"clk", false,-1);
    tracep->declBus(c+11,"RD", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("instr_mem ");
    tracep->declBus(c+59,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1,"A", false,-1, 31,0);
    tracep->declBus(c+2,"RD", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reg_file_alu ");
    tracep->declBus(c+59,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+63,"ADD_WIDTH", false,-1, 31,0);
    tracep->declBit(c+55,"clk", false,-1);
    tracep->declBus(c+17,"AD1", false,-1, 4,0);
    tracep->declBus(c+18,"AD2", false,-1, 4,0);
    tracep->declBus(c+19,"AD3", false,-1, 4,0);
    tracep->declBit(c+4,"WE3", false,-1);
    tracep->declBus(c+20,"WD3", false,-1, 31,0);
    tracep->declBit(c+5,"ALUsrc", false,-1);
    tracep->declBus(c+3,"Immop", false,-1, 31,0);
    tracep->declBit(c+9,"EQ", false,-1);
    tracep->declBus(c+57,"a0", false,-1, 31,0);
    tracep->declBus(c+58,"a1", false,-1, 31,0);
    tracep->declBus(c+10,"rd2", false,-1, 31,0);
    tracep->declBus(c+8,"ALUOUT", false,-1, 31,0);
    tracep->declBus(c+21,"RD1", false,-1, 31,0);
    tracep->declBus(c+10,"RD2", false,-1, 31,0);
    tracep->declBus(c+22,"ALUop2", false,-1, 31,0);
    tracep->pushNamePrefix("ALU1 ");
    tracep->declBus(c+59,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+21,"ALUop1", false,-1, 31,0);
    tracep->declBus(c+22,"ALUop2", false,-1, 31,0);
    tracep->declBus(c+8,"ALUout", false,-1, 31,0);
    tracep->declBit(c+9,"EQ", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("REG ");
    tracep->declBus(c+59,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+63,"ADD_WIDTH", false,-1, 31,0);
    tracep->declBus(c+17,"AD1", false,-1, 4,0);
    tracep->declBus(c+18,"AD2", false,-1, 4,0);
    tracep->declBus(c+19,"AD3", false,-1, 4,0);
    tracep->declBus(c+20,"WD3", false,-1, 31,0);
    tracep->declBit(c+4,"WE3", false,-1);
    tracep->declBit(c+55,"clk", false,-1);
    tracep->declBus(c+21,"RD1", false,-1, 31,0);
    tracep->declBus(c+10,"RD2", false,-1, 31,0);
    tracep->declBus(c+57,"a0", false,-1, 31,0);
    tracep->declBus(c+58,"a1", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+23+i*1,"register", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sign_extend ");
    tracep->declBus(c+59,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+2,"instr", false,-1, 31,0);
    tracep->declBit(c+6,"ImmSrc", false,-1);
    tracep->declBus(c+3,"ImmOp", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vcpu_v2___024root__trace_init_top(Vcpu_v2___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_v2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_v2___024root__trace_init_top\n"); );
    // Body
    Vcpu_v2___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vcpu_v2___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcpu_v2___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcpu_v2___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vcpu_v2___024root__trace_register(Vcpu_v2___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_v2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_v2___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vcpu_v2___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vcpu_v2___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vcpu_v2___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vcpu_v2___024root__trace_full_sub_0(Vcpu_v2___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vcpu_v2___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_v2___024root__trace_full_top_0\n"); );
    // Init
    Vcpu_v2___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcpu_v2___024root*>(voidSelf);
    Vcpu_v2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vcpu_v2___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vcpu_v2___024root__trace_full_sub_0(Vcpu_v2___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_v2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_v2___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->cpu_v2__DOT__PC_Reg__DOT__tmp_pc),32);
    bufp->fullIData(oldp+2,(vlSelf->cpu_v2__DOT__instr),32);
    bufp->fullIData(oldp+3,(vlSelf->cpu_v2__DOT__ImmOp),32);
    bufp->fullBit(oldp+4,(vlSelf->cpu_v2__DOT__RegWrite));
    bufp->fullBit(oldp+5,(vlSelf->cpu_v2__DOT__ALUsrc));
    bufp->fullBit(oldp+6,(vlSelf->cpu_v2__DOT__ImmSrc));
    bufp->fullBit(oldp+7,(vlSelf->cpu_v2__DOT__PCsrc));
    bufp->fullIData(oldp+8,(vlSelf->cpu_v2__DOT__ALUout),32);
    bufp->fullBit(oldp+9,((vlSelf->cpu_v2__DOT__reg_file_alu__DOT__RD1 
                           == vlSelf->cpu_v2__DOT__reg_file_alu__DOT__ALUop2)));
    bufp->fullIData(oldp+10,(vlSelf->cpu_v2__DOT__reg_file_alu__DOT__RD2),32);
    bufp->fullIData(oldp+11,(vlSelf->cpu_v2__DOT__data_memory__DOT__sine_data
                             [(0xffU & vlSelf->cpu_v2__DOT__ALUout)]),32);
    bufp->fullBit(oldp+12,(vlSelf->cpu_v2__DOT__MemWrite));
    bufp->fullBit(oldp+13,(vlSelf->cpu_v2__DOT__ResultSrc));
    bufp->fullIData(oldp+14,((vlSelf->cpu_v2__DOT__PC_Reg__DOT__tmp_pc 
                              + vlSelf->cpu_v2__DOT__ImmOp)),32);
    bufp->fullIData(oldp+15,(((IData)(4U) + vlSelf->cpu_v2__DOT__PC_Reg__DOT__tmp_pc)),32);
    bufp->fullIData(oldp+16,(((IData)(vlSelf->cpu_v2__DOT__PCsrc)
                               ? (vlSelf->cpu_v2__DOT__PC_Reg__DOT__tmp_pc 
                                  + vlSelf->cpu_v2__DOT__ImmOp)
                               : ((IData)(4U) + vlSelf->cpu_v2__DOT__PC_Reg__DOT__tmp_pc))),32);
    bufp->fullCData(oldp+17,((0x1fU & (vlSelf->cpu_v2__DOT__instr 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+18,((0x1fU & (vlSelf->cpu_v2__DOT__instr 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+19,((0x1fU & (vlSelf->cpu_v2__DOT__instr 
                                       >> 7U))),5);
    bufp->fullIData(oldp+20,(((IData)(vlSelf->cpu_v2__DOT__ResultSrc)
                               ? vlSelf->cpu_v2__DOT__data_memory__DOT__sine_data
                              [(0xffU & vlSelf->cpu_v2__DOT__ALUout)]
                               : vlSelf->cpu_v2__DOT__ALUout)),32);
    bufp->fullIData(oldp+21,(vlSelf->cpu_v2__DOT__reg_file_alu__DOT__RD1),32);
    bufp->fullIData(oldp+22,(vlSelf->cpu_v2__DOT__reg_file_alu__DOT__ALUop2),32);
    bufp->fullIData(oldp+23,(vlSelf->cpu_v2__DOT__reg_file_alu__DOT__REG__DOT__register[0]),32);
    bufp->fullIData(oldp+24,(vlSelf->cpu_v2__DOT__reg_file_alu__DOT__REG__DOT__register[1]),32);
    bufp->fullIData(oldp+25,(vlSelf->cpu_v2__DOT__reg_file_alu__DOT__REG__DOT__register[2]),32);
    bufp->fullIData(oldp+26,(vlSelf->cpu_v2__DOT__reg_file_alu__DOT__REG__DOT__register[3]),32);
    bufp->fullIData(oldp+27,(vlSelf->cpu_v2__DOT__reg_file_alu__DOT__REG__DOT__register[4]),32);
    bufp->fullIData(oldp+28,(vlSelf->cpu_v2__DOT__reg_file_alu__DOT__REG__DOT__register[5]),32);
    bufp->fullIData(oldp+29,(vlSelf->cpu_v2__DOT__reg_file_alu__DOT__REG__DOT__register[6]),32);
    bufp->fullIData(oldp+30,(vlSelf->cpu_v2__DOT__reg_file_alu__DOT__REG__DOT__register[7]),32);
    bufp->fullIData(oldp+31,(vlSelf->cpu_v2__DOT__reg_file_alu__DOT__REG__DOT__register[8]),32);
    bufp->fullIData(oldp+32,(vlSelf->cpu_v2__DOT__reg_file_alu__DOT__REG__DOT__register[9]),32);
    bufp->fullIData(oldp+33,(vlSelf->cpu_v2__DOT__reg_file_alu__DOT__REG__DOT__register[10]),32);
    bufp->fullIData(oldp+34,(vlSelf->cpu_v2__DOT__reg_file_alu__DOT__REG__DOT__register[11]),32);
    bufp->fullIData(oldp+35,(vlSelf->cpu_v2__DOT__reg_file_alu__DOT__REG__DOT__register[12]),32);
    bufp->fullIData(oldp+36,(vlSelf->cpu_v2__DOT__reg_file_alu__DOT__REG__DOT__register[13]),32);
    bufp->fullIData(oldp+37,(vlSelf->cpu_v2__DOT__reg_file_alu__DOT__REG__DOT__register[14]),32);
    bufp->fullIData(oldp+38,(vlSelf->cpu_v2__DOT__reg_file_alu__DOT__REG__DOT__register[15]),32);
    bufp->fullIData(oldp+39,(vlSelf->cpu_v2__DOT__reg_file_alu__DOT__REG__DOT__register[16]),32);
    bufp->fullIData(oldp+40,(vlSelf->cpu_v2__DOT__reg_file_alu__DOT__REG__DOT__register[17]),32);
    bufp->fullIData(oldp+41,(vlSelf->cpu_v2__DOT__reg_file_alu__DOT__REG__DOT__register[18]),32);
    bufp->fullIData(oldp+42,(vlSelf->cpu_v2__DOT__reg_file_alu__DOT__REG__DOT__register[19]),32);
    bufp->fullIData(oldp+43,(vlSelf->cpu_v2__DOT__reg_file_alu__DOT__REG__DOT__register[20]),32);
    bufp->fullIData(oldp+44,(vlSelf->cpu_v2__DOT__reg_file_alu__DOT__REG__DOT__register[21]),32);
    bufp->fullIData(oldp+45,(vlSelf->cpu_v2__DOT__reg_file_alu__DOT__REG__DOT__register[22]),32);
    bufp->fullIData(oldp+46,(vlSelf->cpu_v2__DOT__reg_file_alu__DOT__REG__DOT__register[23]),32);
    bufp->fullIData(oldp+47,(vlSelf->cpu_v2__DOT__reg_file_alu__DOT__REG__DOT__register[24]),32);
    bufp->fullIData(oldp+48,(vlSelf->cpu_v2__DOT__reg_file_alu__DOT__REG__DOT__register[25]),32);
    bufp->fullIData(oldp+49,(vlSelf->cpu_v2__DOT__reg_file_alu__DOT__REG__DOT__register[26]),32);
    bufp->fullIData(oldp+50,(vlSelf->cpu_v2__DOT__reg_file_alu__DOT__REG__DOT__register[27]),32);
    bufp->fullIData(oldp+51,(vlSelf->cpu_v2__DOT__reg_file_alu__DOT__REG__DOT__register[28]),32);
    bufp->fullIData(oldp+52,(vlSelf->cpu_v2__DOT__reg_file_alu__DOT__REG__DOT__register[29]),32);
    bufp->fullIData(oldp+53,(vlSelf->cpu_v2__DOT__reg_file_alu__DOT__REG__DOT__register[30]),32);
    bufp->fullIData(oldp+54,(vlSelf->cpu_v2__DOT__reg_file_alu__DOT__REG__DOT__register[31]),32);
    bufp->fullBit(oldp+55,(vlSelf->clk));
    bufp->fullBit(oldp+56,(vlSelf->rst));
    bufp->fullIData(oldp+57,(vlSelf->a0),32);
    bufp->fullIData(oldp+58,(vlSelf->a1),32);
    bufp->fullIData(oldp+59,(0x20U),32);
    bufp->fullIData(oldp+60,(0xfU),32);
    bufp->fullIData(oldp+61,(0x14U),32);
    bufp->fullIData(oldp+62,(7U),32);
    bufp->fullIData(oldp+63,(5U),32);
    bufp->fullBit(oldp+64,(vlSelf->cpu_v2__DOT__ALUctrl));
}
