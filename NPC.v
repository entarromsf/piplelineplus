module NPC(
    input [31:0] PC4_D,
    input [25:0] Imm26,
    input NPCOp,
    output reg [31:0] next_pc
    );
    
	 always @* begin
	      if(!NPCOp)
			   next_pc <= PC4_D + {{14{Imm26[15]}},Imm26[15:0],2'b00};
		   else
			   next_pc <= {PC4_D[31:28],Imm26[25:0],2'b00};
	 end

endmodule
