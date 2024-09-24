`include "v_defines.v"

module v_rvcpu(
    input                       clk,
    input                       rst,
    input   [`VINST_BUS]        inst ,

    input   [`SREG_BUS]         vec_rs1_data,
	output            	        vec_rs1_r_ena,
	output  [`SREG_ADDR_BUS]   	vec_rs1_r_addr,

    output                      vram_r_ena,
    output  [`VRAM_ADDR_BUS]    vram_r_addr,
    input   [`VRAM_DATA_BUS]    vram_r_data,

    output                      vram_w_ena,
    output  [`VRAM_ADDR_BUS]    vram_w_addr,
    output  [`VRAM_DATA_BUS]    vram_w_data,
    output  [`VRAM_DATA_BUS]    vram_w_mask
);

wire                       vs1_en;
wire    [`VREG_ADDR_BUS]   vs1_addr;
wire    [`VREG_BUS]        vs1_dout;

wire                       vs2_en;
wire    [`VREG_ADDR_BUS]   vs2_addr;
wire    [`VREG_BUS]        vs2_data;

wire    [`ALU_OP_BUS]      valu_opcode;
wire    [`VREG_BUS]        operand_v1;
wire    [`VREG_BUS]        operand_v2;

wire                       vmem_ren;
wire                       vmem_wen;
wire    [`VMEM_ADDR_BUS]   vmem_addr;
wire    [`VMEM_DATA_BUS]   vmem_din;
wire    [`VMEM_DATA_BUS]   vmem_dout;

wire                       vid_wb_en;
wire                       vid_wb_sel;
wire                       vid_wb_split;
wire    [`VREG_ADDR_BUS]   vid_wb_addr;

wire    [`VREG_BUS]        valu_result;

wire                       vwb_en;
wire    [`VREG_ADDR_BUS]   vwb_addr;
wire    [`VREG_BUS]        vwb_data;

wire [`VRAM_ADDR_BUS] vram_addr_o;
assign vram_r_addr = vram_addr_o;
assign vram_w_addr = vram_addr_o;


v_inst_decode V_ID (
    .rst ( rst ),

    .inst_i        ( inst ),

    .rs1_en_o      ( vec_rs1_r_ena                       ),
    .rs1_addr_o    ( vec_rs1_r_addr                      ),
    .rs1_dout_i    ( vec_rs1_data                        ),

    .vs1_en_o      ( vs1_en                              ),
    .vs1_addr_o    ( vs1_addr                            ),
    .vs1_dout_i    ( vs1_dout                            ),

    .vs2_en_o      ( vs2_en                              ),
    .vs2_addr_o    ( vs2_addr                            ),
    .vs2_dout_i    ( vs2_data                            ),

    .valu_opcode_o ( valu_opcode                         ),
    .operand_v1_o  ( operand_v1                          ),    
    .operand_v2_o  ( operand_v2                          ),

    .vmem_ren_o    ( vmem_ren                            ),  
    .vmem_wen_o    ( vmem_wen                            ),
    .vmem_addr_o   ( vmem_addr                           ),  
    .vmem_din_o    ( vmem_din                            ),

    .vid_wb_en_o   ( vid_wb_en                           ),  
    .vid_wb_sel_o  ( vid_wb_sel                          ),
    .vid_wb_split_o( vid_wb_split                        ),
    .vid_wb_addr_o ( vid_wb_addr                         ) 
);

v_execute  V_ALU (
    .clk ( clk ),
    .rst ( rst ),

    .valu_opcode_i ( valu_opcode ),
    .operand_v1_i  ( operand_v1  ),    
    .operand_v2_i  ( operand_v2  ),
    .valu_result_o ( valu_result )
);

v_mem  V_MEM_ACCESS (

    
    .vmem_ren_i  ( vmem_ren    ),
    .vmem_wen_i  ( vmem_wen    ),
    .vmem_addr_i ( vmem_addr   ),
    .vmem_din_i  ( vmem_din    ),
    .vmem_dout_o ( vmem_dout   ),

    .vram_ren_o  ( vram_r_ena  ),
    .vram_wen_o  ( vram_w_ena  ),
    .vram_addr_o ( vram_addr_o ),
    .vram_mask_o ( vram_w_mask ),
    .vram_din_o  ( vram_w_data  ),
    .vram_dout_i ( vram_r_data )
);

v_write_back  V_WB (


    .vid_wb_en_i    ( vid_wb_en    ),
    .vid_wb_sel_i   ( vid_wb_sel   ),
    .vid_wb_split_i ( vid_wb_split ),
    .vid_wb_addr_i  ( vid_wb_addr  ),
    .valu_result_i  ( valu_result  ),
    .vmem_result_i  ( vmem_dout    ),
  
    .vwb_en_o       ( vwb_en       ),
    .vwb_addr_o     ( vwb_addr     ),
    .vwb_data_o     ( vwb_data     )
);

v_regfile V_REGFILE (
    .clk ( clk ),
    .rst ( rst ),

    .vwb_en_i   ( vwb_en   ),
    .vwb_addr_i ( vwb_addr ),
    .vwb_data_i ( vwb_data ),

    .vs1_en_i   ( vs1_en   ),
    .vs1_addr_i ( vs1_addr ),
    .vs1_data_o ( vs1_dout ),

    .vs2_en_i   ( vs2_en   ),
    .vs2_addr_i ( vs2_addr ),
    .vs2_data_o ( vs2_data )
);

endmodule
