# THIS FILE IS AUTOMATICALLY GENERATED
# Project: D:\local_svn\AYBR3000\AYBR3000_V2.0\TOUCH_TEST\AYBR3000.cydsn\AYBR3000.cyprj
# Date: Mon, 30 Oct 2017 07:18:42 GMT
#set_units -time ns
create_clock -name {key_touch_ModClk(FFB)} -period 21250 -waveform {0 10625} [list [get_pins {ClockBlock/ff_div_2}]]
create_clock -name {EZI2C_SCBCLK(FFB)} -period 83.333333333333329 -waveform {0 41.6666666666667} [list [get_pins {ClockBlock/ff_div_0}]]
create_clock -name {Clock_1(FFB)} -period 250 -waveform {0 125} [list [get_pins {ClockBlock/ff_div_3}]]
create_clock -name {CyILO} -period 25000 -waveform {0 12500} [list [get_pins {ClockBlock/ilo}]]
create_clock -name {CyLFCLK} -period 25000 -waveform {0 12500} [list [get_pins {ClockBlock/lfclk}]]
create_clock -name {CyIMO} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/imo}]]
create_clock -name {CyHFCLK} -period 83.333333333333329 -waveform {0 41.6666666666667} [list [get_pins {ClockBlock/hfclk}]]
create_clock -name {CySYSCLK} -period 83.333333333333329 -waveform {0 41.6666666666667} [list [get_pins {ClockBlock/sysclk}]]
create_generated_clock -name {key_touch_ModClk} -source [get_pins {ClockBlock/hfclk}] -edges {1 255 511} [list]
create_generated_clock -name {EZI2C_SCBCLK} -source [get_pins {ClockBlock/hfclk}] -edges {1 2 3} [list]
create_generated_clock -name {Clock_1} -source [get_pins {ClockBlock/hfclk}] -edges {1 3 7} [list]


# Component constraints for D:\local_svn\AYBR3000\AYBR3000_V2.0\TOUCH_TEST\AYBR3000.cydsn\TopDesign\TopDesign.cysch
# Project: D:\local_svn\AYBR3000\AYBR3000_V2.0\TOUCH_TEST\AYBR3000.cydsn\AYBR3000.cyprj
# Date: Mon, 30 Oct 2017 07:18:41 GMT
