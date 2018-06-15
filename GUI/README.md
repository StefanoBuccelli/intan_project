# GUI #
**C++/Qt source code for different interfaces to the FPGA used for the RHS or RHD evaluation systems.**

## Table of Contents ##
[Description](#description)  
[Filter Updates](#filter-updates)  
[Window Discriminator](#window-discriminator)  

### Description ###
Each re-configuration of the main.bit binary file that is made when reconfiguring the Verilog hardware code has accompanying interface changes. This sub-directory is where those corresponding software changes are maintained.

### Filter Updates ###
![Fig. 1: Updates to filter settings](../doc/Images/filter_tab.PNG)  
_**Figure 1:** New filter configuration tab layout and capabilities. A major addition with this combination of modified GUI and modified main.bit hardware configuration file is the ability to switch between a highpass and lowpass filter on the DAC, so that slow events (for example, amplitude of particular LFP rhythms of interest) could be used in conjunction with a state machine discriminator to trigger stimulation for neuromodulation. Previously, this was possible by changing the bandwidth settings on the amplifier; however, this would prevent the simultaneous acquisition of fullband signals, so that information of interest in high frequency bands such as multi-unit activity (approx. 300-5000 Hz) would be lost. The Hardware Event Filters at the bottom currently don't do anything since they are not connected to any output signal from the FPGA. However, the goal is that most filtering and detection functionality that is currently implemented through the DAC will be moved to these streams, which can be expanded to take advantage of unused resources on the FPGA._

### Window Discriminator ###
![Fig. 2: Finite State Machine (FSM) Disciminator](../doc/Images/window_discriminator_tab.PNG)  
_**Figure 2:** New DAC tab layout and capabilities. In order to add the ability to reject waveforms that cross a single amplitude threshold, but are too large in amplitude (for example, due to chewing artifact or stimulation artifact), multiple threshold levels in combination must be incorporated into a state machine that determines whether stimulation should be delivered. For convenience, preliminary development of such a "window discriminator" module was made by modifying the existing DAC tab, since data streams were already passed through a hardware highpass filter there. A similar mechanism will be implemented for the hardware event streams indicated by the bottom panel of Fig. 1._

![Fig. 3: Spike Scope FSM Discriminator](../doc/Images/window_discriminator_SpikeWindow.PNG)  
_**Figure 3:** New Spike Scope. By enabling the Window Disciminator checkbox in the main interface, the Spike Scope changes to allow online setting of window levels and onset/durations. In this example, spikes are greyed because they have passed the initial state conditions of the first blue and red line, but fail to meet the amplitude levels required by the third and fourth criteria. Blue indicates an inclusion criterion, which means that the monopolar threshold set by that level must be high for the duration of the level. Similarly, red is an exclusion criterion, indicating that the monopolar threshold set by that level must remain low for the duration of the level. Waveforms that pass through all specified levels and durations trigger a high impulse for a single sample on Digital Input 13, which can be used to trigger stimulation._