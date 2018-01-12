`include"define.v"
module StallUnit(
       input [31:0] instr_D,
		 input [31:0] instr_E,
		 input [31:0] instr_M,
		 input busy,start,
		 output reg stall
       );
		 
function load;
   input [31:0] instr;
    load = (`LB || `LBU || `LH || `LHU || `LW || `LWL || `LWR);
endfunction 

function beqbne;
   input [31:0] instr;
    beqbne = (`BEQ || `BNE || `MOVZ);
endfunction 

function bjj;//branch or Jr or Jalr or cmp
   input [31:0] instr;
    bjj  = (`BEQ || `BNE || `BLEZ || `BGTZ || `BLTZ || `BGEZ || `JALR || `JR || `BGEZAL);
endfunction 

function cal_r;//include sll srl sra
   input [31:0] instr;
    cal_r = (`ADD || `ADDU || `SUB || `SUBU || `SLT || `SLTU || `SLL || `SRL || `SRA || `SLLV || `SRLV || `SRAV || `AND || `OR || `XOR || `NOR  || `MOVZ || `MULT || `MULTU || `DIV || `DIVU);
endfunction

function cal_i;//include lui
   input [31:0] instr;
    cal_i = (`ADDI || `ADDIU || `ORI || `XORI || `LUI || `SLTI || `SLTIU || `ANDI);
endfunction

function store;
   input [31:0] instr;
    store = (`SB || `SH || `SW);
endfunction

function jal;
   input [31:0] instr;
    jal = `JAL;
endfunction
function jalr;
   input [31:0] instr;
    jalr = `JALR;
endfunction

function muldiv;
   input [31:0] instr;
    muldiv = (`MULT || `MULTU || `DIV || `DIVU);
endfunction

function mt;
   input [31:0] instr;
    mt = (`MTHI || `MTLO);
endfunction

function mf;
   input [31:0] instr;
    mf = (`MFHI || `MFLO);
endfunction
	
	always @* begin
	    if((busy || start) && (muldiv(instr_D) || mt(instr_D) || mf(instr_D)))
          stall <= 1'b1;
		 else if(load(instr_E)) 
          begin
             if(beqbne(instr_D) && instr_E[`RT] == instr_D[`RT])
               stall <= 1'b1;
             else if(bjj(instr_D) && instr_E[`RT] == instr_D[`RS])
               stall <= 1'b1;
             else if(cal_r(instr_D) && instr_E[`RT] == instr_D[`RT])
               stall <= 1'b1;
             else if((cal_r(instr_D) || cal_i(instr_D) || load(instr_D) || store(instr_D) || mt(instr_D))  && instr_E[`RT] == instr_D[`RS])
               stall <= 1'b1;
             else
               stall <= 1'b0;
          end // if (load(instr_E))
		 else if (cal_i(instr_E)) //cal_i_E
          begin
             if(beqbne(instr_D) && instr_E[`RT] == instr_D[`RT])
               stall <= 1'b1;
             else if(bjj(instr_D) && instr_E[`RT] == instr_D[`RS]) 
               stall <= 1'b1;
             else 
               stall <= 1'b0;
          end
		 else if((cal_r(instr_E) || mf(instr_E)) && instr_E[`RD] != 5'b0) //addu or subu_E
          begin
             if(beqbne(instr_D) && instr_E[`RD] == instr_D[`RT])
               stall <= 1'b1;
             else if(bjj(instr_D) && instr_E[`RD] == instr_D[`RS]) 
               stall <= 1'b1;
             else 
               stall <= 1'b0;
          end
        else if(load(instr_M))
          begin
             if(beqbne(instr_D) && instr_M[`RT] == instr_D[`RT])
               stall <= 1'b1;
             else if(bjj(instr_D) && instr_M[`RT] == instr_D[`RS]) 
               stall <= 1'b1;
             else 
               stall <= 1'b0;
          end
        else 
          stall <= 1'b0;
		  /*if (load(instr_M)&&beqbne(instr_D) && instr_M[`RT] == instr_D[`RT])
	       stall <= 1'b1;*/
		  
     end // always @ begin
	 
	  
endmodule//StallUnit


module HazardUnit(
       input [31:0] instr_D,
		 input [31:0] instr_E,
		 input [31:0] instr_M,
		 input [31:0] instr_W,
		 input cmpResult_M,
		 input cmpResult_W,
		 output reg [2:0] FowardRSD,
		 output reg [2:0] FowardRTD,
		 output reg [1:0] FowardRSE,
		 output reg [1:0] FowardRTE,
		 output reg FowardRTM
          );
function load;
   input [31:0] instr;
    load = (`LB || `LBU || `LH || `LHU || `LW || `LWL || `LWR);
endfunction 

function beqbne;
   input [31:0] instr;
    beqbne = (`BEQ || `BNE);
endfunction 

function bjj;//branch or Jr or Jalr
   input [31:0] instr;
    bjj  = (`BEQ || `BNE || `BLEZ || `BGTZ || `BLTZ || `BGEZ || `JALR || `JR || `BGEZAL);
endfunction 

function cal_r;//include sll srl sra exclude mul div
   input [31:0] instr;
    cal_r = (`ADD || `ADDU || `SUB || `SUBU || `SLT || `SLTU || `SLL || `SRL || `SRA || `SLLV || `SRLV || `SRAV || `AND || `OR || `XOR || `NOR  || `MULT || `MULTU || `DIV || `DIVU);
endfunction

function cal_i;//include lui
   input [31:0] instr;
    cal_i = (`ADDI || `ADDIU || `ORI || `XORI || `LUI || `SLTI || `SLTIU || `ANDI);
endfunction

function store;
   input [31:0] instr;
    store = (`SB || `SH || `SW);
endfunction

function jal;
   input [31:0] instr;
    jal = `JAL;
endfunction
function jalr;
   input [31:0] instr;
    jalr = `JALR;
endfunction

function muldiv;
   input [31:0] instr;
    muldiv = (`MULT || `MULTU || `DIV || `DIVU);
endfunction

function mt;
   input [31:0] instr;
    mt = (`MTHI || `MTLO);
endfunction

function mf;
   input [31:0] instr;
    mf = (`MFHI || `MFLO);
endfunction
function judge_r;
   input [31:0] instr;
    judge_r = `MOVZ;
endfunction
function judge_j;
   input [31:0] instr;
	 judge_j = `BGEZAL;
endfunction

  always @*//FRSD
	  if(((cal_r(instr_M) || (judge_r(instr_M) && cmpResult_M) || mf(instr_M)) && instr_M[`RD] != 5'b0) && instr_M[`RD] == instr_D[`RS]) //cal_r M
       FowardRSD <= 3'b001;
     else if((cal_i(instr_M) && instr_M[`RT] != 5'b0) && instr_M[`RT] == instr_D[`RS]) //cal_i M
       FowardRSD <= 3'b001;
     else if(((jal(instr_M) || (judge_j(instr_M) && cmpResult_M)) && instr_D[`RS] == 5'h1f) || ( jalr(instr_M) && instr_M[`RD] != 5'b0 && instr_D[`RS] == instr_M[`RD])) //jal M
       FowardRSD <= 3'b010;
	  else if(((cal_r(instr_W) || (judge_r(instr_W)&&cmpResult_W) || mf(instr_W)) && instr_W[`RD] != 5'b0) && instr_W[`RD] == instr_D[`RS])
	    FowardRSD <= 3'b011;
	  else if((cal_i(instr_W) && instr_W[`RT] != 5'b0) && instr_W[`RT] == instr_D[`RS])
	    FowardRSD <= 3'b011;
	  else if((load(instr_W) && instr_W[`RT] != 5'b0) && instr_W[`RT] == instr_D[`RS])
	    FowardRSD <= 3'b011;
	  else if(((jal(instr_W)  || (judge_j(instr_W) && cmpResult_W)) && instr_D[`RS] == 5'h1f) || ( jalr(instr_W) && instr_W[`RD] != 5'b0 && instr_D[`RS] == instr_W[`RD]))
	    FowardRSD <= 3'b100;
     else
       FowardRSD <= 3'b000;
	 
   always @(*) //FRTD
 
     if(((cal_r(instr_M) || (judge_r(instr_M)&&cmpResult_M) || mf(instr_M)) && instr_M[`RD] != 5'b0) && instr_M[`RD] == instr_D[`RT])
       FowardRTD <= 3'b001;
     else if((cal_i(instr_M) && instr_M[`RT] != 5'b0) && instr_M[`RT] == instr_D[`RT])
       FowardRTD <= 3'b001;
     else if(((jal(instr_M)  || (judge_j(instr_M) && cmpResult_M)) && instr_D[`RT] == 5'h1f) || ( jalr(instr_M) && instr_M[`RD] != 5'b0 && instr_D[`RT] == instr_M[`RD]))
       FowardRTD <= 3'b010;
	  else if(((cal_r(instr_W) || (judge_r(instr_W)&&cmpResult_W) || mf(instr_W)) && instr_W[`RD] != 5'b0) && instr_W[`RD] == instr_D[`RT])
	    FowardRTD <= 3'b011;
	  else if((cal_i(instr_W) && instr_W[`RT] != 5'b0) && instr_W[`RT] == instr_D[`RT])
	    FowardRTD <= 3'b011;
	  else if((load(instr_W) && instr_W[`RT] != 5'b0) && instr_W[`RT] == instr_D[`RT])
	    FowardRTD <= 3'b011;
     else if(((jal(instr_W)  || (judge_j(instr_W) && cmpResult_W)) && instr_D[`RT] == 5'h1f) || ( jalr(instr_W) && instr_W[`RD] != 5'b0 && instr_D[`RT] == instr_W[`RD]))
	    FowardRTD <= 3'b100;
     else
       FowardRTD <= 3'b000;



   always @(*) //FRSE
      
     if(((cal_r(instr_M) || (judge_r(instr_M)&&cmpResult_M) || mf(instr_M)) && instr_M[`RD] != 5'b0) && instr_M[`RD] == instr_E[`RS]) //cal_r M
       FowardRSE <= 2'b01;
     else if((cal_i(instr_M) && instr_M[`RT] != 5'b0) && instr_M[`RT] == instr_E[`RS]) //cal_i M
       FowardRSE <= 2'b01;
     else if(((jal(instr_M)  || (judge_j(instr_M) && cmpResult_M)) && instr_E[`RS] == 5'h1f) || (jalr(instr_M) && instr_M[`RD] != 5'b0 && instr_E[`RS] == instr_M[`RD])) //jal M
       FowardRSE <= 2'b10;
   
     else if(((cal_r(instr_W) || (judge_r(instr_W)&&cmpResult_W) || mf(instr_W)) && instr_W[`RD] != 5'b0) && instr_W[`RD] == instr_E[`RS]) //cal_r W
       FowardRSE <= 2'b11;
     else if((cal_i(instr_W) && instr_W[`RT] != 5'b0) && instr_W[`RT] == instr_E[`RS]) //cal_i W
       FowardRSE <= 2'b11;
     else if((load(instr_W) && instr_W[`RT] != 5'b0) && instr_W[`RT] == instr_E[`RS]) //load W
       FowardRSE <= 2'b11;
     else if(((jal(instr_W)  || (judge_j(instr_W) && cmpResult_W)) && instr_E[`RS] == 5'h1f) || (jalr(instr_W) && instr_W[`RD] != 5'b0 && instr_E[`RS] == instr_W[`RD]))
       FowardRSE <= 2'b11;
     else
       FowardRSE <= 2'b00;
   


   always @(*) //FRTE

     if(((cal_r(instr_M) || (judge_r(instr_M)&&cmpResult_M) || mf(instr_M)) && instr_M[`RD] != 5'b0) && instr_M[`RD] == instr_E[`RT]) //cal_r M
       FowardRTE <= 2'b01;
     else if((cal_i(instr_M) && instr_M[`RT] != 5'b0) && instr_M[`RT] == instr_E[`RT]) //cal_i M
       FowardRTE <= 2'b01;
     else if(((jal(instr_M)  || (judge_j(instr_M) && cmpResult_M)) && instr_E[`RT] == 5'h1f) || (jalr(instr_M) && instr_M[`RD] != 5'b0 && instr_E[`RT] == instr_M[`RD])) //jal M
       FowardRTE <= 2'b10;
   
     else if(((cal_r(instr_W) || (judge_r(instr_W)&&cmpResult_W) || mf(instr_W)) && instr_W[`RD] != 5'b0) && instr_W[`RD] == instr_E[`RT]) //cal_r W
       FowardRTE <= 2'b11;
     else if((cal_i(instr_W) && instr_W[`RT] != 5'b0) && instr_W[`RT] == instr_E[`RT]) //cal_i W
       FowardRTE <= 2'b11;
     else if((load(instr_W) && instr_W[`RT] != 5'b0) && instr_W[`RT] == instr_E[`RT]) //load W
       FowardRTE <= 2'b11;
     else if(((jal(instr_W)  || (judge_j(instr_W) && cmpResult_W)) && instr_E[`RT] == 5'h1f) || (jalr(instr_W) && instr_W[`RD] != 5'b0 && instr_E[`RT] == instr_W[`RD]))
       FowardRTE <= 2'b11;
     else
       FowardRTE <= 2'b00;


   
   always @(*) //FRTM
                                                         
     if(((cal_r(instr_M) || (judge_r(instr_M)&&cmpResult_M) || mf(instr_W)) && instr_W[`RD] != 5'b0) && instr_W[`RD] == instr_M[`RT]) //cal_r W
       FowardRTM <= 1'b1;
     else if(((cal_i(instr_W) || load(instr_W)) && instr_W[`RT] != 5'b0) && instr_W[`RT] == instr_M[`RT]) //cal_i W
       FowardRTM <= 1'b1;
   
     else if(((jal(instr_W)  || (judge_j(instr_W) && cmpResult_W)) && instr_M[`RT] == 5'h1f) || (jalr(instr_W) && instr_W[`RD] != 5'b0 && instr_W[`RD] == instr_M[`RT])) //jal W
       FowardRTM <= 1'b1;
     else
       FowardRTM <= 1'b0;

endmodule//HazardUnit	