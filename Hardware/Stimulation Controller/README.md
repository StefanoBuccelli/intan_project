![][Logo_Small] 
# Stimulation Controller #

** Verilog code for the Intan Stimulation Controller and Intan RHS that adds an improved threshold-based state machine for event detection and additional filtering capabilities. **

## Table of Contents ##

* [FSM](#FSM "Finite State Machine")  
* [Filters](#Filters "New Filter Capabilities")  

## FSM ##

![][FSM_Schematic]  
_**Figure 1:** Updated method for detecting spikes or other events of interest in the filtered extracellular waveform, with sub-millisecond differential between event detection and downstream control events._  

### Description ###
The finite state machine (FSM) is a level discriminator that starts as soon as a waveform from a pre-specified recording stream (channel) meets an initial criterion. Additional waveform amplitude criteria can be added, such that at subsequent samples relative to the initiation of the state machine, the waveform must stay within a pre-specified range (by using both the "include" and "exclude" level-type criteria).  
  
---  

### Utility ###

#### Artifact Rejection ####
Typical threshold detection of spiking activity is generally good enough to detect multi-unit activity. However, in the application for systems where stimulation is introduced for neuromodulation, it may be desirable to avoid false-positive detection. For example, in behaving rats, mechanical vibrations due to the rat physically chewing reward pellets, or whisking, can cause large-amplitude artifacts that are not completely attenuated by the highpass filter. In order to avoid these artifacts, multiple "checkpoints" along the anticipated course of a spike (after some amplitude threshold discrimination point) could be set in order to reject large-amplitude artifact. Depending on the latency between event detection and stimulation, this can also be necessary in order to avoid a perpetual feedback between delivering the stimulation and triggering further stimulation from the artifact, which saturates the amplifiers.  
  
#### Spatially-distributed waveform discrimination ####
When a finer resolution is desired, for example when using tetrode (or other spatially dense, such as Neuropixels) arrays to obtain highly isolated single-unit activity, it could be desirable to detect specific amplitude ranges from multiple spatially distributed channels in parallel in order to ensure online detection from a single spiking unit.  
  
#### Alternative waveform discrimination ####
Event-related potentials in the LFP may have certain characteristics over a long timescale. Detection of these features (possibly in conjunction with detection of spiking activity) may be more reliable when multiple "checkpoints" are introduced.  
  
---  

## Filters ##

### Description ###
We added separate filter stream modules that can realize both simple high-pass and simple low-pass filters.
  
---  

### Utility ###

#### LFP ####
The Intan RhythmStim FPGA interface utilizes hardware filters on the Intan ADC chip, and in the DAC for listening to high-pass filtered spiking during experiments. By adding a separate sub-module for filter streams, and giving those streams the ability to digitally implement either simple high-pass or low-pass filters, it will be possible to use control-system methods that rely on LFP event detection while still acquiring and recording wideband signals (i.e. keeping spikes).   
  
---  
 
[FSM_Schematic]: ../../doc/Images/window_discriminator_schematic.PNG "Fig. 1: Updated State Machine Architecture" 
[Logo_Small]: https://github.com/StefanoBuccelli/intan_project/blob/KUMC/doc/Images/Logo_Small.png "Intan Modifications"