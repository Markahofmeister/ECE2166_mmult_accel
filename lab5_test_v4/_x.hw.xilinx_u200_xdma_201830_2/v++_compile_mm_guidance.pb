
ô
v++_compile_mm$1d4e77f3-b82a-4cf7-b930-8a3788c24844¬v++  -t hw --platform xilinx_u200_xdma_201830_2 --save-temps --temp_dir ./_x.hw.xilinx_u200_xdma_201830_2 -c -k mm -Isrc -o_x.hw.xilinx_u200_xdma_201830_2/mm.xo src/mm.cpp *"/ihome/ageorge/mah473/Desktop/Vitis_Accel_Examples/lab5_test_v4/_x.hw.xilinx_u200_xdma_201830_2/reports/mm/v++_compile_mm_guidance.html2~"z/ihome/ageorge/mah473/Desktop/Vitis_Accel_Examples/lab5_test_v4/_x.hw.xilinx_u200_xdma_201830_2/v++_compile_mm_guidance.pb
*â@
		Array"

Vivado HLS User Guide (UG902)hwww.xilinx.com"T/support/documentation/sw_manuals/xilinx2018_3/ug902-vivado-high-level-synthesis.pdfJ
Completely partitioning array 'AB_block' (!%1!) accessed through non-constant indices on dimension 2 (!%2!), which may result in long runtime and suboptimal QoR due to large multiplexers. Please consider wrapping the array access into a function or using a register file core instead.
ò
 2Completely partitioning array 'AB_block' (%REF) accessed through non-constant indices on dimension 2 (%REF), which may result in long runtime and suboptimal QoR due to large multiplexers. Please consider wrapping the array access into a function or using a register file core instead.

e
c mm.cpp2W"J/ihome/ageorge/mah473/Desktop/Vitis_Accel_Examples/lab5_test_v4/src/mm.cpp2line=63
f
d mm.cpp2X"J/ihome/ageorge/mah473/Desktop/Vitis_Accel_Examples/lab5_test_v4/src/mm.cpp2line=109R¨
Consult the !URI%1!.

Vivado HLS User Guide (UG902)hwww.xilinx.com"T/support/documentation/sw_manuals/xilinx2018_3/ug902-vivado-high-level-synthesis.pdfZ AcceleratorZmmZ	Array
ùôArray"

Vivado HLS User Guide (UG902)hwww.xilinx.com"T/support/documentation/sw_manuals/xilinx2018_3/ug902-vivado-high-level-synthesis.pdfJ
Completely partitioning array 'Bj' (!%1!) accessed through non-constant indices on dimension 1 (!%2!), which may result in long runtime and suboptimal QoR due to large multiplexers. Please consider wrapping the array access into a function or using a register file core instead.
ë
2Completely partitioning array 'Bj' (%REF) accessed through non-constant indices on dimension 1 (%REF), which may result in long runtime and suboptimal QoR due to large multiplexers. Please consider wrapping the array access into a function or using a register file core instead.

e
c mm.cpp2W"J/ihome/ageorge/mah473/Desktop/Vitis_Accel_Examples/lab5_test_v4/src/mm.cpp2line=77
e
c mm.cpp2W"J/ihome/ageorge/mah473/Desktop/Vitis_Accel_Examples/lab5_test_v4/src/mm.cpp2line=87R¨
Consult the !URI%1!.

Vivado HLS User Guide (UG902)hwww.xilinx.com"T/support/documentation/sw_manuals/xilinx2018_3/ug902-vivado-high-level-synthesis.pdfZ	ArrayZ AcceleratorZmm
Loop"

Vivado HLS User Guide (UG902)hwww.xilinx.com"T/support/documentation/sw_manuals/xilinx2018_3/ug902-vivado-high-level-synthesis.pdfJ¤
ZCannot flatten a loop nest 'k_loop' (!%1!) in function 'comp' : 

more than one sub loop.
Å
\2ZCannot flatten a loop nest 'k_loop' (%REF) in function 'comp' : 

more than one sub loop.

e
cmm.cpp2W"J/ihome/ageorge/mah473/Desktop/Vitis_Accel_Examples/lab5_test_v4/src/mm.cpp2line=76R¨
Consult the !URI%1!.

Vivado HLS User Guide (UG902)hwww.xilinx.com"T/support/documentation/sw_manuals/xilinx2018_3/ug902-vivado-high-level-synthesis.pdfZLoopZ AcceleratorZmm
Loop"

Vivado HLS User Guide (UG902)hwww.xilinx.com"T/support/documentation/sw_manuals/xilinx2018_3/ug902-vivado-high-level-synthesis.pdfJ¦
[Cannot flatten a loop nest 'jb_loop' (!%1!) in function 'comp' : 

more than one sub loop.
Æ
]2[Cannot flatten a loop nest 'jb_loop' (%REF) in function 'comp' : 

more than one sub loop.

e
cmm.cpp2W"J/ihome/ageorge/mah473/Desktop/Vitis_Accel_Examples/lab5_test_v4/src/mm.cpp2line=67R¨
Consult the !URI%1!.

Vivado HLS User Guide (UG902)hwww.xilinx.com"T/support/documentation/sw_manuals/xilinx2018_3/ug902-vivado-high-level-synthesis.pdfZ AcceleratorZmmZLoop
ÍÈLoop"

Vivado HLS User Guide (UG902)hwww.xilinx.com"T/support/documentation/sw_manuals/xilinx2018_3/ug902-vivado-high-level-synthesis.pdfJÞ
wCannot flatten a loop nest 'Loop-1.1.1.1.1' (!%1!) in function 'changeARate' : 

the outer loop is not a perfect loop.
â
y2wCannot flatten a loop nest 'Loop-1.1.1.1.1' (%REF) in function 'changeARate' : 

the outer loop is not a perfect loop.

e
cmm.cpp2W"J/ihome/ageorge/mah473/Desktop/Vitis_Accel_Examples/lab5_test_v4/src/mm.cpp2line=17R¨
Consult the !URI%1!.

Vivado HLS User Guide (UG902)hwww.xilinx.com"T/support/documentation/sw_manuals/xilinx2018_3/ug902-vivado-high-level-synthesis.pdfZ AcceleratorZmmZLoop
ßÚ	Interface"

Vivado HLS User Guide (UG902)hwww.xilinx.com"T/support/documentation/sw_manuals/xilinx2018_3/ug902-vivado-high-level-synthesis.pdfJæ
ùInferring multiple bus burst write of a total cumulative length 8 on port 'AB.V' (!%1!). These data requests might be further partitioned to multiple requests during RTL generation, based on max_read_burst_length or max_write_burst_length settings.
ç
ü2ùInferring multiple bus burst write of a total cumulative length 8 on port 'AB.V' (%REF). These data requests might be further partitioned to multiple requests during RTL generation, based on max_read_burst_length or max_write_burst_length settings.

f
dmm.cpp2X"J/ihome/ageorge/mah473/Desktop/Vitis_Accel_Examples/lab5_test_v4/src/mm.cpp2line=125R¨
Consult the !URI%1!.

Vivado HLS User Guide (UG902)hwww.xilinx.com"T/support/documentation/sw_manuals/xilinx2018_3/ug902-vivado-high-level-synthesis.pdfZ AcceleratorZmmZ	Interface
ÞÙ	Interface"

Vivado HLS User Guide (UG902)hwww.xilinx.com"T/support/documentation/sw_manuals/xilinx2018_3/ug902-vivado-high-level-synthesis.pdfJå
ùInferring multiple bus burst read of a total cumulative length 8 on port 'B_p.V' (!%1!). These data requests might be further partitioned to multiple requests during RTL generation, based on max_read_burst_length or max_write_burst_length settings.
æ
ü2ùInferring multiple bus burst read of a total cumulative length 8 on port 'B_p.V' (%REF). These data requests might be further partitioned to multiple requests during RTL generation, based on max_read_burst_length or max_write_burst_length settings.

e
cmm.cpp2W"J/ihome/ageorge/mah473/Desktop/Vitis_Accel_Examples/lab5_test_v4/src/mm.cpp2line=54R¨
Consult the !URI%1!.

Vivado HLS User Guide (UG902)hwww.xilinx.com"T/support/documentation/sw_manuals/xilinx2018_3/ug902-vivado-high-level-synthesis.pdfZ AcceleratorZmmZ	Interface
ÞÙ	Interface"

Vivado HLS User Guide (UG902)hwww.xilinx.com"T/support/documentation/sw_manuals/xilinx2018_3/ug902-vivado-high-level-synthesis.pdfJå
ùInferring multiple bus burst read of a total cumulative length 8 on port 'A_p.V' (!%1!). These data requests might be further partitioned to multiple requests during RTL generation, based on max_read_burst_length or max_write_burst_length settings.
æ
ü2ùInferring multiple bus burst read of a total cumulative length 8 on port 'A_p.V' (%REF). These data requests might be further partitioned to multiple requests during RTL generation, based on max_read_burst_length or max_write_burst_length settings.

e
cmm.cpp2W"J/ihome/ageorge/mah473/Desktop/Vitis_Accel_Examples/lab5_test_v4/src/mm.cpp2line=39R¨
Consult the !URI%1!.

Vivado HLS User Guide (UG902)hwww.xilinx.com"T/support/documentation/sw_manuals/xilinx2018_3/ug902-vivado-high-level-synthesis.pdfZ AcceleratorZmmZ	Interface
û	ö	Loop"

Vivado HLS User Guide (UG902)hwww.xilinx.com"T/support/documentation/sw_manuals/xilinx2018_3/ug902-vivado-high-level-synthesis.pdfJ
B**** Loop Constraint Status: All loop constraints were satisfied.
F
D2B**** Loop Constraint Status: All loop constraints were satisfied.
R¨
Consult the !URI%1!.

Vivado HLS User Guide (UG902)hwww.xilinx.com"T/support/documentation/sw_manuals/xilinx2018_3/ug902-vivado-high-level-synthesis.pdfZ AcceleratorZmmZLoop
º
µ
Kernel"

Vivado HLS User Guide (UG902)hwww.xilinx.com"T/support/documentation/sw_manuals/xilinx2018_3/ug902-vivado-high-level-synthesis.pdfJH
 **** Estimated Fmax: 411.02 MHz
$
"2 **** Estimated Fmax: 411.02 MHz
R¨
Consult the !URI%1!.

Vivado HLS User Guide (UG902)hwww.xilinx.com"T/support/documentation/sw_manuals/xilinx2018_3/ug902-vivado-high-level-synthesis.pdfZ
KernelZ AcceleratorZmmBà

Loop
LoopHLS Loop RelatedHLS"%s:Loop: Accelerator:
KernelBConsult the !URI%1!.J

Vivado HLS User Guide (UG902)hwww.xilinx.com"T/support/documentation/sw_manuals/xilinx2018_3/ug902-vivado-high-level-synthesis.pdfP   
¡
	Interface
	InterfaceHLS Interface RelatedHLS"%s: Accelerator:
Kernel:	InterfaceBConsult the !URI%1!.J

Vivado HLS User Guide (UG902)hwww.xilinx.com"T/support/documentation/sw_manuals/xilinx2018_3/ug902-vivado-high-level-synthesis.pdfP   

Kernel
KernelHLS Kernel RelatedHLS"%s: Accelerator:
Kernel:
KernelBConsult the !URI%1!.J

Vivado HLS User Guide (UG902)hwww.xilinx.com"T/support/documentation/sw_manuals/xilinx2018_3/ug902-vivado-high-level-synthesis.pdfP   

Array
ArrayHLS Array RelatedHLS"%s: Accelerator:
Kernel:	ArrayBConsult the !URI%1!.J

Vivado HLS User Guide (UG902)hwww.xilinx.com"T/support/documentation/sw_manuals/xilinx2018_3/ug902-vivado-high-level-synthesis.pdfP   