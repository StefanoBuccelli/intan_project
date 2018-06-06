Intan Stim/Recording Controller Software - Pre-Compiled Windows Version
-----------------------------------------------------------------------

This directory contains the Intan Stim/Recording Controller executable file
(IntanStimRecordController.exe) and four supporting files: main.bit (the FPGA configuration file),
okFrontPanel.dll (the DLL for the Opal Kelly module), QtCore4.dll, and QtGui4.dll (DLLs for the
Qt libraries).

These four supporting files must reside in the directory with the executable file. To run
the GUI, double-click on IntanStimRecordController.exe. (Intan Technologies does not currently offer
installer software that would place the application in the Start menu. For convenience, a
shortcut to this file could be placed on the desktop.)

Some users have reported an error when running under Windows 7: "The program can't start
because MSVCP100.dll is missing from your computer."  If you see this error, download and
install the Microsoft Visual C++ 2010 Redistributable Package:
http://www.microsoft.com/en-us/download/details.aspx?displaylang=en&id=5555

Intan Technologies does not currently distribute Linux executables file for the Stim/Recording
Controller, so users must compile it from the source code.  Mac executable is available
from www.intantech.com.
