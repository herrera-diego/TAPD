// ======================================================================
// DualTone MultiFrequency Coder.v generated from TopDesign.cysch
// 03/03/2018 at 18:24
// This file is auto generated. ANY EDITS YOU MAKE MAY BE LOST WHEN THIS FILE IS REGENERATED!!!
// ======================================================================

/* -- WARNING: The following section of defines are deprecated and will be removed in a future release -- */
`define CYDEV_CHIP_DIE_LEOPARD 1
`define CYDEV_CHIP_REV_LEOPARD_PRODUCTION 3
`define CYDEV_CHIP_REV_LEOPARD_ES3 3
`define CYDEV_CHIP_REV_LEOPARD_ES2 1
`define CYDEV_CHIP_REV_LEOPARD_ES1 0
`define CYDEV_CHIP_DIE_PSOC5LP 2
`define CYDEV_CHIP_REV_PSOC5LP_PRODUCTION 0
`define CYDEV_CHIP_REV_PSOC5LP_ES0 0
`define CYDEV_CHIP_DIE_PSOC5TM 3
`define CYDEV_CHIP_REV_PSOC5TM_PRODUCTION 1
`define CYDEV_CHIP_REV_PSOC5TM_ES1 1
`define CYDEV_CHIP_REV_PSOC5TM_ES0 0
`define CYDEV_CHIP_DIE_TMA4 4
`define CYDEV_CHIP_REV_TMA4_PRODUCTION 17
`define CYDEV_CHIP_REV_TMA4_ES 17
`define CYDEV_CHIP_REV_TMA4_ES2 33
`define CYDEV_CHIP_DIE_PSOC4A 5
`define CYDEV_CHIP_REV_PSOC4A_PRODUCTION 17
`define CYDEV_CHIP_REV_PSOC4A_ES0 17
`define CYDEV_CHIP_DIE_PSOC6ABLE2 6
`define CYDEV_CHIP_REV_PSOC6ABLE2_PRODUCTION 0
`define CYDEV_CHIP_REV_PSOC6ABLE2_NO_UDB 0
`define CYDEV_CHIP_DIE_VOLANS 7
`define CYDEV_CHIP_REV_VOLANS_PRODUCTION 0
`define CYDEV_CHIP_DIE_BERRYPECKER 8
`define CYDEV_CHIP_REV_BERRYPECKER_PRODUCTION 0
`define CYDEV_CHIP_DIE_CRANE 9
`define CYDEV_CHIP_REV_CRANE_PRODUCTION 0
`define CYDEV_CHIP_DIE_FM3 10
`define CYDEV_CHIP_REV_FM3_PRODUCTION 0
`define CYDEV_CHIP_DIE_FM4 11
`define CYDEV_CHIP_REV_FM4_PRODUCTION 0
`define CYDEV_CHIP_DIE_EXPECT 2
`define CYDEV_CHIP_REV_EXPECT 0
`define CYDEV_CHIP_DIE_ACTUAL 2
/* -- WARNING: The previous section of defines are deprecated and will be removed in a future release -- */
`define CYDEV_CHIP_FAMILY_PSOC3 1
`define CYDEV_CHIP_FAMILY_PSOC4 2
`define CYDEV_CHIP_FAMILY_PSOC5 3
`define CYDEV_CHIP_FAMILY_PSOC6 4
`define CYDEV_CHIP_FAMILY_FM0P 5
`define CYDEV_CHIP_FAMILY_FM3 6
`define CYDEV_CHIP_FAMILY_FM4 7
`define CYDEV_CHIP_FAMILY_UNKNOWN 0
`define CYDEV_CHIP_MEMBER_UNKNOWN 0
`define CYDEV_CHIP_MEMBER_3A 1
`define CYDEV_CHIP_REVISION_3A_PRODUCTION 3
`define CYDEV_CHIP_REVISION_3A_ES3 3
`define CYDEV_CHIP_REVISION_3A_ES2 1
`define CYDEV_CHIP_REVISION_3A_ES1 0
`define CYDEV_CHIP_MEMBER_5B 2
`define CYDEV_CHIP_REVISION_5B_PRODUCTION 0
`define CYDEV_CHIP_REVISION_5B_ES0 0
`define CYDEV_CHIP_MEMBER_5A 3
`define CYDEV_CHIP_REVISION_5A_PRODUCTION 1
`define CYDEV_CHIP_REVISION_5A_ES1 1
`define CYDEV_CHIP_REVISION_5A_ES0 0
`define CYDEV_CHIP_MEMBER_4G 4
`define CYDEV_CHIP_REVISION_4G_PRODUCTION 17
`define CYDEV_CHIP_REVISION_4G_ES 17
`define CYDEV_CHIP_REVISION_4G_ES2 33
`define CYDEV_CHIP_MEMBER_4U 5
`define CYDEV_CHIP_REVISION_4U_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4E 6
`define CYDEV_CHIP_REVISION_4E_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4O 7
`define CYDEV_CHIP_REVISION_4O_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4R 8
`define CYDEV_CHIP_REVISION_4R_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4N 9
`define CYDEV_CHIP_REVISION_4N_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4S 10
`define CYDEV_CHIP_REVISION_4S_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4Q 11
`define CYDEV_CHIP_REVISION_4Q_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4D 12
`define CYDEV_CHIP_REVISION_4D_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4J 13
`define CYDEV_CHIP_REVISION_4J_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4K 14
`define CYDEV_CHIP_REVISION_4K_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4H 15
`define CYDEV_CHIP_REVISION_4H_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4A 16
`define CYDEV_CHIP_REVISION_4A_PRODUCTION 17
`define CYDEV_CHIP_REVISION_4A_ES0 17
`define CYDEV_CHIP_MEMBER_4F 17
`define CYDEV_CHIP_REVISION_4F_PRODUCTION 0
`define CYDEV_CHIP_REVISION_4F_PRODUCTION_256K 0
`define CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA 0
`define CYDEV_CHIP_MEMBER_4P 18
`define CYDEV_CHIP_REVISION_4P_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4M 19
`define CYDEV_CHIP_REVISION_4M_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4L 20
`define CYDEV_CHIP_REVISION_4L_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4I 21
`define CYDEV_CHIP_REVISION_4I_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_6A 22
`define CYDEV_CHIP_REVISION_6A_PRODUCTION 0
`define CYDEV_CHIP_REVISION_6A_NO_UDB 0
`define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE1 23
`define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE1_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE2 24
`define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE2_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE3 25
`define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE3_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_FM3 26
`define CYDEV_CHIP_REVISION_FM3_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_FM4 27
`define CYDEV_CHIP_REVISION_FM4_PRODUCTION 0
`define CYDEV_CHIP_FAMILY_USED 3
`define CYDEV_CHIP_MEMBER_USED 2
`define CYDEV_CHIP_REVISION_USED 0
// Component: cy_virtualmux_v1_0
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_virtualmux_v1_0"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_virtualmux_v1_0\cy_virtualmux_v1_0.v"
`else
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_virtualmux_v1_0"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_virtualmux_v1_0\cy_virtualmux_v1_0.v"
`endif

// Component: B_UART_v2_50
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyComponentLibrary\CyComponentLibrary.cylib\B_UART_v2_50"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyComponentLibrary\CyComponentLibrary.cylib\B_UART_v2_50\B_UART_v2_50.v"
`else
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyComponentLibrary\CyComponentLibrary.cylib\B_UART_v2_50"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyComponentLibrary\CyComponentLibrary.cylib\B_UART_v2_50\B_UART_v2_50.v"
`endif

// UART_v2_50(Address1=0, Address2=0, BaudRate=115200, BreakBitsRX=13, BreakBitsTX=13, BreakDetect=false, CRCoutputsEn=false, Enable_RX=1, Enable_RXIntInterrupt=0, Enable_TX=1, Enable_TXIntInterrupt=0, EnableHWAddress=0, EnIntRXInterrupt=false, EnIntTXInterrupt=false, FlowControl=0, HalfDuplexEn=false, HwTXEnSignal=true, InternalClock=true, InternalClockToleranceMinus=3.93736842105263, InternalClockTolerancePlus=3.93736842105263, InternalClockUsed=1, InterruptOnAddDetect=0, InterruptOnAddressMatch=0, InterruptOnBreak=0, InterruptOnByteRcvd=1, InterruptOnOverrunError=0, InterruptOnParityError=0, InterruptOnStopError=0, InterruptOnTXComplete=false, InterruptOnTXFifoEmpty=false, InterruptOnTXFifoFull=false, InterruptOnTXFifoNotFull=false, IntOnAddressDetect=false, IntOnAddressMatch=false, IntOnBreak=false, IntOnByteRcvd=true, IntOnOverrunError=false, IntOnParityError=false, IntOnStopError=false, NumDataBits=8, NumStopBits=1, OverSamplingRate=8, ParityType=0, ParityTypeSw=false, RequiredClock=921600, RXAddressMode=0, RXBufferSize=4, RxBuffRegSizeReplacementString=uint8, RXEnable=true, TXBitClkGenDP=true, TXBufferSize=4, TxBuffRegSizeReplacementString=uint8, TXEnable=true, Use23Polling=true, CY_API_CALLBACK_HEADER_INCLUDE=, CY_COMMENT=, CY_COMPONENT_NAME=UART_v2_50, CY_CONST_CONFIG=true, CY_CONTROL_FILE=<:default:>, CY_DATASHEET_FILE=<:default:>, CY_FITTER_NAME=UART_1, CY_INSTANCE_SHORT_NAME=UART_1, CY_MAJOR_VERSION=2, CY_MINOR_VERSION=50, CY_PDL_DRIVER_NAME=, CY_PDL_DRIVER_REQ_VERSION=, CY_PDL_DRIVER_SUBGROUP=, CY_PDL_DRIVER_VARIANT=, CY_REMOVE=false, CY_SUPPRESS_API_GEN=false, CY_VERSION=PSoC Creator  4.1 Update 1, INSTANCE_NAME=UART_1, )
module UART_v2_50_0 (
    cts_n,
    tx,
    rts_n,
    tx_en,
    clock,
    reset,
    rx,
    tx_interrupt,
    rx_interrupt,
    tx_data,
    tx_clk,
    rx_data,
    rx_clk);
    input       cts_n;
    output      tx;
    output      rts_n;
    output      tx_en;
    input       clock;
    input       reset;
    input       rx;
    output      tx_interrupt;
    output      rx_interrupt;
    output      tx_data;
    output      tx_clk;
    output      rx_data;
    output      rx_clk;

    parameter Address1 = 0;
    parameter Address2 = 0;
    parameter EnIntRXInterrupt = 0;
    parameter EnIntTXInterrupt = 0;
    parameter FlowControl = 0;
    parameter HalfDuplexEn = 0;
    parameter HwTXEnSignal = 1;
    parameter NumDataBits = 8;
    parameter NumStopBits = 1;
    parameter ParityType = 0;
    parameter RXEnable = 1;
    parameter TXEnable = 1;

          wire  Net_289;
          wire  Net_61;
          wire  Net_9;


	cy_clock_v1_0
		#(.id("b0162966-0060-4af5-82d1-fcb491ad7619/be0a0e37-ad17-42ca-b5a1-1a654d736358"),
		  .source_clock_id(""),
		  .divisor(0),
		  .period("1085069444.44444"),
		  .is_direct(0),
		  .is_digital(1))
		IntClock
		 (.clock_out(Net_9));


	// VirtualMux_1 (cy_virtualmux_v1_0)
	assign Net_61 = Net_9;

    B_UART_v2_50 BUART (
        .cts_n(cts_n),
        .tx(tx),
        .rts_n(rts_n),
        .tx_en(tx_en),
        .clock(Net_61),
        .reset(reset),
        .rx(rx),
        .tx_interrupt(tx_interrupt),
        .rx_interrupt(rx_interrupt),
        .tx_data(tx_data),
        .tx_clk(tx_clk),
        .rx_data(rx_data),
        .rx_clk(rx_clk));
    defparam BUART.Address1 = 0;
    defparam BUART.Address2 = 0;
    defparam BUART.BreakBitsRX = 13;
    defparam BUART.BreakBitsTX = 13;
    defparam BUART.BreakDetect = 0;
    defparam BUART.CRCoutputsEn = 0;
    defparam BUART.FlowControl = 0;
    defparam BUART.HalfDuplexEn = 0;
    defparam BUART.HwTXEnSignal = 1;
    defparam BUART.NumDataBits = 8;
    defparam BUART.NumStopBits = 1;
    defparam BUART.OverSampleCount = 8;
    defparam BUART.ParityType = 0;
    defparam BUART.ParityTypeSw = 0;
    defparam BUART.RXAddressMode = 0;
    defparam BUART.RXEnable = 1;
    defparam BUART.RXStatusIntEnable = 1;
    defparam BUART.TXBitClkGenDP = 1;
    defparam BUART.TXEnable = 1;
    defparam BUART.Use23Polling = 1;



endmodule

// Component: cy_constant_v1_0
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_constant_v1_0"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_constant_v1_0\cy_constant_v1_0.v"
`else
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_constant_v1_0"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_constant_v1_0\cy_constant_v1_0.v"
`endif

// Component: cy_vref_v1_70
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_vref_v1_70"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_vref_v1_70\cy_vref_v1_70.v"
`else
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_vref_v1_70"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_vref_v1_70\cy_vref_v1_70.v"
`endif

// Component: cy_analog_virtualmux_v1_0
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_analog_virtualmux_v1_0"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_analog_virtualmux_v1_0\cy_analog_virtualmux_v1_0.v"
`else
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_analog_virtualmux_v1_0"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_analog_virtualmux_v1_0\cy_analog_virtualmux_v1_0.v"
`endif

// Component: AMux_v1_80
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyComponentLibrary\CyComponentLibrary.cylib\AMux_v1_80"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyComponentLibrary\CyComponentLibrary.cylib\AMux_v1_80\AMux_v1_80.v"
`else
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyComponentLibrary\CyComponentLibrary.cylib\AMux_v1_80"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyComponentLibrary\CyComponentLibrary.cylib\AMux_v1_80\AMux_v1_80.v"
`endif

// Component: ZeroTerminal
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\ZeroTerminal"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\ZeroTerminal\ZeroTerminal.v"
`else
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\ZeroTerminal"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\ZeroTerminal\ZeroTerminal.v"
`endif

// Component: or_v1_0
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\or_v1_0"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\or_v1_0\or_v1_0.v"
`else
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\or_v1_0"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\or_v1_0\or_v1_0.v"
`endif

// ADC_DelSig_v3_30(ADC_Alignment=0, ADC_Alignment_Config2=0, ADC_Alignment_Config3=0, ADC_Alignment_Config4=0, ADC_Charge_Pump_Clock=false, ADC_Clock=1, ADC_CLOCK_FREQUENCY=160000, ADC_Input_Mode=1, ADC_Input_Range=0, ADC_Input_Range_Config2=4, ADC_Input_Range_Config3=4, ADC_Input_Range_Config4=4, ADC_Power=1, ADC_Reference=0, ADC_Reference_Config2=0, ADC_Reference_Config3=0, ADC_Reference_Config4=0, ADC_Resolution=8, ADC_Resolution_Config2=16, ADC_Resolution_Config3=16, ADC_Resolution_Config4=16, Clock_Frequency=64000, Comment_Config1=Default Config, Comment_Config2=Second Config, Comment_Config3=Third Config, Comment_Config4=Fourth Config, Config1_Name=CFG1, Config2_Name=CFG2, Config3_Name=CFG3, Config4_Name=CFG4, Configs=1, Conversion_Mode=2, Conversion_Mode_Config2=2, Conversion_Mode_Config3=2, Conversion_Mode_Config4=2, Enable_Vref_Vss=false, EnableModulatorInput=false, Input_Buffer_Gain=8, Input_Buffer_Gain_Config2=1, Input_Buffer_Gain_Config3=1, Input_Buffer_Gain_Config4=1, Input_Buffer_Mode=1, Input_Buffer_Mode_Config2=1, Input_Buffer_Mode_Config3=1, Input_Buffer_Mode_Config4=1, Ref_Voltage=1.024, Ref_Voltage_Config2=1.024, Ref_Voltage_Config3=1.024, Ref_Voltage_Config4=1.024, rm_int=false, Sample_Rate=10000, Sample_Rate_Config2=10000, Sample_Rate_Config3=10000, Sample_Rate_Config4=10000, Start_of_Conversion=0, Vdda_Value=5, CY_API_CALLBACK_HEADER_INCLUDE=, CY_COMMENT=, CY_COMPONENT_NAME=ADC_DelSig_v3_30, CY_CONST_CONFIG=true, CY_CONTROL_FILE=<:default:>, CY_DATASHEET_FILE=<:default:>, CY_FITTER_NAME=ADC_DelSig_1, CY_INSTANCE_SHORT_NAME=ADC_DelSig_1, CY_MAJOR_VERSION=3, CY_MINOR_VERSION=30, CY_PDL_DRIVER_NAME=, CY_PDL_DRIVER_REQ_VERSION=, CY_PDL_DRIVER_SUBGROUP=, CY_PDL_DRIVER_VARIANT=, CY_REMOVE=false, CY_SUPPRESS_API_GEN=false, CY_VERSION=PSoC Creator  4.1 Update 1, INSTANCE_NAME=ADC_DelSig_1, )
module ADC_DelSig_v3_30_1 (
    vplus,
    vminus,
    soc,
    eoc,
    aclk,
    nVref,
    mi);
    inout       vplus;
    electrical  vplus;
    inout       vminus;
    electrical  vminus;
    input       soc;
    output      eoc;
    input       aclk;
    inout       nVref;
    electrical  nVref;
    input       mi;


          wire  Net_268;
          wire  Net_270;
          wire  Net_252;
          wire  Net_275;
          wire  Net_250;
    electrical  Net_249;
    electrical  Net_257;
    electrical  Net_248;
    electrical  Net_23;
          wire  Net_247;
          wire  aclock;
          wire [3:0] mod_dat;
          wire  mod_reset;
    electrical  Net_352;
          wire  Net_246;
          wire [7:0] Net_245;
          wire  Net_482;
    electrical  Net_34;
    electrical  Net_35;
    electrical  Net_244;
          wire  Net_93;
    electrical  Net_20;
    electrical  Net_690;
    electrical  Net_686;
    electrical  Net_520;
          wire  Net_481;
    electrical  Net_677;
    electrical  Net_41;
    electrical  Net_573;
    electrical  Net_109;
          wire  Net_488;


	cy_vref_v1_0
		#(.guid("15B3DB15-B7B3-4d62-A2DF-25EA392A7161"),
		  .name("Vssa (GND)"),
		  .autoenable(1))
		vRef_2
		 (.vout(Net_244));


	// cy_analog_virtualmux_6 (cy_analog_virtualmux_v1_0)
	cy_connect_v1_0 cy_analog_virtualmux_6_connect(Net_690, Net_35);
	defparam cy_analog_virtualmux_6_connect.sig_width = 1;

    cy_analog_noconnect_v1_0 cy_analog_noconnect_1 (
        .noconnect(Net_34));

	// cy_analog_virtualmux_4 (cy_analog_virtualmux_v1_0)
	cy_connect_v1_0 cy_analog_virtualmux_4_connect(Net_677, Net_34);
	defparam cy_analog_virtualmux_4_connect.sig_width = 1;

    // -- AMux AMux start -- ***
    // -- Mux A --
    
    cy_psoc3_amux_v1_0 AMux(
        .muxin({
            Net_690,
            Net_244
            }),
        .vout(Net_20)
        );
    
    defparam AMux.muxin_width = 2;
    defparam AMux.init_mux_sel = 2'h0;
    defparam AMux.one_active = 0;
    defparam AMux.connect_mode = 1;
    
    // -- AMux AMux end --

    cy_psoc3_ds_mod_v4_0 DSM (
        .vplus(vplus),
        .vminus(Net_520),
        .modbit(Net_481),
        .reset_udb(Net_482),
        .aclock(Net_488),
        .mod_dat(mod_dat[3:0]),
        .dout_udb(Net_245[7:0]),
        .reset_dec(mod_reset),
        .dec_clock(aclock),
        .extclk_cp_udb(Net_93),
        .clk_udb(1'b0),
        .ext_pin_1(Net_573),
        .ext_pin_2(Net_41),
        .ext_vssa(Net_109),
        .qtz_ref(Net_677));
    defparam DSM.resolution = 8;

    cy_analog_noconnect_v1_0 cy_analog_noconnect_5 (
        .noconnect(Net_352));

	// cy_analog_virtualmux_5 (cy_analog_virtualmux_v1_0)
	cy_connect_v1_0 cy_analog_virtualmux_5_connect(Net_109, Net_352);
	defparam cy_analog_virtualmux_5_connect.sig_width = 1;


	cy_clock_v1_0
		#(.id("1ff1f650-c02e-401e-8bbd-7cfbaf5a55a9/b7604721-db56-4477-98c2-8fae77869066"),
		  .source_clock_id("61737EF6-3B74-48f9-8B91-F7473A442AE7"),
		  .divisor(1),
		  .period("0"),
		  .is_direct(0),
		  .is_digital(1))
		Ext_CP_Clk
		 (.clock_out(Net_93));


    cy_analog_noconnect_v1_0 cy_analog_noconnect_3 (
        .noconnect(Net_257));

    cy_analog_noconnect_v1_0 cy_analog_noconnect_2 (
        .noconnect(Net_249));

	// cy_analog_virtualmux_3 (cy_analog_virtualmux_v1_0)
	cy_connect_v1_0 cy_analog_virtualmux_3_connect(Net_41, Net_257);
	defparam cy_analog_virtualmux_3_connect.sig_width = 1;

	// cy_analog_virtualmux_2 (cy_analog_virtualmux_v1_0)
	cy_connect_v1_0 cy_analog_virtualmux_2_connect(Net_573, Net_249);
	defparam cy_analog_virtualmux_2_connect.sig_width = 1;

	// cy_analog_virtualmux_1 (cy_analog_virtualmux_v1_0)
	cy_connect_v1_0 cy_analog_virtualmux_1_connect(Net_520, Net_20);
	defparam cy_analog_virtualmux_1_connect.sig_width = 1;


	cy_isr_v1_0
		#(.int_type(2'b10))
		IRQ
		 (.int_signal(eoc));


	// Clock_VirtualMux (cy_virtualmux_v1_0)
	assign Net_488 = Net_250;


	cy_clock_v1_0
		#(.id("1ff1f650-c02e-401e-8bbd-7cfbaf5a55a9/edd15f43-b66b-457b-be3a-5342345270c8"),
		  .source_clock_id("61737EF6-3B74-48f9-8B91-F7473A442AE7"),
		  .divisor(0),
		  .period("6250000000"),
		  .is_direct(0),
		  .is_digital(0))
		theACLK
		 (.clock_out(Net_250));


    ZeroTerminal ZeroTerminal_2 (
        .z(Net_482));

	// Clock_VirtualMux_1 (cy_virtualmux_v1_0)
	assign Net_481 = Net_252;

    cy_psoc3_decimator_v1_0 DEC (
        .aclock(aclock),
        .mod_dat(mod_dat[3:0]),
        .ext_start(soc),
        .mod_reset(mod_reset),
        .interrupt(eoc));

    ZeroTerminal ZeroTerminal_1 (
        .z(Net_252));


    assign Net_268 = Net_270 | Net_93;

    ZeroTerminal ZeroTerminal_3 (
        .z(Net_270));



endmodule

// Component: demux_v1_10
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\demux_v1_10"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\demux_v1_10\demux_v1_10.v"
`else
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\demux_v1_10"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\demux_v1_10\demux_v1_10.v"
`endif

// VDAC8_v1_90(Data_Source=0, Initial_Value=100, Strobe_Mode=1, VDAC_Range=0, VDAC_Speed=2, Voltage=400, CY_API_CALLBACK_HEADER_INCLUDE=, CY_COMMENT=, CY_COMPONENT_NAME=VDAC8_v1_90, CY_CONST_CONFIG=true, CY_CONTROL_FILE=<:default:>, CY_DATASHEET_FILE=<:default:>, CY_FITTER_NAME=HF_DAC_1:VDAC8, CY_INSTANCE_SHORT_NAME=VDAC8, CY_MAJOR_VERSION=1, CY_MINOR_VERSION=90, CY_PDL_DRIVER_NAME=, CY_PDL_DRIVER_REQ_VERSION=, CY_PDL_DRIVER_SUBGROUP=, CY_PDL_DRIVER_VARIANT=, CY_REMOVE=false, CY_SUPPRESS_API_GEN=false, CY_VERSION=PSoC Creator  4.1 Update 1, INSTANCE_NAME=HF_DAC_1_VDAC8, )
module VDAC8_v1_90_2 (
    strobe,
    data,
    vOut);
    input       strobe;
    input      [7:0] data;
    inout       vOut;
    electrical  vOut;

    parameter Data_Source = 0;
    parameter Initial_Value = 100;
    parameter Strobe_Mode = 1;

    electrical  Net_77;
          wire  Net_83;
          wire  Net_82;
          wire  Net_81;

    cy_psoc3_vidac8_v1_0 viDAC8 (
        .reset(Net_83),
        .idir(Net_81),
        .data(data[7:0]),
        .strobe(strobe),
        .vout(vOut),
        .iout(Net_77),
        .ioff(Net_82),
        .strobe_udb(strobe));
    defparam viDAC8.is_all_if_any = 0;
    defparam viDAC8.reg_data = 0;

    ZeroTerminal ZeroTerminal_1 (
        .z(Net_81));

    ZeroTerminal ZeroTerminal_2 (
        .z(Net_82));

    ZeroTerminal ZeroTerminal_3 (
        .z(Net_83));

    cy_analog_noconnect_v1_0 cy_analog_noconnect_1 (
        .noconnect(Net_77));



endmodule

// Component: cydff_v1_30
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cydff_v1_30"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cydff_v1_30\cydff_v1_30.v"
`else
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cydff_v1_30"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cydff_v1_30\cydff_v1_30.v"
`endif

// WaveDAC8_v2_10(Clock_SRC=1, DAC_Range=0, DacModeReplString=VDAC8, Sample_Clock_Freq=800000, Wave1_Amplitude=0.5, Wave1_Data=128u,128u,129u,129u,130u,130u,131u,132u,132u,133u,133u,134u,135u,135u,136u,136u,137u,138u,138u,139u,139u,140u,140u,141u,142u,142u,143u,143u,144u,145u,145u,146u,146u,147u,147u,148u,148u,149u,150u,150u,151u,151u,152u,152u,153u,153u,154u,155u,155u,156u,156u,157u,157u,158u,158u,159u,159u,160u,160u,161u,161u,162u,162u,163u,163u,164u,164u,165u,165u,166u,166u,167u,167u,167u,168u,168u,169u,169u,170u,170u,171u,171u,171u,172u,172u,173u,173u,173u,174u,174u,175u,175u,175u,176u,176u,177u,177u,177u,178u,178u,178u,179u,179u,179u,180u,180u,180u,181u,181u,181u,182u,182u,182u,182u,183u,183u,183u,184u,184u,184u,184u,185u,185u,185u,185u,185u,186u,186u,186u,186u,187u,187u,187u,187u,187u,187u,188u,188u,188u,188u,188u,188u,188u,189u,189u,189u,189u,189u,189u,189u,189u,189u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,189u,189u,189u,189u,189u,189u,189u,189u,189u,189u,188u,188u,188u,188u,188u,188u,188u,187u,187u,187u,187u,187u,186u,186u,186u,186u,186u,185u,185u,185u,185u,184u,184u,184u,184u,183u,183u,183u,183u,182u,182u,182u,181u,181u,181u,181u,180u,180u,180u,179u,179u,179u,178u,178u,177u,177u,177u,176u,176u,176u,175u,175u,174u,174u,174u,173u,173u,172u,172u,172u,171u,171u,170u,170u,169u,169u,169u,168u,168u,167u,167u,166u,166u,165u,165u,164u,164u,163u,163u,162u,162u,161u,161u,160u,160u,159u,159u,158u,158u,157u,157u,156u,156u,155u,155u,154u,154u,153u,153u,152u,152u,151u,150u,150u,149u,149u,148u,148u,147u,147u,146u,145u,145u,144u,144u,143u,143u,142u,141u,141u,140u,140u,139u,138u,138u,137u,137u,136u,135u,135u,134u,134u,133u,133u,132u,131u,131u,130u,130u,129u,128u,128u,127u,127u,126u,125u,125u,124u,124u,123u,122u,122u,121u,121u,120u,120u,119u,118u,118u,117u,117u,116u,115u,115u,114u,114u,113u,112u,112u,111u,111u,110u,110u,109u,108u,108u,107u,107u,106u,106u,105u,105u,104u,103u,103u,102u,102u,101u,101u,100u,100u,99u,99u,98u,98u,97u,97u,96u,96u,95u,95u,94u,94u,93u,93u,92u,92u,91u,91u,90u,90u,89u,89u,88u,88u,87u,87u,86u,86u,86u,85u,85u,84u,84u,83u,83u,83u,82u,82u,81u,81u,81u,80u,80u,79u,79u,79u,78u,78u,78u,77u,77u,76u,76u,76u,75u,75u,75u,74u,74u,74u,74u,73u,73u,73u,72u,72u,72u,72u,71u,71u,71u,71u,70u,70u,70u,70u,69u,69u,69u,69u,69u,68u,68u,68u,68u,68u,67u,67u,67u,67u,67u,67u,67u,66u,66u,66u,66u,66u,66u,66u,66u,66u,66u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,66u,66u,66u,66u,66u,66u,66u,66u,66u,67u,67u,67u,67u,67u,67u,67u,68u,68u,68u,68u,68u,68u,69u,69u,69u,69u,70u,70u,70u,70u,70u,71u,71u,71u,71u,72u,72u,72u,73u,73u,73u,73u,74u,74u,74u,75u,75u,75u,76u,76u,76u,77u,77u,77u,78u,78u,78u,79u,79u,80u,80u,80u,81u,81u,82u,82u,82u,83u,83u,84u,84u,84u,85u,85u,86u,86u,87u,87u,88u,88u,88u,89u,89u,90u,90u,91u,91u,92u,92u,93u,93u,94u,94u,95u,95u,96u,96u,97u,97u,98u,98u,99u,99u,100u,100u,101u,102u,102u,103u,103u,104u,104u,105u,105u,106u,107u,107u,108u,108u,109u,109u,110u,110u,111u,112u,112u,113u,113u,114u,115u,115u,116u,116u,117u,117u,118u,119u,119u,120u,120u,121u,122u,122u,123u,123u,124u,125u,125u,126u,126u,127u, Wave1_DCOffset=0.51, Wave1_Length=661, Wave1_PhaseShift=0, Wave1_Type=0, Wave2_Amplitude=0.5, Wave2_Data=128u,128u,129u,129u,130u,131u,131u,132u,133u,133u,134u,135u,135u,136u,137u,137u,138u,139u,139u,140u,141u,141u,142u,142u,143u,144u,144u,145u,146u,146u,147u,147u,148u,149u,149u,150u,151u,151u,152u,152u,153u,154u,154u,155u,155u,156u,157u,157u,158u,158u,159u,159u,160u,161u,161u,162u,162u,163u,163u,164u,164u,165u,165u,166u,166u,167u,167u,168u,168u,169u,169u,170u,170u,171u,171u,172u,172u,173u,173u,174u,174u,174u,175u,175u,176u,176u,177u,177u,177u,178u,178u,179u,179u,179u,180u,180u,180u,181u,181u,181u,182u,182u,182u,183u,183u,183u,184u,184u,184u,184u,185u,185u,185u,185u,186u,186u,186u,186u,187u,187u,187u,187u,187u,188u,188u,188u,188u,188u,188u,189u,189u,189u,189u,189u,189u,189u,189u,189u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,189u,189u,189u,189u,189u,189u,189u,189u,189u,188u,188u,188u,188u,188u,188u,187u,187u,187u,187u,187u,186u,186u,186u,186u,185u,185u,185u,185u,184u,184u,184u,184u,183u,183u,183u,182u,182u,182u,181u,181u,181u,180u,180u,180u,179u,179u,179u,178u,178u,177u,177u,177u,176u,176u,175u,175u,174u,174u,174u,173u,173u,172u,172u,171u,171u,170u,170u,169u,169u,168u,168u,167u,167u,166u,166u,165u,165u,164u,164u,163u,163u,162u,162u,161u,161u,160u,159u,159u,158u,158u,157u,157u,156u,155u,155u,154u,154u,153u,152u,152u,151u,151u,150u,149u,149u,148u,147u,147u,146u,146u,145u,144u,144u,143u,142u,142u,141u,141u,140u,139u,139u,138u,137u,137u,136u,135u,135u,134u,133u,133u,132u,131u,131u,130u,129u,129u,128u,128u,127u,126u,126u,125u,124u,124u,123u,122u,122u,121u,120u,120u,119u,118u,118u,117u,116u,116u,115u,114u,114u,113u,113u,112u,111u,111u,110u,109u,109u,108u,108u,107u,106u,106u,105u,104u,104u,103u,103u,102u,101u,101u,100u,100u,99u,98u,98u,97u,97u,96u,96u,95u,94u,94u,93u,93u,92u,92u,91u,91u,90u,90u,89u,89u,88u,88u,87u,87u,86u,86u,85u,85u,84u,84u,83u,83u,82u,82u,81u,81u,81u,80u,80u,79u,79u,78u,78u,78u,77u,77u,76u,76u,76u,75u,75u,75u,74u,74u,74u,73u,73u,73u,72u,72u,72u,71u,71u,71u,71u,70u,70u,70u,70u,69u,69u,69u,69u,68u,68u,68u,68u,68u,67u,67u,67u,67u,67u,67u,66u,66u,66u,66u,66u,66u,66u,66u,66u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,66u,66u,66u,66u,66u,66u,66u,66u,66u,67u,67u,67u,67u,67u,67u,68u,68u,68u,68u,68u,69u,69u,69u,69u,70u,70u,70u,70u,71u,71u,71u,71u,72u,72u,72u,73u,73u,73u,74u,74u,74u,75u,75u,75u,76u,76u,76u,77u,77u,78u,78u,78u,79u,79u,80u,80u,81u,81u,81u,82u,82u,83u,83u,84u,84u,85u,85u,86u,86u,87u,87u,88u,88u,89u,89u,90u,90u,91u,91u,92u,92u,93u,93u,94u,94u,95u,96u,96u,97u,97u,98u,98u,99u,100u,100u,101u,101u,102u,103u,103u,104u,104u,105u,106u,106u,107u,108u,108u,109u,109u,110u,111u,111u,112u,113u,113u,114u,114u,115u,116u,116u,117u,118u,118u,119u,120u,120u,121u,122u,122u,123u,124u,124u,125u,126u,126u,127u, Wave2_DCOffset=0.51, Wave2_Length=598, Wave2_PhaseShift=0, Wave2_Type=0, CY_API_CALLBACK_HEADER_INCLUDE=, CY_COMMENT=, CY_COMPONENT_NAME=WaveDAC8_v2_10, CY_CONST_CONFIG=true, CY_CONTROL_FILE=<:default:>, CY_DATASHEET_FILE=<:default:>, CY_FITTER_NAME=HF_DAC_1, CY_INSTANCE_SHORT_NAME=HF_DAC_1, CY_MAJOR_VERSION=2, CY_MINOR_VERSION=10, CY_PDL_DRIVER_NAME=, CY_PDL_DRIVER_REQ_VERSION=, CY_PDL_DRIVER_SUBGROUP=, CY_PDL_DRIVER_VARIANT=, CY_REMOVE=false, CY_SUPPRESS_API_GEN=false, CY_VERSION=PSoC Creator  4.1 Update 1, INSTANCE_NAME=HF_DAC_1, )
module WaveDAC8_v2_10_3 (
    Wave,
    ws,
    clock,
    wc1,
    wc2);
    inout       Wave;
    electrical  Wave;
    input       ws;
    input       clock;
    output      wc1;
    output      wc2;


          wire  Net_280;
    electrical  Net_273;
          wire  Net_202;
          wire  Net_201;
          wire [7:0] Net_171;
          wire [7:0] Net_170;
          wire  Net_339;
          wire  Net_341;
          wire  Net_153;
    electrical  Net_211;
          wire  Net_134;
          wire  Net_107;
          wire  Net_183;
          wire  Net_336;
          wire  Net_279;
          wire  Net_80;
    electrical  Net_247;
    electrical  Net_254;
    electrical  Net_256;
    electrical  Net_190;
    electrical  Net_189;

    cy_analog_noconnect_v1_0 cy_analog_noconnect_1 (
        .noconnect(Net_211));


	cy_clock_v1_0
		#(.id("6295a7a9-9add-4f69-8a4e-69ebea6c02d7/77086516-855e-4b7b-abbe-47b22f8543de"),
		  .source_clock_id(""),
		  .divisor(0),
		  .period("1250000000"),
		  .is_direct(0),
		  .is_digital(1))
		DacClk
		 (.clock_out(Net_279));


	// cy_analog_virtualmux_1 (cy_analog_virtualmux_v1_0)
	cy_connect_v1_0 cy_analog_virtualmux_1_connect(Net_189, Net_256);
	defparam cy_analog_virtualmux_1_connect.sig_width = 1;

	// cy_analog_virtualmux_2 (cy_analog_virtualmux_v1_0)
	cy_connect_v1_0 cy_analog_virtualmux_2_connect(Net_190, Net_211);
	defparam cy_analog_virtualmux_2_connect.sig_width = 1;

    cy_analog_noconnect_v1_0 cy_analog_noconnect_2 (
        .noconnect(Net_254));


	cy_dma_v1_0
		#(.drq_type(2'b10))
		Wave1_DMA
		 (.drq(Net_183),
		  .trq(1'b0),
		  .nrq(wc1));



	cy_dma_v1_0
		#(.drq_type(2'b10))
		Wave2_DMA
		 (.drq(Net_107),
		  .trq(1'b0),
		  .nrq(wc2));


    // -- De Mux start --
    if (1)
    begin : demux
        reg  tmp__demux_0_reg;
        reg  tmp__demux_1_reg;
        always @(Net_336 or Net_134)
        begin
            case (Net_134)
                1'b0:
                begin
                    tmp__demux_0_reg = Net_336;
                    tmp__demux_1_reg = 1'b0;
                end
                1'b1:
                begin
                    tmp__demux_0_reg = 1'b0;
                    tmp__demux_1_reg = Net_336;
                end
            endcase
        end
        assign Net_183 = tmp__demux_0_reg;
        assign Net_107 = tmp__demux_1_reg;
    end
    // -- De Mux end --

	// VirtualMux_1 (cy_virtualmux_v1_0)
	assign Net_336 = Net_279;

    VDAC8_v1_90_2 VDAC8 (
        .strobe(Net_336),
        .data(8'b00000000),
        .vOut(Net_189));
    defparam VDAC8.Data_Source = 0;
    defparam VDAC8.Initial_Value = 100;
    defparam VDAC8.Strobe_Mode = 1;

	// cy_analog_virtualmux_3 (cy_analog_virtualmux_v1_0)
	cy_connect_v1_0 cy_analog_virtualmux_3_connect(Wave, Net_256);
	defparam cy_analog_virtualmux_3_connect.sig_width = 1;


    assign Net_280 = Net_80 | Net_279;

    ZeroTerminal ZeroTerminal_1 (
        .z(Net_80));

    // -- DFF Start --
    reg  cydff_1;
    always @(posedge Net_336)
    begin
        cydff_1 <= ws;
    end
    assign Net_134 = cydff_1;
    // -- DFF End --



endmodule

// Component: OneTerminal
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\OneTerminal"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\OneTerminal\OneTerminal.v"
`else
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\OneTerminal"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\OneTerminal\OneTerminal.v"
`endif

// Timer_v2_80(CaptureAlternatingFall=false, CaptureAlternatingRise=false, CaptureCount=2, CaptureCounterEnabled=false, CaptureInputEnabled=false, CaptureMode=0, CONTROL3=1, ControlRegRemoved=0, CtlModeReplacementString=SyncCtl, CyGetRegReplacementString=CY_GET_REG16, CySetRegReplacementString=CY_SET_REG16, DeviceFamily=PSoC5, EnableMode=0, FF16=true, FF8=false, FixedFunction=true, FixedFunctionUsed=1, HWCaptureCounterEnabled=false, InterruptOnCapture=false, InterruptOnFIFOFull=false, InterruptOnTC=false, IntOnCapture=0, IntOnFIFOFull=0, IntOnTC=0, NumberOfCaptures=1, param45=1, Period=499, RegDefReplacementString=reg16, RegSizeReplacementString=uint16, Resolution=16, RstStatusReplacementString=rstSts, RunMode=0, SiliconRevision=0, SoftwareCaptureModeEnabled=false, SoftwareTriggerModeEnabled=false, TriggerInputEnabled=false, TriggerMode=0, UDB16=false, UDB24=false, UDB32=false, UDB8=false, UDBControlReg=false, UsesHWEnable=0, VerilogSectionReplacementString=sT16, CY_API_CALLBACK_HEADER_INCLUDE=, CY_COMMENT=, CY_COMPONENT_NAME=Timer_v2_80, CY_CONST_CONFIG=true, CY_CONTROL_FILE=<:default:>, CY_DATASHEET_FILE=<:default:>, CY_FITTER_NAME=Timer, CY_INSTANCE_SHORT_NAME=Timer, CY_MAJOR_VERSION=2, CY_MINOR_VERSION=80, CY_PDL_DRIVER_NAME=, CY_PDL_DRIVER_REQ_VERSION=, CY_PDL_DRIVER_SUBGROUP=, CY_PDL_DRIVER_VARIANT=, CY_REMOVE=false, CY_SUPPRESS_API_GEN=false, CY_VERSION=PSoC Creator  4.1 Update 1, INSTANCE_NAME=Timer, )
module Timer_v2_80_4 (
    reset,
    interrupt,
    enable,
    trigger,
    capture,
    capture_out,
    tc,
    clock);
    input       reset;
    output      interrupt;
    input       enable;
    input       trigger;
    input       capture;
    output      capture_out;
    output      tc;
    input       clock;

    parameter CaptureCount = 2;
    parameter CaptureCounterEnabled = 0;
    parameter DeviceFamily = "PSoC5";
    parameter InterruptOnCapture = 0;
    parameter InterruptOnTC = 0;
    parameter Resolution = 16;
    parameter SiliconRevision = "0";

          wire  Net_261;
          wire  Net_260;
          wire  Net_266;
          wire  Net_102;
          wire  Net_55;
          wire  Net_57;
          wire  Net_53;
          wire  Net_51;

    cy_psoc3_timer_v1_0 TimerHW (
        .timer_reset(reset),
        .capture(capture),
        .enable(Net_266),
        .kill(Net_260),
        .clock(clock),
        .tc(Net_51),
        .compare(Net_261),
        .interrupt(Net_57));

    ZeroTerminal ZeroTerminal_1 (
        .z(Net_260));

	// VirtualMux_2 (cy_virtualmux_v1_0)
	assign interrupt = Net_57;

	// VirtualMux_3 (cy_virtualmux_v1_0)
	assign tc = Net_51;

    OneTerminal OneTerminal_1 (
        .o(Net_102));

	// VirtualMux_1 (cy_virtualmux_v1_0)
	assign Net_266 = Net_102;



endmodule

// VDAC8_v1_90(Data_Source=0, Initial_Value=100, Strobe_Mode=1, VDAC_Range=0, VDAC_Speed=2, Voltage=400, CY_API_CALLBACK_HEADER_INCLUDE=, CY_COMMENT=, CY_COMPONENT_NAME=VDAC8_v1_90, CY_CONST_CONFIG=true, CY_CONTROL_FILE=<:default:>, CY_DATASHEET_FILE=<:default:>, CY_FITTER_NAME=LF_DAC_1:VDAC8, CY_INSTANCE_SHORT_NAME=VDAC8, CY_MAJOR_VERSION=1, CY_MINOR_VERSION=90, CY_PDL_DRIVER_NAME=, CY_PDL_DRIVER_REQ_VERSION=, CY_PDL_DRIVER_SUBGROUP=, CY_PDL_DRIVER_VARIANT=, CY_REMOVE=false, CY_SUPPRESS_API_GEN=false, CY_VERSION=PSoC Creator  4.1 Update 1, INSTANCE_NAME=LF_DAC_1_VDAC8, )
module VDAC8_v1_90_5 (
    strobe,
    data,
    vOut);
    input       strobe;
    input      [7:0] data;
    inout       vOut;
    electrical  vOut;

    parameter Data_Source = 0;
    parameter Initial_Value = 100;
    parameter Strobe_Mode = 1;

    electrical  Net_77;
          wire  Net_83;
          wire  Net_82;
          wire  Net_81;

    cy_psoc3_vidac8_v1_0 viDAC8 (
        .reset(Net_83),
        .idir(Net_81),
        .data(data[7:0]),
        .strobe(strobe),
        .vout(vOut),
        .iout(Net_77),
        .ioff(Net_82),
        .strobe_udb(strobe));
    defparam viDAC8.is_all_if_any = 0;
    defparam viDAC8.reg_data = 0;

    ZeroTerminal ZeroTerminal_1 (
        .z(Net_81));

    ZeroTerminal ZeroTerminal_2 (
        .z(Net_82));

    ZeroTerminal ZeroTerminal_3 (
        .z(Net_83));

    cy_analog_noconnect_v1_0 cy_analog_noconnect_1 (
        .noconnect(Net_77));



endmodule

// WaveDAC8_v2_10(Clock_SRC=1, DAC_Range=0, DacModeReplString=VDAC8, Sample_Clock_Freq=800000, Wave1_Amplitude=0.5, Wave1_Data=128u,128u,128u,129u,129u,129u,130u,130u,130u,131u,131u,131u,132u,132u,132u,133u,133u,133u,134u,134u,134u,135u,135u,135u,136u,136u,136u,137u,137u,137u,138u,138u,138u,139u,139u,139u,140u,140u,140u,141u,141u,141u,142u,142u,142u,143u,143u,143u,144u,144u,144u,145u,145u,145u,146u,146u,146u,147u,147u,147u,148u,148u,148u,149u,149u,149u,150u,150u,150u,151u,151u,151u,152u,152u,152u,152u,153u,153u,153u,154u,154u,154u,155u,155u,155u,156u,156u,156u,156u,157u,157u,157u,158u,158u,158u,159u,159u,159u,159u,160u,160u,160u,161u,161u,161u,162u,162u,162u,162u,163u,163u,163u,164u,164u,164u,164u,165u,165u,165u,165u,166u,166u,166u,167u,167u,167u,167u,168u,168u,168u,168u,169u,169u,169u,169u,170u,170u,170u,170u,171u,171u,171u,171u,172u,172u,172u,172u,173u,173u,173u,173u,174u,174u,174u,174u,174u,175u,175u,175u,175u,176u,176u,176u,176u,176u,177u,177u,177u,177u,177u,178u,178u,178u,178u,178u,179u,179u,179u,179u,179u,180u,180u,180u,180u,180u,181u,181u,181u,181u,181u,181u,182u,182u,182u,182u,182u,182u,183u,183u,183u,183u,183u,183u,184u,184u,184u,184u,184u,184u,184u,185u,185u,185u,185u,185u,185u,185u,186u,186u,186u,186u,186u,186u,186u,186u,186u,187u,187u,187u,187u,187u,187u,187u,187u,187u,188u,188u,188u,188u,188u,188u,188u,188u,188u,188u,188u,188u,189u,189u,189u,189u,189u,189u,189u,189u,189u,189u,189u,189u,189u,189u,189u,189u,189u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,189u,189u,189u,189u,189u,189u,189u,189u,189u,189u,189u,189u,189u,189u,189u,189u,189u,188u,188u,188u,188u,188u,188u,188u,188u,188u,188u,188u,188u,187u,187u,187u,187u,187u,187u,187u,187u,187u,186u,186u,186u,186u,186u,186u,186u,186u,186u,185u,185u,185u,185u,185u,185u,185u,184u,184u,184u,184u,184u,184u,184u,183u,183u,183u,183u,183u,183u,182u,182u,182u,182u,182u,182u,181u,181u,181u,181u,181u,181u,180u,180u,180u,180u,180u,179u,179u,179u,179u,179u,178u,178u,178u,178u,178u,177u,177u,177u,177u,177u,176u,176u,176u,176u,176u,175u,175u,175u,175u,174u,174u,174u,174u,174u,173u,173u,173u,173u,172u,172u,172u,172u,171u,171u,171u,171u,170u,170u,170u,170u,169u,169u,169u,169u,168u,168u,168u,168u,167u,167u,167u,167u,166u,166u,166u,165u,165u,165u,165u,164u,164u,164u,164u,163u,163u,163u,162u,162u,162u,162u,161u,161u,161u,160u,160u,160u,159u,159u,159u,159u,158u,158u,158u,157u,157u,157u,156u,156u,156u,156u,155u,155u,155u,154u,154u,154u,153u,153u,153u,152u,152u,152u,152u,151u,151u,151u,150u,150u,150u,149u,149u,149u,148u,148u,148u,147u,147u,147u,146u,146u,146u,145u,145u,145u,144u,144u,144u,143u,143u,143u,142u,142u,142u,141u,141u,141u,140u,140u,140u,139u,139u,139u,138u,138u,138u,137u,137u,137u,136u,136u,136u,135u,135u,135u,134u,134u,134u,133u,133u,133u,132u,132u,132u,131u,131u,131u,130u,130u,130u,129u,129u,129u,128u,128u,128u,127u,127u,126u,126u,126u,125u,125u,125u,124u,124u,124u,123u,123u,123u,122u,122u,122u,121u,121u,121u,120u,120u,120u,119u,119u,119u,118u,118u,118u,117u,117u,117u,116u,116u,116u,115u,115u,115u,114u,114u,114u,113u,113u,113u,112u,112u,112u,111u,111u,111u,110u,110u,110u,109u,109u,109u,108u,108u,108u,107u,107u,107u,106u,106u,106u,105u,105u,105u,104u,104u,104u,103u,103u,103u,103u,102u,102u,102u,101u,101u,101u,100u,100u,100u,99u,99u,99u,99u,98u,98u,98u,97u,97u,97u,96u,96u,96u,96u,95u,95u,95u,94u,94u,94u,93u,93u,93u,93u,92u,92u,92u,91u,91u,91u,91u,90u,90u,90u,90u,89u,89u,89u,88u,88u,88u,88u,87u,87u,87u,87u,86u,86u,86u,86u,85u,85u,85u,85u,84u,84u,84u,84u,83u,83u,83u,83u,82u,82u,82u,82u,81u,81u,81u,81u,81u,80u,80u,80u,80u,79u,79u,79u,79u,79u,78u,78u,78u,78u,78u,77u,77u,77u,77u,77u,76u,76u,76u,76u,76u,75u,75u,75u,75u,75u,74u,74u,74u,74u,74u,74u,73u,73u,73u,73u,73u,73u,72u,72u,72u,72u,72u,72u,71u,71u,71u,71u,71u,71u,71u,70u,70u,70u,70u,70u,70u,70u,69u,69u,69u,69u,69u,69u,69u,69u,69u,68u,68u,68u,68u,68u,68u,68u,68u,68u,67u,67u,67u,67u,67u,67u,67u,67u,67u,67u,67u,67u,66u,66u,66u,66u,66u,66u,66u,66u,66u,66u,66u,66u,66u,66u,66u,66u,66u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,66u,66u,66u,66u,66u,66u,66u,66u,66u,66u,66u,66u,66u,66u,66u,66u,66u,67u,67u,67u,67u,67u,67u,67u,67u,67u,67u,67u,67u,68u,68u,68u,68u,68u,68u,68u,68u,68u,69u,69u,69u,69u,69u,69u,69u,69u,69u,70u,70u,70u,70u,70u,70u,70u,71u,71u,71u,71u,71u,71u,71u,72u,72u,72u,72u,72u,72u,73u,73u,73u,73u,73u,73u,74u,74u,74u,74u,74u,74u,75u,75u,75u,75u,75u,76u,76u,76u,76u,76u,77u,77u,77u,77u,77u,78u,78u,78u,78u,78u,79u,79u,79u,79u,79u,80u,80u,80u,80u,81u,81u,81u,81u,81u,82u,82u,82u,82u,83u,83u,83u,83u,84u,84u,84u,84u,85u,85u,85u,85u,86u,86u,86u,86u,87u,87u,87u,87u,88u,88u,88u,88u,89u,89u,89u,90u,90u,90u,90u,91u,91u,91u,91u,92u,92u,92u,93u,93u,93u,93u,94u,94u,94u,95u,95u,95u,96u,96u,96u,96u,97u,97u,97u,98u,98u,98u,99u,99u,99u,99u,100u,100u,100u,101u,101u,101u,102u,102u,102u,103u,103u,103u,103u,104u,104u,104u,105u,105u,105u,106u,106u,106u,107u,107u,107u,108u,108u,108u,109u,109u,109u,110u,110u,110u,111u,111u,111u,112u,112u,112u,113u,113u,113u,114u,114u,114u,115u,115u,115u,116u,116u,116u,117u,117u,117u,118u,118u,118u,119u,119u,119u,120u,120u,120u,121u,121u,121u,122u,122u,122u,123u,123u,123u,124u,124u,124u,125u,125u,125u,126u,126u,126u,127u,127u, Wave1_DCOffset=0.51, Wave1_Length=1146, Wave1_PhaseShift=0, Wave1_Type=0, Wave2_Amplitude=0.5, Wave2_Data=128u,128u,128u,129u,129u,129u,130u,130u,131u,131u,131u,132u,132u,132u,133u,133u,134u,134u,134u,135u,135u,135u,136u,136u,137u,137u,137u,138u,138u,138u,139u,139u,140u,140u,140u,141u,141u,141u,142u,142u,142u,143u,143u,144u,144u,144u,145u,145u,145u,146u,146u,147u,147u,147u,148u,148u,148u,149u,149u,149u,150u,150u,150u,151u,151u,151u,152u,152u,153u,153u,153u,154u,154u,154u,155u,155u,155u,156u,156u,156u,157u,157u,157u,158u,158u,158u,159u,159u,159u,160u,160u,160u,161u,161u,161u,162u,162u,162u,162u,163u,163u,163u,164u,164u,164u,165u,165u,165u,166u,166u,166u,166u,167u,167u,167u,168u,168u,168u,168u,169u,169u,169u,170u,170u,170u,170u,171u,171u,171u,172u,172u,172u,172u,173u,173u,173u,173u,174u,174u,174u,174u,175u,175u,175u,175u,176u,176u,176u,176u,177u,177u,177u,177u,177u,178u,178u,178u,178u,179u,179u,179u,179u,179u,180u,180u,180u,180u,180u,181u,181u,181u,181u,181u,182u,182u,182u,182u,182u,183u,183u,183u,183u,183u,183u,184u,184u,184u,184u,184u,184u,185u,185u,185u,185u,185u,185u,185u,186u,186u,186u,186u,186u,186u,186u,187u,187u,187u,187u,187u,187u,187u,187u,187u,188u,188u,188u,188u,188u,188u,188u,188u,188u,188u,188u,189u,189u,189u,189u,189u,189u,189u,189u,189u,189u,189u,189u,189u,189u,189u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,189u,189u,189u,189u,189u,189u,189u,189u,189u,189u,189u,189u,189u,189u,189u,188u,188u,188u,188u,188u,188u,188u,188u,188u,188u,188u,187u,187u,187u,187u,187u,187u,187u,187u,186u,186u,186u,186u,186u,186u,186u,186u,185u,185u,185u,185u,185u,185u,185u,184u,184u,184u,184u,184u,184u,183u,183u,183u,183u,183u,182u,182u,182u,182u,182u,182u,181u,181u,181u,181u,181u,180u,180u,180u,180u,180u,179u,179u,179u,179u,178u,178u,178u,178u,178u,177u,177u,177u,177u,176u,176u,176u,176u,175u,175u,175u,175u,175u,174u,174u,174u,173u,173u,173u,173u,172u,172u,172u,172u,171u,171u,171u,171u,170u,170u,170u,169u,169u,169u,169u,168u,168u,168u,167u,167u,167u,167u,166u,166u,166u,165u,165u,165u,164u,164u,164u,164u,163u,163u,163u,162u,162u,162u,161u,161u,161u,160u,160u,160u,159u,159u,159u,158u,158u,158u,157u,157u,157u,156u,156u,156u,155u,155u,155u,154u,154u,154u,153u,153u,153u,152u,152u,152u,151u,151u,151u,150u,150u,150u,149u,149u,148u,148u,148u,147u,147u,147u,146u,146u,146u,145u,145u,145u,144u,144u,143u,143u,143u,142u,142u,142u,141u,141u,140u,140u,140u,139u,139u,139u,138u,138u,137u,137u,137u,136u,136u,136u,135u,135u,134u,134u,134u,133u,133u,133u,132u,132u,131u,131u,131u,130u,130u,130u,129u,129u,128u,128u,128u,127u,127u,127u,126u,126u,125u,125u,125u,124u,124u,124u,123u,123u,122u,122u,122u,121u,121u,121u,120u,120u,119u,119u,119u,118u,118u,118u,117u,117u,116u,116u,116u,115u,115u,115u,114u,114u,113u,113u,113u,112u,112u,112u,111u,111u,110u,110u,110u,109u,109u,109u,108u,108u,108u,107u,107u,107u,106u,106u,105u,105u,105u,104u,104u,104u,103u,103u,103u,102u,102u,102u,101u,101u,101u,100u,100u,100u,99u,99u,99u,98u,98u,98u,97u,97u,97u,96u,96u,96u,95u,95u,95u,94u,94u,94u,93u,93u,93u,92u,92u,92u,91u,91u,91u,91u,90u,90u,90u,89u,89u,89u,88u,88u,88u,88u,87u,87u,87u,86u,86u,86u,86u,85u,85u,85u,84u,84u,84u,84u,83u,83u,83u,83u,82u,82u,82u,82u,81u,81u,81u,80u,80u,80u,80u,80u,79u,79u,79u,79u,78u,78u,78u,78u,77u,77u,77u,77u,77u,76u,76u,76u,76u,75u,75u,75u,75u,75u,74u,74u,74u,74u,74u,73u,73u,73u,73u,73u,73u,72u,72u,72u,72u,72u,71u,71u,71u,71u,71u,71u,70u,70u,70u,70u,70u,70u,70u,69u,69u,69u,69u,69u,69u,69u,69u,68u,68u,68u,68u,68u,68u,68u,68u,67u,67u,67u,67u,67u,67u,67u,67u,67u,67u,67u,66u,66u,66u,66u,66u,66u,66u,66u,66u,66u,66u,66u,66u,66u,66u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,66u,66u,66u,66u,66u,66u,66u,66u,66u,66u,66u,66u,66u,66u,66u,67u,67u,67u,67u,67u,67u,67u,67u,67u,67u,67u,68u,68u,68u,68u,68u,68u,68u,68u,68u,69u,69u,69u,69u,69u,69u,69u,70u,70u,70u,70u,70u,70u,70u,71u,71u,71u,71u,71u,71u,72u,72u,72u,72u,72u,72u,73u,73u,73u,73u,73u,74u,74u,74u,74u,74u,75u,75u,75u,75u,75u,76u,76u,76u,76u,76u,77u,77u,77u,77u,78u,78u,78u,78u,78u,79u,79u,79u,79u,80u,80u,80u,80u,81u,81u,81u,81u,82u,82u,82u,82u,83u,83u,83u,83u,84u,84u,84u,85u,85u,85u,85u,86u,86u,86u,87u,87u,87u,87u,88u,88u,88u,89u,89u,89u,89u,90u,90u,90u,91u,91u,91u,92u,92u,92u,93u,93u,93u,93u,94u,94u,94u,95u,95u,95u,96u,96u,96u,97u,97u,97u,98u,98u,98u,99u,99u,99u,100u,100u,100u,101u,101u,101u,102u,102u,102u,103u,103u,104u,104u,104u,105u,105u,105u,106u,106u,106u,107u,107u,107u,108u,108u,108u,109u,109u,110u,110u,110u,111u,111u,111u,112u,112u,113u,113u,113u,114u,114u,114u,115u,115u,115u,116u,116u,117u,117u,117u,118u,118u,118u,119u,119u,120u,120u,120u,121u,121u,121u,122u,122u,123u,123u,123u,124u,124u,124u,125u,125u,126u,126u,126u,127u,127u, Wave2_DCOffset=0.51, Wave2_Length=1037, Wave2_PhaseShift=0, Wave2_Type=0, CY_API_CALLBACK_HEADER_INCLUDE=, CY_COMMENT=, CY_COMPONENT_NAME=WaveDAC8_v2_10, CY_CONST_CONFIG=true, CY_CONTROL_FILE=<:default:>, CY_DATASHEET_FILE=<:default:>, CY_FITTER_NAME=LF_DAC_1, CY_INSTANCE_SHORT_NAME=LF_DAC_1, CY_MAJOR_VERSION=2, CY_MINOR_VERSION=10, CY_PDL_DRIVER_NAME=, CY_PDL_DRIVER_REQ_VERSION=, CY_PDL_DRIVER_SUBGROUP=, CY_PDL_DRIVER_VARIANT=, CY_REMOVE=false, CY_SUPPRESS_API_GEN=false, CY_VERSION=PSoC Creator  4.1 Update 1, INSTANCE_NAME=LF_DAC_1, )
module WaveDAC8_v2_10_6 (
    Wave,
    ws,
    clock,
    wc1,
    wc2);
    inout       Wave;
    electrical  Wave;
    input       ws;
    input       clock;
    output      wc1;
    output      wc2;


          wire  Net_280;
    electrical  Net_273;
          wire  Net_202;
          wire  Net_201;
          wire [7:0] Net_171;
          wire [7:0] Net_170;
          wire  Net_339;
          wire  Net_341;
          wire  Net_153;
    electrical  Net_211;
          wire  Net_134;
          wire  Net_107;
          wire  Net_183;
          wire  Net_336;
          wire  Net_279;
          wire  Net_80;
    electrical  Net_247;
    electrical  Net_254;
    electrical  Net_256;
    electrical  Net_190;
    electrical  Net_189;

    cy_analog_noconnect_v1_0 cy_analog_noconnect_1 (
        .noconnect(Net_211));


	cy_clock_v1_0
		#(.id("49177a74-3ef0-4ecc-b4be-6c2b189dbba2/77086516-855e-4b7b-abbe-47b22f8543de"),
		  .source_clock_id(""),
		  .divisor(0),
		  .period("1250000000"),
		  .is_direct(0),
		  .is_digital(1))
		DacClk
		 (.clock_out(Net_279));


	// cy_analog_virtualmux_1 (cy_analog_virtualmux_v1_0)
	cy_connect_v1_0 cy_analog_virtualmux_1_connect(Net_189, Net_256);
	defparam cy_analog_virtualmux_1_connect.sig_width = 1;

	// cy_analog_virtualmux_2 (cy_analog_virtualmux_v1_0)
	cy_connect_v1_0 cy_analog_virtualmux_2_connect(Net_190, Net_211);
	defparam cy_analog_virtualmux_2_connect.sig_width = 1;

    cy_analog_noconnect_v1_0 cy_analog_noconnect_2 (
        .noconnect(Net_254));


	cy_dma_v1_0
		#(.drq_type(2'b10))
		Wave1_DMA
		 (.drq(Net_183),
		  .trq(1'b0),
		  .nrq(wc1));



	cy_dma_v1_0
		#(.drq_type(2'b10))
		Wave2_DMA
		 (.drq(Net_107),
		  .trq(1'b0),
		  .nrq(wc2));


    // -- De Mux start --
    if (1)
    begin : demux
        reg  tmp__demux_0_reg;
        reg  tmp__demux_1_reg;
        always @(Net_336 or Net_134)
        begin
            case (Net_134)
                1'b0:
                begin
                    tmp__demux_0_reg = Net_336;
                    tmp__demux_1_reg = 1'b0;
                end
                1'b1:
                begin
                    tmp__demux_0_reg = 1'b0;
                    tmp__demux_1_reg = Net_336;
                end
            endcase
        end
        assign Net_183 = tmp__demux_0_reg;
        assign Net_107 = tmp__demux_1_reg;
    end
    // -- De Mux end --

	// VirtualMux_1 (cy_virtualmux_v1_0)
	assign Net_336 = Net_279;

    VDAC8_v1_90_5 VDAC8 (
        .strobe(Net_336),
        .data(8'b00000000),
        .vOut(Net_189));
    defparam VDAC8.Data_Source = 0;
    defparam VDAC8.Initial_Value = 100;
    defparam VDAC8.Strobe_Mode = 1;

	// cy_analog_virtualmux_3 (cy_analog_virtualmux_v1_0)
	cy_connect_v1_0 cy_analog_virtualmux_3_connect(Wave, Net_256);
	defparam cy_analog_virtualmux_3_connect.sig_width = 1;


    assign Net_280 = Net_80 | Net_279;

    ZeroTerminal ZeroTerminal_1 (
        .z(Net_80));

    // -- DFF Start --
    reg  cydff_1;
    always @(posedge Net_336)
    begin
        cydff_1 <= ws;
    end
    assign Net_134 = cydff_1;
    // -- DFF End --



endmodule

// VDAC8_v1_90(Data_Source=0, Initial_Value=100, Strobe_Mode=1, VDAC_Range=0, VDAC_Speed=2, Voltage=400, CY_API_CALLBACK_HEADER_INCLUDE=, CY_COMMENT=, CY_COMPONENT_NAME=VDAC8_v1_90, CY_CONST_CONFIG=true, CY_CONTROL_FILE=<:default:>, CY_DATASHEET_FILE=<:default:>, CY_FITTER_NAME=HF_DAC_2:VDAC8, CY_INSTANCE_SHORT_NAME=VDAC8, CY_MAJOR_VERSION=1, CY_MINOR_VERSION=90, CY_PDL_DRIVER_NAME=, CY_PDL_DRIVER_REQ_VERSION=, CY_PDL_DRIVER_SUBGROUP=, CY_PDL_DRIVER_VARIANT=, CY_REMOVE=false, CY_SUPPRESS_API_GEN=false, CY_VERSION=PSoC Creator  4.1 Update 1, INSTANCE_NAME=HF_DAC_2_VDAC8, )
module VDAC8_v1_90_7 (
    strobe,
    data,
    vOut);
    input       strobe;
    input      [7:0] data;
    inout       vOut;
    electrical  vOut;

    parameter Data_Source = 0;
    parameter Initial_Value = 100;
    parameter Strobe_Mode = 1;

    electrical  Net_77;
          wire  Net_83;
          wire  Net_82;
          wire  Net_81;

    cy_psoc3_vidac8_v1_0 viDAC8 (
        .reset(Net_83),
        .idir(Net_81),
        .data(data[7:0]),
        .strobe(strobe),
        .vout(vOut),
        .iout(Net_77),
        .ioff(Net_82),
        .strobe_udb(strobe));
    defparam viDAC8.is_all_if_any = 0;
    defparam viDAC8.reg_data = 0;

    ZeroTerminal ZeroTerminal_1 (
        .z(Net_81));

    ZeroTerminal ZeroTerminal_2 (
        .z(Net_82));

    ZeroTerminal ZeroTerminal_3 (
        .z(Net_83));

    cy_analog_noconnect_v1_0 cy_analog_noconnect_1 (
        .noconnect(Net_77));



endmodule

// WaveDAC8_v2_10(Clock_SRC=1, DAC_Range=0, DacModeReplString=VDAC8, Sample_Clock_Freq=800000, Wave1_Amplitude=0.5, Wave1_Data=128u,128u,129u,130u,130u,131u,132u,133u,133u,134u,135u,135u,136u,137u,138u,138u,139u,140u,140u,141u,142u,143u,143u,144u,145u,145u,146u,147u,147u,148u,149u,150u,150u,151u,152u,152u,153u,154u,154u,155u,156u,156u,157u,157u,158u,159u,159u,160u,161u,161u,162u,162u,163u,164u,164u,165u,165u,166u,166u,167u,168u,168u,169u,169u,170u,170u,171u,171u,172u,172u,173u,173u,174u,174u,175u,175u,176u,176u,177u,177u,178u,178u,178u,179u,179u,180u,180u,180u,181u,181u,182u,182u,182u,183u,183u,183u,184u,184u,184u,185u,185u,185u,185u,186u,186u,186u,186u,187u,187u,187u,187u,188u,188u,188u,188u,188u,188u,189u,189u,189u,189u,189u,189u,189u,189u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,189u,189u,189u,189u,189u,189u,189u,189u,188u,188u,188u,188u,188u,187u,187u,187u,187u,187u,186u,186u,186u,186u,185u,185u,185u,184u,184u,184u,183u,183u,183u,182u,182u,182u,181u,181u,181u,180u,180u,179u,179u,179u,178u,178u,177u,177u,176u,176u,176u,175u,175u,174u,174u,173u,173u,172u,172u,171u,171u,170u,170u,169u,168u,168u,167u,167u,166u,166u,165u,164u,164u,163u,163u,162u,161u,161u,160u,160u,159u,158u,158u,157u,156u,156u,155u,155u,154u,153u,153u,152u,151u,151u,150u,149u,148u,148u,147u,146u,146u,145u,144u,144u,143u,142u,142u,141u,140u,139u,139u,138u,137u,137u,136u,135u,134u,134u,133u,132u,131u,131u,130u,129u,129u,128u,127u,126u,126u,125u,124u,124u,123u,122u,121u,121u,120u,119u,118u,118u,117u,116u,116u,115u,114u,113u,113u,112u,111u,111u,110u,109u,109u,108u,107u,107u,106u,105u,104u,104u,103u,102u,102u,101u,100u,100u,99u,99u,98u,97u,97u,96u,95u,95u,94u,94u,93u,92u,92u,91u,91u,90u,89u,89u,88u,88u,87u,87u,86u,85u,85u,84u,84u,83u,83u,82u,82u,81u,81u,80u,80u,79u,79u,79u,78u,78u,77u,77u,76u,76u,76u,75u,75u,74u,74u,74u,73u,73u,73u,72u,72u,72u,71u,71u,71u,70u,70u,70u,69u,69u,69u,69u,68u,68u,68u,68u,68u,67u,67u,67u,67u,67u,66u,66u,66u,66u,66u,66u,66u,66u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,66u,66u,66u,66u,66u,66u,66u,66u,67u,67u,67u,67u,67u,67u,68u,68u,68u,68u,69u,69u,69u,69u,70u,70u,70u,70u,71u,71u,71u,72u,72u,72u,73u,73u,73u,74u,74u,75u,75u,75u,76u,76u,77u,77u,77u,78u,78u,79u,79u,80u,80u,81u,81u,82u,82u,83u,83u,84u,84u,85u,85u,86u,86u,87u,87u,88u,89u,89u,90u,90u,91u,91u,92u,93u,93u,94u,94u,95u,96u,96u,97u,98u,98u,99u,99u,100u,101u,101u,102u,103u,103u,104u,105u,105u,106u,107u,108u,108u,109u,110u,110u,111u,112u,112u,113u,114u,115u,115u,116u,117u,117u,118u,119u,120u,120u,121u,122u,122u,123u,124u,125u,125u,126u,127u, Wave1_DCOffset=0.51, Wave1_Length=541, Wave1_PhaseShift=0, Wave1_Type=0, Wave2_Amplitude=0.9, Wave2_Data=128u,128u,128u,128u, Wave2_DCOffset=0.51, Wave2_Length=4, Wave2_PhaseShift=0, Wave2_Type=11, CY_API_CALLBACK_HEADER_INCLUDE=, CY_COMMENT=, CY_COMPONENT_NAME=WaveDAC8_v2_10, CY_CONST_CONFIG=true, CY_CONTROL_FILE=<:default:>, CY_DATASHEET_FILE=<:default:>, CY_FITTER_NAME=HF_DAC_2, CY_INSTANCE_SHORT_NAME=HF_DAC_2, CY_MAJOR_VERSION=2, CY_MINOR_VERSION=10, CY_PDL_DRIVER_NAME=, CY_PDL_DRIVER_REQ_VERSION=, CY_PDL_DRIVER_SUBGROUP=, CY_PDL_DRIVER_VARIANT=, CY_REMOVE=false, CY_SUPPRESS_API_GEN=false, CY_VERSION=PSoC Creator  4.1 Update 1, INSTANCE_NAME=HF_DAC_2, )
module WaveDAC8_v2_10_8 (
    Wave,
    ws,
    clock,
    wc1,
    wc2);
    inout       Wave;
    electrical  Wave;
    input       ws;
    input       clock;
    output      wc1;
    output      wc2;


          wire  Net_280;
    electrical  Net_273;
          wire  Net_202;
          wire  Net_201;
          wire [7:0] Net_171;
          wire [7:0] Net_170;
          wire  Net_339;
          wire  Net_341;
          wire  Net_153;
    electrical  Net_211;
          wire  Net_134;
          wire  Net_107;
          wire  Net_183;
          wire  Net_336;
          wire  Net_279;
          wire  Net_80;
    electrical  Net_247;
    electrical  Net_254;
    electrical  Net_256;
    electrical  Net_190;
    electrical  Net_189;

    cy_analog_noconnect_v1_0 cy_analog_noconnect_1 (
        .noconnect(Net_211));


	cy_clock_v1_0
		#(.id("1978a971-027a-43b1-b76e-dbec16271268/77086516-855e-4b7b-abbe-47b22f8543de"),
		  .source_clock_id(""),
		  .divisor(0),
		  .period("1250000000"),
		  .is_direct(0),
		  .is_digital(1))
		DacClk
		 (.clock_out(Net_279));


	// cy_analog_virtualmux_1 (cy_analog_virtualmux_v1_0)
	cy_connect_v1_0 cy_analog_virtualmux_1_connect(Net_189, Net_256);
	defparam cy_analog_virtualmux_1_connect.sig_width = 1;

	// cy_analog_virtualmux_2 (cy_analog_virtualmux_v1_0)
	cy_connect_v1_0 cy_analog_virtualmux_2_connect(Net_190, Net_211);
	defparam cy_analog_virtualmux_2_connect.sig_width = 1;

    cy_analog_noconnect_v1_0 cy_analog_noconnect_2 (
        .noconnect(Net_254));


	cy_dma_v1_0
		#(.drq_type(2'b10))
		Wave1_DMA
		 (.drq(Net_183),
		  .trq(1'b0),
		  .nrq(wc1));



	cy_dma_v1_0
		#(.drq_type(2'b10))
		Wave2_DMA
		 (.drq(Net_107),
		  .trq(1'b0),
		  .nrq(wc2));


    // -- De Mux start --
    if (1)
    begin : demux
        reg  tmp__demux_0_reg;
        reg  tmp__demux_1_reg;
        always @(Net_336 or Net_134)
        begin
            case (Net_134)
                1'b0:
                begin
                    tmp__demux_0_reg = Net_336;
                    tmp__demux_1_reg = 1'b0;
                end
                1'b1:
                begin
                    tmp__demux_0_reg = 1'b0;
                    tmp__demux_1_reg = Net_336;
                end
            endcase
        end
        assign Net_183 = tmp__demux_0_reg;
        assign Net_107 = tmp__demux_1_reg;
    end
    // -- De Mux end --

	// VirtualMux_1 (cy_virtualmux_v1_0)
	assign Net_336 = Net_279;

    VDAC8_v1_90_7 VDAC8 (
        .strobe(Net_336),
        .data(8'b00000000),
        .vOut(Net_189));
    defparam VDAC8.Data_Source = 0;
    defparam VDAC8.Initial_Value = 100;
    defparam VDAC8.Strobe_Mode = 1;

	// cy_analog_virtualmux_3 (cy_analog_virtualmux_v1_0)
	cy_connect_v1_0 cy_analog_virtualmux_3_connect(Wave, Net_256);
	defparam cy_analog_virtualmux_3_connect.sig_width = 1;


    assign Net_280 = Net_80 | Net_279;

    ZeroTerminal ZeroTerminal_1 (
        .z(Net_80));

    // -- DFF Start --
    reg  cydff_1;
    always @(posedge Net_336)
    begin
        cydff_1 <= ws;
    end
    assign Net_134 = cydff_1;
    // -- DFF End --



endmodule

// VDAC8_v1_90(Data_Source=0, Initial_Value=100, Strobe_Mode=1, VDAC_Range=0, VDAC_Speed=2, Voltage=400, CY_API_CALLBACK_HEADER_INCLUDE=, CY_COMMENT=, CY_COMPONENT_NAME=VDAC8_v1_90, CY_CONST_CONFIG=true, CY_CONTROL_FILE=<:default:>, CY_DATASHEET_FILE=<:default:>, CY_FITTER_NAME=LF_DAC_2:VDAC8, CY_INSTANCE_SHORT_NAME=VDAC8, CY_MAJOR_VERSION=1, CY_MINOR_VERSION=90, CY_PDL_DRIVER_NAME=, CY_PDL_DRIVER_REQ_VERSION=, CY_PDL_DRIVER_SUBGROUP=, CY_PDL_DRIVER_VARIANT=, CY_REMOVE=false, CY_SUPPRESS_API_GEN=false, CY_VERSION=PSoC Creator  4.1 Update 1, INSTANCE_NAME=LF_DAC_2_VDAC8, )
module VDAC8_v1_90_9 (
    strobe,
    data,
    vOut);
    input       strobe;
    input      [7:0] data;
    inout       vOut;
    electrical  vOut;

    parameter Data_Source = 0;
    parameter Initial_Value = 100;
    parameter Strobe_Mode = 1;

    electrical  Net_77;
          wire  Net_83;
          wire  Net_82;
          wire  Net_81;

    cy_psoc3_vidac8_v1_0 viDAC8 (
        .reset(Net_83),
        .idir(Net_81),
        .data(data[7:0]),
        .strobe(strobe),
        .vout(vOut),
        .iout(Net_77),
        .ioff(Net_82),
        .strobe_udb(strobe));
    defparam viDAC8.is_all_if_any = 0;
    defparam viDAC8.reg_data = 0;

    ZeroTerminal ZeroTerminal_1 (
        .z(Net_81));

    ZeroTerminal ZeroTerminal_2 (
        .z(Net_82));

    ZeroTerminal ZeroTerminal_3 (
        .z(Net_83));

    cy_analog_noconnect_v1_0 cy_analog_noconnect_1 (
        .noconnect(Net_77));



endmodule

// WaveDAC8_v2_10(Clock_SRC=1, DAC_Range=0, DacModeReplString=VDAC8, Sample_Clock_Freq=800000, Wave1_Amplitude=0.5, Wave1_Data=128u,128u,128u,129u,129u,130u,130u,130u,131u,131u,132u,132u,133u,133u,133u,134u,134u,135u,135u,135u,136u,136u,137u,137u,138u,138u,138u,139u,139u,140u,140u,140u,141u,141u,142u,142u,142u,143u,143u,144u,144u,144u,145u,145u,146u,146u,146u,147u,147u,148u,148u,148u,149u,149u,150u,150u,150u,151u,151u,152u,152u,152u,153u,153u,154u,154u,154u,155u,155u,155u,156u,156u,157u,157u,157u,158u,158u,158u,159u,159u,159u,160u,160u,161u,161u,161u,162u,162u,162u,163u,163u,163u,164u,164u,164u,165u,165u,165u,166u,166u,166u,167u,167u,167u,168u,168u,168u,169u,169u,169u,170u,170u,170u,170u,171u,171u,171u,172u,172u,172u,173u,173u,173u,173u,174u,174u,174u,175u,175u,175u,175u,176u,176u,176u,176u,177u,177u,177u,177u,178u,178u,178u,178u,179u,179u,179u,179u,180u,180u,180u,180u,181u,181u,181u,181u,181u,182u,182u,182u,182u,182u,183u,183u,183u,183u,183u,184u,184u,184u,184u,184u,184u,185u,185u,185u,185u,185u,185u,186u,186u,186u,186u,186u,186u,186u,187u,187u,187u,187u,187u,187u,187u,188u,188u,188u,188u,188u,188u,188u,188u,188u,188u,189u,189u,189u,189u,189u,189u,189u,189u,189u,189u,189u,189u,189u,189u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,189u,189u,189u,189u,189u,189u,189u,189u,189u,189u,189u,189u,189u,188u,188u,188u,188u,188u,188u,188u,188u,188u,188u,187u,187u,187u,187u,187u,187u,187u,187u,186u,186u,186u,186u,186u,186u,186u,185u,185u,185u,185u,185u,185u,184u,184u,184u,184u,184u,183u,183u,183u,183u,183u,183u,182u,182u,182u,182u,181u,181u,181u,181u,181u,180u,180u,180u,180u,179u,179u,179u,179u,179u,178u,178u,178u,178u,177u,177u,177u,177u,176u,176u,176u,175u,175u,175u,175u,174u,174u,174u,174u,173u,173u,173u,172u,172u,172u,172u,171u,171u,171u,170u,170u,170u,169u,169u,169u,168u,168u,168u,167u,167u,167u,167u,166u,166u,166u,165u,165u,165u,164u,164u,163u,163u,163u,162u,162u,162u,161u,161u,161u,160u,160u,160u,159u,159u,159u,158u,158u,157u,157u,157u,156u,156u,156u,155u,155u,154u,154u,154u,153u,153u,153u,152u,152u,151u,151u,151u,150u,150u,149u,149u,149u,148u,148u,147u,147u,147u,146u,146u,145u,145u,145u,144u,144u,143u,143u,143u,142u,142u,141u,141u,141u,140u,140u,139u,139u,139u,138u,138u,137u,137u,136u,136u,136u,135u,135u,134u,134u,134u,133u,133u,132u,132u,131u,131u,131u,130u,130u,129u,129u,129u,128u,128u,127u,127u,126u,126u,126u,125u,125u,124u,124u,124u,123u,123u,122u,122u,121u,121u,121u,120u,120u,119u,119u,119u,118u,118u,117u,117u,116u,116u,116u,115u,115u,114u,114u,114u,113u,113u,112u,112u,112u,111u,111u,110u,110u,110u,109u,109u,108u,108u,108u,107u,107u,106u,106u,106u,105u,105u,104u,104u,104u,103u,103u,102u,102u,102u,101u,101u,101u,100u,100u,99u,99u,99u,98u,98u,98u,97u,97u,96u,96u,96u,95u,95u,95u,94u,94u,94u,93u,93u,93u,92u,92u,92u,91u,91u,90u,90u,90u,89u,89u,89u,88u,88u,88u,88u,87u,87u,87u,86u,86u,86u,85u,85u,85u,84u,84u,84u,83u,83u,83u,83u,82u,82u,82u,81u,81u,81u,81u,80u,80u,80u,80u,79u,79u,79u,78u,78u,78u,78u,77u,77u,77u,77u,76u,76u,76u,76u,76u,75u,75u,75u,75u,74u,74u,74u,74u,74u,73u,73u,73u,73u,72u,72u,72u,72u,72u,72u,71u,71u,71u,71u,71u,70u,70u,70u,70u,70u,70u,69u,69u,69u,69u,69u,69u,69u,68u,68u,68u,68u,68u,68u,68u,68u,67u,67u,67u,67u,67u,67u,67u,67u,67u,67u,66u,66u,66u,66u,66u,66u,66u,66u,66u,66u,66u,66u,66u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,66u,66u,66u,66u,66u,66u,66u,66u,66u,66u,66u,66u,66u,66u,67u,67u,67u,67u,67u,67u,67u,67u,67u,67u,68u,68u,68u,68u,68u,68u,68u,69u,69u,69u,69u,69u,69u,69u,70u,70u,70u,70u,70u,70u,71u,71u,71u,71u,71u,71u,72u,72u,72u,72u,72u,73u,73u,73u,73u,73u,74u,74u,74u,74u,74u,75u,75u,75u,75u,76u,76u,76u,76u,77u,77u,77u,77u,78u,78u,78u,78u,79u,79u,79u,79u,80u,80u,80u,80u,81u,81u,81u,82u,82u,82u,82u,83u,83u,83u,84u,84u,84u,85u,85u,85u,85u,86u,86u,86u,87u,87u,87u,88u,88u,88u,89u,89u,89u,90u,90u,90u,91u,91u,91u,92u,92u,92u,93u,93u,93u,94u,94u,94u,95u,95u,96u,96u,96u,97u,97u,97u,98u,98u,98u,99u,99u,100u,100u,100u,101u,101u,101u,102u,102u,103u,103u,103u,104u,104u,105u,105u,105u,106u,106u,107u,107u,107u,108u,108u,109u,109u,109u,110u,110u,111u,111u,111u,112u,112u,113u,113u,113u,114u,114u,115u,115u,115u,116u,116u,117u,117u,117u,118u,118u,119u,119u,120u,120u,120u,121u,121u,122u,122u,122u,123u,123u,124u,124u,125u,125u,125u,126u,126u,127u,127u, Wave1_DCOffset=0.51, Wave1_Length=937, Wave1_PhaseShift=0, Wave1_Type=0, Wave2_Amplitude=0.5, Wave2_Data=128u,128u,128u,129u,129u,130u,130u,131u,131u,132u,132u,133u,133u,134u,134u,134u,135u,135u,136u,136u,137u,137u,138u,138u,139u,139u,139u,140u,140u,141u,141u,142u,142u,143u,143u,144u,144u,144u,145u,145u,146u,146u,147u,147u,147u,148u,148u,149u,149u,150u,150u,151u,151u,151u,152u,152u,153u,153u,154u,154u,154u,155u,155u,156u,156u,156u,157u,157u,158u,158u,158u,159u,159u,160u,160u,160u,161u,161u,162u,162u,162u,163u,163u,164u,164u,164u,165u,165u,165u,166u,166u,166u,167u,167u,168u,168u,168u,169u,169u,169u,170u,170u,170u,171u,171u,171u,172u,172u,172u,173u,173u,173u,174u,174u,174u,174u,175u,175u,175u,176u,176u,176u,177u,177u,177u,177u,178u,178u,178u,179u,179u,179u,179u,180u,180u,180u,180u,181u,181u,181u,181u,182u,182u,182u,182u,182u,183u,183u,183u,183u,183u,184u,184u,184u,184u,184u,185u,185u,185u,185u,185u,186u,186u,186u,186u,186u,186u,187u,187u,187u,187u,187u,187u,187u,188u,188u,188u,188u,188u,188u,188u,188u,188u,189u,189u,189u,189u,189u,189u,189u,189u,189u,189u,189u,189u,189u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,190u,189u,189u,189u,189u,189u,189u,189u,189u,189u,189u,189u,189u,188u,188u,188u,188u,188u,188u,188u,188u,188u,187u,187u,187u,187u,187u,187u,187u,186u,186u,186u,186u,186u,186u,185u,185u,185u,185u,185u,185u,184u,184u,184u,184u,184u,183u,183u,183u,183u,183u,182u,182u,182u,182u,181u,181u,181u,181u,180u,180u,180u,180u,179u,179u,179u,179u,178u,178u,178u,178u,177u,177u,177u,176u,176u,176u,176u,175u,175u,175u,174u,174u,174u,173u,173u,173u,172u,172u,172u,171u,171u,171u,170u,170u,170u,169u,169u,169u,168u,168u,168u,167u,167u,167u,166u,166u,166u,165u,165u,164u,164u,164u,163u,163u,163u,162u,162u,161u,161u,161u,160u,160u,159u,159u,159u,158u,158u,157u,157u,157u,156u,156u,155u,155u,155u,154u,154u,153u,153u,152u,152u,152u,151u,151u,150u,150u,149u,149u,149u,148u,148u,147u,147u,146u,146u,146u,145u,145u,144u,144u,143u,143u,142u,142u,141u,141u,141u,140u,140u,139u,139u,138u,138u,137u,137u,136u,136u,136u,135u,135u,134u,134u,133u,133u,132u,132u,131u,131u,131u,130u,130u,129u,129u,128u,128u,127u,127u,126u,126u,125u,125u,124u,124u,124u,123u,123u,122u,122u,121u,121u,120u,120u,119u,119u,119u,118u,118u,117u,117u,116u,116u,115u,115u,114u,114u,114u,113u,113u,112u,112u,111u,111u,110u,110u,109u,109u,109u,108u,108u,107u,107u,106u,106u,106u,105u,105u,104u,104u,103u,103u,103u,102u,102u,101u,101u,100u,100u,100u,99u,99u,98u,98u,98u,97u,97u,96u,96u,96u,95u,95u,94u,94u,94u,93u,93u,92u,92u,92u,91u,91u,91u,90u,90u,89u,89u,89u,88u,88u,88u,87u,87u,87u,86u,86u,86u,85u,85u,85u,84u,84u,84u,83u,83u,83u,82u,82u,82u,81u,81u,81u,80u,80u,80u,79u,79u,79u,79u,78u,78u,78u,77u,77u,77u,77u,76u,76u,76u,76u,75u,75u,75u,75u,74u,74u,74u,74u,73u,73u,73u,73u,72u,72u,72u,72u,72u,71u,71u,71u,71u,71u,70u,70u,70u,70u,70u,70u,69u,69u,69u,69u,69u,69u,68u,68u,68u,68u,68u,68u,68u,67u,67u,67u,67u,67u,67u,67u,67u,67u,66u,66u,66u,66u,66u,66u,66u,66u,66u,66u,66u,66u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,65u,66u,66u,66u,66u,66u,66u,66u,66u,66u,66u,66u,66u,66u,67u,67u,67u,67u,67u,67u,67u,67u,67u,68u,68u,68u,68u,68u,68u,68u,69u,69u,69u,69u,69u,69u,70u,70u,70u,70u,70u,71u,71u,71u,71u,71u,72u,72u,72u,72u,72u,73u,73u,73u,73u,73u,74u,74u,74u,74u,75u,75u,75u,75u,76u,76u,76u,76u,77u,77u,77u,78u,78u,78u,78u,79u,79u,79u,80u,80u,80u,81u,81u,81u,81u,82u,82u,82u,83u,83u,83u,84u,84u,84u,85u,85u,85u,86u,86u,86u,87u,87u,87u,88u,88u,89u,89u,89u,90u,90u,90u,91u,91u,91u,92u,92u,93u,93u,93u,94u,94u,95u,95u,95u,96u,96u,97u,97u,97u,98u,98u,99u,99u,99u,100u,100u,101u,101u,101u,102u,102u,103u,103u,104u,104u,104u,105u,105u,106u,106u,107u,107u,108u,108u,108u,109u,109u,110u,110u,111u,111u,111u,112u,112u,113u,113u,114u,114u,115u,115u,116u,116u,116u,117u,117u,118u,118u,119u,119u,120u,120u,121u,121u,121u,122u,122u,123u,123u,124u,124u,125u,125u,126u,126u,127u,127u, Wave2_DCOffset=0.51, Wave2_Length=849, Wave2_PhaseShift=0, Wave2_Type=0, CY_API_CALLBACK_HEADER_INCLUDE=, CY_COMMENT=, CY_COMPONENT_NAME=WaveDAC8_v2_10, CY_CONST_CONFIG=true, CY_CONTROL_FILE=<:default:>, CY_DATASHEET_FILE=<:default:>, CY_FITTER_NAME=LF_DAC_2, CY_INSTANCE_SHORT_NAME=LF_DAC_2, CY_MAJOR_VERSION=2, CY_MINOR_VERSION=10, CY_PDL_DRIVER_NAME=, CY_PDL_DRIVER_REQ_VERSION=, CY_PDL_DRIVER_SUBGROUP=, CY_PDL_DRIVER_VARIANT=, CY_REMOVE=false, CY_SUPPRESS_API_GEN=false, CY_VERSION=PSoC Creator  4.1 Update 1, INSTANCE_NAME=LF_DAC_2, )
module WaveDAC8_v2_10_10 (
    Wave,
    ws,
    clock,
    wc1,
    wc2);
    inout       Wave;
    electrical  Wave;
    input       ws;
    input       clock;
    output      wc1;
    output      wc2;


          wire  Net_280;
    electrical  Net_273;
          wire  Net_202;
          wire  Net_201;
          wire [7:0] Net_171;
          wire [7:0] Net_170;
          wire  Net_339;
          wire  Net_341;
          wire  Net_153;
    electrical  Net_211;
          wire  Net_134;
          wire  Net_107;
          wire  Net_183;
          wire  Net_336;
          wire  Net_279;
          wire  Net_80;
    electrical  Net_247;
    electrical  Net_254;
    electrical  Net_256;
    electrical  Net_190;
    electrical  Net_189;

    cy_analog_noconnect_v1_0 cy_analog_noconnect_1 (
        .noconnect(Net_211));


	cy_clock_v1_0
		#(.id("3c512ee3-c5cb-4be7-931a-8a4b43e07586/77086516-855e-4b7b-abbe-47b22f8543de"),
		  .source_clock_id(""),
		  .divisor(0),
		  .period("1250000000"),
		  .is_direct(0),
		  .is_digital(1))
		DacClk
		 (.clock_out(Net_279));


	// cy_analog_virtualmux_1 (cy_analog_virtualmux_v1_0)
	cy_connect_v1_0 cy_analog_virtualmux_1_connect(Net_189, Net_256);
	defparam cy_analog_virtualmux_1_connect.sig_width = 1;

	// cy_analog_virtualmux_2 (cy_analog_virtualmux_v1_0)
	cy_connect_v1_0 cy_analog_virtualmux_2_connect(Net_190, Net_211);
	defparam cy_analog_virtualmux_2_connect.sig_width = 1;

    cy_analog_noconnect_v1_0 cy_analog_noconnect_2 (
        .noconnect(Net_254));


	cy_dma_v1_0
		#(.drq_type(2'b10))
		Wave1_DMA
		 (.drq(Net_183),
		  .trq(1'b0),
		  .nrq(wc1));



	cy_dma_v1_0
		#(.drq_type(2'b10))
		Wave2_DMA
		 (.drq(Net_107),
		  .trq(1'b0),
		  .nrq(wc2));


    // -- De Mux start --
    if (1)
    begin : demux
        reg  tmp__demux_0_reg;
        reg  tmp__demux_1_reg;
        always @(Net_336 or Net_134)
        begin
            case (Net_134)
                1'b0:
                begin
                    tmp__demux_0_reg = Net_336;
                    tmp__demux_1_reg = 1'b0;
                end
                1'b1:
                begin
                    tmp__demux_0_reg = 1'b0;
                    tmp__demux_1_reg = Net_336;
                end
            endcase
        end
        assign Net_183 = tmp__demux_0_reg;
        assign Net_107 = tmp__demux_1_reg;
    end
    // -- De Mux end --

	// VirtualMux_1 (cy_virtualmux_v1_0)
	assign Net_336 = Net_279;

    VDAC8_v1_90_9 VDAC8 (
        .strobe(Net_336),
        .data(8'b00000000),
        .vOut(Net_189));
    defparam VDAC8.Data_Source = 0;
    defparam VDAC8.Initial_Value = 100;
    defparam VDAC8.Strobe_Mode = 1;

	// cy_analog_virtualmux_3 (cy_analog_virtualmux_v1_0)
	cy_connect_v1_0 cy_analog_virtualmux_3_connect(Wave, Net_256);
	defparam cy_analog_virtualmux_3_connect.sig_width = 1;


    assign Net_280 = Net_80 | Net_279;

    ZeroTerminal ZeroTerminal_1 (
        .z(Net_80));

    // -- DFF Start --
    reg  cydff_1;
    always @(posedge Net_336)
    begin
        cydff_1 <= ws;
    end
    assign Net_134 = cydff_1;
    // -- DFF End --



endmodule

// top
module top ;

    electrical  Net_205;
          wire  Net_184;
          wire  Net_183;
          wire  Net_182;
          wire  Net_174;
          wire  Net_173;
          wire  Net_172;
          wire  Net_179;
          wire  Net_178;
          wire  Net_177;
          wire  Net_123;
          wire  Net_120;
          wire  Net_147;
          wire  Net_146;
          wire  Net_145;
          wire  Net_144;
          wire  Net_143;
          wire  Net_124;
          wire  Net_158;
          wire  Net_157;
          wire  Net_156;
          wire  Net_142;
    electrical  Net_141;
          wire  Net_140;
          wire  Net_139;
          wire  Net_138;
    electrical  Net_137;
          wire  Net_58;
          wire  Net_57;
          wire  Net_56;
          wire  Net_55;
          wire  Net_54;
          wire  Net_53;
          wire  Net_25;
          wire  Net_36;
          wire  Net_52;
          wire  Net_51;
          wire  Net_50;
          wire  Net_20;
          wire  Net_49;
    electrical  Net_218;
          wire  Net_217;
          wire  Net_181;
          wire  Net_211;
          wire  Net_213;
          wire  Net_212;
    electrical  Net_153;
          wire  Net_114;

    UART_v2_50_0 UART_1 (
        .cts_n(1'b0),
        .tx(Net_20),
        .rts_n(Net_50),
        .tx_en(Net_51),
        .clock(1'b0),
        .reset(Net_36),
        .rx(Net_25),
        .tx_interrupt(Net_53),
        .rx_interrupt(Net_54),
        .tx_data(Net_55),
        .tx_clk(Net_56),
        .rx_data(Net_57),
        .rx_clk(Net_58));
    defparam UART_1.Address1 = 0;
    defparam UART_1.Address2 = 0;
    defparam UART_1.EnIntRXInterrupt = 0;
    defparam UART_1.EnIntTXInterrupt = 0;
    defparam UART_1.FlowControl = 0;
    defparam UART_1.HalfDuplexEn = 0;
    defparam UART_1.HwTXEnSignal = 1;
    defparam UART_1.NumDataBits = 8;
    defparam UART_1.NumStopBits = 1;
    defparam UART_1.ParityType = 0;
    defparam UART_1.RXEnable = 1;
    defparam UART_1.TXEnable = 1;

	wire [0:0] tmpOE__Rx_12_6_net;
	wire [0:0] tmpIO_0__Rx_12_6_net;
	wire [0:0] tmpINTERRUPT_0__Rx_12_6_net;
	electrical [0:0] tmpSIOVREF__Rx_12_6_net;

	cy_psoc3_pins_v1_10
		#(.id("1425177d-0d0e-4468-8bcc-e638e5509a9b"),
		  .drive_mode(3'b001),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("I"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b00),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		Rx_12_6
		 (.oe(tmpOE__Rx_12_6_net),
		  .y({1'b0}),
		  .fb({Net_25}),
		  .io({tmpIO_0__Rx_12_6_net[0:0]}),
		  .siovref(tmpSIOVREF__Rx_12_6_net),
		  .interrupt({tmpINTERRUPT_0__Rx_12_6_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__Rx_12_6_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

	wire [0:0] tmpOE__Tx_P12_7_net;
	wire [0:0] tmpFB_0__Tx_P12_7_net;
	wire [0:0] tmpIO_0__Tx_P12_7_net;
	wire [0:0] tmpINTERRUPT_0__Tx_P12_7_net;
	electrical [0:0] tmpSIOVREF__Tx_P12_7_net;

	cy_psoc3_pins_v1_10
		#(.id("ed092b9b-d398-4703-be89-cebf998501f6"),
		  .drive_mode(3'b110),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b1),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b1),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("O"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		Tx_P12_7
		 (.oe(tmpOE__Tx_P12_7_net),
		  .y({Net_20}),
		  .fb({tmpFB_0__Tx_P12_7_net[0:0]}),
		  .io({tmpIO_0__Tx_P12_7_net[0:0]}),
		  .siovref(tmpSIOVREF__Tx_P12_7_net),
		  .interrupt({tmpINTERRUPT_0__Tx_P12_7_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__Tx_P12_7_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

    assign Net_36 = 1'h0;

	wire [0:0] tmpOE__HF_SW1_net;
	wire [0:0] tmpIO_0__HF_SW1_net;
	wire [0:0] tmpINTERRUPT_0__HF_SW1_net;
	electrical [0:0] tmpSIOVREF__HF_SW1_net;

	cy_psoc3_pins_v1_10
		#(.id("1bed5e74-735b-4b20-a10e-1e9172e16228"),
		  .drive_mode(3'b010),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b1),
		  .input_clk_en(0),
		  .input_sync(1'b0),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("I"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b00),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		HF_SW1
		 (.oe(tmpOE__HF_SW1_net),
		  .y({1'b0}),
		  .fb({Net_211}),
		  .io({tmpIO_0__HF_SW1_net[0:0]}),
		  .siovref(tmpSIOVREF__HF_SW1_net),
		  .interrupt({tmpINTERRUPT_0__HF_SW1_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__HF_SW1_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

    ADC_DelSig_v3_30_1 ADC_DelSig_1 (
        .vplus(Net_218),
        .vminus(Net_137),
        .soc(1'b1),
        .eoc(Net_139),
        .aclk(1'b0),
        .nVref(Net_141),
        .mi(1'b0));

    WaveDAC8_v2_10_3 HF_DAC_1 (
        .Wave(Net_153),
        .ws(Net_211),
        .clock(1'b0),
        .wc1(Net_157),
        .wc2(Net_158));

    Timer_v2_80_4 Timer (
        .reset(Net_124),
        .interrupt(Net_143),
        .enable(1'b1),
        .trigger(1'b1),
        .capture(1'b0),
        .capture_out(Net_147),
        .tc(Net_120),
        .clock(Net_114));
    defparam Timer.CaptureCount = 2;
    defparam Timer.CaptureCounterEnabled = 0;
    defparam Timer.DeviceFamily = "PSoC5";
    defparam Timer.InterruptOnCapture = 0;
    defparam Timer.InterruptOnTC = 0;
    defparam Timer.Resolution = 16;
    defparam Timer.SiliconRevision = "0";


	cy_isr_v1_0
		#(.int_type(2'b00))
		isr
		 (.int_signal(Net_120));



	cy_clock_v1_0
		#(.id("a1829d82-7cde-4b1c-b7a1-6cc4208281c1"),
		  .source_clock_id("61737EF6-3B74-48f9-8B91-F7473A442AE7"),
		  .divisor(0),
		  .period("1000000000"),
		  .is_direct(0),
		  .is_digital(1))
		Clock_1
		 (.clock_out(Net_114));


    assign Net_124 = 1'h0;

    WaveDAC8_v2_10_6 LF_DAC_1 (
        .Wave(Net_153),
        .ws(Net_213),
        .clock(1'b0),
        .wc1(Net_178),
        .wc2(Net_179));

    WaveDAC8_v2_10_8 HF_DAC_2 (
        .Wave(Net_153),
        .ws(Net_212),
        .clock(1'b0),
        .wc1(Net_173),
        .wc2(Net_174));

    WaveDAC8_v2_10_10 LF_DAC_2 (
        .Wave(Net_153),
        .ws(Net_181),
        .clock(1'b0),
        .wc1(Net_183),
        .wc2(Net_184));

	wire [0:0] tmpOE__HF_SW2_net;
	wire [0:0] tmpIO_0__HF_SW2_net;
	wire [0:0] tmpINTERRUPT_0__HF_SW2_net;
	electrical [0:0] tmpSIOVREF__HF_SW2_net;

	cy_psoc3_pins_v1_10
		#(.id("beafeb0b-b3e0-4269-a32c-53cb912a09c9"),
		  .drive_mode(3'b010),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b1),
		  .input_clk_en(0),
		  .input_sync(1'b0),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("I"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b00),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		HF_SW2
		 (.oe(tmpOE__HF_SW2_net),
		  .y({1'b0}),
		  .fb({Net_212}),
		  .io({tmpIO_0__HF_SW2_net[0:0]}),
		  .siovref(tmpSIOVREF__HF_SW2_net),
		  .interrupt({tmpINTERRUPT_0__HF_SW2_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__HF_SW2_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

	wire [0:0] tmpOE__LF_SW1_net;
	wire [0:0] tmpIO_0__LF_SW1_net;
	wire [0:0] tmpINTERRUPT_0__LF_SW1_net;
	electrical [0:0] tmpSIOVREF__LF_SW1_net;

	cy_psoc3_pins_v1_10
		#(.id("596719da-daeb-44d3-8764-ffe6141e9745"),
		  .drive_mode(3'b010),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b1),
		  .input_clk_en(0),
		  .input_sync(1'b0),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("I"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b00),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		LF_SW1
		 (.oe(tmpOE__LF_SW1_net),
		  .y({1'b0}),
		  .fb({Net_213}),
		  .io({tmpIO_0__LF_SW1_net[0:0]}),
		  .siovref(tmpSIOVREF__LF_SW1_net),
		  .interrupt({tmpINTERRUPT_0__LF_SW1_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__LF_SW1_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

	wire [0:0] tmpOE__LF_SW2_net;
	wire [0:0] tmpIO_0__LF_SW2_net;
	wire [0:0] tmpINTERRUPT_0__LF_SW2_net;
	electrical [0:0] tmpSIOVREF__LF_SW2_net;

	cy_psoc3_pins_v1_10
		#(.id("759e0781-f7dc-4b02-8546-46fe690f2d72"),
		  .drive_mode(3'b010),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b1),
		  .input_clk_en(0),
		  .input_sync(1'b0),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("I"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b00),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		LF_SW2
		 (.oe(tmpOE__LF_SW2_net),
		  .y({1'b0}),
		  .fb({Net_181}),
		  .io({tmpIO_0__LF_SW2_net[0:0]}),
		  .siovref(tmpSIOVREF__LF_SW2_net),
		  .interrupt({tmpINTERRUPT_0__LF_SW2_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__LF_SW2_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

	wire [0:0] tmpOE__Pin_1_net;
	wire [0:0] tmpFB_0__Pin_1_net;
	wire [0:0] tmpIO_0__Pin_1_net;
	wire [0:0] tmpINTERRUPT_0__Pin_1_net;
	electrical [0:0] tmpSIOVREF__Pin_1_net;

	cy_psoc3_pins_v1_10
		#(.id("77715107-f8d5-47e5-a629-0fb83101ac6b"),
		  .drive_mode(3'b000),
		  .ibuf_enabled(1'b0),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("A"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b1),
		  .vtrip(2'b10),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		Pin_1
		 (.oe(tmpOE__Pin_1_net),
		  .y({1'b0}),
		  .fb({tmpFB_0__Pin_1_net[0:0]}),
		  .analog({Net_153}),
		  .io({tmpIO_0__Pin_1_net[0:0]}),
		  .siovref(tmpSIOVREF__Pin_1_net),
		  .interrupt({tmpINTERRUPT_0__Pin_1_net[0:0]}),
		  .annotation({Net_205}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__Pin_1_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};


	cy_isr_v1_0
		#(.int_type(2'b00))
		Input_ISR
		 (.int_signal(Net_217));


	wire [0:0] tmpOE__Input_Flag_net;
	wire [0:0] tmpIO_0__Input_Flag_net;
	wire [0:0] tmpINTERRUPT_0__Input_Flag_net;
	electrical [0:0] tmpSIOVREF__Input_Flag_net;

	cy_psoc3_pins_v1_10
		#(.id("07672062-7566-4181-a4f6-c7a88dcfdafd"),
		  .drive_mode(3'b010),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b1),
		  .input_clk_en(0),
		  .input_sync(1'b0),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("I"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b00),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		Input_Flag
		 (.oe(tmpOE__Input_Flag_net),
		  .y({1'b0}),
		  .fb({Net_217}),
		  .io({tmpIO_0__Input_Flag_net[0:0]}),
		  .siovref(tmpSIOVREF__Input_Flag_net),
		  .interrupt({tmpINTERRUPT_0__Input_Flag_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__Input_Flag_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

	wire [0:0] tmpOE__Pin_2_net;
	wire [0:0] tmpFB_0__Pin_2_net;
	wire [0:0] tmpIO_0__Pin_2_net;
	wire [0:0] tmpINTERRUPT_0__Pin_2_net;
	electrical [0:0] tmpSIOVREF__Pin_2_net;

	cy_psoc3_pins_v1_10
		#(.id("7096b490-350f-4a0d-82d9-977ede5ce419"),
		  .drive_mode(3'b000),
		  .ibuf_enabled(1'b0),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("A"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		Pin_2
		 (.oe(tmpOE__Pin_2_net),
		  .y({1'b0}),
		  .fb({tmpFB_0__Pin_2_net[0:0]}),
		  .analog({Net_218}),
		  .io({tmpIO_0__Pin_2_net[0:0]}),
		  .siovref(tmpSIOVREF__Pin_2_net),
		  .interrupt({tmpINTERRUPT_0__Pin_2_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__Pin_2_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};



endmodule

