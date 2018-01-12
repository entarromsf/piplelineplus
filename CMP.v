module CMP(
    input [31:0] a,
    input [31:0] b,
    input [3:0] cmpOp,
    output reg Result
    );
    
	 reg [31:0] c;
	 always @* begin
	     case(cmpOp)
		    4'b0000:begin//beq
			      c = a ^ b;
					Result = ~(|c);
			 end
		    4'b0001:begin//bne
			      c = a ^ b;
					Result = |c;
			 end
			 4'b0100: Result = !a[31];//bgez
			 4'b0101: Result = !a[31] && a != 32'b0;//bgtz
          4'b0110: Result = a[31] || a == 32'b0; //blez
          4'b0111: Result = a[31];//bltz
			 4'b1000: Result = (b == 32'b0);
		  endcase
	 end

endmodule
