# MM-FSM

** Verilog code for the RHD or RHS evaluation boards that uses the "window" FSM ported by Max Murphy. **

## Description
The finite state machine (FSM) is a level discriminator that starts as soon as a waveform from a pre-specified recording stream (channel) meets an initial criterion. Additional waveform amplitude criteria can be added, such that at subsequent samples relative to the initiation of the state machine, the waveform must stay within a pre-specified range (by using both the "include" and "exclude" level-type criteria). 

## Utility

### Artifact Rejection
Typical threshold detection of spiking activity is generally good enough to detect multi-unit activity. However, in the application for systems where stimulation is introduced for neuromodulation, it may be desirable to avoid false-positive detection. For example, in behaving rats, mechanical vibrations due to the rat physically chewing reward pellets, or whisking, can cause large-amplitude artifacts that are not completely attenuated by the highpass filter. In order to avoid these artifacts, multiple "checkpoints" along the anticipated course of a spike (after some amplitude threshold discrimination point) could be set in order to reject large-amplitude artifact. Depending on the latency between event detection and stimulation, this can also be necessary in order to avoid a perpetual feedback between delivering the stimulation and triggering further stimulation from the artifact, which saturates the amplifiers. 

### Spatially-distributed waveform discrimination
When a finer resolution is desired, for example when using tetrode (or other spatially dense, such as Neuropixels) arrays to obtain highly isolated single-unit activity, it could be desirable to detect specific amplitude ranges from multiple spatially distributed channels in parallel in order to ensure online detection from a single spiking unit. 

### Alternative waveform discrimination
Event-related potentials in the LFP may have certain characteristics over a long timescale. Detection of these features (possibly in conjunction with detection of spiking activity) may be more reliable when multiple "checkpoints" are introduced.