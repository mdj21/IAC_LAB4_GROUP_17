module PC_REG #(
    parameter ADD_WIDTH = 32
)(
    input [ADD_WIDTH-1:0] Immop,
    input pcsrc,
    input clk,
    input rst,
    output [ADD_WIDTH-1:0] PC
);

logic [ADD_WIDTH-1:0] branch_pc, inc_pc, next_pc, tmp_pc;

assign branch_pc = tmp_pc + Immop;
assign inc_pc = tmp_pc + 32'd4;

assign next_pc = pcsrc ? branch_pc : inc_pc;

always_ff @(posedge clk) begin
    if (!rst)
        tmp_pc <= next_pc;
    else
        tmp_pc <= 32'b0;
end

assign PC = tmp_pc;
endmodule

