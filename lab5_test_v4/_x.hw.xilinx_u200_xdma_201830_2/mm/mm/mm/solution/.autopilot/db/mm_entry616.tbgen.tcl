set moduleName mm_entry616
set isTopModule 0
set isTaskLevelControl 1
set isCombinational 0
set isDatapathOnly 0
set isFreeRunPipelineModule 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 1
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {mm.entry616}
set C_modelType { void 0 }
set C_modelArgList {
	{ N int 32 regular  }
	{ N_out int 32 regular {fifo 1}  }
	{ N_out1 int 32 regular {fifo 1}  }
	{ A_p_V int 64 regular  }
	{ B_p_V int 64 regular  }
	{ AB_p_V int 64 regular  }
	{ A_p_V_out int 64 regular {fifo 1}  }
	{ B_p_V_out int 64 regular {fifo 1}  }
	{ AB_p_V_out int 64 regular {fifo 1}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "N", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "N_out", "interface" : "fifo", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "N_out1", "interface" : "fifo", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "A_p_V", "interface" : "wire", "bitwidth" : 64, "direction" : "READONLY"} , 
 	{ "Name" : "B_p_V", "interface" : "wire", "bitwidth" : 64, "direction" : "READONLY"} , 
 	{ "Name" : "AB_p_V", "interface" : "wire", "bitwidth" : 64, "direction" : "READONLY"} , 
 	{ "Name" : "A_p_V_out", "interface" : "fifo", "bitwidth" : 64, "direction" : "WRITEONLY"} , 
 	{ "Name" : "B_p_V_out", "interface" : "fifo", "bitwidth" : 64, "direction" : "WRITEONLY"} , 
 	{ "Name" : "AB_p_V_out", "interface" : "fifo", "bitwidth" : 64, "direction" : "WRITEONLY"} ]}
# RTL Port declarations: 
set portNum 29
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
	{ N sc_in sc_lv 32 signal 0 } 
	{ N_out_din sc_out sc_lv 32 signal 1 } 
	{ N_out_full_n sc_in sc_logic 1 signal 1 } 
	{ N_out_write sc_out sc_logic 1 signal 1 } 
	{ N_out1_din sc_out sc_lv 32 signal 2 } 
	{ N_out1_full_n sc_in sc_logic 1 signal 2 } 
	{ N_out1_write sc_out sc_logic 1 signal 2 } 
	{ A_p_V sc_in sc_lv 64 signal 3 } 
	{ B_p_V sc_in sc_lv 64 signal 4 } 
	{ AB_p_V sc_in sc_lv 64 signal 5 } 
	{ A_p_V_out_din sc_out sc_lv 64 signal 6 } 
	{ A_p_V_out_full_n sc_in sc_logic 1 signal 6 } 
	{ A_p_V_out_write sc_out sc_logic 1 signal 6 } 
	{ B_p_V_out_din sc_out sc_lv 64 signal 7 } 
	{ B_p_V_out_full_n sc_in sc_logic 1 signal 7 } 
	{ B_p_V_out_write sc_out sc_logic 1 signal 7 } 
	{ AB_p_V_out_din sc_out sc_lv 64 signal 8 } 
	{ AB_p_V_out_full_n sc_in sc_logic 1 signal 8 } 
	{ AB_p_V_out_write sc_out sc_logic 1 signal 8 } 
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
 	{ "name": "N", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "N", "role": "default" }} , 
 	{ "name": "N_out_din", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "N_out", "role": "din" }} , 
 	{ "name": "N_out_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "N_out", "role": "full_n" }} , 
 	{ "name": "N_out_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "N_out", "role": "write" }} , 
 	{ "name": "N_out1_din", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "N_out1", "role": "din" }} , 
 	{ "name": "N_out1_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "N_out1", "role": "full_n" }} , 
 	{ "name": "N_out1_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "N_out1", "role": "write" }} , 
 	{ "name": "A_p_V", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "A_p_V", "role": "default" }} , 
 	{ "name": "B_p_V", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "B_p_V", "role": "default" }} , 
 	{ "name": "AB_p_V", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "AB_p_V", "role": "default" }} , 
 	{ "name": "A_p_V_out_din", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "A_p_V_out", "role": "din" }} , 
 	{ "name": "A_p_V_out_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_p_V_out", "role": "full_n" }} , 
 	{ "name": "A_p_V_out_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_p_V_out", "role": "write" }} , 
 	{ "name": "B_p_V_out_din", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "B_p_V_out", "role": "din" }} , 
 	{ "name": "B_p_V_out_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "B_p_V_out", "role": "full_n" }} , 
 	{ "name": "B_p_V_out_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "B_p_V_out", "role": "write" }} , 
 	{ "name": "AB_p_V_out_din", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "AB_p_V_out", "role": "din" }} , 
 	{ "name": "AB_p_V_out_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "AB_p_V_out", "role": "full_n" }} , 
 	{ "name": "AB_p_V_out_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "AB_p_V_out", "role": "write" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "",
		"CDFG" : "mm_entry616",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "N", "Type" : "None", "Direction" : "I"},
			{"Name" : "N_out", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "N_out_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "N_out1", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "N_out1_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "A_p_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "B_p_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "AB_p_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "A_p_V_out", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "A_p_V_out_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "B_p_V_out", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "B_p_V_out_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "AB_p_V_out", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "AB_p_V_out_blk_n", "Type" : "RtlSignal"}]}]}]}


set ArgLastReadFirstWriteLatency {
	mm_entry616 {
		N {Type I LastRead 0 FirstWrite -1}
		N_out {Type O LastRead -1 FirstWrite 0}
		N_out1 {Type O LastRead -1 FirstWrite 0}
		A_p_V {Type I LastRead 0 FirstWrite -1}
		B_p_V {Type I LastRead 0 FirstWrite -1}
		AB_p_V {Type I LastRead 0 FirstWrite -1}
		A_p_V_out {Type O LastRead -1 FirstWrite 0}
		B_p_V_out {Type O LastRead -1 FirstWrite 0}
		AB_p_V_out {Type O LastRead -1 FirstWrite 0}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "0", "Max" : "0"}
	, {"Name" : "Interval", "Min" : "0", "Max" : "0"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	N { ap_none {  { N in_data 0 32 } } }
	N_out { ap_fifo {  { N_out_din fifo_data 1 32 }  { N_out_full_n fifo_status 0 1 }  { N_out_write fifo_update 1 1 } } }
	N_out1 { ap_fifo {  { N_out1_din fifo_data 1 32 }  { N_out1_full_n fifo_status 0 1 }  { N_out1_write fifo_update 1 1 } } }
	A_p_V { ap_none {  { A_p_V in_data 0 64 } } }
	B_p_V { ap_none {  { B_p_V in_data 0 64 } } }
	AB_p_V { ap_none {  { AB_p_V in_data 0 64 } } }
	A_p_V_out { ap_fifo {  { A_p_V_out_din fifo_data 1 64 }  { A_p_V_out_full_n fifo_status 0 1 }  { A_p_V_out_write fifo_update 1 1 } } }
	B_p_V_out { ap_fifo {  { B_p_V_out_din fifo_data 1 64 }  { B_p_V_out_full_n fifo_status 0 1 }  { B_p_V_out_write fifo_update 1 1 } } }
	AB_p_V_out { ap_fifo {  { AB_p_V_out_din fifo_data 1 64 }  { AB_p_V_out_full_n fifo_status 0 1 }  { AB_p_V_out_write fifo_update 1 1 } } }
}
