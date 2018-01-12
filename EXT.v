module EXT(
    input [15:0] Imm,
	 input ExtOp,
	 output reg [31:0] ImmOut
    );
	 
	 always @* begin
	     if(ExtOp)//sign
		     ImmOut <= {{16{Imm[15]}},Imm[15:0]};
		  else
		     ImmOut <= {16'b0,Imm[15:0]};
    end

endmodule
