# Computation extensions for Intan RHS2000 #


## Table of Contents ##

* [Features](#Features "added computation features")  
* [Configuration](#Configuration "How to use the new features from the host computer")
* [Architecture](#Architecture "computation organization")
* [Remarks](#Development remarks "internal development discussions")


## FSM ##

There is currently no feature in the system. It is an empty box split from the main design. 

### Planned ###

* System wide filtering (High pass / low pass)
* System wide spike detection
* Realtime event outputs on the DACs
---  

## Configuration ##

Configuration for extra modules is independent from configuration of other INTAN features

### Description ###

The module requires one *PipeIn*, one *PipeOut*, one *WireIn* and one *WireOut* USB modules to communicate. High level instructions will be transfered through the *PipeIn* module whereas lowlevel configuration goes through the *WireIn*. The *PipeOut* module makes it possible to get configuration feedback from the *cust_arch*, and the *WireOut* module contains status data.

The following identifiers are used :
* PipeIn:  **0x88**
* PipeOut: **0xA1**
* WireIn:  **0x0B**
* WireOut: **0x27**

#### WireIn configuration bits ####

Bits  | Name           | Signification
----  | ----           | -------------
0     | CST_enable     | If 1, enables custom computation; if 0, provide the original behavior of INTAN design
1     | *reserved*     |
2     | CSTtrig_to_DAC | If 1, outputs trigger outputs to the DACs (*DAC_en* and *CST_enable* must also be set); if 0, DACs output provide the original behavior.
4-3   | *reserved*     |
15-5  | -              | available for new developments


#### WireOut configuration bits ####

Bits | Name           | Signification
---- | ----           | -------------
9-0  | FIFO_dat       | number of elements in the PipeOut FIFO
10   | ERR_input      | if set, *cust_arch* module did not receive data as expected. Some more elaborate command should give more details. Should be cleared by specific command.
10   | ERR_instr      | if set, *cust_arch* module did not understand a PipeIn command. Should be cleared by specific command.
15-12 | -             | No idea of what could be interesting to output


#### PipeIn / PipeOut instruction set ####

command set:

| group | command | signification |
| ----  | ----    | ---- |
| 0x0000 | | idle, no command (repeat 3 times if not aware of the receiver state)|
| 0x01-- | |  single word commands |
| | 0x0100 | (not implemented yet) get architecture version (major) |
| | 0x0101 | (not implemented yet) get architecture version (minor) |
| | 0x0102 | (not implemented yet) read last error |
| 0x02-- | | two words commands |
| | 0x0200 + *coeff* | set filter 1 coefficient |
| | ... | |
| | 0x0210 + *chan*  | (not implemented yet) select channel to trigger output 0
| | 0x0211 + *chan*  | (not implemented yet) select channel to trigger output 1
| | 0x0212 + *chan*  | (not implemented yet) select channel to trigger output 2
| | 0x0213 + *chan*  | (not implemented yet) select channel to trigger output 3
| | 0x0214 + *chan*  | (not implemented yet) select channel to trigger output 4
| | 0x0215 + *chan*  | (not implemented yet) select channel to trigger output 5
| | 0x0216 + *chan*  | (not implemented yet) select channel to trigger output 6
| | 0x0217 + *chan*  | (not implemented yet) select channel to trigger output 7
| | 0x0218 + *length*| (not implemented yet) set length of stimulation trigger (in microseconds) |
| 0x03-- | | next group of commands |

## Actual architecture


![alt text](../../doc/Images//New_custom_architecture.png)


  
---  
 

## Architecture ##

### Interaction with INTAN architecture ###

All added computation is performed in the *cust_arch* module that is positioned between the main state machine that controls data flows and the FIFO that stores data waiting for USB transfer. Therefore, both data input and data output of *cust_arch* use the data stream format that is used by INTAN for USB transfers. the *cust_arch* module can also replace any data with results it computed itself, so 

### Computation module Architecture ###

There is only a High pass filter implemented. This filter is exactly the same that is provided for the analog output, but it is performed on all 128 channels.

the communication between computation modules is standardized:
 - each data sample goes with the ID of its channel to avoid messing up data
 - flow protocol:
    * each module outputs its data as soon as they are available (data_ready)
    * the data receiver tells if it accepts the data with the data_read I/O.
    * if data in ouptut is not accepted by the receiver module, the emitter
      hold the data and data_ready bit until data is accepted by the receiver
    * data are actually exchanged when both data_ready and read_chan are set.


---
## Development remarks ##

YB: Project name, computing module name, and so, are not definitive, you can suggest any name you feel more appropriate to be affordable by the average enthousiast electrophysiologist.

### Feature requests ###

* [Filters](#Filters "precision on filter design")
* [Spike detection](#Spike detection "precision on spike detection")
* [Output events](#Output events "how and were should event triggers be output ?")

#### Filters ####

#### Spike Detection ####

#### Output Events ####

What is available now is to output the triggers on the ADCs. Events are binary data. Discussion is open to:
* output analog data
* directly stimulate through the stim channels of the intan chips
