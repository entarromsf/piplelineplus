module Imem(
    input [31:0] Ad,
    output [31:0] dout
    );
    reg [31:0] Memory[4095:0];
	 
	 initial begin
	    $readmemh("code.txt",Memory);
	 end
	 
	 assign dout = Memory[Ad[13:2]-12'b110000000000];
endmodule
