# Understanding filters
The one pole high-pass filter implemented in DAC_output_scalble_HPF:

![alt text](../../doc/Images/Intan_filter_simulink.png)  

the idea is to use the LFP instead of the HP filtered data. The low-pass is computed in any case and it's called new_state in the verilog code.
The gain B is equal to (1-exp(-2*pi*fc/fs)).

Note: when you open model_filters.slx your Matlab current folder should be this.
