# May 25, 2018 - Filter Coefficient Estimation

** Resolved **

## Description

Just a simple way to verify that things are being computed correctly for the single-pole butterworth Lowpass Filter that we wish to implement in hardware similar to the Highpass Filter.

## Assessment

Estimation method for coefficients of both the HPF and LPF module have been selected. In order to stick to a minimum (1-sample) delay for the filter, the bandpass option will not be made available. Instead, a check will be made to ensure that the filter will only run with either the LPF, HPF, or neither. 