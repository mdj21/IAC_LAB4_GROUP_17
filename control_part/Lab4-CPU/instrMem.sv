module instrMem #(
    parameter WIDTH = 32
)(
    input logic [WIDTH - 1 : 0] A,
    output logic [WIDTH - 1: 0] RD

);

logic [7:0] rom_array [2**10-1:0];

initial begin
    $display("Loading ROM.");
    $readmemh("instr.mem", rom_array);
end;

always_comb
    //output is asynchronus
    RD <= {rom_array[A+{30{1'b0}, 2'b11}], rom_array[A+{30{1'b0}, 2'b10}] ,rom_array[A+{31{1'b0}, 1'b1}], rom_array[A]};

endmodule

