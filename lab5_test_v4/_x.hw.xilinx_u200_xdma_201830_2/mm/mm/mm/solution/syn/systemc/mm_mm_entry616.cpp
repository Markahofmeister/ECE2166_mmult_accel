// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "mm_mm_entry616.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic mm_mm_entry616::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic mm_mm_entry616::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<1> mm_mm_entry616::ap_ST_fsm_state1 = "1";
const sc_lv<32> mm_mm_entry616::ap_const_lv32_0 = "00000000000000000000000000000000";
const bool mm_mm_entry616::ap_const_boolean_1 = true;

mm_mm_entry616::mm_mm_entry616(sc_module_name name) : sc_module(name), mVcdFile(0) {

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_AB_p_V_out_blk_n);
    sensitive << ( real_start );
    sensitive << ( ap_done_reg );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( AB_p_V_out_full_n );

    SC_METHOD(thread_AB_p_V_out_din);
    sensitive << ( real_start );
    sensitive << ( ap_done_reg );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( N_out_full_n );
    sensitive << ( N_out1_full_n );
    sensitive << ( AB_p_V );
    sensitive << ( A_p_V_out_full_n );
    sensitive << ( B_p_V_out_full_n );
    sensitive << ( AB_p_V_out_full_n );

    SC_METHOD(thread_AB_p_V_out_write);
    sensitive << ( real_start );
    sensitive << ( ap_done_reg );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( N_out_full_n );
    sensitive << ( N_out1_full_n );
    sensitive << ( A_p_V_out_full_n );
    sensitive << ( B_p_V_out_full_n );
    sensitive << ( AB_p_V_out_full_n );

    SC_METHOD(thread_A_p_V_out_blk_n);
    sensitive << ( real_start );
    sensitive << ( ap_done_reg );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( A_p_V_out_full_n );

    SC_METHOD(thread_A_p_V_out_din);
    sensitive << ( real_start );
    sensitive << ( ap_done_reg );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( N_out_full_n );
    sensitive << ( N_out1_full_n );
    sensitive << ( A_p_V );
    sensitive << ( A_p_V_out_full_n );
    sensitive << ( B_p_V_out_full_n );
    sensitive << ( AB_p_V_out_full_n );

    SC_METHOD(thread_A_p_V_out_write);
    sensitive << ( real_start );
    sensitive << ( ap_done_reg );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( N_out_full_n );
    sensitive << ( N_out1_full_n );
    sensitive << ( A_p_V_out_full_n );
    sensitive << ( B_p_V_out_full_n );
    sensitive << ( AB_p_V_out_full_n );

    SC_METHOD(thread_B_p_V_out_blk_n);
    sensitive << ( real_start );
    sensitive << ( ap_done_reg );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( B_p_V_out_full_n );

    SC_METHOD(thread_B_p_V_out_din);
    sensitive << ( real_start );
    sensitive << ( ap_done_reg );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( N_out_full_n );
    sensitive << ( N_out1_full_n );
    sensitive << ( B_p_V );
    sensitive << ( A_p_V_out_full_n );
    sensitive << ( B_p_V_out_full_n );
    sensitive << ( AB_p_V_out_full_n );

    SC_METHOD(thread_B_p_V_out_write);
    sensitive << ( real_start );
    sensitive << ( ap_done_reg );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( N_out_full_n );
    sensitive << ( N_out1_full_n );
    sensitive << ( A_p_V_out_full_n );
    sensitive << ( B_p_V_out_full_n );
    sensitive << ( AB_p_V_out_full_n );

    SC_METHOD(thread_N_out1_blk_n);
    sensitive << ( real_start );
    sensitive << ( ap_done_reg );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( N_out1_full_n );

    SC_METHOD(thread_N_out1_din);
    sensitive << ( real_start );
    sensitive << ( ap_done_reg );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( N );
    sensitive << ( N_out_full_n );
    sensitive << ( N_out1_full_n );
    sensitive << ( A_p_V_out_full_n );
    sensitive << ( B_p_V_out_full_n );
    sensitive << ( AB_p_V_out_full_n );

    SC_METHOD(thread_N_out1_write);
    sensitive << ( real_start );
    sensitive << ( ap_done_reg );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( N_out_full_n );
    sensitive << ( N_out1_full_n );
    sensitive << ( A_p_V_out_full_n );
    sensitive << ( B_p_V_out_full_n );
    sensitive << ( AB_p_V_out_full_n );

    SC_METHOD(thread_N_out_blk_n);
    sensitive << ( real_start );
    sensitive << ( ap_done_reg );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( N_out_full_n );

    SC_METHOD(thread_N_out_din);
    sensitive << ( real_start );
    sensitive << ( ap_done_reg );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( N );
    sensitive << ( N_out_full_n );
    sensitive << ( N_out1_full_n );
    sensitive << ( A_p_V_out_full_n );
    sensitive << ( B_p_V_out_full_n );
    sensitive << ( AB_p_V_out_full_n );

    SC_METHOD(thread_N_out_write);
    sensitive << ( real_start );
    sensitive << ( ap_done_reg );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( N_out_full_n );
    sensitive << ( N_out1_full_n );
    sensitive << ( A_p_V_out_full_n );
    sensitive << ( B_p_V_out_full_n );
    sensitive << ( AB_p_V_out_full_n );

    SC_METHOD(thread_ap_CS_fsm_state1);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_block_state1);
    sensitive << ( real_start );
    sensitive << ( ap_done_reg );
    sensitive << ( N_out_full_n );
    sensitive << ( N_out1_full_n );
    sensitive << ( A_p_V_out_full_n );
    sensitive << ( B_p_V_out_full_n );
    sensitive << ( AB_p_V_out_full_n );

    SC_METHOD(thread_ap_done);
    sensitive << ( real_start );
    sensitive << ( ap_done_reg );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( N_out_full_n );
    sensitive << ( N_out1_full_n );
    sensitive << ( A_p_V_out_full_n );
    sensitive << ( B_p_V_out_full_n );
    sensitive << ( AB_p_V_out_full_n );

    SC_METHOD(thread_ap_idle);
    sensitive << ( real_start );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_ap_ready);
    sensitive << ( internal_ap_ready );

    SC_METHOD(thread_internal_ap_ready);
    sensitive << ( real_start );
    sensitive << ( ap_done_reg );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( N_out_full_n );
    sensitive << ( N_out1_full_n );
    sensitive << ( A_p_V_out_full_n );
    sensitive << ( B_p_V_out_full_n );
    sensitive << ( AB_p_V_out_full_n );

    SC_METHOD(thread_real_start);
    sensitive << ( ap_start );
    sensitive << ( start_full_n );
    sensitive << ( start_once_reg );

    SC_METHOD(thread_start_out);
    sensitive << ( real_start );

    SC_METHOD(thread_start_write);
    sensitive << ( real_start );
    sensitive << ( start_once_reg );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( real_start );
    sensitive << ( ap_done_reg );
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( N_out_full_n );
    sensitive << ( N_out1_full_n );
    sensitive << ( A_p_V_out_full_n );
    sensitive << ( B_p_V_out_full_n );
    sensitive << ( AB_p_V_out_full_n );

    start_once_reg = SC_LOGIC_0;
    ap_done_reg = SC_LOGIC_0;
    ap_CS_fsm = "1";
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "mm_mm_entry616_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT_HIER__
    sc_trace(mVcdFile, ap_clk, "(port)ap_clk");
    sc_trace(mVcdFile, ap_rst, "(port)ap_rst");
    sc_trace(mVcdFile, ap_start, "(port)ap_start");
    sc_trace(mVcdFile, start_full_n, "(port)start_full_n");
    sc_trace(mVcdFile, ap_done, "(port)ap_done");
    sc_trace(mVcdFile, ap_continue, "(port)ap_continue");
    sc_trace(mVcdFile, ap_idle, "(port)ap_idle");
    sc_trace(mVcdFile, ap_ready, "(port)ap_ready");
    sc_trace(mVcdFile, start_out, "(port)start_out");
    sc_trace(mVcdFile, start_write, "(port)start_write");
    sc_trace(mVcdFile, N, "(port)N");
    sc_trace(mVcdFile, N_out_din, "(port)N_out_din");
    sc_trace(mVcdFile, N_out_full_n, "(port)N_out_full_n");
    sc_trace(mVcdFile, N_out_write, "(port)N_out_write");
    sc_trace(mVcdFile, N_out1_din, "(port)N_out1_din");
    sc_trace(mVcdFile, N_out1_full_n, "(port)N_out1_full_n");
    sc_trace(mVcdFile, N_out1_write, "(port)N_out1_write");
    sc_trace(mVcdFile, A_p_V, "(port)A_p_V");
    sc_trace(mVcdFile, B_p_V, "(port)B_p_V");
    sc_trace(mVcdFile, AB_p_V, "(port)AB_p_V");
    sc_trace(mVcdFile, A_p_V_out_din, "(port)A_p_V_out_din");
    sc_trace(mVcdFile, A_p_V_out_full_n, "(port)A_p_V_out_full_n");
    sc_trace(mVcdFile, A_p_V_out_write, "(port)A_p_V_out_write");
    sc_trace(mVcdFile, B_p_V_out_din, "(port)B_p_V_out_din");
    sc_trace(mVcdFile, B_p_V_out_full_n, "(port)B_p_V_out_full_n");
    sc_trace(mVcdFile, B_p_V_out_write, "(port)B_p_V_out_write");
    sc_trace(mVcdFile, AB_p_V_out_din, "(port)AB_p_V_out_din");
    sc_trace(mVcdFile, AB_p_V_out_full_n, "(port)AB_p_V_out_full_n");
    sc_trace(mVcdFile, AB_p_V_out_write, "(port)AB_p_V_out_write");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, real_start, "real_start");
    sc_trace(mVcdFile, start_once_reg, "start_once_reg");
    sc_trace(mVcdFile, ap_done_reg, "ap_done_reg");
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_CS_fsm_state1, "ap_CS_fsm_state1");
    sc_trace(mVcdFile, internal_ap_ready, "internal_ap_ready");
    sc_trace(mVcdFile, N_out_blk_n, "N_out_blk_n");
    sc_trace(mVcdFile, N_out1_blk_n, "N_out1_blk_n");
    sc_trace(mVcdFile, A_p_V_out_blk_n, "A_p_V_out_blk_n");
    sc_trace(mVcdFile, B_p_V_out_blk_n, "B_p_V_out_blk_n");
    sc_trace(mVcdFile, AB_p_V_out_blk_n, "AB_p_V_out_blk_n");
    sc_trace(mVcdFile, ap_block_state1, "ap_block_state1");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
#endif

    }
}

mm_mm_entry616::~mm_mm_entry616() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

}

void mm_mm_entry616::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_done_reg = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_continue.read())) {
            ap_done_reg = ap_const_logic_0;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                    !(esl_seteq<1,1,1>(ap_const_logic_0, real_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1) || esl_seteq<1,1,1>(ap_const_logic_0, A_p_V_out_full_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, B_p_V_out_full_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, AB_p_V_out_full_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, N_out_full_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, N_out1_full_n.read())))) {
            ap_done_reg = ap_const_logic_1;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        start_once_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, real_start.read()) && 
             esl_seteq<1,1,1>(ap_const_logic_0, internal_ap_ready.read()))) {
            start_once_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, internal_ap_ready.read())) {
            start_once_reg = ap_const_logic_0;
        }
    }
}

void mm_mm_entry616::thread_AB_p_V_out_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, real_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)))) {
        AB_p_V_out_blk_n = AB_p_V_out_full_n.read();
    } else {
        AB_p_V_out_blk_n = ap_const_logic_1;
    }
}

void mm_mm_entry616::thread_AB_p_V_out_din() {
    AB_p_V_out_din = AB_p_V.read();
}

void mm_mm_entry616::thread_AB_p_V_out_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, real_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1) || esl_seteq<1,1,1>(ap_const_logic_0, A_p_V_out_full_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, B_p_V_out_full_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, AB_p_V_out_full_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, N_out_full_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, N_out1_full_n.read())))) {
        AB_p_V_out_write = ap_const_logic_1;
    } else {
        AB_p_V_out_write = ap_const_logic_0;
    }
}

void mm_mm_entry616::thread_A_p_V_out_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, real_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)))) {
        A_p_V_out_blk_n = A_p_V_out_full_n.read();
    } else {
        A_p_V_out_blk_n = ap_const_logic_1;
    }
}

void mm_mm_entry616::thread_A_p_V_out_din() {
    A_p_V_out_din = A_p_V.read();
}

void mm_mm_entry616::thread_A_p_V_out_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, real_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1) || esl_seteq<1,1,1>(ap_const_logic_0, A_p_V_out_full_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, B_p_V_out_full_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, AB_p_V_out_full_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, N_out_full_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, N_out1_full_n.read())))) {
        A_p_V_out_write = ap_const_logic_1;
    } else {
        A_p_V_out_write = ap_const_logic_0;
    }
}

void mm_mm_entry616::thread_B_p_V_out_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, real_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)))) {
        B_p_V_out_blk_n = B_p_V_out_full_n.read();
    } else {
        B_p_V_out_blk_n = ap_const_logic_1;
    }
}

void mm_mm_entry616::thread_B_p_V_out_din() {
    B_p_V_out_din = B_p_V.read();
}

void mm_mm_entry616::thread_B_p_V_out_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, real_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1) || esl_seteq<1,1,1>(ap_const_logic_0, A_p_V_out_full_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, B_p_V_out_full_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, AB_p_V_out_full_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, N_out_full_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, N_out1_full_n.read())))) {
        B_p_V_out_write = ap_const_logic_1;
    } else {
        B_p_V_out_write = ap_const_logic_0;
    }
}

void mm_mm_entry616::thread_N_out1_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, real_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)))) {
        N_out1_blk_n = N_out1_full_n.read();
    } else {
        N_out1_blk_n = ap_const_logic_1;
    }
}

void mm_mm_entry616::thread_N_out1_din() {
    N_out1_din = N.read();
}

void mm_mm_entry616::thread_N_out1_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, real_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1) || esl_seteq<1,1,1>(ap_const_logic_0, A_p_V_out_full_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, B_p_V_out_full_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, AB_p_V_out_full_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, N_out_full_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, N_out1_full_n.read())))) {
        N_out1_write = ap_const_logic_1;
    } else {
        N_out1_write = ap_const_logic_0;
    }
}

void mm_mm_entry616::thread_N_out_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, real_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)))) {
        N_out_blk_n = N_out_full_n.read();
    } else {
        N_out_blk_n = ap_const_logic_1;
    }
}

void mm_mm_entry616::thread_N_out_din() {
    N_out_din = N.read();
}

void mm_mm_entry616::thread_N_out_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, real_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1) || esl_seteq<1,1,1>(ap_const_logic_0, A_p_V_out_full_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, B_p_V_out_full_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, AB_p_V_out_full_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, N_out_full_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, N_out1_full_n.read())))) {
        N_out_write = ap_const_logic_1;
    } else {
        N_out_write = ap_const_logic_0;
    }
}

void mm_mm_entry616::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void mm_mm_entry616::thread_ap_block_state1() {
    ap_block_state1 = (esl_seteq<1,1,1>(ap_const_logic_0, real_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1) || esl_seteq<1,1,1>(ap_const_logic_0, A_p_V_out_full_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, B_p_V_out_full_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, AB_p_V_out_full_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, N_out_full_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, N_out1_full_n.read()));
}

void mm_mm_entry616::thread_ap_done() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, real_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1) || esl_seteq<1,1,1>(ap_const_logic_0, A_p_V_out_full_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, B_p_V_out_full_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, AB_p_V_out_full_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, N_out_full_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, N_out1_full_n.read())))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_done_reg.read();
    }
}

void mm_mm_entry616::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, real_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void mm_mm_entry616::thread_ap_ready() {
    ap_ready = internal_ap_ready.read();
}

void mm_mm_entry616::thread_internal_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, real_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1) || esl_seteq<1,1,1>(ap_const_logic_0, A_p_V_out_full_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, B_p_V_out_full_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, AB_p_V_out_full_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, N_out_full_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, N_out1_full_n.read())))) {
        internal_ap_ready = ap_const_logic_1;
    } else {
        internal_ap_ready = ap_const_logic_0;
    }
}

void mm_mm_entry616::thread_real_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, start_full_n.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, start_once_reg.read()))) {
        real_start = ap_const_logic_0;
    } else {
        real_start = ap_start.read();
    }
}

void mm_mm_entry616::thread_start_out() {
    start_out = real_start.read();
}

void mm_mm_entry616::thread_start_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, start_once_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, real_start.read()))) {
        start_write = ap_const_logic_1;
    } else {
        start_write = ap_const_logic_0;
    }
}

void mm_mm_entry616::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            ap_NS_fsm = ap_ST_fsm_state1;
break;
        default : 
            ap_NS_fsm = "X";
            break;
    }
}

}

