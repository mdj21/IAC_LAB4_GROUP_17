module dataMemory #(
    parameter DATA_WDITH = 32,
              ADDRESS_WIDTH = 32
             
)(
    input logic  [DATA_WIDTH-1:0]  A,
    input logic  [DATA_WIDTH-1:0]  WD,
    input logic                    WE,
    input logic                    clk,
    output logic [DATA_WIDTH-1:0]  RD
);

logic [7:0] sine_data [2**8-1:0];

initial begin
    $display("Loading Sine Data.");
    $readmemh("sinerom.mem", sine_data);
end;

assign RD = sine_data[A[7:0]];

always_ff @(posedge clk) begin
    if (WE) sine_data[A[7:0]] <= WD;
end

endmodule
