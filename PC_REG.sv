module PC_REG #(
    parameter ADD_WIDTH = 32
)(
    input [ADD_WIDTH-1:0] Immop,
    input pcsrc,
    input clk,
    input rst,
    output [ADD_WIDTH-1:0] PC
);

logic [ADD_WIDTH-1:0] branch_pc, inc_pc, next_pc;

assign branch_pc = PC + Immop;
assign inc_pc = PC + 32'd4;

assign next_pc = if pcsrc ? branch_pc : inc_pc;

always_ff @(posedge clk) begin
    if (!rst): PC <= next_pc;
    else: PC <= 32'b0;
end

endmodule

