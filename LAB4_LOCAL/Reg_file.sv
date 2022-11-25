module Reg_file #(
    parameter DATA_WIDTH = 32,
              ADD_WIDTH = 5
)(
    input logic [ADD_WIDTH-1:0] AD1,
    input logic [ADD_WIDTH-1:0] AD2,
    input logic [ADD_WIDTH-1:0] AD3,
    input logic [DATA_WIDTH-1:0] WD3,
    input logic WE3,
    input clk,
    output logic [DATA_WIDTH-1:0] RD1,
    output logic [DATA_WIDTH-1:0] RD2,
    output [DATA_WIDTH-1:0] a0, 
    output [DATA_WIDTH-1:0] a1    // added for debugging
);

logic [DATA_WIDTH-1:0] register [2**ADD_WIDTH-1:0];

// CHANGE NEEDED: read - async; write - sync

assign RD1 = register[AD1];
assign RD2 = register[AD2];

always_ff @(posedge clk) begin
    if(WE3) register[AD3] <= WD3;
    a0 <= register[5'd10];
    a1 <= register[5'd11];    // added for debugging
end

endmodule
