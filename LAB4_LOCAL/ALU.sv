module ALU #(
    parameter DATA_WIDTH = 32
)(
    input logic [DATA_WIDTH-1:0] ALUop1,
    input logic [DATA_WIDTH-1:0] ALUop2,
    //input logic ALUctrl,
    output logic [DATA_WIDTH-1:0] ALUout,
    output logic EQ 
);

assign EQ = (ALUop1==ALUop2);
assign ALUout = ALUop1 + ALUop2;

endmodule
