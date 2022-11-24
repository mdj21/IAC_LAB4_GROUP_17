module signExtend #(
    parameter WIDTH = 32
)(
    input logic  [WIDTH-1:0]  instr,
    input logic               ImmSrc,
    output logic [WIDTH-1:0]  ImmOp
);

    always_comb
        case (instr)
            IMMEDIATE:          if (ImmSrc==1'b0) assign ImmOp <= {20{instr[31]},instr[31:20]};
            //UPPER IMMEDIATE:    if (ImmSrc==3'b000) ImmOp = {instr[31:12], 12{1'b0}};
            //STORE:              if (ImmSrc==3'b000) ImmOp = {20{instr[31]}, instr[31:25], intr[11:7]};
            BRANCH:             if (ImmSrc==1'b1) assign ImmOp <= {21{instr[31]}, instr[7], instr[30:25], instr[11:8]};
        endcase
endmodule
