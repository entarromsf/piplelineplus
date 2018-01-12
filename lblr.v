module lblr(
    input [31:0] rt_W,
    input [31:0] WBextOut1,
	 inout [1:0] Op,
    output reg [31:0] WBextOut
    );
	 
	 always @* begin
	     case(Op)
	     2'b00:WBextOut = WBextOut1;
	     2'b01:WBextOut = {WBextOut1[31:16],rt_W[15:0]};
		  2'b10:WBextOut = {rt_W[31:16],WBextOut1[15:0]};
		  endcase
    end

endmodule
