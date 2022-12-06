module cpu_v2 #(
    parameter A_WIDTH = 32,
              D_WIDTH = 32,
              rs1_LSB = 15,
              rs2_LSB = 20,
              rd_LSB = 7,
              ADD_WIDTH = 5
)(
    /// interface signals
    input logic                 clk,
    input logic                 rst,

    // data outputs from register file
    output logic [D_WIDTH-1:0]  a0, 
    output logic [D_WIDTH-1:0]  a1    // added for debugging
);

    /// interconnect wires
    logic   [A_WIDTH-1:0]        pc;      // program counter (PC)
    logic   [D_WIDTH-1:0]        instr;   // instruction
    logic   [D_WIDTH-1:0]        ImmOp;   // immediate operand (sign-extended)
        /// Control Unit outputs:
    logic                        RegWrite;
    logic                        ALUctrl;
    logic                        ALUsrc;
    logic                        ImmSrc;    // logic   [1:0]                ImmSrc;
    logic                        PCsrc;
        /// ALU block outputs:
    logic   [D_WIDTH-1:0]        ALUout;    
    logic                        eq;        // EQ
    logic   [D_WIDTH-1:0]        RD2;
    logic   [D_WIDTH-1:0]        ReadData;
    logic                        MemWrite;
    logic                        ResultSrc;

PC_REG PC_Reg (
    /// input
    .clk (clk),     // PC Reg clock
    .rst (rst),     // PC Reg reset
    .Immop (ImmOp),
    .pcsrc(PCsrc),
    /// output
    .PC (pc)
);

instrMem instr_mem (
    // input
    .A (pc),
    // output
    .RD (instr)
);

controlUnit control_unit (
    /// input
    .Eq (eq),
    .instr (instr),
    /// output
    .RegWrite (RegWrite),
    // .ALUctrl (ALUctrl),
    .ALUsrc (ALUsrc),
    .ImmSrc (ImmSrc),
    .PCsrc (PCsrc),
    .MemWrite(MemWrite),
    .ResultSrc(ResultSrc)
);

signExtend sign_extend(
    /// input
    .instr (instr),
    .ImmSrc (ImmSrc),
    /// output
    .ImmOp (ImmOp)
);

part2_top reg_file_alu (
    /// input 
    .clk (clk),              // Reg File clock
    .AD1 (instr[rs1_LSB+ADD_WIDTH-1 : rs1_LSB]),     // rs1 = instr[19:15]
    .AD2 (instr[rs2_LSB+ADD_WIDTH-1 : rs2_LSB]),     // rs2 = instr[24:20]
    .AD3 (instr[rd_LSB+ADD_WIDTH-1 : rd_LSB]),       //  rd = instr[11:7]
    .WE3 (RegWrite),
    .WD3 (ResultSrc ? ReadData : ALUout),   // WD3 = Result
    .ALUsrc (ALUsrc),
    // .ALUctrl (ALUctrl),
    .Immop (ImmOp),
    /// output
    .ALUOUT (ALUout),
    .EQ (eq),
    .a0 (a0),
    .a1(a1),    // added for debugging
    .rd2(RD2)

);

dataMemory data_memory(
    /// input
    .clk(clk),
    .A(ALUout),
    .WD(RD2),
    .WE(MemWrite),
    /// output
    .RD(ReadData)
);

endmodule
