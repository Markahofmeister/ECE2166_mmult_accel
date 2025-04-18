// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module mm_mm_entry616 (
        ap_clk,
        ap_rst,
        ap_start,
        start_full_n,
        ap_done,
        ap_continue,
        ap_idle,
        ap_ready,
        start_out,
        start_write,
        N,
        N_out_din,
        N_out_full_n,
        N_out_write,
        N_out1_din,
        N_out1_full_n,
        N_out1_write,
        A_p_V,
        B_p_V,
        AB_p_V,
        A_p_V_out_din,
        A_p_V_out_full_n,
        A_p_V_out_write,
        B_p_V_out_din,
        B_p_V_out_full_n,
        B_p_V_out_write,
        AB_p_V_out_din,
        AB_p_V_out_full_n,
        AB_p_V_out_write
);

parameter    ap_ST_fsm_state1 = 1'd1;

input   ap_clk;
input   ap_rst;
input   ap_start;
input   start_full_n;
output   ap_done;
input   ap_continue;
output   ap_idle;
output   ap_ready;
output   start_out;
output   start_write;
input  [31:0] N;
output  [31:0] N_out_din;
input   N_out_full_n;
output   N_out_write;
output  [31:0] N_out1_din;
input   N_out1_full_n;
output   N_out1_write;
input  [63:0] A_p_V;
input  [63:0] B_p_V;
input  [63:0] AB_p_V;
output  [63:0] A_p_V_out_din;
input   A_p_V_out_full_n;
output   A_p_V_out_write;
output  [63:0] B_p_V_out_din;
input   B_p_V_out_full_n;
output   B_p_V_out_write;
output  [63:0] AB_p_V_out_din;
input   AB_p_V_out_full_n;
output   AB_p_V_out_write;

reg ap_done;
reg ap_idle;
reg start_write;
reg N_out_write;
reg N_out1_write;
reg A_p_V_out_write;
reg B_p_V_out_write;
reg AB_p_V_out_write;

reg    real_start;
reg    start_once_reg;
reg    ap_done_reg;
(* fsm_encoding = "none" *) reg   [0:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
reg    internal_ap_ready;
reg    N_out_blk_n;
reg    N_out1_blk_n;
reg    A_p_V_out_blk_n;
reg    B_p_V_out_blk_n;
reg    AB_p_V_out_blk_n;
reg    ap_block_state1;
reg   [0:0] ap_NS_fsm;

// power-on initialization
initial begin
#0 start_once_reg = 1'b0;
#0 ap_done_reg = 1'b0;
#0 ap_CS_fsm = 1'd1;
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_done_reg <= 1'b0;
    end else begin
        if ((ap_continue == 1'b1)) begin
            ap_done_reg <= 1'b0;
        end else if ((~((real_start == 1'b0) | (1'b0 == AB_p_V_out_full_n) | (1'b0 == B_p_V_out_full_n) | (1'b0 == A_p_V_out_full_n) | (1'b0 == N_out1_full_n) | (1'b0 == N_out_full_n) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
            ap_done_reg <= 1'b1;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        start_once_reg <= 1'b0;
    end else begin
        if (((internal_ap_ready == 1'b0) & (real_start == 1'b1))) begin
            start_once_reg <= 1'b1;
        end else if ((internal_ap_ready == 1'b1)) begin
            start_once_reg <= 1'b0;
        end
    end
end

always @ (*) begin
    if ((~((real_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        AB_p_V_out_blk_n = AB_p_V_out_full_n;
    end else begin
        AB_p_V_out_blk_n = 1'b1;
    end
end

always @ (*) begin
    if ((~((real_start == 1'b0) | (1'b0 == AB_p_V_out_full_n) | (1'b0 == B_p_V_out_full_n) | (1'b0 == A_p_V_out_full_n) | (1'b0 == N_out1_full_n) | (1'b0 == N_out_full_n) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        AB_p_V_out_write = 1'b1;
    end else begin
        AB_p_V_out_write = 1'b0;
    end
end

always @ (*) begin
    if ((~((real_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        A_p_V_out_blk_n = A_p_V_out_full_n;
    end else begin
        A_p_V_out_blk_n = 1'b1;
    end
end

always @ (*) begin
    if ((~((real_start == 1'b0) | (1'b0 == AB_p_V_out_full_n) | (1'b0 == B_p_V_out_full_n) | (1'b0 == A_p_V_out_full_n) | (1'b0 == N_out1_full_n) | (1'b0 == N_out_full_n) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        A_p_V_out_write = 1'b1;
    end else begin
        A_p_V_out_write = 1'b0;
    end
end

always @ (*) begin
    if ((~((real_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        B_p_V_out_blk_n = B_p_V_out_full_n;
    end else begin
        B_p_V_out_blk_n = 1'b1;
    end
end

always @ (*) begin
    if ((~((real_start == 1'b0) | (1'b0 == AB_p_V_out_full_n) | (1'b0 == B_p_V_out_full_n) | (1'b0 == A_p_V_out_full_n) | (1'b0 == N_out1_full_n) | (1'b0 == N_out_full_n) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        B_p_V_out_write = 1'b1;
    end else begin
        B_p_V_out_write = 1'b0;
    end
end

always @ (*) begin
    if ((~((real_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        N_out1_blk_n = N_out1_full_n;
    end else begin
        N_out1_blk_n = 1'b1;
    end
end

always @ (*) begin
    if ((~((real_start == 1'b0) | (1'b0 == AB_p_V_out_full_n) | (1'b0 == B_p_V_out_full_n) | (1'b0 == A_p_V_out_full_n) | (1'b0 == N_out1_full_n) | (1'b0 == N_out_full_n) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        N_out1_write = 1'b1;
    end else begin
        N_out1_write = 1'b0;
    end
end

always @ (*) begin
    if ((~((real_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        N_out_blk_n = N_out_full_n;
    end else begin
        N_out_blk_n = 1'b1;
    end
end

always @ (*) begin
    if ((~((real_start == 1'b0) | (1'b0 == AB_p_V_out_full_n) | (1'b0 == B_p_V_out_full_n) | (1'b0 == A_p_V_out_full_n) | (1'b0 == N_out1_full_n) | (1'b0 == N_out_full_n) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        N_out_write = 1'b1;
    end else begin
        N_out_write = 1'b0;
    end
end

always @ (*) begin
    if ((~((real_start == 1'b0) | (1'b0 == AB_p_V_out_full_n) | (1'b0 == B_p_V_out_full_n) | (1'b0 == A_p_V_out_full_n) | (1'b0 == N_out1_full_n) | (1'b0 == N_out_full_n) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        ap_done = 1'b1;
    end else begin
        ap_done = ap_done_reg;
    end
end

always @ (*) begin
    if (((real_start == 1'b0) & (1'b1 == ap_CS_fsm_state1))) begin
        ap_idle = 1'b1;
    end else begin
        ap_idle = 1'b0;
    end
end

always @ (*) begin
    if ((~((real_start == 1'b0) | (1'b0 == AB_p_V_out_full_n) | (1'b0 == B_p_V_out_full_n) | (1'b0 == A_p_V_out_full_n) | (1'b0 == N_out1_full_n) | (1'b0 == N_out_full_n) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        internal_ap_ready = 1'b1;
    end else begin
        internal_ap_ready = 1'b0;
    end
end

always @ (*) begin
    if (((start_full_n == 1'b0) & (start_once_reg == 1'b0))) begin
        real_start = 1'b0;
    end else begin
        real_start = ap_start;
    end
end

always @ (*) begin
    if (((start_once_reg == 1'b0) & (real_start == 1'b1))) begin
        start_write = 1'b1;
    end else begin
        start_write = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            ap_NS_fsm = ap_ST_fsm_state1;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign AB_p_V_out_din = AB_p_V;

assign A_p_V_out_din = A_p_V;

assign B_p_V_out_din = B_p_V;

assign N_out1_din = N;

assign N_out_din = N;

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

always @ (*) begin
    ap_block_state1 = ((real_start == 1'b0) | (1'b0 == AB_p_V_out_full_n) | (1'b0 == B_p_V_out_full_n) | (1'b0 == A_p_V_out_full_n) | (1'b0 == N_out1_full_n) | (1'b0 == N_out_full_n) | (ap_done_reg == 1'b1));
end

assign ap_ready = internal_ap_ready;

assign start_out = real_start;

endmodule //mm_mm_entry616
