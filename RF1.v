module RF1(
    input [4:0] rs,
    input [4:0] rt,
    input [4:0] wr,
    input [31:0] wd,
    input we,
    input clk,
    input reset,
	 input [31:0]PC,
    output [31:0] rd1,
    output [31:0] rd2
    );
    
	 reg [31:0] rf[0:31];
	 
	 assign rd1 = (rs != 0)?rf[rs]:0;
	 assign rd2 = (rt != 0)?rf[rt]:0;
	 
	 initial begin
	     rf[0] = 0;//$zero
		  rf[1] = 0;//$at
	     rf[2] = 0;//$v0
		  rf[3] = 0;//$v1
		  rf[4] = 0;//$a0
		  rf[5] = 0;//$a1
		  rf[6] = 0;//$a2
		  rf[7] = 0;//$a3
		  rf[8] = 0;//$t0
		  rf[9] = 0;//$t1
		  rf[10] = 0;//$t2
		  rf[11] = 0;//$t3
		  rf[12] = 0;//$t4
		  rf[13] = 0;//$t5
		  rf[14] = 0;//$t6
		  rf[15] = 0;//$t7
		  rf[16] = 0;//$s0
		  rf[17] = 0;//$s1
		  rf[18] = 0;//$s2
		  rf[19] = 0;//$s3
		  rf[20] = 0;//$s4
        rf[21] = 0;//$s5
        rf[22] = 0;//$s6
		  rf[23] = 0;//$s7
		  rf[24] = 0;//$t8
		  rf[25] = 0;//$t9
		  rf[26] = 0;//$k0
		  rf[27] = 0;//$k1
		  rf[28] = 0;//$gp
		  rf[29] = 0;//$sp
		  rf[30] = 0;//$fp
		  rf[31] = 0;//$ra
	 end
	 
	 always @(posedge clk) begin
	     if (reset) begin
		      rf[0] <= 0;//$zero
		      rf[1] <= 0;//$at
	         rf[2] <= 0;//$v0
		      rf[3] <= 0;//$v1
		      rf[4] <= 0;//$a0
		      rf[5] <= 0;//$a1
		      rf[6] <= 0;//$a2
		      rf[7] <= 0;//$a3
		      rf[8] <= 0;//$t0
		      rf[9] <= 0;//$t1
		      rf[10] <= 0;//$t2
		      rf[11] <= 0;//$t3
		      rf[12] <= 0;//$t4
		      rf[13] <= 0;//$t5
		      rf[14] <= 0;//$t6
		      rf[15] <= 0;//$t7
		      rf[16] <= 0;//$s0
		      rf[17] <= 0;//$s1
	    	   rf[18] <= 0;//$s2
	      	rf[19] <= 0;//$s3
		      rf[20] <= 0;//$s4
            rf[21] <= 0;//$s5
            rf[22] <= 0;//$s6
		      rf[23] <= 0;//$s7
		      rf[24] <= 0;//$t8
		      rf[25] <= 0;//$t9
		      rf[26] <= 0;//$k0
		      rf[27] <= 0;//$k1
		      rf[28] <= 0;//$gp
		      rf[29] <= 0;//$sp
		      rf[30] <= 0;//$fp
		      rf[31] <= 0;//$ra
		  end
		  else begin
		      if (we&&(wr!=0)) begin
				    rf[wr] <= wd;
            	 $display("%d@%h: $%d <= %h",$time, PC, wr, wd);				 
				end
		  end
	 end

endmodule
