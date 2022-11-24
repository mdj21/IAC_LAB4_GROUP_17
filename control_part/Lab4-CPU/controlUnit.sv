module controlUnit #(
    parameter WIDTH = 32
)(
    input logic  [WIDTH-1:0]    instr,
    input logic                 Eq,
    output logic                RegWrite,
    //output logic [2:0]          ALUctrl,
    output logic                ALUsrc,
    output logic                ImmSrc,
    output logic                PCsrc
);

    always @ (instr) begin
        
        if (instr[6:0] == 7'b1100011 and instr[14:12] == 3'b001) begin
            RegWrite = 1'b1;
            //assign ALUctrl = 1'b1;
            assign ALUsrc = 1'b0;
            assign ImmSrc = 1'b0;
            assign PCsrc = 1'b0;
        end

        if (instr[6:0] == 7'b0010011 and instr[14:12] == 3'b000) begin
            assign RegWrite = 1'b0;
            //assign ALUctrl = 1'b1;
            assign ALUsrc = 1'b1;
            assign ImmSrc = 1'b1;
            assign PCsrc = 1'b1;
        end
    end

endmodule
