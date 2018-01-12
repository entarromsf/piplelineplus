module ALU(
     input [31:0] a,
	  input [31:0] b,
	  input [3:0] ALUOp,
	  input [31:0] instr,
	  output reg [31:0] ALUOut
    );
   always @* begin
        case (ALUOp)
          4'b0000: ALUOut = a+b;    
          4'b0001: ALUOut = a-b;   
          4'b0010: ALUOut = {b[15:0],16'b0};//lui
          
          4'b0100: ALUOut = a & b; //and
          4'b0101: ALUOut = a | b; //or
          4'b0110: ALUOut = a ^ b; //xor
          4'b0111: ALUOut = ~(a | b); //nor
          
          4'b1000: ALUOut = b<<a[4:0];//{b[31-a[4:0]],{a[4:0]{1'b0}}};//left shift logic
          4'b1010: ALUOut = b>>a[4:0];//{{a[4:0]{1'b0}},b[31:a[4:0]]};//right shift logic
          4'b1011: ALUOut = $signed(b)>>>$signed(a[4:0]);//{{a[4:0]{b[31]}},b[31:a[4:0]]};//right shift arithmetic
          
          4'b1100: ALUOut = $signed(a) < $signed(b) ? 32'b1 : 32'b0;//set less than
          4'b1101: ALUOut = a < b ? 32'b1 : 32'b0; //set less than unsigned
			 
			 4'b1110: ALUOut = b<<(32-instr[10:6])|b>>instr[10:6];//—≠ª∑”““∆
        endcase
   end
endmodule
