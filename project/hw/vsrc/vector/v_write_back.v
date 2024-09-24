module v_write_back (
    input                      vid_wb_en_i,
    input                      vid_wb_sel_i,
    input                      vid_wb_split_i,
    input   [`VREG_ADDR_BUS]   vid_wb_addr_i,
    input   [`VREG_BUS]        valu_result_i,
    input   [`VREG_BUS]        vmem_result_i,

    output                     vwb_en_o,
    output  [`VREG_ADDR_BUS]   vwb_addr_o,
    output  [`VREG_BUS]        vwb_data_o
);

assign vwb_en_o     = vid_wb_en_i ;
assign vwb_addr_o   = vid_wb_addr_i ;
// assign vwb_data_o   = ( vid_wb_sel_i )  ?   vmem_result_i : valu_result_i ;

// SEW=64
wire [`VREG_BUS] vmem_temp;
wire [`VREG_BUS] vmem_split;
assign vmem_split = { {(32-8){vmem_result_i[127]}},vmem_result_i[127:120],
                      {(32-8){vmem_result_i[119]}},vmem_result_i[119:112],
                      {(32-8){vmem_result_i[111]}},vmem_result_i[111:104],
                      {(32-8){vmem_result_i[103]}},vmem_result_i[103: 96],
                      {(32-8){vmem_result_i[95 ]}},vmem_result_i[95 : 88],
                      {(32-8){vmem_result_i[87 ]}},vmem_result_i[87 : 80],
                      {(32-8){vmem_result_i[79 ]}},vmem_result_i[79 : 72],
                      {(32-8){vmem_result_i[71 ]}},vmem_result_i[71 : 64],
                      {(32-8){vmem_result_i[63 ]}},vmem_result_i[63 : 56],
                      {(32-8){vmem_result_i[55 ]}},vmem_result_i[55 : 48],
                      {(32-8){vmem_result_i[47 ]}},vmem_result_i[47 : 40],
                      {(32-8){vmem_result_i[39 ]}},vmem_result_i[39 : 32],
                      {(32-8){vmem_result_i[31 ]}},vmem_result_i[31 : 24],
                      {(32-8){vmem_result_i[23 ]}},vmem_result_i[23 : 16],
                      {(32-8){vmem_result_i[15 ]}},vmem_result_i[15 :  8],
                      {(32-8){vmem_result_i[7  ]}},vmem_result_i[7  :  0]};
assign vmem_temp    = ( vid_wb_split_i)  ?   vmem_split : vmem_result_i ;
assign vwb_data_o   = ( vid_wb_sel_i  )  ?   vmem_temp  : valu_result_i ;

endmodule 