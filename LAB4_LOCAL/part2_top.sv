module part2_top #(
    parameter DATA_WIDTH = 32,
              ADD_WIDTH = 5
)(
    input logic clk,
    input logic [ADD_WIDTH-1:0] AD1,
    input logic [ADD_WIDTH-1:0] AD2,
    input logic [ADD_WIDTH-1:0] AD3,
    input logic WE3,
    input logic ALUsrc,
    input logic [DATA_WIDTH-1:0] Immop,
    output logic EQ,
    output logic [DATA_WIDTH-1:0] a0,
    output logic [DATA_WIDTH-1:0] a1    // added for debugging
);

logic [DATA_WIDTH-1:0] RD1, RD2, ALUop2, ALUOUT;

Reg_file REG (
    .AD1(AD1),
    .AD2(AD2),
    .AD3(AD3),
    .WE3(WE3),
    .WD3(ALUOUT),
    .clk(clk),
    .a0(a0),
    .a1(a1),    // added for debugging
    .RD1(RD1),
    .RD2(RD2)
);

ALU ALU1 (
    .ALUop1(RD1),
    .ALUop2(ALUop2),
    .ALUout(ALUOUT),
    .EQ(EQ)
);

assign ALUop2 = ALUsrc? Immop:RD2;

endmodule


    
