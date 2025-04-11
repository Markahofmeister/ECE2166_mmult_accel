set moduleName changeARate
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
set C_modelName {changeARate}
set C_modelType { void 0 }
set C_modelArgList {
	{ AStreamWide_V_V int 512 regular {fifo 0 volatile }  }
	{ AStream_V int 16 regular {fifo 1 volatile }  }
	{ N int 32 regular {fifo 0}  }
	{ N_out int 32 regular {fifo 1}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "AStreamWide_V_V", "interface" : "fifo", "bitwidth" : 512, "direction" : "READONLY"} , 
 	{ "Name" : "AStream_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "N", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "N_out", "interface" : "fifo", "bitwidth" : 32, "direction" : "WRITEONLY"} ]}
# RTL Port declarations: 
set portNum 19
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_continue sc_in sc_logic 1 continue -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ AStreamWide_V_V_dout sc_in sc_lv 512 signal 0 } 
	{ AStreamWide_V_V_empty_n sc_in sc_logic 1 signal 0 } 
	{ AStreamWide_V_V_read sc_out sc_logic 1 signal 0 } 
	{ AStream_V_din sc_out sc_lv 16 signal 1 } 
	{ AStream_V_full_n sc_in sc_logic 1 signal 1 } 
	{ AStream_V_write sc_out sc_logic 1 signal 1 } 
	{ N_dout sc_in sc_lv 32 signal 2 } 
	{ N_empty_n sc_in sc_logic 1 signal 2 } 
	{ N_read sc_out sc_logic 1 signal 2 } 
	{ N_out_din sc_out sc_lv 32 signal 3 } 
	{ N_out_full_n sc_in sc_logic 1 signal 3 } 
	{ N_out_write sc_out sc_logic 1 signal 3 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_continue", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "continue", "bundle":{"name": "ap_continue", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "AStreamWide_V_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":512, "type": "signal", "bundle":{"name": "AStreamWide_V_V", "role": "dout" }} , 
 	{ "name": "AStreamWide_V_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "AStreamWide_V_V", "role": "empty_n" }} , 
 	{ "name": "AStreamWide_V_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "AStreamWide_V_V", "role": "read" }} , 
 	{ "name": "AStream_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "AStream_V", "role": "din" }} , 
 	{ "name": "AStream_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "AStream_V", "role": "full_n" }} , 
 	{ "name": "AStream_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "AStream_V", "role": "write" }} , 
 	{ "name": "N_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "N", "role": "dout" }} , 
 	{ "name": "N_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "N", "role": "empty_n" }} , 
 	{ "name": "N_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "N", "role": "read" }} , 
 	{ "name": "N_out_din", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "N_out", "role": "din" }} , 
 	{ "name": "N_out_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "N_out", "role": "full_n" }} , 
 	{ "name": "N_out_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "N_out", "role": "write" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2"],
		"CDFG" : "changeARate",
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
			{"Name" : "AStreamWide_V_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "AStreamWide_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "AStream_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "AStream_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "N", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "N_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "N_out", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "N_out_blk_n", "Type" : "RtlSignal"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mm_mul_32ns_43ns_75_4_1_U23", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mm_mul_25ns_75ns_100_5_1_U24", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	changeARate {
		AStreamWide_V_V {Type I LastRead 11 FirstWrite -1}
		AStream_V {Type O LastRead -1 FirstWrite 13}
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
	AStreamWide_V_V { ap_fifo {  { AStreamWide_V_V_dout fifo_data 0 512 }  { AStreamWide_V_V_empty_n fifo_status 0 1 }  { AStreamWide_V_V_read fifo_update 1 1 } } }
	AStream_V { ap_fifo {  { AStream_V_din fifo_data 1 16 }  { AStream_V_full_n fifo_status 0 1 }  { AStream_V_write fifo_update 1 1 } } }
	N { ap_fifo {  { N_dout fifo_data 0 32 }  { N_empty_n fifo_status 0 1 }  { N_read fifo_update 1 1 } } }
	N_out { ap_fifo {  { N_out_din fifo_data 1 32 }  { N_out_full_n fifo_status 0 1 }  { N_out_write fifo_update 1 1 } } }
}
