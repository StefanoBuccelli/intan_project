# Intan_stuff

This repository will include both the c++/qt code and the Verilog code.

## User Interface Development

[GUI](GUI)

### Contents

This sub-directory contains the Qt project code (C++) that we are modifying both for the Intan Stimulation/Recording System Software (RHS2000) and RHD2000 Evaluation System Software.

### Goal

We are currently in the process of adding features like:

1. a new spike scope window to visualize a new spike detection method (similar to the one detailed in [Azin, Guggenmos et. al. (2011)](https://ieeexplore.ieee.org/document/5723023/ "A Battery-Powered Activity-Dependent Intracortical Microstimulation IC for Brain-Machine-Brain Interface");
2. a new tab for event detection (e.g. spike count, rasterplots, PSTH);
3. an option to detect Local Field Potentials (LFPs);
4. the possibility to replay the amplifier activity instead of the generation of synthetic neural data for demonstration purposes if no Controller or Evaluation board is connected.


### Status

We are currently in the most preliminary planning stages.

### Significance

The end-goal is to make a user interface which can easily be reconfigured to work with
a greater number of data streams, and with different combinations of online functionality.

## Hardware Configuration Development

[Hardware](Hardware)

### Contents

This sub-directory contains the Verilog hardware code that is under re-construction.
We are currently breaking down the various combinations of state machines in [main.v](Hardware/main.v).

### Goal

Ultimately, we would like to clean the state machine code to make it more easily understandable.
Furthermore, we would like to develop a modular hardware code architecture that makes it easy
to add "pieces" of online functionality, which match the modular architecture of the software interface.

### Status

This was all started by trying to create a better method to conduct real-time, neural-activity-dependent stimulation.
Because the stimulus artifact causes saturation of the hardware amplifiers, often a simple thresholding method
is insufficient for the detection of events of interest in neurophysiological recordings (such as spikes). 
A finite state machine (FSM), similar to the one detailed in [Azin, Guggenmos et. al. (2011)](https://ieeexplore.ieee.org/document/5723023/ "A Battery-Powered Activity-Dependent Intracortical Microstimulation IC for Brain-Machine-Brain Interface"),
was rudimentarily implemented in the existing FPGA interface to the Intan amplifier chips, by cobbling together
a modified set of threshold detectors from the existing DAC threshold detection machinery provided in the original
Intan Stimulation Controller FPGA interface. 

It has so far been determined that this FSM outperforms pure threshold detection (in terms of rejecting false-positive
spiking events), and does not have a significant overall degradation on the performance of the Intan stimulation system.

Therefore, the current status is in modularizing this new FSM which will be used for detecting neural events of interest,
as well as in simplifying the main SPI FSM code. 

The currently most-pressing concern is to de-couple the FSM from the existing DAC machinery, and isolate it as its own
module within the Verilog code. This will allow (in conjunction with modifications to the software UI), the simultaneous
activation of multiple independent "neural event" discriminators- both in highpass filtered data and lowpass filtered data.

### Significance

Closed-loop neuromodulation strategies have, in recent years (as of writing this in 2018), become a widespread approach
for a variety of neurorehabilitation and therapeutic strategies. It is important to not only be able to use event-detection algorithms,
in near-real-time, for spiking events, but also for broader population measures such as the LFP (which is in the low-frequency component
of the extracellular field data). It is not inconceivable that the combination of detected LFP events as well as detected spiking events
could prove useful as a biomarker of critical periods for introducing stimulation to the system. Therefore, the improvements to the
existing Intan interface architecture provided by this collaboration will hopefully be of use to others such as ourselves,
who endeavor to improve the field of adaptive neuromodulation through technological advancement.
