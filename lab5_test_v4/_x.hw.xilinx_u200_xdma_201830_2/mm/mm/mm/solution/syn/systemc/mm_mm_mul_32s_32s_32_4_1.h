// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __mm_mm_mul_32s_32s_32_4_1__HH__
#define __mm_mm_mul_32s_32s_32_4_1__HH__
#include "ACMP_mul_ss.h"
#include <systemc>

template<
    int ID,
    int NUM_STAGE,
    int din0_WIDTH,
    int din1_WIDTH,
    int dout_WIDTH>
SC_MODULE(mm_mm_mul_32s_32s_32_4_1) {
    sc_core::sc_in_clk clk;
    sc_core::sc_in<sc_dt::sc_logic> reset;
    sc_core::sc_in<sc_dt::sc_logic> ce;
    sc_core::sc_in< sc_dt::sc_lv<din0_WIDTH> >   din0;
    sc_core::sc_in< sc_dt::sc_lv<din1_WIDTH> >   din1;
    sc_core::sc_out< sc_dt::sc_lv<dout_WIDTH> >   dout;



    ACMP_mul_ss<ID, 4, din0_WIDTH, din1_WIDTH, dout_WIDTH> ACMP_mul_ss_U;

    SC_CTOR(mm_mm_mul_32s_32s_32_4_1):  ACMP_mul_ss_U ("ACMP_mul_ss_U") {
        ACMP_mul_ss_U.clk(clk);
        ACMP_mul_ss_U.reset(reset);
        ACMP_mul_ss_U.ce(ce);
        ACMP_mul_ss_U.din0(din0);
        ACMP_mul_ss_U.din1(din1);
        ACMP_mul_ss_U.dout(dout);

    }

};

#endif //
