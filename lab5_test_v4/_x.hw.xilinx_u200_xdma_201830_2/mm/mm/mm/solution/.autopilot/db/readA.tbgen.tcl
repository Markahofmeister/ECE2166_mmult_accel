set moduleName readA
set isTopModule 0
set isTaskLevelControl 1
set isCombinational 0
set isDatapathOnly 0
set isFreeRunPipelineModule 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {readA}
set C_modelType { void 0 }
set C_modelArgList {
	{ A_p_V int 512 regular {axi_master 0}  }
	{ A_p_V_offset int 64 regular {fifo 0}  }
	{ AStreamWide_V_V int 512 regular {fifo 1 volatile }  }
	{ N int 32 regular {fifo 0}  }
	{ N_out int 32 regular {fifo 1}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "A_p_V", "interface" : "axi_master", "bitwidth" : 512, "direction" : "READONLY"} , 
 	{ "Name" : "A_p_V_offset", "interface" : "fifo", "bitwidth" : 64, "direction" : "READONLY"} , 
 	{ "Name" : "AStreamWide_V_V", "interface" : "fifo", "bitwidth" : 512, "direction" : "WRITEONLY"} , 
 	{ "Name" : "N", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "N_out", "interface" : "fifo", "bitwidth" : 32, "direction" : "WRITEONLY"} ]}
# RTL Port declarations: 
set portNum 67
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ start_full_n sc_in sc_logic 1 signal -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_continue sc_in sc_logic 1 continue -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ start_out sc_out sc_logic 1 signal -1 } 
	{ start_write sc_out sc_logic 1 signal -1 } 
	{ m_axi_A_p_V_AWVALID sc_out sc_logic 1 signal 0 } 
	{ m_axi_A_p_V_AWREADY sc_in sc_logic 1 signal 0 } 
	{ m_axi_A_p_V_AWADDR sc_out sc_lv 64 signal 0 } 
	{ m_axi_A_p_V_AWID sc_out sc_lv 1 signal 0 } 
	{ m_axi_A_p_V_AWLEN sc_out sc_lv 32 signal 0 } 
	{ m_axi_A_p_V_AWSIZE sc_out sc_lv 3 signal 0 } 
	{ m_axi_A_p_V_AWBURST sc_out sc_lv 2 signal 0 } 
	{ m_axi_A_p_V_AWLOCK sc_out sc_lv 2 signal 0 } 
	{ m_axi_A_p_V_AWCACHE sc_out sc_lv 4 signal 0 } 
	{ m_axi_A_p_V_AWPROT sc_out sc_lv 3 signal 0 } 
	{ m_axi_A_p_V_AWQOS sc_out sc_lv 4 signal 0 } 
	{ m_axi_A_p_V_AWREGION sc_out sc_lv 4 signal 0 } 
	{ m_axi_A_p_V_AWUSER sc_out sc_lv 1 signal 0 } 
	{ m_axi_A_p_V_WVALID sc_out sc_logic 1 signal 0 } 
	{ m_axi_A_p_V_WREADY sc_in sc_logic 1 signal 0 } 
	{ m_axi_A_p_V_WDATA sc_out sc_lv 512 signal 0 } 
	{ m_axi_A_p_V_WSTRB sc_out sc_lv 64 signal 0 } 
	{ m_axi_A_p_V_WLAST sc_out sc_logic 1 signal 0 } 
	{ m_axi_A_p_V_WID sc_out sc_lv 1 signal 0 } 
	{ m_axi_A_p_V_WUSER sc_out sc_lv 1 signal 0 } 
	{ m_axi_A_p_V_ARVALID sc_out sc_logic 1 signal 0 } 
	{ m_axi_A_p_V_ARREADY sc_in sc_logic 1 signal 0 } 
	{ m_axi_A_p_V_ARADDR sc_out sc_lv 64 signal 0 } 
	{ m_axi_A_p_V_ARID sc_out sc_lv 1 signal 0 } 
	{ m_axi_A_p_V_ARLEN sc_out sc_lv 32 signal 0 } 
	{ m_axi_A_p_V_ARSIZE sc_out sc_lv 3 signal 0 } 
	{ m_axi_A_p_V_ARBURST sc_out sc_lv 2 signal 0 } 
	{ m_axi_A_p_V_ARLOCK sc_out sc_lv 2 signal 0 } 
	{ m_axi_A_p_V_ARCACHE sc_out sc_lv 4 signal 0 } 
	{ m_axi_A_p_V_ARPROT sc_out sc_lv 3 signal 0 } 
	{ m_axi_A_p_V_ARQOS sc_out sc_lv 4 signal 0 } 
	{ m_axi_A_p_V_ARREGION sc_out sc_lv 4 signal 0 } 
	{ m_axi_A_p_V_ARUSER sc_out sc_lv 1 signal 0 } 
	{ m_axi_A_p_V_RVALID sc_in sc_logic 1 signal 0 } 
	{ m_axi_A_p_V_RREADY sc_out sc_logic 1 signal 0 } 
	{ m_axi_A_p_V_RDATA sc_in sc_lv 512 signal 0 } 
	{ m_axi_A_p_V_RLAST sc_in sc_logic 1 signal 0 } 
	{ m_axi_A_p_V_RID sc_in sc_lv 1 signal 0 } 
	{ m_axi_A_p_V_RUSER sc_in sc_lv 1 signal 0 } 
	{ m_axi_A_p_V_RRESP sc_in sc_lv 2 signal 0 } 
	{ m_axi_A_p_V_BVALID sc_in sc_logic 1 signal 0 } 
	{ m_axi_A_p_V_BREADY sc_out sc_logic 1 signal 0 } 
	{ m_axi_A_p_V_BRESP sc_in sc_lv 2 signal 0 } 
	{ m_axi_A_p_V_BID sc_in sc_lv 1 signal 0 } 
	{ m_axi_A_p_V_BUSER sc_in sc_lv 1 signal 0 } 
	{ A_p_V_offset_dout sc_in sc_lv 64 signal 1 } 
	{ A_p_V_offset_empty_n sc_in sc_logic 1 signal 1 } 
	{ A_p_V_offset_read sc_out sc_logic 1 signal 1 } 
	{ AStreamWide_V_V_din sc_out sc_lv 512 signal 2 } 
	{ AStreamWide_V_V_full_n sc_in sc_logic 1 signal 2 } 
	{ AStreamWide_V_V_write sc_out sc_logic 1 signal 2 } 
	{ N_dout sc_in sc_lv 32 signal 3 } 
	{ N_empty_n sc_in sc_logic 1 signal 3 } 
	{ N_read sc_out sc_logic 1 signal 3 } 
	{ N_out_din sc_out sc_lv 32 signal 4 } 
	{ N_out_full_n sc_in sc_logic 1 signal 4 } 
	{ N_out_write sc_out sc_logic 1 signal 4 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "start_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "start_full_n", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_continue", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "continue", "bundle":{"name": "ap_continue", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "start_out", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "start_out", "role": "default" }} , 
 	{ "name": "start_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "start_write", "role": "default" }} , 
 	{ "name": "m_axi_A_p_V_AWVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_p_V", "role": "AWVALID" }} , 
 	{ "name": "m_axi_A_p_V_AWREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_p_V", "role": "AWREADY" }} , 
 	{ "name": "m_axi_A_p_V_AWADDR", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "A_p_V", "role": "AWADDR" }} , 
 	{ "name": "m_axi_A_p_V_AWID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "A_p_V", "role": "AWID" }} , 
 	{ "name": "m_axi_A_p_V_AWLEN", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_p_V", "role": "AWLEN" }} , 
 	{ "name": "m_axi_A_p_V_AWSIZE", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "A_p_V", "role": "AWSIZE" }} , 
 	{ "name": "m_axi_A_p_V_AWBURST", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "A_p_V", "role": "AWBURST" }} , 
 	{ "name": "m_axi_A_p_V_AWLOCK", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "A_p_V", "role": "AWLOCK" }} , 
 	{ "name": "m_axi_A_p_V_AWCACHE", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "A_p_V", "role": "AWCACHE" }} , 
 	{ "name": "m_axi_A_p_V_AWPROT", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "A_p_V", "role": "AWPROT" }} , 
 	{ "name": "m_axi_A_p_V_AWQOS", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "A_p_V", "role": "AWQOS" }} , 
 	{ "name": "m_axi_A_p_V_AWREGION", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "A_p_V", "role": "AWREGION" }} , 
 	{ "name": "m_axi_A_p_V_AWUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "A_p_V", "role": "AWUSER" }} , 
 	{ "name": "m_axi_A_p_V_WVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_p_V", "role": "WVALID" }} , 
 	{ "name": "m_axi_A_p_V_WREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_p_V", "role": "WREADY" }} , 
 	{ "name": "m_axi_A_p_V_WDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":512, "type": "signal", "bundle":{"name": "A_p_V", "role": "WDATA" }} , 
 	{ "name": "m_axi_A_p_V_WSTRB", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "A_p_V", "role": "WSTRB" }} , 
 	{ "name": "m_axi_A_p_V_WLAST", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_p_V", "role": "WLAST" }} , 
 	{ "name": "m_axi_A_p_V_WID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "A_p_V", "role": "WID" }} , 
 	{ "name": "m_axi_A_p_V_WUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "A_p_V", "role": "WUSER" }} , 
 	{ "name": "m_axi_A_p_V_ARVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_p_V", "role": "ARVALID" }} , 
 	{ "name": "m_axi_A_p_V_ARREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_p_V", "role": "ARREADY" }} , 
 	{ "name": "m_axi_A_p_V_ARADDR", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "A_p_V", "role": "ARADDR" }} , 
 	{ "name": "m_axi_A_p_V_ARID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "A_p_V", "role": "ARID" }} , 
 	{ "name": "m_axi_A_p_V_ARLEN", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_p_V", "role": "ARLEN" }} , 
 	{ "name": "m_axi_A_p_V_ARSIZE", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "A_p_V", "role": "ARSIZE" }} , 
 	{ "name": "m_axi_A_p_V_ARBURST", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "A_p_V", "role": "ARBURST" }} , 
 	{ "name": "m_axi_A_p_V_ARLOCK", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "A_p_V", "role": "ARLOCK" }} , 
 	{ "name": "m_axi_A_p_V_ARCACHE", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "A_p_V", "role": "ARCACHE" }} , 
 	{ "name": "m_axi_A_p_V_ARPROT", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "A_p_V", "role": "ARPROT" }} , 
 	{ "name": "m_axi_A_p_V_ARQOS", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "A_p_V", "role": "ARQOS" }} , 
 	{ "name": "m_axi_A_p_V_ARREGION", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "A_p_V", "role": "ARREGION" }} , 
 	{ "name": "m_axi_A_p_V_ARUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "A_p_V", "role": "ARUSER" }} , 
 	{ "name": "m_axi_A_p_V_RVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_p_V", "role": "RVALID" }} , 
 	{ "name": "m_axi_A_p_V_RREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_p_V", "role": "RREADY" }} , 
 	{ "name": "m_axi_A_p_V_RDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":512, "type": "signal", "bundle":{"name": "A_p_V", "role": "RDATA" }} , 
 	{ "name": "m_axi_A_p_V_RLAST", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_p_V", "role": "RLAST" }} , 
 	{ "name": "m_axi_A_p_V_RID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "A_p_V", "role": "RID" }} , 
 	{ "name": "m_axi_A_p_V_RUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "A_p_V", "role": "RUSER" }} , 
 	{ "name": "m_axi_A_p_V_RRESP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "A_p_V", "role": "RRESP" }} , 
 	{ "name": "m_axi_A_p_V_BVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_p_V", "role": "BVALID" }} , 
 	{ "name": "m_axi_A_p_V_BREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_p_V", "role": "BREADY" }} , 
 	{ "name": "m_axi_A_p_V_BRESP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "A_p_V", "role": "BRESP" }} , 
 	{ "name": "m_axi_A_p_V_BID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "A_p_V", "role": "BID" }} , 
 	{ "name": "m_axi_A_p_V_BUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "A_p_V", "role": "BUSER" }} , 
 	{ "name": "A_p_V_offset_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "A_p_V_offset", "role": "dout" }} , 
 	{ "name": "A_p_V_offset_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_p_V_offset", "role": "empty_n" }} , 
 	{ "name": "A_p_V_offset_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_p_V_offset", "role": "read" }} , 
 	{ "name": "AStreamWide_V_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":512, "type": "signal", "bundle":{"name": "AStreamWide_V_V", "role": "din" }} , 
 	{ "name": "AStreamWide_V_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "AStreamWide_V_V", "role": "full_n" }} , 
 	{ "name": "AStreamWide_V_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "AStreamWide_V_V", "role": "write" }} , 
 	{ "name": "N_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "N", "role": "dout" }} , 
 	{ "name": "N_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "N", "role": "empty_n" }} , 
 	{ "name": "N_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "N", "role": "read" }} , 
 	{ "name": "N_out_din", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "N_out", "role": "din" }} , 
 	{ "name": "N_out_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "N_out", "role": "full_n" }} , 
 	{ "name": "N_out_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "N_out", "role": "write" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5"],
		"CDFG" : "readA",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "-1", "EstimateLatencyMax" : "-1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "A_p_V", "Type" : "MAXI", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "A_p_V_blk_n_AR", "Type" : "RtlSignal"},
					{"Name" : "A_p_V_blk_n_R", "Type" : "RtlSignal"}]},
			{"Name" : "A_p_V_offset", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "A_p_V_offset_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "AStreamWide_V_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "AStreamWide_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "N", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "N_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "N_out", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "N_out_blk_n", "Type" : "RtlSignal"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mm_mul_32ns_43ns_75_4_1_U10", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mm_mul_25ns_75ns_100_5_1_U11", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mm_mul_32s_32s_32_4_1_U12", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mm_mul_32s_32s_32_4_1_U13", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mm_mul_32s_32s_32_4_1_U14", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	readA {
		A_p_V {Type I LastRead 26 FirstWrite -1}
		A_p_V_offset {Type I LastRead 0 FirstWrite -1}
		AStreamWide_V_V {Type O LastRead -1 FirstWrite 27}
		N {Type I LastRead 0 FirstWrite -1}
		N_out {Type O LastRead -1 FirstWrite 0}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "-1", "Max" : "-1"}
	, {"Name" : "Interval", "Min" : "-1", "Max" : "-1"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
]}

set Spec2ImplPortList { 
	A_p_V { m_axi {  { m_axi_A_p_V_AWVALID VALID 1 1 }  { m_axi_A_p_V_AWREADY READY 0 1 }  { m_axi_A_p_V_AWADDR ADDR 1 64 }  { m_axi_A_p_V_AWID ID 1 1 }  { m_axi_A_p_V_AWLEN LEN 1 32 }  { m_axi_A_p_V_AWSIZE SIZE 1 3 }  { m_axi_A_p_V_AWBURST BURST 1 2 }  { m_axi_A_p_V_AWLOCK LOCK 1 2 }  { m_axi_A_p_V_AWCACHE CACHE 1 4 }  { m_axi_A_p_V_AWPROT PROT 1 3 }  { m_axi_A_p_V_AWQOS QOS 1 4 }  { m_axi_A_p_V_AWREGION REGION 1 4 }  { m_axi_A_p_V_AWUSER USER 1 1 }  { m_axi_A_p_V_WVALID VALID 1 1 }  { m_axi_A_p_V_WREADY READY 0 1 }  { m_axi_A_p_V_WDATA DATA 1 512 }  { m_axi_A_p_V_WSTRB STRB 1 64 }  { m_axi_A_p_V_WLAST LAST 1 1 }  { m_axi_A_p_V_WID ID 1 1 }  { m_axi_A_p_V_WUSER USER 1 1 }  { m_axi_A_p_V_ARVALID VALID 1 1 }  { m_axi_A_p_V_ARREADY READY 0 1 }  { m_axi_A_p_V_ARADDR ADDR 1 64 }  { m_axi_A_p_V_ARID ID 1 1 }  { m_axi_A_p_V_ARLEN LEN 1 32 }  { m_axi_A_p_V_ARSIZE SIZE 1 3 }  { m_axi_A_p_V_ARBURST BURST 1 2 }  { m_axi_A_p_V_ARLOCK LOCK 1 2 }  { m_axi_A_p_V_ARCACHE CACHE 1 4 }  { m_axi_A_p_V_ARPROT PROT 1 3 }  { m_axi_A_p_V_ARQOS QOS 1 4 }  { m_axi_A_p_V_ARREGION REGION 1 4 }  { m_axi_A_p_V_ARUSER USER 1 1 }  { m_axi_A_p_V_RVALID VALID 0 1 }  { m_axi_A_p_V_RREADY READY 1 1 }  { m_axi_A_p_V_RDATA DATA 0 512 }  { m_axi_A_p_V_RLAST LAST 0 1 }  { m_axi_A_p_V_RID ID 0 1 }  { m_axi_A_p_V_RUSER USER 0 1 }  { m_axi_A_p_V_RRESP RESP 0 2 }  { m_axi_A_p_V_BVALID VALID 0 1 }  { m_axi_A_p_V_BREADY READY 1 1 }  { m_axi_A_p_V_BRESP RESP 0 2 }  { m_axi_A_p_V_BID ID 0 1 }  { m_axi_A_p_V_BUSER USER 0 1 } } }
	A_p_V_offset { ap_fifo {  { A_p_V_offset_dout fifo_data 0 64 }  { A_p_V_offset_empty_n fifo_status 0 1 }  { A_p_V_offset_read fifo_update 1 1 } } }
	AStreamWide_V_V { ap_fifo {  { AStreamWide_V_V_din fifo_data 1 512 }  { AStreamWide_V_V_full_n fifo_status 0 1 }  { AStreamWide_V_V_write fifo_update 1 1 } } }
	N { ap_fifo {  { N_dout fifo_data 0 32 }  { N_empty_n fifo_status 0 1 }  { N_read fifo_update 1 1 } } }
	N_out { ap_fifo {  { N_out_din fifo_data 1 32 }  { N_out_full_n fifo_status 0 1 }  { N_out_write fifo_update 1 1 } } }
}
