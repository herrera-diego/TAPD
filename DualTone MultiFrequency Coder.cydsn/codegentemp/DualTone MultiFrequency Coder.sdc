# THIS FILE IS AUTOMATICALLY GENERATED
# Project: C:\Users\herreral\Documents\Masters\Tecnicas de Adquisicion y Procesamiento de Datos\DualToneMultiFrequencyCoder\DualTone MultiFrequency Coder.cydsn\DualTone MultiFrequency Coder.cyprj
# Date: Sun, 04 Mar 2018 00:24:40 GMT
#set_units -time ns
create_clock -name {ADC_DelSig_1_Ext_CP_Clk(routed)} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/dclk_0}]]
create_clock -name {HF_DAC_2_DacClk(routed)} -period 1250 -waveform {0 625} [list [get_pins {ClockBlock/dclk_3}]]
create_clock -name {LF_DAC_2_DacClk(routed)} -period 1250 -waveform {0 625} [list [get_pins {ClockBlock/dclk_4}]]
create_clock -name {LF_DAC_1_DacClk(routed)} -period 1250 -waveform {0 625} [list [get_pins {ClockBlock/dclk_5}]]
create_clock -name {HF_DAC_1_DacClk(routed)} -period 1250 -waveform {0 625} [list [get_pins {ClockBlock/dclk_6}]]
create_clock -name {CyILO} -period 1000000 -waveform {0 500000} [list [get_pins {ClockBlock/ilo}] [get_pins {ClockBlock/clk_100k}] [get_pins {ClockBlock/clk_1k}] [get_pins {ClockBlock/clk_32k}]]
create_clock -name {CyIMO} -period 333.33333333333331 -waveform {0 166.666666666667} [list [get_pins {ClockBlock/imo}]]
create_clock -name {CyPLL_OUT} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/pllout}]]
create_clock -name {CyMASTER_CLK} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/clk_sync}]]
create_generated_clock -name {CyBUS_CLK} -source [get_pins {ClockBlock/clk_sync}] -edges {1 2 3} [list [get_pins {ClockBlock/clk_bus_glb}]]
create_clock -name {ADC_DelSig_1_Ext_CP_Clk} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/dclk_glb_0}]]
create_generated_clock -name {Clock_1} -source [get_pins {ClockBlock/clk_sync}] -edges {1 25 49} [list [get_pins {ClockBlock/dclk_glb_1}]]
create_clock -name {Clock_1(fixed-function)} -period 1000 -waveform {0 41.6666666666667} [get_pins {ClockBlock/dclk_glb_ff_1}]
create_generated_clock -name {UART_1_IntClock} -source [get_pins {ClockBlock/clk_sync}] -edges {1 27 53} -nominal_period 1083.3333333333333 [list [get_pins {ClockBlock/dclk_glb_2}]]
create_generated_clock -name {HF_DAC_2_DacClk} -source [get_pins {ClockBlock/clk_sync}] -edges {1 31 61} [list [get_pins {ClockBlock/dclk_glb_3}]]
create_generated_clock -name {LF_DAC_2_DacClk} -source [get_pins {ClockBlock/clk_sync}] -edges {1 31 61} [list [get_pins {ClockBlock/dclk_glb_4}]]
create_generated_clock -name {LF_DAC_1_DacClk} -source [get_pins {ClockBlock/clk_sync}] -edges {1 31 61} [list [get_pins {ClockBlock/dclk_glb_5}]]
create_generated_clock -name {HF_DAC_1_DacClk} -source [get_pins {ClockBlock/clk_sync}] -edges {1 31 61} [list [get_pins {ClockBlock/dclk_glb_6}]]
create_generated_clock -name {ADC_DelSig_1_theACLK} -source [get_pins {ClockBlock/clk_sync}] -edges {1 151 301} [list [get_pins {ClockBlock/aclk_glb_0}]]
create_clock -name {ADC_DelSig_1_theACLK(fixed-function)} -period 6250 -waveform {0 3125} [get_pins {ClockBlock/aclk_glb_ff_0}]

set_false_path -from [get_pins {__ONE__/q}]

# Component constraints for C:\Users\herreral\Documents\Masters\Tecnicas de Adquisicion y Procesamiento de Datos\DualToneMultiFrequencyCoder\DualTone MultiFrequency Coder.cydsn\TopDesign\TopDesign.cysch
# Project: C:\Users\herreral\Documents\Masters\Tecnicas de Adquisicion y Procesamiento de Datos\DualToneMultiFrequencyCoder\DualTone MultiFrequency Coder.cydsn\DualTone MultiFrequency Coder.cyprj
# Date: Sun, 04 Mar 2018 00:24:30 GMT
