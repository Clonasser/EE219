module v_regfile (
    input                           clk,
    input                           rst,

    input                           vwb_en_i,
    input       [`VREG_ADDR_BUS]    vwb_addr_i,
    input       [`VREG_BUS]         vwb_data_i,

    input                           vs1_en_i,
    input       [`VREG_ADDR_BUS]    vs1_addr_i,
    output reg  [`VREG_BUS]         vs1_data_o,

    input                           vs2_en_i,
    input       [`VREG_ADDR_BUS]    vs2_addr_i,
    output reg  [`VREG_BUS]         vs2_data_o
);

integer i ;

reg [`VREG_BUS] 	vregfile	[2**`VREG_ADDR_WIDTH-1 : 0];

always @(posedge clk ) begin
    if( rst == 1'b1 ) begin
        for(i=0; i<2**`VREG_ADDR_WIDTH; i=i+1) begin
            vregfile[i] <= `VLEN'b0 ;
        end
    end
    else begin
        if( (vwb_en_i == 1'b1) && (vwb_addr_i != 0) ) begin
            vregfile[vwb_addr_i] <= vwb_data_i ;
            // $display("%d", vwb_data_i);
        end
    end
end

always @( * ) begin
    if( rst == 1'b1 ) begin
        vs1_data_o = `VLEN'b0 ;
    end
    else if( vs1_en_i == 1'b1) begin
        vs1_data_o = vregfile[vs1_addr_i];
    end
    else begin
        vs1_data_o = `VLEN'b0;
    end
end

always @(*) begin
    if (rst == 1'b1)
        vs2_data_o = `VLEN'b0;
    else if (vs2_en_i == 1'b1)
        vs2_data_o = vregfile[vs2_addr_i];
    else
        vs2_data_o = `VLEN'b0;
end



endmodule