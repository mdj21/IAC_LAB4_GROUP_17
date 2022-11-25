module controlUnit #(
    parameter WIDTH = 32
)(
    input logic  [WIDTH-1:0]    instr,
    input logic                 Eq,
    output logic                RegWrite,
    //output logic [2:0]          ALUctrl,
    output logic                ALUsrc,
    output logic                ImmSrc,
    output logic                PCsrc,
    output logic                MemWrite,
    output logic                ResultSrc
);

    always @ (instr) begin
        
        // addi
        if (instr[6:0] == 7'b0010011 && instr[14:12] == 3'b000) begin
            RegWrite <= 1'b1;
            // ALUctrl <= 1'b1;
            ALUsrc <= 1'b1;
            ImmSrc <= 1'b0;
            PCsrc <= 1'b0;
            MemWrite <= 1'b0;
            ResultSrc <= 1'b0;
        end

        // bne
        if (instr[6:0] == 7'b1100011 && instr[14:12] == 3'b001) begin
            RegWrite <= 1'b0;
            // ALUctrl <= 1'b1;
            ALUsrc <= 1'b0;
            ImmSrc <= 1'b1;
            PCsrc <= Eq ? 1'b0 : 1'b1;  // branch if not equal
            MemWrite <= 1'b0;
            ResultSrc <= 1'b0;
        end

        // lw
        if (instr[6:0] == 7'b0000011 && instr[14:12] == 3'b010) begin
            RegWrite <= 1'b1;
            // ALUctrl <= 1'b1;
            ALUsrc <= 1'b1;
            ImmSrc <= 1'b0;
            PCsrc <= 1'b0;
            MemWrite <= 1'b0;
            ResultSrc <= 1'b1;
        end

    end

endmodule
