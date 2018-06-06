# May 24, 2018 - False Positive Debug

** Resolved - more or less **

## Description

There was an issue in offline filtering/software spike scope that looked like possibly we were triggering from high-amplitude artifact that should have been rejected by the specified FSM window amplitudes.

## Assessment

After examining the saved DAC data, which has had the hardware HPF applied to it already, it was determined that any true "false positives" were most likely due to errors on the software interface or from clerical mistakes during post-hoc analysis using offline, acausal filters. In conclusion, there may be a few (very low) number of false-positives that could be attributable to timing errors, or other sources of noise specific to the recording used for the debugging.