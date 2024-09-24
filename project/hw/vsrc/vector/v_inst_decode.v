`include "v_defines.v"

module v_inst_decode (
    input                      rst,

    input   [`VINST_BUS]       inst_i,

    output                     rs1_en_o,
    output  [`SREG_ADDR_BUS]   rs1_addr_o,
    input   [`SREG_BUS]        rs1_dout_i,

    output                     vs1_en_o,
    output  [`VREG_ADDR_BUS]   vs1_addr_o,
    input   [`VREG_BUS]        vs1_dout_i,

    output                     vs2_en_o,
    output  [`VREG_ADDR_BUS]   vs2_addr_o,
    input   [`VREG_BUS]        vs2_dout_i,

    output  [`ALU_OP_BUS ]     valu_opcode_o,
    output  [`VREG_BUS]        operand_v1_o,
    output  [`VREG_BUS]        operand_v2_o,

    output                     vmem_ren_o,
    output                     vmem_wen_o,
    output  [`VMEM_ADDR_BUS]   vmem_addr_o,
    output  [`VMEM_DATA_BUS]   vmem_din_o,

    output                     vid_wb_en_o,
    output                     vid_wb_sel_o,
    output                     vid_wb_split_o,
    output  [`VREG_ADDR_BUS]   vid_wb_addr_o
);

// wire declaration
wire [5  : 0]   funct6 ;
wire            vm ;
wire [4  : 0]   rs2;
wire [4  : 0]   imm ;
wire [4  : 0]   rs1;
wire [2  : 0]   funct3;
wire [4  : 0]   vd;
wire [6  : 0]   opcode;

wire inst_vle32_v;
wire inst_vse32_v;
wire inst_vadd_vv;
wire inst_vadd_vi;
wire inst_vadd_vx;
wire inst_vmul_vv;
wire inst_vmul_vi;
wire inst_vmul_vx;
wire inst_vmac_vv;// self-def operation
wire inst_vsum_vv;// self-def operation
wire inst_vsus_vv;// self-def operation
wire inst_vle8_v ;// self-def operation
wire inst_vsup_vv;// self-def operation


// decode instruction
assign {funct6, vm} = inst_i[ 31 : 25 ] ;
assign rs2          = inst_i[ 24 : 20 ] ;
assign rs1          = inst_i[ 19 : 15 ] ;
assign imm          = inst_i[ 19 : 15 ] ;
assign funct3       = inst_i[ 14 : 12 ] ;
assign vd           = inst_i[ 11 :  7 ] ; // also vs3
assign opcode       = inst_i[  6 :  0 ] ;

// imm extention
wire [`SREG_BUS] imm_v;
assign imm_v = { {(`SEW-5){imm[4]}}, imm };

// inst select
assign inst_vle32_v  = (opcode == `OPCODE_VL)  & (funct3 == `WIDTH_VLE32)  & (funct6 == `FUNCT6_VLE32);
assign inst_vse32_v  = (opcode == `OPCODE_VS)  & (funct3 == `WIDTH_VSE32)  & (funct6 == `FUNCT6_VSE32);
assign inst_vadd_vv  = (opcode == `OPCODE_VV)  & (funct3 == `FUNCT3_IVV)   & (funct6 == `FUNCT6_VADD);
assign inst_vadd_vi  = (opcode == `OPCODE_VV)  & (funct3 == `FUNCT3_IVI)   & (funct6 == `FUNCT6_VADD);
assign inst_vadd_vx  = (opcode == `OPCODE_VV)  & (funct3 == `FUNCT3_IVX)   & (funct6 == `FUNCT6_VADD);
assign inst_vmul_vv  = (opcode == `OPCODE_VV)  & (funct3 == `FUNCT3_IVV)   & (funct6 == `FUNCT6_VMUL);
assign inst_vmul_vi  = (opcode == `OPCODE_VV)  & (funct3 == `FUNCT3_IVI)   & (funct6 == `FUNCT6_VMUL);
assign inst_vmul_vx  = (opcode == `OPCODE_VV)  & (funct3 == `FUNCT3_IVX)   & (funct6 == `FUNCT6_VMUL);
assign inst_vmac_vv  = (opcode == `OPCODE_VV)  & (funct3 == `FUNCT3_IVV)   & (funct6 == `FUNCT6_VMAC);
assign inst_vsum_vv  = (opcode == `OPCODE_VV)  & (funct3 == `FUNCT3_IVV)   & (funct6 == `FUNCT6_VSUM);
assign inst_vsus_vv  = (opcode == `OPCODE_VV)  & (funct3 == `FUNCT3_IVV)   & (funct6 == `FUNCT6_VSUS);
assign inst_vle8_v   = (opcode == `OPCODE_VL)  & (funct3 == `WIDTH_VLE32)  & (funct6 == `FUNCT6_VLE8);
assign inst_vsum_vv  = (opcode == `OPCODE_VV)  & (funct3 == `FUNCT3_IVV)   & (funct6 == `FUNCT6_VSUP);


// ALU control
assign valu_opcode_o = (rst == 1'b1)                                 ?  `VALU_OP_NOP     :
                       (inst_vle32_v | inst_vse32_v | inst_vle8_v )  ?  `VALU_OP_NOP     :
                       (inst_vadd_vv | inst_vadd_vi | inst_vadd_vx)  ?  `VALU_OP_ADD     :
                       (inst_vmul_vv | inst_vmul_vi | inst_vmul_vx)  ?  `VALU_OP_MUL     :
                       (inst_vmac_vv)                                ?  `VALU_OP_MAC     :
                       (inst_vsum_vv)                                ?  `VALU_OP_SUM     :
                       (inst_vsus_vv)                                ?  `VALU_OP_SUS     :
                       (inst_vsup_vv)                                ?  `VALU_OP_SUP     :
                                                                        `VALU_OP_NOP     ;


assign rs1_en_o   = (rst != 1'b1) & (inst_vle32_v | inst_vse32_v | inst_vadd_vx | inst_vmul_vx | inst_vle8_v);
assign rs1_addr_o = (rs1_en_o) ? rs1 : 0;

assign vs1_en_o   = (rst != 1'b1) & (inst_vadd_vv | inst_vmul_vv | inst_vmac_vv | inst_vsum_vv | inst_vsus_vv | inst_vsup_vv);
assign vs1_addr_o = (vs1_en_o) ? rs1 : 0;

assign vs2_en_o   = (rst != 1'b1) & (inst_vse32_v | inst_vadd_vv | inst_vadd_vi | inst_vadd_vx
                                                  | inst_vmul_vv | inst_vmul_vi | inst_vmul_vx
                                                  | inst_vmac_vv);
assign vs2_addr_o = (vs2_en_o & !inst_vse32_v) ? rs2 : 
                    (vs2_en_o & inst_vse32_v)  ? vd : 0;

assign operand_v1_o =  (vs1_en_o )                   ? vs1_dout_i      :
                       (inst_vadd_vi | inst_vmul_vi) ? {`VLMAX{imm_v}}      :
                       (inst_vadd_vx | inst_vmul_vx) ? {`VLMAX{rs1_dout_i}} : 
                                                       0               ;
assign operand_v2_o = (vs2_en_o) ? vs2_dout_i : 0;

// mem access
assign vmem_ren_o  = (inst_vle32_v | inst_vle8_v);
assign vmem_wen_o  = (inst_vse32_v);
// assign vmem_addr_o = {{64-32{rs1_dout_i[31]}},rs1_dout_i}    ;//extend to 32 bits
assign vmem_addr_o = rs1_dout_i    ;
assign vmem_din_o  = operand_v2_o  ;

// write back
assign vid_wb_en_o    = (inst_vle32_v | inst_vadd_vv | inst_vadd_vi | inst_vadd_vx
                        |inst_vle8_v  | inst_vmul_vv | inst_vmul_vi | inst_vmul_vx
                                      | inst_vmac_vv
                                      | inst_vsum_vv | inst_vsus_vv | inst_vsup_vv);
assign vid_wb_sel_o   = (inst_vle32_v | inst_vle8_v);
assign vid_wb_split_o = inst_vle8_v;
assign vid_wb_addr_o  = (vid_wb_en_o) ? vd   : 0 ;

endmodule