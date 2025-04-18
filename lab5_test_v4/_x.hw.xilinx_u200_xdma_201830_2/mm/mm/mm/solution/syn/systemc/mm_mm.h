// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _mm_mm_HH_
#define _mm_mm_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "mm_mm_entry616.h"
#include "mm_readA.h"
#include "mm_changeARate.h"
#include "mm_readB.h"
#include "mm_comp.h"
#include "mm_writeAB.h"
#include "mm_fifo_w32_d2_A.h"
#include "mm_fifo_w64_d2_A.h"
#include "mm_fifo_w64_d5_A.h"
#include "mm_fifo_w512_d2_A.h"
#include "mm_fifo_w16_d2_A.h"
#include "mm_start_for_writeAB_U0.h"
#include "mm_start_for_changeARate_U0.h"
#include "mm_start_for_comp_U0.h"
#include "mm_mm_control_s_axi.h"
#include "mm_mm_gmem0_m_axi.h"
#include "mm_mm_gmem1_m_axi.h"
#include "mm_mm_gmem2_m_axi.h"

namespace ap_rtl {

template<unsigned int C_S_AXI_CONTROL_ADDR_WIDTH = 6,
         unsigned int C_S_AXI_CONTROL_DATA_WIDTH = 32,
         unsigned int C_M_AXI_GMEM0_ADDR_WIDTH = 64,
         unsigned int C_M_AXI_GMEM0_ID_WIDTH = 1,
         unsigned int C_M_AXI_GMEM0_AWUSER_WIDTH = 1,
         unsigned int C_M_AXI_GMEM0_DATA_WIDTH = 512,
         unsigned int C_M_AXI_GMEM0_WUSER_WIDTH = 1,
         unsigned int C_M_AXI_GMEM0_ARUSER_WIDTH = 1,
         unsigned int C_M_AXI_GMEM0_RUSER_WIDTH = 1,
         unsigned int C_M_AXI_GMEM0_BUSER_WIDTH = 1,
         unsigned int C_M_AXI_GMEM1_ADDR_WIDTH = 64,
         unsigned int C_M_AXI_GMEM1_ID_WIDTH = 1,
         unsigned int C_M_AXI_GMEM1_AWUSER_WIDTH = 1,
         unsigned int C_M_AXI_GMEM1_DATA_WIDTH = 512,
         unsigned int C_M_AXI_GMEM1_WUSER_WIDTH = 1,
         unsigned int C_M_AXI_GMEM1_ARUSER_WIDTH = 1,
         unsigned int C_M_AXI_GMEM1_RUSER_WIDTH = 1,
         unsigned int C_M_AXI_GMEM1_BUSER_WIDTH = 1,
         unsigned int C_M_AXI_GMEM2_ADDR_WIDTH = 64,
         unsigned int C_M_AXI_GMEM2_ID_WIDTH = 1,
         unsigned int C_M_AXI_GMEM2_AWUSER_WIDTH = 1,
         unsigned int C_M_AXI_GMEM2_DATA_WIDTH = 512,
         unsigned int C_M_AXI_GMEM2_WUSER_WIDTH = 1,
         unsigned int C_M_AXI_GMEM2_ARUSER_WIDTH = 1,
         unsigned int C_M_AXI_GMEM2_RUSER_WIDTH = 1,
         unsigned int C_M_AXI_GMEM2_BUSER_WIDTH = 1>
struct mm_mm : public sc_module {
    // Port declarations 155
    sc_in< sc_logic > s_axi_control_AWVALID;
    sc_out< sc_logic > s_axi_control_AWREADY;
    sc_in< sc_uint<C_S_AXI_CONTROL_ADDR_WIDTH> > s_axi_control_AWADDR;
    sc_in< sc_logic > s_axi_control_WVALID;
    sc_out< sc_logic > s_axi_control_WREADY;
    sc_in< sc_uint<C_S_AXI_CONTROL_DATA_WIDTH> > s_axi_control_WDATA;
    sc_in< sc_uint<C_S_AXI_CONTROL_DATA_WIDTH/8> > s_axi_control_WSTRB;
    sc_in< sc_logic > s_axi_control_ARVALID;
    sc_out< sc_logic > s_axi_control_ARREADY;
    sc_in< sc_uint<C_S_AXI_CONTROL_ADDR_WIDTH> > s_axi_control_ARADDR;
    sc_out< sc_logic > s_axi_control_RVALID;
    sc_in< sc_logic > s_axi_control_RREADY;
    sc_out< sc_uint<C_S_AXI_CONTROL_DATA_WIDTH> > s_axi_control_RDATA;
    sc_out< sc_lv<2> > s_axi_control_RRESP;
    sc_out< sc_logic > s_axi_control_BVALID;
    sc_in< sc_logic > s_axi_control_BREADY;
    sc_out< sc_lv<2> > s_axi_control_BRESP;
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst_n;
    sc_out< sc_logic > interrupt;
    sc_out< sc_logic > m_axi_gmem0_AWVALID;
    sc_in< sc_logic > m_axi_gmem0_AWREADY;
    sc_out< sc_uint<C_M_AXI_GMEM0_ADDR_WIDTH> > m_axi_gmem0_AWADDR;
    sc_out< sc_uint<C_M_AXI_GMEM0_ID_WIDTH> > m_axi_gmem0_AWID;
    sc_out< sc_lv<8> > m_axi_gmem0_AWLEN;
    sc_out< sc_lv<3> > m_axi_gmem0_AWSIZE;
    sc_out< sc_lv<2> > m_axi_gmem0_AWBURST;
    sc_out< sc_lv<2> > m_axi_gmem0_AWLOCK;
    sc_out< sc_lv<4> > m_axi_gmem0_AWCACHE;
    sc_out< sc_lv<3> > m_axi_gmem0_AWPROT;
    sc_out< sc_lv<4> > m_axi_gmem0_AWQOS;
    sc_out< sc_lv<4> > m_axi_gmem0_AWREGION;
    sc_out< sc_uint<C_M_AXI_GMEM0_AWUSER_WIDTH> > m_axi_gmem0_AWUSER;
    sc_out< sc_logic > m_axi_gmem0_WVALID;
    sc_in< sc_logic > m_axi_gmem0_WREADY;
    sc_out< sc_uint<C_M_AXI_GMEM0_DATA_WIDTH> > m_axi_gmem0_WDATA;
    sc_out< sc_uint<C_M_AXI_GMEM0_DATA_WIDTH/8> > m_axi_gmem0_WSTRB;
    sc_out< sc_logic > m_axi_gmem0_WLAST;
    sc_out< sc_uint<C_M_AXI_GMEM0_ID_WIDTH> > m_axi_gmem0_WID;
    sc_out< sc_uint<C_M_AXI_GMEM0_WUSER_WIDTH> > m_axi_gmem0_WUSER;
    sc_out< sc_logic > m_axi_gmem0_ARVALID;
    sc_in< sc_logic > m_axi_gmem0_ARREADY;
    sc_out< sc_uint<C_M_AXI_GMEM0_ADDR_WIDTH> > m_axi_gmem0_ARADDR;
    sc_out< sc_uint<C_M_AXI_GMEM0_ID_WIDTH> > m_axi_gmem0_ARID;
    sc_out< sc_lv<8> > m_axi_gmem0_ARLEN;
    sc_out< sc_lv<3> > m_axi_gmem0_ARSIZE;
    sc_out< sc_lv<2> > m_axi_gmem0_ARBURST;
    sc_out< sc_lv<2> > m_axi_gmem0_ARLOCK;
    sc_out< sc_lv<4> > m_axi_gmem0_ARCACHE;
    sc_out< sc_lv<3> > m_axi_gmem0_ARPROT;
    sc_out< sc_lv<4> > m_axi_gmem0_ARQOS;
    sc_out< sc_lv<4> > m_axi_gmem0_ARREGION;
    sc_out< sc_uint<C_M_AXI_GMEM0_ARUSER_WIDTH> > m_axi_gmem0_ARUSER;
    sc_in< sc_logic > m_axi_gmem0_RVALID;
    sc_out< sc_logic > m_axi_gmem0_RREADY;
    sc_in< sc_uint<C_M_AXI_GMEM0_DATA_WIDTH> > m_axi_gmem0_RDATA;
    sc_in< sc_logic > m_axi_gmem0_RLAST;
    sc_in< sc_uint<C_M_AXI_GMEM0_ID_WIDTH> > m_axi_gmem0_RID;
    sc_in< sc_uint<C_M_AXI_GMEM0_RUSER_WIDTH> > m_axi_gmem0_RUSER;
    sc_in< sc_lv<2> > m_axi_gmem0_RRESP;
    sc_in< sc_logic > m_axi_gmem0_BVALID;
    sc_out< sc_logic > m_axi_gmem0_BREADY;
    sc_in< sc_lv<2> > m_axi_gmem0_BRESP;
    sc_in< sc_uint<C_M_AXI_GMEM0_ID_WIDTH> > m_axi_gmem0_BID;
    sc_in< sc_uint<C_M_AXI_GMEM0_BUSER_WIDTH> > m_axi_gmem0_BUSER;
    sc_out< sc_logic > m_axi_gmem1_AWVALID;
    sc_in< sc_logic > m_axi_gmem1_AWREADY;
    sc_out< sc_uint<C_M_AXI_GMEM1_ADDR_WIDTH> > m_axi_gmem1_AWADDR;
    sc_out< sc_uint<C_M_AXI_GMEM1_ID_WIDTH> > m_axi_gmem1_AWID;
    sc_out< sc_lv<8> > m_axi_gmem1_AWLEN;
    sc_out< sc_lv<3> > m_axi_gmem1_AWSIZE;
    sc_out< sc_lv<2> > m_axi_gmem1_AWBURST;
    sc_out< sc_lv<2> > m_axi_gmem1_AWLOCK;
    sc_out< sc_lv<4> > m_axi_gmem1_AWCACHE;
    sc_out< sc_lv<3> > m_axi_gmem1_AWPROT;
    sc_out< sc_lv<4> > m_axi_gmem1_AWQOS;
    sc_out< sc_lv<4> > m_axi_gmem1_AWREGION;
    sc_out< sc_uint<C_M_AXI_GMEM1_AWUSER_WIDTH> > m_axi_gmem1_AWUSER;
    sc_out< sc_logic > m_axi_gmem1_WVALID;
    sc_in< sc_logic > m_axi_gmem1_WREADY;
    sc_out< sc_uint<C_M_AXI_GMEM1_DATA_WIDTH> > m_axi_gmem1_WDATA;
    sc_out< sc_uint<C_M_AXI_GMEM1_DATA_WIDTH/8> > m_axi_gmem1_WSTRB;
    sc_out< sc_logic > m_axi_gmem1_WLAST;
    sc_out< sc_uint<C_M_AXI_GMEM1_ID_WIDTH> > m_axi_gmem1_WID;
    sc_out< sc_uint<C_M_AXI_GMEM1_WUSER_WIDTH> > m_axi_gmem1_WUSER;
    sc_out< sc_logic > m_axi_gmem1_ARVALID;
    sc_in< sc_logic > m_axi_gmem1_ARREADY;
    sc_out< sc_uint<C_M_AXI_GMEM1_ADDR_WIDTH> > m_axi_gmem1_ARADDR;
    sc_out< sc_uint<C_M_AXI_GMEM1_ID_WIDTH> > m_axi_gmem1_ARID;
    sc_out< sc_lv<8> > m_axi_gmem1_ARLEN;
    sc_out< sc_lv<3> > m_axi_gmem1_ARSIZE;
    sc_out< sc_lv<2> > m_axi_gmem1_ARBURST;
    sc_out< sc_lv<2> > m_axi_gmem1_ARLOCK;
    sc_out< sc_lv<4> > m_axi_gmem1_ARCACHE;
    sc_out< sc_lv<3> > m_axi_gmem1_ARPROT;
    sc_out< sc_lv<4> > m_axi_gmem1_ARQOS;
    sc_out< sc_lv<4> > m_axi_gmem1_ARREGION;
    sc_out< sc_uint<C_M_AXI_GMEM1_ARUSER_WIDTH> > m_axi_gmem1_ARUSER;
    sc_in< sc_logic > m_axi_gmem1_RVALID;
    sc_out< sc_logic > m_axi_gmem1_RREADY;
    sc_in< sc_uint<C_M_AXI_GMEM1_DATA_WIDTH> > m_axi_gmem1_RDATA;
    sc_in< sc_logic > m_axi_gmem1_RLAST;
    sc_in< sc_uint<C_M_AXI_GMEM1_ID_WIDTH> > m_axi_gmem1_RID;
    sc_in< sc_uint<C_M_AXI_GMEM1_RUSER_WIDTH> > m_axi_gmem1_RUSER;
    sc_in< sc_lv<2> > m_axi_gmem1_RRESP;
    sc_in< sc_logic > m_axi_gmem1_BVALID;
    sc_out< sc_logic > m_axi_gmem1_BREADY;
    sc_in< sc_lv<2> > m_axi_gmem1_BRESP;
    sc_in< sc_uint<C_M_AXI_GMEM1_ID_WIDTH> > m_axi_gmem1_BID;
    sc_in< sc_uint<C_M_AXI_GMEM1_BUSER_WIDTH> > m_axi_gmem1_BUSER;
    sc_out< sc_logic > m_axi_gmem2_AWVALID;
    sc_in< sc_logic > m_axi_gmem2_AWREADY;
    sc_out< sc_uint<C_M_AXI_GMEM2_ADDR_WIDTH> > m_axi_gmem2_AWADDR;
    sc_out< sc_uint<C_M_AXI_GMEM2_ID_WIDTH> > m_axi_gmem2_AWID;
    sc_out< sc_lv<8> > m_axi_gmem2_AWLEN;
    sc_out< sc_lv<3> > m_axi_gmem2_AWSIZE;
    sc_out< sc_lv<2> > m_axi_gmem2_AWBURST;
    sc_out< sc_lv<2> > m_axi_gmem2_AWLOCK;
    sc_out< sc_lv<4> > m_axi_gmem2_AWCACHE;
    sc_out< sc_lv<3> > m_axi_gmem2_AWPROT;
    sc_out< sc_lv<4> > m_axi_gmem2_AWQOS;
    sc_out< sc_lv<4> > m_axi_gmem2_AWREGION;
    sc_out< sc_uint<C_M_AXI_GMEM2_AWUSER_WIDTH> > m_axi_gmem2_AWUSER;
    sc_out< sc_logic > m_axi_gmem2_WVALID;
    sc_in< sc_logic > m_axi_gmem2_WREADY;
    sc_out< sc_uint<C_M_AXI_GMEM2_DATA_WIDTH> > m_axi_gmem2_WDATA;
    sc_out< sc_uint<C_M_AXI_GMEM2_DATA_WIDTH/8> > m_axi_gmem2_WSTRB;
    sc_out< sc_logic > m_axi_gmem2_WLAST;
    sc_out< sc_uint<C_M_AXI_GMEM2_ID_WIDTH> > m_axi_gmem2_WID;
    sc_out< sc_uint<C_M_AXI_GMEM2_WUSER_WIDTH> > m_axi_gmem2_WUSER;
    sc_out< sc_logic > m_axi_gmem2_ARVALID;
    sc_in< sc_logic > m_axi_gmem2_ARREADY;
    sc_out< sc_uint<C_M_AXI_GMEM2_ADDR_WIDTH> > m_axi_gmem2_ARADDR;
    sc_out< sc_uint<C_M_AXI_GMEM2_ID_WIDTH> > m_axi_gmem2_ARID;
    sc_out< sc_lv<8> > m_axi_gmem2_ARLEN;
    sc_out< sc_lv<3> > m_axi_gmem2_ARSIZE;
    sc_out< sc_lv<2> > m_axi_gmem2_ARBURST;
    sc_out< sc_lv<2> > m_axi_gmem2_ARLOCK;
    sc_out< sc_lv<4> > m_axi_gmem2_ARCACHE;
    sc_out< sc_lv<3> > m_axi_gmem2_ARPROT;
    sc_out< sc_lv<4> > m_axi_gmem2_ARQOS;
    sc_out< sc_lv<4> > m_axi_gmem2_ARREGION;
    sc_out< sc_uint<C_M_AXI_GMEM2_ARUSER_WIDTH> > m_axi_gmem2_ARUSER;
    sc_in< sc_logic > m_axi_gmem2_RVALID;
    sc_out< sc_logic > m_axi_gmem2_RREADY;
    sc_in< sc_uint<C_M_AXI_GMEM2_DATA_WIDTH> > m_axi_gmem2_RDATA;
    sc_in< sc_logic > m_axi_gmem2_RLAST;
    sc_in< sc_uint<C_M_AXI_GMEM2_ID_WIDTH> > m_axi_gmem2_RID;
    sc_in< sc_uint<C_M_AXI_GMEM2_RUSER_WIDTH> > m_axi_gmem2_RUSER;
    sc_in< sc_lv<2> > m_axi_gmem2_RRESP;
    sc_in< sc_logic > m_axi_gmem2_BVALID;
    sc_out< sc_logic > m_axi_gmem2_BREADY;
    sc_in< sc_lv<2> > m_axi_gmem2_BRESP;
    sc_in< sc_uint<C_M_AXI_GMEM2_ID_WIDTH> > m_axi_gmem2_BID;
    sc_in< sc_uint<C_M_AXI_GMEM2_BUSER_WIDTH> > m_axi_gmem2_BUSER;
    sc_signal< sc_logic > ap_var_for_const0;
    sc_signal< sc_logic > ap_var_for_const1;
    sc_signal< sc_lv<2> > ap_var_for_const6;
    sc_signal< sc_lv<64> > ap_var_for_const2;
    sc_signal< sc_lv<1> > ap_var_for_const3;
    sc_signal< sc_lv<32> > ap_var_for_const4;
    sc_signal< sc_lv<3> > ap_var_for_const5;
    sc_signal< sc_lv<4> > ap_var_for_const7;
    sc_signal< sc_lv<512> > ap_var_for_const8;


    // Module declarations
    mm_mm(sc_module_name name);
    SC_HAS_PROCESS(mm_mm);

    ~mm_mm();

    sc_trace_file* mVcdFile;

    ofstream mHdltvinHandle;
    ofstream mHdltvoutHandle;
    mm_mm_control_s_axi<C_S_AXI_CONTROL_ADDR_WIDTH,C_S_AXI_CONTROL_DATA_WIDTH>* mm_control_s_axi_U;
    mm_mm_gmem0_m_axi<1,512,64,5,16,16,16,16,C_M_AXI_GMEM0_ID_WIDTH,C_M_AXI_GMEM0_ADDR_WIDTH,C_M_AXI_GMEM0_DATA_WIDTH,C_M_AXI_GMEM0_AWUSER_WIDTH,C_M_AXI_GMEM0_ARUSER_WIDTH,C_M_AXI_GMEM0_WUSER_WIDTH,C_M_AXI_GMEM0_RUSER_WIDTH,C_M_AXI_GMEM0_BUSER_WIDTH,C_M_AXI_GMEM0_USER_VALUE,C_M_AXI_GMEM0_PROT_VALUE,C_M_AXI_GMEM0_CACHE_VALUE>* mm_gmem0_m_axi_U;
    mm_mm_gmem1_m_axi<1,512,64,5,16,16,16,16,C_M_AXI_GMEM1_ID_WIDTH,C_M_AXI_GMEM1_ADDR_WIDTH,C_M_AXI_GMEM1_DATA_WIDTH,C_M_AXI_GMEM1_AWUSER_WIDTH,C_M_AXI_GMEM1_ARUSER_WIDTH,C_M_AXI_GMEM1_WUSER_WIDTH,C_M_AXI_GMEM1_RUSER_WIDTH,C_M_AXI_GMEM1_BUSER_WIDTH,C_M_AXI_GMEM1_USER_VALUE,C_M_AXI_GMEM1_PROT_VALUE,C_M_AXI_GMEM1_CACHE_VALUE>* mm_gmem1_m_axi_U;
    mm_mm_gmem2_m_axi<1,512,64,5,16,16,16,16,C_M_AXI_GMEM2_ID_WIDTH,C_M_AXI_GMEM2_ADDR_WIDTH,C_M_AXI_GMEM2_DATA_WIDTH,C_M_AXI_GMEM2_AWUSER_WIDTH,C_M_AXI_GMEM2_ARUSER_WIDTH,C_M_AXI_GMEM2_WUSER_WIDTH,C_M_AXI_GMEM2_RUSER_WIDTH,C_M_AXI_GMEM2_BUSER_WIDTH,C_M_AXI_GMEM2_USER_VALUE,C_M_AXI_GMEM2_PROT_VALUE,C_M_AXI_GMEM2_CACHE_VALUE>* mm_gmem2_m_axi_U;
    mm_mm_entry616* mm_entry616_U0;
    mm_readA* readA_U0;
    mm_changeARate* changeARate_U0;
    mm_readB* readB_U0;
    mm_comp* comp_U0;
    mm_writeAB* writeAB_U0;
    mm_fifo_w32_d2_A* N_c_U;
    mm_fifo_w32_d2_A* N_c8_U;
    mm_fifo_w64_d2_A* A_p_V_c_U;
    mm_fifo_w64_d2_A* B_p_V_c_U;
    mm_fifo_w64_d5_A* AB_p_V_c_U;
    mm_fifo_w512_d2_A* AStreamWide_V_V_U;
    mm_fifo_w32_d2_A* N_c9_U;
    mm_fifo_w16_d2_A* AStream_V_U;
    mm_fifo_w32_d2_A* N_c10_U;
    mm_fifo_w512_d2_A* BStream_V_V_U;
    mm_fifo_w512_d2_A* ABStream_V_V_U;
    mm_fifo_w32_d2_A* N_c11_U;
    mm_start_for_writeAB_U0* start_for_writeAB_U0_U;
    mm_start_for_changeARate_U0* start_for_changeARate_U0_U;
    mm_start_for_comp_U0* start_for_comp_U0_U;
    sc_signal< sc_logic > ap_rst_reg_2;
    sc_signal< sc_logic > ap_rst_reg_1;
    sc_signal< sc_logic > ap_rst_n_inv;
    sc_signal< sc_logic > ap_start;
    sc_signal< sc_logic > ap_ready;
    sc_signal< sc_logic > ap_done;
    sc_signal< sc_logic > ap_idle;
    sc_signal< sc_lv<64> > A_p_V;
    sc_signal< sc_lv<64> > B_p_V;
    sc_signal< sc_lv<64> > AB_p_V;
    sc_signal< sc_lv<32> > N;
    sc_signal< sc_logic > gmem0_AWREADY;
    sc_signal< sc_logic > gmem0_WREADY;
    sc_signal< sc_logic > gmem0_ARREADY;
    sc_signal< sc_logic > gmem0_RVALID;
    sc_signal< sc_lv<512> > gmem0_RDATA;
    sc_signal< sc_logic > gmem0_RLAST;
    sc_signal< sc_lv<1> > gmem0_RID;
    sc_signal< sc_lv<1> > gmem0_RUSER;
    sc_signal< sc_lv<2> > gmem0_RRESP;
    sc_signal< sc_logic > gmem0_BVALID;
    sc_signal< sc_lv<2> > gmem0_BRESP;
    sc_signal< sc_lv<1> > gmem0_BID;
    sc_signal< sc_lv<1> > gmem0_BUSER;
    sc_signal< sc_logic > gmem1_AWREADY;
    sc_signal< sc_logic > gmem1_WREADY;
    sc_signal< sc_logic > gmem1_ARREADY;
    sc_signal< sc_logic > gmem1_RVALID;
    sc_signal< sc_lv<512> > gmem1_RDATA;
    sc_signal< sc_logic > gmem1_RLAST;
    sc_signal< sc_lv<1> > gmem1_RID;
    sc_signal< sc_lv<1> > gmem1_RUSER;
    sc_signal< sc_lv<2> > gmem1_RRESP;
    sc_signal< sc_logic > gmem1_BVALID;
    sc_signal< sc_lv<2> > gmem1_BRESP;
    sc_signal< sc_lv<1> > gmem1_BID;
    sc_signal< sc_lv<1> > gmem1_BUSER;
    sc_signal< sc_logic > gmem2_AWREADY;
    sc_signal< sc_logic > gmem2_WREADY;
    sc_signal< sc_logic > gmem2_ARREADY;
    sc_signal< sc_logic > gmem2_RVALID;
    sc_signal< sc_lv<512> > gmem2_RDATA;
    sc_signal< sc_logic > gmem2_RLAST;
    sc_signal< sc_lv<1> > gmem2_RID;
    sc_signal< sc_lv<1> > gmem2_RUSER;
    sc_signal< sc_lv<2> > gmem2_RRESP;
    sc_signal< sc_logic > gmem2_BVALID;
    sc_signal< sc_lv<2> > gmem2_BRESP;
    sc_signal< sc_lv<1> > gmem2_BID;
    sc_signal< sc_lv<1> > gmem2_BUSER;
    sc_signal< sc_logic > mm_entry616_U0_ap_start;
    sc_signal< sc_logic > mm_entry616_U0_ap_done;
    sc_signal< sc_logic > mm_entry616_U0_ap_continue;
    sc_signal< sc_logic > mm_entry616_U0_ap_idle;
    sc_signal< sc_logic > mm_entry616_U0_ap_ready;
    sc_signal< sc_logic > mm_entry616_U0_start_out;
    sc_signal< sc_logic > mm_entry616_U0_start_write;
    sc_signal< sc_lv<32> > mm_entry616_U0_N_out_din;
    sc_signal< sc_logic > mm_entry616_U0_N_out_write;
    sc_signal< sc_lv<32> > mm_entry616_U0_N_out1_din;
    sc_signal< sc_logic > mm_entry616_U0_N_out1_write;
    sc_signal< sc_lv<64> > mm_entry616_U0_A_p_V_out_din;
    sc_signal< sc_logic > mm_entry616_U0_A_p_V_out_write;
    sc_signal< sc_lv<64> > mm_entry616_U0_B_p_V_out_din;
    sc_signal< sc_logic > mm_entry616_U0_B_p_V_out_write;
    sc_signal< sc_lv<64> > mm_entry616_U0_AB_p_V_out_din;
    sc_signal< sc_logic > mm_entry616_U0_AB_p_V_out_write;
    sc_signal< sc_logic > readA_U0_ap_start;
    sc_signal< sc_logic > readA_U0_ap_done;
    sc_signal< sc_logic > readA_U0_ap_continue;
    sc_signal< sc_logic > readA_U0_ap_idle;
    sc_signal< sc_logic > readA_U0_ap_ready;
    sc_signal< sc_logic > readA_U0_start_out;
    sc_signal< sc_logic > readA_U0_start_write;
    sc_signal< sc_logic > readA_U0_m_axi_A_p_V_AWVALID;
    sc_signal< sc_lv<64> > readA_U0_m_axi_A_p_V_AWADDR;
    sc_signal< sc_lv<1> > readA_U0_m_axi_A_p_V_AWID;
    sc_signal< sc_lv<32> > readA_U0_m_axi_A_p_V_AWLEN;
    sc_signal< sc_lv<3> > readA_U0_m_axi_A_p_V_AWSIZE;
    sc_signal< sc_lv<2> > readA_U0_m_axi_A_p_V_AWBURST;
    sc_signal< sc_lv<2> > readA_U0_m_axi_A_p_V_AWLOCK;
    sc_signal< sc_lv<4> > readA_U0_m_axi_A_p_V_AWCACHE;
    sc_signal< sc_lv<3> > readA_U0_m_axi_A_p_V_AWPROT;
    sc_signal< sc_lv<4> > readA_U0_m_axi_A_p_V_AWQOS;
    sc_signal< sc_lv<4> > readA_U0_m_axi_A_p_V_AWREGION;
    sc_signal< sc_lv<1> > readA_U0_m_axi_A_p_V_AWUSER;
    sc_signal< sc_logic > readA_U0_m_axi_A_p_V_WVALID;
    sc_signal< sc_lv<512> > readA_U0_m_axi_A_p_V_WDATA;
    sc_signal< sc_lv<64> > readA_U0_m_axi_A_p_V_WSTRB;
    sc_signal< sc_logic > readA_U0_m_axi_A_p_V_WLAST;
    sc_signal< sc_lv<1> > readA_U0_m_axi_A_p_V_WID;
    sc_signal< sc_lv<1> > readA_U0_m_axi_A_p_V_WUSER;
    sc_signal< sc_logic > readA_U0_m_axi_A_p_V_ARVALID;
    sc_signal< sc_lv<64> > readA_U0_m_axi_A_p_V_ARADDR;
    sc_signal< sc_lv<1> > readA_U0_m_axi_A_p_V_ARID;
    sc_signal< sc_lv<32> > readA_U0_m_axi_A_p_V_ARLEN;
    sc_signal< sc_lv<3> > readA_U0_m_axi_A_p_V_ARSIZE;
    sc_signal< sc_lv<2> > readA_U0_m_axi_A_p_V_ARBURST;
    sc_signal< sc_lv<2> > readA_U0_m_axi_A_p_V_ARLOCK;
    sc_signal< sc_lv<4> > readA_U0_m_axi_A_p_V_ARCACHE;
    sc_signal< sc_lv<3> > readA_U0_m_axi_A_p_V_ARPROT;
    sc_signal< sc_lv<4> > readA_U0_m_axi_A_p_V_ARQOS;
    sc_signal< sc_lv<4> > readA_U0_m_axi_A_p_V_ARREGION;
    sc_signal< sc_lv<1> > readA_U0_m_axi_A_p_V_ARUSER;
    sc_signal< sc_logic > readA_U0_m_axi_A_p_V_RREADY;
    sc_signal< sc_logic > readA_U0_m_axi_A_p_V_BREADY;
    sc_signal< sc_logic > readA_U0_A_p_V_offset_read;
    sc_signal< sc_lv<512> > readA_U0_AStreamWide_V_V_din;
    sc_signal< sc_logic > readA_U0_AStreamWide_V_V_write;
    sc_signal< sc_logic > readA_U0_N_read;
    sc_signal< sc_lv<32> > readA_U0_N_out_din;
    sc_signal< sc_logic > readA_U0_N_out_write;
    sc_signal< sc_logic > changeARate_U0_ap_start;
    sc_signal< sc_logic > changeARate_U0_ap_done;
    sc_signal< sc_logic > changeARate_U0_ap_continue;
    sc_signal< sc_logic > changeARate_U0_ap_idle;
    sc_signal< sc_logic > changeARate_U0_ap_ready;
    sc_signal< sc_logic > changeARate_U0_AStreamWide_V_V_read;
    sc_signal< sc_lv<16> > changeARate_U0_AStream_V_din;
    sc_signal< sc_logic > changeARate_U0_AStream_V_write;
    sc_signal< sc_logic > changeARate_U0_N_read;
    sc_signal< sc_lv<32> > changeARate_U0_N_out_din;
    sc_signal< sc_logic > changeARate_U0_N_out_write;
    sc_signal< sc_logic > readB_U0_ap_start;
    sc_signal< sc_logic > readB_U0_ap_done;
    sc_signal< sc_logic > readB_U0_ap_continue;
    sc_signal< sc_logic > readB_U0_ap_idle;
    sc_signal< sc_logic > readB_U0_ap_ready;
    sc_signal< sc_logic > readB_U0_start_out;
    sc_signal< sc_logic > readB_U0_start_write;
    sc_signal< sc_logic > readB_U0_m_axi_B_p_V_AWVALID;
    sc_signal< sc_lv<64> > readB_U0_m_axi_B_p_V_AWADDR;
    sc_signal< sc_lv<1> > readB_U0_m_axi_B_p_V_AWID;
    sc_signal< sc_lv<32> > readB_U0_m_axi_B_p_V_AWLEN;
    sc_signal< sc_lv<3> > readB_U0_m_axi_B_p_V_AWSIZE;
    sc_signal< sc_lv<2> > readB_U0_m_axi_B_p_V_AWBURST;
    sc_signal< sc_lv<2> > readB_U0_m_axi_B_p_V_AWLOCK;
    sc_signal< sc_lv<4> > readB_U0_m_axi_B_p_V_AWCACHE;
    sc_signal< sc_lv<3> > readB_U0_m_axi_B_p_V_AWPROT;
    sc_signal< sc_lv<4> > readB_U0_m_axi_B_p_V_AWQOS;
    sc_signal< sc_lv<4> > readB_U0_m_axi_B_p_V_AWREGION;
    sc_signal< sc_lv<1> > readB_U0_m_axi_B_p_V_AWUSER;
    sc_signal< sc_logic > readB_U0_m_axi_B_p_V_WVALID;
    sc_signal< sc_lv<512> > readB_U0_m_axi_B_p_V_WDATA;
    sc_signal< sc_lv<64> > readB_U0_m_axi_B_p_V_WSTRB;
    sc_signal< sc_logic > readB_U0_m_axi_B_p_V_WLAST;
    sc_signal< sc_lv<1> > readB_U0_m_axi_B_p_V_WID;
    sc_signal< sc_lv<1> > readB_U0_m_axi_B_p_V_WUSER;
    sc_signal< sc_logic > readB_U0_m_axi_B_p_V_ARVALID;
    sc_signal< sc_lv<64> > readB_U0_m_axi_B_p_V_ARADDR;
    sc_signal< sc_lv<1> > readB_U0_m_axi_B_p_V_ARID;
    sc_signal< sc_lv<32> > readB_U0_m_axi_B_p_V_ARLEN;
    sc_signal< sc_lv<3> > readB_U0_m_axi_B_p_V_ARSIZE;
    sc_signal< sc_lv<2> > readB_U0_m_axi_B_p_V_ARBURST;
    sc_signal< sc_lv<2> > readB_U0_m_axi_B_p_V_ARLOCK;
    sc_signal< sc_lv<4> > readB_U0_m_axi_B_p_V_ARCACHE;
    sc_signal< sc_lv<3> > readB_U0_m_axi_B_p_V_ARPROT;
    sc_signal< sc_lv<4> > readB_U0_m_axi_B_p_V_ARQOS;
    sc_signal< sc_lv<4> > readB_U0_m_axi_B_p_V_ARREGION;
    sc_signal< sc_lv<1> > readB_U0_m_axi_B_p_V_ARUSER;
    sc_signal< sc_logic > readB_U0_m_axi_B_p_V_RREADY;
    sc_signal< sc_logic > readB_U0_m_axi_B_p_V_BREADY;
    sc_signal< sc_logic > readB_U0_B_p_V_offset_read;
    sc_signal< sc_lv<512> > readB_U0_BStream_V_V_din;
    sc_signal< sc_logic > readB_U0_BStream_V_V_write;
    sc_signal< sc_logic > readB_U0_N_read;
    sc_signal< sc_logic > comp_U0_ap_start;
    sc_signal< sc_logic > comp_U0_ap_done;
    sc_signal< sc_logic > comp_U0_ap_continue;
    sc_signal< sc_logic > comp_U0_ap_idle;
    sc_signal< sc_logic > comp_U0_ap_ready;
    sc_signal< sc_logic > comp_U0_AStream_V_read;
    sc_signal< sc_logic > comp_U0_BStream_V_V_read;
    sc_signal< sc_lv<512> > comp_U0_ABStream_V_V_din;
    sc_signal< sc_logic > comp_U0_ABStream_V_V_write;
    sc_signal< sc_logic > comp_U0_N_read;
    sc_signal< sc_lv<32> > comp_U0_N_out_din;
    sc_signal< sc_logic > comp_U0_N_out_write;
    sc_signal< sc_logic > writeAB_U0_ap_start;
    sc_signal< sc_logic > writeAB_U0_ap_done;
    sc_signal< sc_logic > writeAB_U0_ap_continue;
    sc_signal< sc_logic > writeAB_U0_ap_idle;
    sc_signal< sc_logic > writeAB_U0_ap_ready;
    sc_signal< sc_logic > writeAB_U0_ABStream_V_V_read;
    sc_signal< sc_logic > writeAB_U0_m_axi_AB_V_AWVALID;
    sc_signal< sc_lv<64> > writeAB_U0_m_axi_AB_V_AWADDR;
    sc_signal< sc_lv<1> > writeAB_U0_m_axi_AB_V_AWID;
    sc_signal< sc_lv<32> > writeAB_U0_m_axi_AB_V_AWLEN;
    sc_signal< sc_lv<3> > writeAB_U0_m_axi_AB_V_AWSIZE;
    sc_signal< sc_lv<2> > writeAB_U0_m_axi_AB_V_AWBURST;
    sc_signal< sc_lv<2> > writeAB_U0_m_axi_AB_V_AWLOCK;
    sc_signal< sc_lv<4> > writeAB_U0_m_axi_AB_V_AWCACHE;
    sc_signal< sc_lv<3> > writeAB_U0_m_axi_AB_V_AWPROT;
    sc_signal< sc_lv<4> > writeAB_U0_m_axi_AB_V_AWQOS;
    sc_signal< sc_lv<4> > writeAB_U0_m_axi_AB_V_AWREGION;
    sc_signal< sc_lv<1> > writeAB_U0_m_axi_AB_V_AWUSER;
    sc_signal< sc_logic > writeAB_U0_m_axi_AB_V_WVALID;
    sc_signal< sc_lv<512> > writeAB_U0_m_axi_AB_V_WDATA;
    sc_signal< sc_lv<64> > writeAB_U0_m_axi_AB_V_WSTRB;
    sc_signal< sc_logic > writeAB_U0_m_axi_AB_V_WLAST;
    sc_signal< sc_lv<1> > writeAB_U0_m_axi_AB_V_WID;
    sc_signal< sc_lv<1> > writeAB_U0_m_axi_AB_V_WUSER;
    sc_signal< sc_logic > writeAB_U0_m_axi_AB_V_ARVALID;
    sc_signal< sc_lv<64> > writeAB_U0_m_axi_AB_V_ARADDR;
    sc_signal< sc_lv<1> > writeAB_U0_m_axi_AB_V_ARID;
    sc_signal< sc_lv<32> > writeAB_U0_m_axi_AB_V_ARLEN;
    sc_signal< sc_lv<3> > writeAB_U0_m_axi_AB_V_ARSIZE;
    sc_signal< sc_lv<2> > writeAB_U0_m_axi_AB_V_ARBURST;
    sc_signal< sc_lv<2> > writeAB_U0_m_axi_AB_V_ARLOCK;
    sc_signal< sc_lv<4> > writeAB_U0_m_axi_AB_V_ARCACHE;
    sc_signal< sc_lv<3> > writeAB_U0_m_axi_AB_V_ARPROT;
    sc_signal< sc_lv<4> > writeAB_U0_m_axi_AB_V_ARQOS;
    sc_signal< sc_lv<4> > writeAB_U0_m_axi_AB_V_ARREGION;
    sc_signal< sc_lv<1> > writeAB_U0_m_axi_AB_V_ARUSER;
    sc_signal< sc_logic > writeAB_U0_m_axi_AB_V_RREADY;
    sc_signal< sc_logic > writeAB_U0_m_axi_AB_V_BREADY;
    sc_signal< sc_logic > writeAB_U0_AB_V_offset_read;
    sc_signal< sc_logic > writeAB_U0_N_read;
    sc_signal< sc_logic > ap_sync_continue;
    sc_signal< sc_logic > N_c_full_n;
    sc_signal< sc_lv<32> > N_c_dout;
    sc_signal< sc_logic > N_c_empty_n;
    sc_signal< sc_logic > N_c8_full_n;
    sc_signal< sc_lv<32> > N_c8_dout;
    sc_signal< sc_logic > N_c8_empty_n;
    sc_signal< sc_logic > A_p_V_c_full_n;
    sc_signal< sc_lv<64> > A_p_V_c_dout;
    sc_signal< sc_logic > A_p_V_c_empty_n;
    sc_signal< sc_logic > B_p_V_c_full_n;
    sc_signal< sc_lv<64> > B_p_V_c_dout;
    sc_signal< sc_logic > B_p_V_c_empty_n;
    sc_signal< sc_logic > AB_p_V_c_full_n;
    sc_signal< sc_lv<64> > AB_p_V_c_dout;
    sc_signal< sc_logic > AB_p_V_c_empty_n;
    sc_signal< sc_logic > AStreamWide_V_V_full_n;
    sc_signal< sc_lv<512> > AStreamWide_V_V_dout;
    sc_signal< sc_logic > AStreamWide_V_V_empty_n;
    sc_signal< sc_logic > N_c9_full_n;
    sc_signal< sc_lv<32> > N_c9_dout;
    sc_signal< sc_logic > N_c9_empty_n;
    sc_signal< sc_logic > AStream_V_full_n;
    sc_signal< sc_lv<16> > AStream_V_dout;
    sc_signal< sc_logic > AStream_V_empty_n;
    sc_signal< sc_logic > N_c10_full_n;
    sc_signal< sc_lv<32> > N_c10_dout;
    sc_signal< sc_logic > N_c10_empty_n;
    sc_signal< sc_logic > BStream_V_V_full_n;
    sc_signal< sc_lv<512> > BStream_V_V_dout;
    sc_signal< sc_logic > BStream_V_V_empty_n;
    sc_signal< sc_logic > ABStream_V_V_full_n;
    sc_signal< sc_lv<512> > ABStream_V_V_dout;
    sc_signal< sc_logic > ABStream_V_V_empty_n;
    sc_signal< sc_logic > N_c11_full_n;
    sc_signal< sc_lv<32> > N_c11_dout;
    sc_signal< sc_logic > N_c11_empty_n;
    sc_signal< sc_logic > ap_sync_done;
    sc_signal< sc_logic > ap_sync_ready;
    sc_signal< sc_logic > ap_sync_reg_mm_entry616_U0_ap_ready;
    sc_signal< sc_logic > ap_sync_mm_entry616_U0_ap_ready;
    sc_signal< sc_lv<2> > mm_entry616_U0_ap_ready_count;
    sc_signal< sc_logic > ap_sync_reg_readA_U0_ap_ready;
    sc_signal< sc_logic > ap_sync_readA_U0_ap_ready;
    sc_signal< sc_lv<2> > readA_U0_ap_ready_count;
    sc_signal< sc_logic > ap_sync_reg_readB_U0_ap_ready;
    sc_signal< sc_logic > ap_sync_readB_U0_ap_ready;
    sc_signal< sc_lv<2> > readB_U0_ap_ready_count;
    sc_signal< sc_lv<1> > start_for_writeAB_U0_din;
    sc_signal< sc_logic > start_for_writeAB_U0_full_n;
    sc_signal< sc_lv<1> > start_for_writeAB_U0_dout;
    sc_signal< sc_logic > start_for_writeAB_U0_empty_n;
    sc_signal< sc_lv<1> > start_for_changeARate_U0_din;
    sc_signal< sc_logic > start_for_changeARate_U0_full_n;
    sc_signal< sc_lv<1> > start_for_changeARate_U0_dout;
    sc_signal< sc_logic > start_for_changeARate_U0_empty_n;
    sc_signal< sc_logic > changeARate_U0_start_full_n;
    sc_signal< sc_logic > changeARate_U0_start_write;
    sc_signal< sc_lv<1> > start_for_comp_U0_din;
    sc_signal< sc_logic > start_for_comp_U0_full_n;
    sc_signal< sc_lv<1> > start_for_comp_U0_dout;
    sc_signal< sc_logic > start_for_comp_U0_empty_n;
    sc_signal< sc_logic > comp_U0_start_full_n;
    sc_signal< sc_logic > comp_U0_start_write;
    sc_signal< sc_logic > writeAB_U0_start_full_n;
    sc_signal< sc_logic > writeAB_U0_start_write;
    static const int C_S_AXI_DATA_WIDTH;
    static const int C_S_AXI_WSTRB_WIDTH;
    static const int C_S_AXI_ADDR_WIDTH;
    static const sc_logic ap_const_logic_1;
    static const int C_M_AXI_GMEM0_USER_VALUE;
    static const int C_M_AXI_GMEM0_PROT_VALUE;
    static const int C_M_AXI_GMEM0_CACHE_VALUE;
    static const int C_M_AXI_ID_WIDTH;
    static const int C_M_AXI_ADDR_WIDTH;
    static const int C_M_AXI_DATA_WIDTH;
    static const int C_M_AXI_WSTRB_WIDTH;
    static const int C_M_AXI_AWUSER_WIDTH;
    static const int C_M_AXI_ARUSER_WIDTH;
    static const int C_M_AXI_WUSER_WIDTH;
    static const int C_M_AXI_RUSER_WIDTH;
    static const int C_M_AXI_BUSER_WIDTH;
    static const int C_M_AXI_GMEM1_USER_VALUE;
    static const int C_M_AXI_GMEM1_PROT_VALUE;
    static const int C_M_AXI_GMEM1_CACHE_VALUE;
    static const int C_M_AXI_GMEM2_USER_VALUE;
    static const int C_M_AXI_GMEM2_PROT_VALUE;
    static const int C_M_AXI_GMEM2_CACHE_VALUE;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<2> ap_const_lv2_1;
    static const bool ap_const_boolean_1;
    static const sc_lv<64> ap_const_lv64_0;
    static const sc_lv<64> ap_const_lv64_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<3> ap_const_lv3_1;
    static const sc_lv<4> ap_const_lv4_0;
    static const sc_lv<4> ap_const_lv4_1;
    static const sc_lv<512> ap_const_lv512_lc_1;
    static const sc_lv<512> ap_const_lv512_lc_3;
    // Thread declarations
    void thread_ap_var_for_const0();
    void thread_ap_var_for_const1();
    void thread_ap_var_for_const6();
    void thread_ap_var_for_const2();
    void thread_ap_var_for_const3();
    void thread_ap_var_for_const4();
    void thread_ap_var_for_const5();
    void thread_ap_var_for_const7();
    void thread_ap_var_for_const8();
    void thread_ap_clk_no_reset_();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_ap_sync_continue();
    void thread_ap_sync_done();
    void thread_ap_sync_mm_entry616_U0_ap_ready();
    void thread_ap_sync_readA_U0_ap_ready();
    void thread_ap_sync_readB_U0_ap_ready();
    void thread_ap_sync_ready();
    void thread_changeARate_U0_ap_continue();
    void thread_changeARate_U0_ap_start();
    void thread_changeARate_U0_start_full_n();
    void thread_changeARate_U0_start_write();
    void thread_comp_U0_ap_continue();
    void thread_comp_U0_ap_start();
    void thread_comp_U0_start_full_n();
    void thread_comp_U0_start_write();
    void thread_mm_entry616_U0_ap_continue();
    void thread_mm_entry616_U0_ap_start();
    void thread_readA_U0_ap_continue();
    void thread_readA_U0_ap_start();
    void thread_readB_U0_ap_continue();
    void thread_readB_U0_ap_start();
    void thread_start_for_changeARate_U0_din();
    void thread_start_for_comp_U0_din();
    void thread_start_for_writeAB_U0_din();
    void thread_writeAB_U0_ap_continue();
    void thread_writeAB_U0_ap_start();
    void thread_writeAB_U0_start_full_n();
    void thread_writeAB_U0_start_write();
    void thread_hdltv_gen();
};

}

using namespace ap_rtl;

#endif
