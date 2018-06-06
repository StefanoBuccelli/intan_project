//  ------------------------------------------------------------------------
//
//  This file is part of the Intan Technologies RHD2000 Interface
//  Version 1.5.2
//  Copyright (C) 2013-2017 Intan Technologies
//
//  ------------------------------------------------------------------------
//
//  This program is free software: you can redistribute it and/or modify
//  it under the terms of the GNU Lesser General Public License as published
//  by the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU Lesser General Public License for more details.
//
//  You should have received a copy of the GNU Lesser General Public License
//  along with this program.  If not, see <http://www.gnu.org/licenses/>.

#include <QtGui>
#if QT_VERSION >= QT_VERSION_CHECK(5,0,0)
#include <QtWidgets>
#endif
#include <QWidget>
#include <qglobal.h>

#include <QFile>
#include <QTime>
#include <QSound>
#include <iostream>
#include <fstream>
#include <vector>
#include <queue>

#include "mainwindow.h"
#include "globalconstants.h"
#include "signalprocessor.h"
#include "waveplot.h"
#include "signalsources.h"
#include "signalgroup.h"
#include "signalchannel.h"
#include "bandwidthdialog.h"
#include "impedancefreqdialog.h"
#include "renamechanneldialog.h"
#include "keyboardshortcutdialog.h"
#include "helpdialogchipfilters.h"
#include "helpdialogcomparators.h"
#include "helpdialogdacs.h"
#include "helpdialoghighpassfilter.h"
#include "helpdialognotchfilter.h"
#include "helpdialogfastsettle.h"
#include "spikescopedialog.h"
#include "triggerrecorddialog.h"
#include "setsaveformatdialog.h"
#include "auxdigoutconfigdialog.h"
#include "cabledelaydialog.h"
#include "rhd2000evalboard.h"
#include "rhd2000evalboard.h"
#include "rhd2000registers.h"
#include "rhd2000datablock.h"
#include "okFrontPanelDLL.h"

// Main Window of RHD2000 USB interface application.

// Constructor.
MainWindow::MainWindow()
{
    // Default amplifier bandwidth settings
    desiredLowerBandwidth = 0.1;
    desiredUpperBandwidth = 7500.0;
    desiredDspCutoffFreq = 1.0;
    dspEnabled = true;

    // Default electrode impedance measurement frequency
    desiredImpedanceFreq = 1000.0;

    actualImpedanceFreq = 0.0;
    impedanceFreqValid = false;

    // Set up vectors for 8 DACs on USB interface board
    dacEnabled.resize(8);
    dacEnabled.fill(false);
    dacSelectedChannel.resize(8);
    dacSelectedChannel.fill(0);

    cableLengthPortA = 1.0;
    cableLengthPortB = 1.0;
    cableLengthPortC = 1.0;
    cableLengthPortD = 1.0;

    chipId.resize(MAX_NUM_DATA_STREAMS);
    chipId.fill(-1);

    for (int i = 0; i < 16; ++i) {
        ttlOut[i] = 0;
    }
    evalBoardMode = 0;

    // Set dialog pointers to null.
    spikeScopeDialog = 0;
    keyboardShortcutDialog = 0;
    helpDialogChipFilters = 0;
    helpDialogComparators = 0;
    helpDialogDacs = 0;
    helpDialogHighpassFilter = 0;
    helpDialogNotchFilter = 0;
    helpDialogFastSettle = 0;

    recordTriggerChannel = 0;
    recordTriggerPolarity = 0;
    recordTriggerBuffer = 1;
    postTriggerTime = 1;
    saveTriggerChannel = true;

    signalSources = new SignalSources();

    channelVisible.resize(MAX_NUM_DATA_STREAMS);
    for (int i = 0; i < MAX_NUM_DATA_STREAMS; ++i) {
        channelVisible[i].resize(32);
        channelVisible[i].fill(false);
    }

    signalProcessor = new SignalProcessor();
    notchFilterFrequency = 60.0;
    notchFilterBandwidth = 10.0;
    notchFilterEnabled = true;
    signalProcessor->setNotchFilterEnabled(notchFilterEnabled);
    highpassFilterFrequency = 300.0;
    highpassFilterEnabled = true;
    signalProcessor->setHighpassFilterEnabled(highpassFilterEnabled);

    running = false;
    recording = false;
    triggerSet = false;
    triggered = false;

    saveTemp = false;
    saveTtlOut = false;
    validFilename = false;
    synthMode = false;
    fastSettleEnabled = false;

    wavePlot = new WavePlot(signalProcessor, signalSources, this, this);

    connect(wavePlot, SIGNAL(selectedChannelChanged(SignalChannel*)),
            this, SLOT(newSelectedChannel(SignalChannel*)));

    createActions();
    createMenus();
    createStatusBar();
    createLayout();

    recordButton->setEnabled(validFilename);
    triggerButton->setEnabled(validFilename);
    stopButton->setEnabled(false);

    manualDelayEnabled.resize(4);
    manualDelayEnabled.fill(false);
    manualDelay.resize(4);
    manualDelay.fill(0);

    openInterfaceBoard();

    changeSampleRate(sampleRateComboBox->currentIndex());
    sampleRateComboBox->setCurrentIndex(16);

    scanPorts();
    setStatusBarReady();

    if (!synthMode) {
        setDacThreshold1(0);
        setDacThreshold2(0);
        setDacThreshold3(0);
        setDacThreshold4(0);
        setDacThreshold5(0);
        setDacThreshold6(0);
        setDacThreshold7(0);
        setDacThreshold8(0);

        // MM - UPDATE - WINDOW DISCRIMINATOR - 1/16/2018
        setDac1WindowStart();
        setDac1WindowStop(3);
        setDac2WindowStart(0);
        setDac2WindowStop(3);
        setDac3WindowStart(6);
        setDac3WindowStop(9);
        setDac4WindowStart(6);
        setDac4WindowStop(9);
        setDac5WindowStart(0);
        setDac5WindowStop(0);
        setDac6WindowStart(0);
        setDac6WindowStop(0);
        setDac7WindowStart(0);
        setDac7WindowStop(0);
        setDac8WindowStart(0);
        setDac8WindowStop(0);

        setDac1ThresholdType(0);
        setDac2ThresholdType(1);
        setDac3ThresholdType(0);
        setDac4ThresholdType(1);
        setDac5ThresholdType(0);
        setDac6ThresholdType(1);
        setDac7ThresholdType(0);
        setDac8ThresholdType(1);

        changeDetectionMethod(false);

        evalBoard->enableDacHighpassFilter(true);
        evalBoard->setDacHighpassFilter(300.0);
        highpassFilterCheckBox->setChecked(true);
        // END UPDATE
    }

    auxDigOutEnabled.resize(4);
    auxDigOutEnabled.fill(false);
    auxDigOutChannel.resize(4);
    auxDigOutChannel.fill(0);
    updateAuxDigOut();

    // Default data file format.
    setSaveFormat(SaveFormatIntan);
    newSaveFilePeriodMinutes = 60;

    // Default settings for display scale combo boxes.
    yScaleComboBox->setCurrentIndex(2);
    tScaleComboBox->setCurrentIndex(4);

    changeTScale(tScaleComboBox->currentIndex());
    changeYScale(yScaleComboBox->currentIndex());

    // QSound cannot play wav files directly from Qt resource files, so
    // this is a workaround:  Copy the wav file from the resource file to
    // a temporary directory, then play it from there when needed.
    QFile fileTemp(QDir::tempPath() + "/triggerbeep.wav");
    if (fileTemp.open(QIODevice::ReadWrite))
    {
        QFile resourceFile(":/sounds/triggerbeep.wav");
        if(resourceFile.open(QIODevice::ReadOnly))
        {
            fileTemp.write(resourceFile.readAll());
            resourceFile.close();
        }
        fileTemp.close();
    }

    QFile fileTemp2(QDir::tempPath() + "/triggerendbeep.wav");
    if (fileTemp2.open(QIODevice::ReadWrite))
    {
        QFile resourceFile2(":/sounds/triggerendbeep.wav");
        if(resourceFile2.open(QIODevice::ReadOnly))
        {
            fileTemp2.write(resourceFile2.readAll());
            resourceFile2.close();
        }
        fileTemp2.close();
    }
    adjustSize();
}

// Scan SPI Ports A-D to identify all connected RHD2000 amplifier chips.
void MainWindow::scanPorts()
{
    statusBar()->showMessage("Scanning ports...");

    // Scan SPI Ports.
    findConnectedAmplifiers();

    // Configure SignalProcessor object for the required number of data streams.
    if (!synthMode) {
        signalProcessor->allocateMemory(evalBoard->getNumEnabledDataStreams());
        setWindowTitle(tr("Intan Technologies RHD2000 Interface"));
    } else {
        signalProcessor->allocateMemory(1);
        setWindowTitle(tr("Intan Technologies RHD2000 Interface "
                          "(Demonstration Mode with Synthesized Biopotentials)"));
    }

    // Turn on appropriate (optional) LEDs for Ports A-D
    if (!synthMode) {
        ttlOut[11] = 0;
        ttlOut[12] = 0;
        ttlOut[13] = 0;
        ttlOut[14] = 0;
        if (signalSources->signalPort[0].enabled) {
            ttlOut[11] = 1;
        }
        if (signalSources->signalPort[1].enabled) {
            ttlOut[12] = 1;
        }
        if (signalSources->signalPort[2].enabled) {
            ttlOut[13] = 1;
        }
        if (signalSources->signalPort[3].enabled) {
            ttlOut[14] = 1;
        }
        evalBoard->setTtlOut(ttlOut);
    }

    // Switch display to the first port that has an amplifier connected.
    if (signalSources->signalPort[0].enabled) {
        wavePlot->initialize(0);
    } else if (signalSources->signalPort[1].enabled) {
        wavePlot->initialize(1);
    } else if (signalSources->signalPort[2].enabled) {
        wavePlot->initialize(2);
    } else if (signalSources->signalPort[3].enabled) {
        wavePlot->initialize(3);
    } else {
        wavePlot->initialize(4);
        QMessageBox::information(this, tr("No RHD2000 Amplifiers Detected"),
                tr("No RHD2000 amplifiers are connected to the interface board."
                   "<p>Connect amplifier modules and click 'Rescan Ports A-D' under "
                   "the Configure tab."
                   "<p>You may record from analog and digital inputs on the evaluation "
                   "board in the absence of amplifier modules."));
    }

    wavePlot->setSampleRate(boardSampleRate);
    changeTScale(tScaleComboBox->currentIndex());
    changeYScale(yScaleComboBox->currentIndex());

    statusBar()->clearMessage();
}

// Create GUI layout.  We create the user interface (UI) directly with code, so it
// is not necessary to use Qt Designer or any other special software to modify the
// UI.
void MainWindow::createLayout()
{
    int i;

    setWindowIcon(QIcon(":/images/Intan_Icon_32p_trans24.png"));

    runButton = new QPushButton(tr("&Run"));
    stopButton = new QPushButton(tr("&Stop"));
    recordButton = new QPushButton(tr("Record"));
    triggerButton = new QPushButton(tr("Trigger"));
    baseFilenameButton = new QPushButton(tr("Select Base Filename"));
    setSaveFormatButton = new QPushButton(tr("Select File Format"));

    changeBandwidthButton = new QPushButton(tr("Change Bandwidth"));
    renameChannelButton = new QPushButton(tr("Rename Channel"));
    enableChannelButton = new QPushButton(tr("Enable/Disable (Space)"));
    enableAllButton = new QPushButton(tr("Enable All on Port"));
    disableAllButton = new QPushButton(tr("Disable All on Port"));
    spikeScopeButton = new QPushButton(tr("Open Spike Scope"));

    helpDialogChipFiltersButton = new QPushButton(tr("?"));
    connect(helpDialogChipFiltersButton, SIGNAL(clicked()), this, SLOT(chipFiltersHelp()));

    helpDialogComparatorsButton = new QPushButton(tr("?"));
    connect(helpDialogComparatorsButton, SIGNAL(clicked()), this, SLOT(comparatorsHelp()));

    helpDialogDacsButton = new QPushButton(tr("?"));
    connect(helpDialogDacsButton, SIGNAL(clicked()), this, SLOT(dacsHelp()));

    helpDialogHighpassFilterButton = new QPushButton(tr("?"));
    connect(helpDialogHighpassFilterButton, SIGNAL(clicked()), this, SLOT(highpassFilterHelp()));

    helpDialogNotchFilterButton = new QPushButton(tr("?"));
    connect(helpDialogNotchFilterButton, SIGNAL(clicked()), this, SLOT(notchFilterHelp()));

    helpDialogSettleButton = new QPushButton(tr("?"));
    connect(helpDialogSettleButton, SIGNAL(clicked()), this, SLOT(fastSettleHelp()));

    displayPortAButton = new QRadioButton(signalSources->signalPort[0].name);
    displayPortBButton = new QRadioButton(signalSources->signalPort[1].name);
    displayPortCButton = new QRadioButton(signalSources->signalPort[2].name);
    displayPortDButton = new QRadioButton(signalSources->signalPort[3].name);
    displayAdcButton = new QRadioButton(signalSources->signalPort[4].name);
    displayDigInButton = new QRadioButton(signalSources->signalPort[5].name);

    QButtonGroup *displayButtonGroup = new QButtonGroup();
    displayButtonGroup->addButton(displayPortAButton, 0);
    displayButtonGroup->addButton(displayPortBButton, 1);
    displayButtonGroup->addButton(displayPortCButton, 2);
    displayButtonGroup->addButton(displayPortDButton, 3);
    displayButtonGroup->addButton(displayAdcButton, 4);
    displayButtonGroup->addButton(displayDigInButton, 5);

    QGroupBox *portGroupBox = new QGroupBox(tr("Ports"));
    QVBoxLayout *displayLayout = new QVBoxLayout;
    displayLayout->addWidget(displayPortAButton);
    displayLayout->addWidget(displayPortBButton);
    displayLayout->addWidget(displayPortCButton);
    displayLayout->addWidget(displayPortDButton);
    displayLayout->addWidget(displayAdcButton);
    displayLayout->addWidget(displayDigInButton);
    displayLayout->addStretch(1);
    portGroupBox->setLayout(displayLayout);

    QGroupBox *channelGroupBox = new QGroupBox(tr("Channels"));
    QVBoxLayout *channelLayout = new QVBoxLayout;
    channelLayout->addWidget(renameChannelButton);
    channelLayout->addWidget(enableChannelButton);
    channelLayout->addWidget(enableAllButton);
    channelLayout->addWidget(disableAllButton);
    channelLayout->addStretch(1);
    channelGroupBox->setLayout(channelLayout);

    QHBoxLayout *portChannelLayout = new QHBoxLayout;
    portChannelLayout->addWidget(portGroupBox);
    portChannelLayout->addWidget(channelGroupBox);

    // Combo box for selecting number of frames displayed on screen.
    numFramesComboBox = new QComboBox();
    numFramesComboBox->addItem(tr("1"));
    numFramesComboBox->addItem(tr("2"));
    numFramesComboBox->addItem(tr("4"));
    numFramesComboBox->addItem(tr("8"));
    numFramesComboBox->addItem(tr("16"));
    numFramesComboBox->addItem(tr("32"));
    numFramesComboBox->setCurrentIndex(4);

    // Create list of voltage scales and associated combo box.
    yScaleList.append(50);
    yScaleList.append(100);
    yScaleList.append(200);
    yScaleList.append(500);
    yScaleList.append(1000);
    yScaleList.append(2000);
    yScaleList.append(5000);

    yScaleComboBox = new QComboBox();
    for (i = 0; i < yScaleList.size(); ++i) {
        yScaleComboBox->addItem("+/-" + QString::number(yScaleList[i]) +
                                " " + QSTRING_MU_SYMBOL + "V");
    }

    // Create list of time scales and associated combo box.
    tScaleList.append(10);
    tScaleList.append(20);
    tScaleList.append(50);
    tScaleList.append(100);
    tScaleList.append(200);
    tScaleList.append(500);
    tScaleList.append(1000);
    tScaleList.append(2000);
    tScaleList.append(5000);

    tScaleComboBox = new QComboBox();
    for (i = 0; i < tScaleList.size(); ++i) {
        tScaleComboBox->addItem(QString::number(tScaleList[i]) + " ms");
    }

    // Amplifier sample rate combo box.
    sampleRateComboBox = new QComboBox();
    sampleRateComboBox->addItem("1.00 kS/s");
    sampleRateComboBox->addItem("1.25 kS/s");
    sampleRateComboBox->addItem("1.50 kS/s");
    sampleRateComboBox->addItem("2.00 kS/s");
    sampleRateComboBox->addItem("2.50 kS/s");
    sampleRateComboBox->addItem("3.00 kS/s");
    sampleRateComboBox->addItem("3.33 kS/s");
    sampleRateComboBox->addItem("4.00 kS/s");
    sampleRateComboBox->addItem("5.00 kS/s");
    sampleRateComboBox->addItem("6.25 kS/s");
    sampleRateComboBox->addItem("8.00 kS/s");
    sampleRateComboBox->addItem("10.0 kS/s");
    sampleRateComboBox->addItem("12.5 kS/s");
    sampleRateComboBox->addItem("15.0 kS/s");
    sampleRateComboBox->addItem("20.0 kS/s");
    sampleRateComboBox->addItem("25.0 kS/s");
    sampleRateComboBox->addItem("30.0 kS/s");
    sampleRateComboBox->setCurrentIndex(16);

    // Notch filter combo box.
    notchFilterComboBox = new QComboBox();
    notchFilterComboBox->addItem(tr("Disabled"));
    notchFilterComboBox->addItem("50 Hz");
    notchFilterComboBox->addItem("60 Hz");
    notchFilterComboBox->setCurrentIndex(2);

    connect(runButton, SIGNAL(clicked()), this, SLOT(runInterfaceBoard()));
    connect(stopButton, SIGNAL(clicked()), this, SLOT(stopInterfaceBoard()));
    connect(recordButton, SIGNAL(clicked()), this, SLOT(recordInterfaceBoard()));
    connect(triggerButton, SIGNAL(clicked()), this, SLOT(triggerRecordInterfaceBoard()));
    connect(baseFilenameButton, SIGNAL(clicked()), this, SLOT(selectBaseFilenameSlot()));
    connect(changeBandwidthButton, SIGNAL(clicked()), this, SLOT(changeBandwidth()));
    connect(renameChannelButton, SIGNAL(clicked()), this, SLOT(renameChannel()));
    connect(enableChannelButton, SIGNAL(clicked()), this, SLOT(toggleChannelEnable()));
    connect(enableAllButton, SIGNAL(clicked()), this, SLOT(enableAllChannels()));
    connect(disableAllButton, SIGNAL(clicked()), this, SLOT(disableAllChannels()));
    connect(setSaveFormatButton, SIGNAL(clicked()), this, SLOT(setSaveFormatDialog()));

    connect(numFramesComboBox, SIGNAL(currentIndexChanged(int)),
            this, SLOT(changeNumFrames(int)));
    connect(yScaleComboBox, SIGNAL(currentIndexChanged(int)),
            this, SLOT(changeYScale(int)));
    connect(tScaleComboBox, SIGNAL(currentIndexChanged(int)),
            this, SLOT(changeTScale(int)));
    connect(sampleRateComboBox, SIGNAL(currentIndexChanged(int)),
            this, SLOT(changeSampleRate(int)));
    connect(notchFilterComboBox, SIGNAL(currentIndexChanged(int)),
            this, SLOT(changeNotchFilter(int)));
    connect(displayButtonGroup, SIGNAL(buttonClicked(int)),
            this, SLOT(changePort(int)));

    dacGainSlider = new QSlider(Qt::Horizontal);
    dacNoiseSuppressSlider = new QSlider(Qt::Horizontal);

    // MM - UPDATE - WINDOW DISCRIMINATOR - 1/16/2018
    dacDetectionMethodCheckBox = new QCheckBox(tr("Window Discriminator"));
    connect(dacDetectionMethodCheckBox, SIGNAL(clicked(bool)),
            this, SLOT(changeDetectionMethod(bool)));
    dacDetectionMethodCheckBox->setChecked(false);
    // END UPDATE


    dacGainSlider->setRange(0, 7);
    dacGainSlider->setValue(0);
    dacNoiseSuppressSlider->setRange(0, 64);
    dacNoiseSuppressSlider->setValue(0);

    dacGainLabel = new QLabel();
    dacNoiseSuppressLabel = new QLabel();
    setDacGainLabel(0);
    setDacNoiseSuppressLabel(0);

    connect(dacGainSlider, SIGNAL(valueChanged(int)),
            this, SLOT(changeDacGain(int)));
    connect(dacNoiseSuppressSlider, SIGNAL(valueChanged(int)),
            this, SLOT(changeDacNoiseSuppress(int)));

    fifoLagLabel = new QLabel(tr("0 ms"));
    fifoLagLabel->setStyleSheet("color: green");

    fifoFullLabel = new QLabel(tr("(0% full)"));
    fifoFullLabel->setStyleSheet("color: black");

    QHBoxLayout *runStopLayout = new QHBoxLayout;
    runStopLayout->addWidget(runButton);
    runStopLayout->addWidget(stopButton);
    runStopLayout->addWidget(new QLabel(tr("FIFO lag:")));
    runStopLayout->addStretch(1);
    runStopLayout->addWidget(fifoLagLabel);
    runStopLayout->addWidget(fifoFullLabel);

    QHBoxLayout *recordLayout = new QHBoxLayout;
    recordLayout->addWidget(recordButton);
    recordLayout->addWidget(triggerButton);
    recordLayout->addWidget(setSaveFormatButton);
    recordLayout->addStretch(1);

    saveFilenameLineEdit = new QLineEdit();
    saveFilenameLineEdit->setEnabled(false);

    QHBoxLayout *filenameSelectLayout = new QHBoxLayout;
    filenameSelectLayout->addWidget(baseFilenameButton);
    filenameSelectLayout->addWidget(new QLabel(tr("(Date and time stamp will be added)")));
    filenameSelectLayout->addStretch(1);

    QHBoxLayout *baseFilenameLayout = new QHBoxLayout;
    baseFilenameLayout->addWidget(new QLabel(tr("Base Filename")));
    baseFilenameLayout->addWidget(saveFilenameLineEdit);

    QHBoxLayout *numWaveformsLayout = new QHBoxLayout();
    numWaveformsLayout->addWidget(new QLabel(tr("Voltage Scale (+/-)")));
    numWaveformsLayout->addWidget(yScaleComboBox);
    numWaveformsLayout->addStretch(1);
    numWaveformsLayout->addWidget(spikeScopeButton);

    connect(spikeScopeButton, SIGNAL(clicked()),
            this, SLOT(spikeScope()));

    QHBoxLayout *scaleLayout = new QHBoxLayout();
    scaleLayout->addWidget(new QLabel(tr("Time Scale (</>)")));
    scaleLayout->addWidget(tScaleComboBox);
    scaleLayout->addStretch(1);
    scaleLayout->addWidget(new QLabel(tr("Waveforms ([/])")));
    scaleLayout->addWidget(numFramesComboBox);

    QVBoxLayout *displayOrderLayout = new QVBoxLayout();
    displayOrderLayout->addLayout(numWaveformsLayout);
    displayOrderLayout->addLayout(scaleLayout);
    displayOrderLayout->addStretch(1);

    QVBoxLayout *leftLayout1 = new QVBoxLayout;
    leftLayout1->addLayout(runStopLayout);
    leftLayout1->addLayout(recordLayout);
    leftLayout1->addLayout(filenameSelectLayout);
    leftLayout1->addLayout(baseFilenameLayout);
    leftLayout1->addLayout(portChannelLayout);
    leftLayout1->addLayout(displayOrderLayout);

    QFrame *groupBox1 = new QFrame();
    groupBox1->setLayout(leftLayout1);

    QFrame *frameTab1 = new QFrame();
    QFrame *frameTab2 = new QFrame();
    QFrame *frameTab3 = new QFrame();
    QFrame *frameTab4 = new QFrame();

    impedanceFreqSelectButton = new QPushButton(tr("Select Impedance Test Frequency"));
    runImpedanceTestButton = new QPushButton(tr("Run Impedance Measurement"));
    runImpedanceTestButton->setEnabled(false);

    connect(impedanceFreqSelectButton, SIGNAL(clicked()),
            this, SLOT(changeImpedanceFrequency()));
    connect(runImpedanceTestButton, SIGNAL(clicked()),
            this, SLOT(runImpedanceMeasurement()));

    showImpedanceCheckBox = new QCheckBox(tr("Show Last Measured Electrode Impedances"));
    connect(showImpedanceCheckBox, SIGNAL(clicked(bool)),
            this, SLOT(showImpedances(bool)));

    saveImpedancesButton = new QPushButton(tr("Save Impedance Measurements in CSV Format"));
    saveImpedancesButton->setEnabled(false);
    connect(saveImpedancesButton, SIGNAL(clicked()),
            this, SLOT(saveImpedances()));

    QHBoxLayout *impedanceFreqSelectLayout = new QHBoxLayout();
    impedanceFreqSelectLayout->addWidget(impedanceFreqSelectButton);
    impedanceFreqSelectLayout->addStretch(1);

    QHBoxLayout *runImpedanceTestLayout = new QHBoxLayout();
    runImpedanceTestLayout->addWidget(runImpedanceTestButton);
    runImpedanceTestLayout->addStretch(1);

    QHBoxLayout *saveImpedancesLayout = new QHBoxLayout();
    saveImpedancesLayout->addWidget(saveImpedancesButton);
    saveImpedancesLayout->addStretch(1);

    desiredImpedanceFreqLabel = new QLabel(tr("Desired Impedance Test Frequency: 1000 Hz"));
    actualImpedanceFreqLabel = new QLabel(tr("Actual Impedance Test Frequency: -"));

    QVBoxLayout *impedanceLayout = new QVBoxLayout();
    impedanceLayout->addLayout(impedanceFreqSelectLayout);
    impedanceLayout->addWidget(desiredImpedanceFreqLabel);
    impedanceLayout->addWidget(actualImpedanceFreqLabel);
    impedanceLayout->addLayout(runImpedanceTestLayout);
    impedanceLayout->addWidget(showImpedanceCheckBox);
    impedanceLayout->addLayout(saveImpedancesLayout);
    impedanceLayout->addWidget(new QLabel(tr("(Impedance measurements are also saved with data.)")));
    impedanceLayout->addStretch(1);

    frameTab2->setLayout(impedanceLayout);

    // MM - UPDATE - WINDOW DISCRIMINATOR - 1/16/2018
    QHBoxLayout *dacGainLayout = new QHBoxLayout;
    dacGainLayout->addWidget(new QLabel(tr("Electrode-to-DAC Total Gain")));
    dacGainLayout->addWidget(dacGainSlider);
    dacGainLayout->addWidget(dacGainLabel);
    dacGainLayout->addStretch(1);
    dacGainLayout->addWidget(dacDetectionMethodCheckBox);
    // END UPDATE

    QHBoxLayout *dacNoiseSuppressLayout = new QHBoxLayout;
    dacNoiseSuppressLayout->addWidget(new QLabel(tr("Audio Noise Slicer (DAC 1,2)")));
    dacNoiseSuppressLayout->addWidget(dacNoiseSuppressSlider);
    dacNoiseSuppressLayout->addWidget(dacNoiseSuppressLabel);
    dacNoiseSuppressLayout->addStretch(1);

    dacButton1 = new QRadioButton("");
    dacButton2 = new QRadioButton("");
    dacButton3 = new QRadioButton("");
    dacButton4 = new QRadioButton("");
    dacButton5 = new QRadioButton("");
    dacButton6 = new QRadioButton("");
    dacButton7 = new QRadioButton("");
    dacButton8 = new QRadioButton("");

    for (i = 0; i < 8; ++i) {
        setDacChannelLabel(i, "n/a", "n/a");
    }

    dacButtonGroup = new QButtonGroup;
    dacButtonGroup->addButton(dacButton1, 0);
    dacButtonGroup->addButton(dacButton2, 1);
    dacButtonGroup->addButton(dacButton3, 2);
    dacButtonGroup->addButton(dacButton4, 3);
    dacButtonGroup->addButton(dacButton5, 4);
    dacButtonGroup->addButton(dacButton6, 5);
    dacButtonGroup->addButton(dacButton7, 6);
    dacButtonGroup->addButton(dacButton8, 7);
    dacButton1->setChecked(true);

    dacEnableCheckBox = new QCheckBox(tr("DAC Enabled"));
    dacLockToSelectedBox = new QCheckBox(tr("Lock DAC 1 to Selected"));
    dacSetButton = new QPushButton(tr("Set DAC to Selected"));


    connect(dacEnableCheckBox, SIGNAL(clicked(bool)),
            this, SLOT(dacEnable(bool)));
    connect(dacSetButton, SIGNAL(clicked()),
            this, SLOT(dacSetChannel()));
    connect(dacButtonGroup, SIGNAL(buttonClicked(int)),
            this, SLOT(dacSelected(int)));

    QHBoxLayout *dacControlLayout = new QHBoxLayout;
    dacControlLayout->addWidget(dacEnableCheckBox);
    dacControlLayout->addWidget(dacSetButton);
    dacControlLayout->addStretch(1);
    dacControlLayout->addWidget(dacLockToSelectedBox);

    // MM - UPDATE - WINDOW DISCRIMINATOR - 1/16/2018

    QHBoxLayout *dacHeadingLayout = new QHBoxLayout;
    dacHeadingLayout->addSpacing(10);
    dacHeadingLayout->addWidget(new QLabel("<b><u>DAC</u></b>"));
    dacHeadingLayout->addStretch(1);
    dacHeadingLayout->addWidget(new QLabel("<b><u>Start</u></b>"));
    dacHeadingLayout->addSpacing(30);
    dacHeadingLayout->addWidget(new QLabel("<b><u>Stop</u></b>"));
    dacHeadingLayout->addSpacing(25);
    dacHeadingLayout->addWidget(new QLabel("<b><u>Type</u></b>"));
    dacHeadingLayout->addSpacing(15);
    dacHeadingLayout->addWidget(new QLabel("<b><u>Threshold</u></b>"));
    dacHeadingLayout->addSpacing(10);

    // DAC1

    dac1WindowStartSpinBox = new QSpinBox();
    dac1WindowStartSpinBox->setRange(0x0000,0xffff);
    dac1WindowStartSpinBox->setSingleStep(0);
    dac1WindowStartSpinBox->setValue(0x0000);

    dac1WindowStopSpinBox = new QSpinBox();
    dac1WindowStopSpinBox->setRange(0x0000,0xffff);
    dac1WindowStopSpinBox->setSingleStep(1);
    dac1WindowStopSpinBox->setValue(0x0003);

    dac1TypeComboBox = new QComboBox();
    dac1TypeComboBox->addItem(tr("Min"));
    dac1TypeComboBox->addItem(tr("Max"));
    dac1TypeComboBox->setCurrentIndex(0);

    dac1ThresholdSpinBox = new QSpinBox();
    dac1ThresholdSpinBox->setRange(-6400, 6400);
    dac1ThresholdSpinBox->setSingleStep(5);
    dac1ThresholdSpinBox->setValue(0);

    // DAC2

    dac2WindowStartSpinBox = new QSpinBox();
    dac2WindowStartSpinBox->setRange(0x0000,0xffff);
    dac2WindowStartSpinBox->setSingleStep(1);
    dac2WindowStartSpinBox->setValue(0x0000);

    dac2WindowStopSpinBox = new QSpinBox();
    dac2WindowStopSpinBox->setRange(0x0000,0xffff);
    dac2WindowStopSpinBox->setSingleStep(1);
    dac2WindowStopSpinBox->setValue(0x0003);

    dac2TypeComboBox = new QComboBox();
    dac2TypeComboBox->addItem(tr("Min"));
    dac2TypeComboBox->addItem(tr("Max"));
    dac2TypeComboBox->setCurrentIndex(1);

    dac2ThresholdSpinBox = new QSpinBox();
    dac2ThresholdSpinBox->setRange(-6400, 6400);
    dac2ThresholdSpinBox->setSingleStep(5);
    dac2ThresholdSpinBox->setValue(0);

    // DAC3

    dac3WindowStartSpinBox = new QSpinBox();
    dac3WindowStartSpinBox->setRange(0x0000,0xffff);
    dac3WindowStartSpinBox->setSingleStep(1);
    dac3WindowStartSpinBox->setValue(0x0006);

    dac3WindowStopSpinBox = new QSpinBox();
    dac3WindowStopSpinBox->setRange(0x0000,0xffff);
    dac3WindowStopSpinBox->setSingleStep(1);
    dac3WindowStopSpinBox->setValue(0x0009);

    dac3TypeComboBox = new QComboBox();
    dac3TypeComboBox->addItem(tr("Min"));
    dac3TypeComboBox->addItem(tr("Max"));
    dac3TypeComboBox->setCurrentIndex(0);

    dac3ThresholdSpinBox = new QSpinBox();
    dac3ThresholdSpinBox->setRange(-6400, 6400);
    dac3ThresholdSpinBox->setSingleStep(5);
    dac3ThresholdSpinBox->setValue(0);

    // DAC4

    dac4WindowStartSpinBox = new QSpinBox();
    dac4WindowStartSpinBox->setRange(0x0000,0xffff);
    dac4WindowStartSpinBox->setSingleStep(1);
    dac4WindowStartSpinBox->setValue(0x0006);

    dac4WindowStopSpinBox = new QSpinBox();
    dac4WindowStopSpinBox->setRange(0x0000,0xffff);
    dac4WindowStopSpinBox->setSingleStep(1);
    dac4WindowStopSpinBox->setValue(0x0009);

    dac4TypeComboBox = new QComboBox();
    dac4TypeComboBox->addItem(tr("Min"));
    dac4TypeComboBox->addItem(tr("Max"));
    dac4TypeComboBox->setCurrentIndex(1);

    dac4ThresholdSpinBox = new QSpinBox();
    dac4ThresholdSpinBox->setRange(-6400, 6400);
    dac4ThresholdSpinBox->setSingleStep(5);
    dac4ThresholdSpinBox->setValue(0);

    // DAC5

    dac5WindowStartSpinBox = new QSpinBox();
    dac5WindowStartSpinBox->setRange(0x0000,0xffff);
    dac5WindowStartSpinBox->setSingleStep(1);
    dac5WindowStartSpinBox->setValue(0x0000);

    dac5WindowStopSpinBox = new QSpinBox();
    dac5WindowStopSpinBox->setRange(0x0000,0xffff);
    dac5WindowStopSpinBox->setSingleStep(1);
    dac5WindowStopSpinBox->setValue(0x0000);

    dac5TypeComboBox = new QComboBox();
    dac5TypeComboBox->addItem(tr("Min"));
    dac5TypeComboBox->addItem(tr("Max"));
    dac5TypeComboBox->setCurrentIndex(0);

    dac5ThresholdSpinBox = new QSpinBox();
    dac5ThresholdSpinBox->setRange(-6400, 6400);
    dac5ThresholdSpinBox->setSingleStep(5);
    dac5ThresholdSpinBox->setValue(0);

    // DAC6

    dac6WindowStartSpinBox = new QSpinBox();
    dac6WindowStartSpinBox->setRange(0x0000,0xffff);
    dac6WindowStartSpinBox->setSingleStep(1);
    dac6WindowStartSpinBox->setValue(0x0000);

    dac6WindowStopSpinBox = new QSpinBox();
    dac6WindowStopSpinBox->setRange(0x0000,0xffff);
    dac6WindowStopSpinBox->setSingleStep(1);
    dac6WindowStopSpinBox->setValue(0x0000);

    dac6TypeComboBox = new QComboBox();
    dac6TypeComboBox->addItem(tr("Min"));
    dac6TypeComboBox->addItem(tr("Max"));
    dac6TypeComboBox->setCurrentIndex(1);

    dac6ThresholdSpinBox = new QSpinBox();
    dac6ThresholdSpinBox->setRange(-6400, 6400);
    dac6ThresholdSpinBox->setSingleStep(5);
    dac6ThresholdSpinBox->setValue(0);

    // DAC7

    dac7WindowStartSpinBox = new QSpinBox();
    dac7WindowStartSpinBox->setRange(0x0000,0xffff);
    dac7WindowStartSpinBox->setSingleStep(1);
    dac7WindowStartSpinBox->setValue(0x0000);

    dac7WindowStopSpinBox = new QSpinBox();
    dac7WindowStopSpinBox->setRange(0x0000,0xffff);
    dac7WindowStopSpinBox->setSingleStep(1);
    dac7WindowStopSpinBox->setValue(0x0000);

    dac7TypeComboBox = new QComboBox();
    dac7TypeComboBox->addItem(tr("Min"));
    dac7TypeComboBox->addItem(tr("Max"));
    dac7TypeComboBox->setCurrentIndex(0);

    dac7ThresholdSpinBox = new QSpinBox();
    dac7ThresholdSpinBox->setRange(-6400, 6400);
    dac7ThresholdSpinBox->setSingleStep(5);
    dac7ThresholdSpinBox->setValue(0);

    // DAC8

    dac8WindowStartSpinBox = new QSpinBox();
    dac8WindowStartSpinBox->setRange(0x0000,0xffff);
    dac8WindowStartSpinBox->setSingleStep(1);
    dac8WindowStartSpinBox->setValue(0x0000);

    dac8WindowStopSpinBox = new QSpinBox();
    dac8WindowStopSpinBox->setRange(0x0000,0xffff);
    dac8WindowStopSpinBox->setSingleStep(1);
    dac8WindowStopSpinBox->setValue(0x0000);

    dac8TypeComboBox = new QComboBox();
    dac8TypeComboBox->addItem(tr("Min"));
    dac8TypeComboBox->addItem(tr("Max"));
    dac8TypeComboBox->setCurrentIndex(1);

    dac8ThresholdSpinBox = new QSpinBox();
    dac8ThresholdSpinBox->setRange(-6400, 6400);
    dac8ThresholdSpinBox->setSingleStep(5);
    dac8ThresholdSpinBox->setValue(0);

    QHBoxLayout *dac1Layout = new QHBoxLayout;
    dac1Layout->addWidget(dacButton1);
    dac1Layout->addStretch(1);
    dac1Layout->addWidget(dac1WindowStartSpinBox);
    dac1Layout->addWidget(dac1WindowStopSpinBox);
    dac1Layout->addWidget(dac1TypeComboBox);
    dac1Layout->addSpacing(2);
    dac1Layout->addWidget(dac1ThresholdSpinBox);
    dac1Layout->addWidget(new QLabel(QSTRING_MU_SYMBOL + "V"));

    QHBoxLayout *dac2Layout = new QHBoxLayout;
    dac2Layout->addWidget(dacButton2);
    dac2Layout->addStretch(1);
    dac2Layout->addWidget(dac2WindowStartSpinBox);
    dac2Layout->addWidget(dac2WindowStopSpinBox);
    dac2Layout->addWidget(dac2TypeComboBox);
    dac2Layout->addSpacing(2);
    dac2Layout->addWidget(dac2ThresholdSpinBox);
    dac2Layout->addWidget(new QLabel(QSTRING_MU_SYMBOL + "V"));

    QHBoxLayout *dac3Layout = new QHBoxLayout;
    dac3Layout->addWidget(dacButton3);
    dac3Layout->addStretch(1);
    dac3Layout->addWidget(dac3WindowStartSpinBox);
    dac3Layout->addWidget(dac3WindowStopSpinBox);
    dac3Layout->addWidget(dac3TypeComboBox);
    dac3Layout->addSpacing(2);
    dac3Layout->addWidget(dac3ThresholdSpinBox);
    dac3Layout->addWidget(new QLabel(QSTRING_MU_SYMBOL + "V"));

    QHBoxLayout *dac4Layout = new QHBoxLayout;
    dac4Layout->addWidget(dacButton4);
    dac4Layout->addStretch(1);
    dac4Layout->addWidget(dac4WindowStartSpinBox);
    dac4Layout->addWidget(dac4WindowStopSpinBox);
    dac4Layout->addWidget(dac4TypeComboBox);
    dac4Layout->addSpacing(2);
    dac4Layout->addWidget(dac4ThresholdSpinBox);
    dac4Layout->addWidget(new QLabel(QSTRING_MU_SYMBOL + "V"));

    QHBoxLayout *dac5Layout = new QHBoxLayout;
    dac5Layout->addWidget(dacButton5);
    dac5Layout->addStretch(1);
    dac5Layout->addWidget(dac5WindowStartSpinBox);
    dac5Layout->addWidget(dac5WindowStopSpinBox);
    dac5Layout->addWidget(dac5TypeComboBox);
    dac5Layout->addSpacing(2);
    dac5Layout->addWidget(dac5ThresholdSpinBox);
    dac5Layout->addWidget(new QLabel(QSTRING_MU_SYMBOL + "V"));

    QHBoxLayout *dac6Layout = new QHBoxLayout;
    dac6Layout->addWidget(dacButton6);
    dac6Layout->addStretch(1);
    dac6Layout->addWidget(dac6WindowStartSpinBox);
    dac6Layout->addWidget(dac6WindowStopSpinBox);
    dac6Layout->addWidget(dac6TypeComboBox);
    dac6Layout->addSpacing(2);
    dac6Layout->addWidget(dac6ThresholdSpinBox);
    dac6Layout->addWidget(new QLabel(QSTRING_MU_SYMBOL + "V"));

    QHBoxLayout *dac7Layout = new QHBoxLayout;
    dac7Layout->addWidget(dacButton7);
    dac7Layout->addStretch(1);
    dac7Layout->addWidget(dac7WindowStartSpinBox);
    dac7Layout->addWidget(dac7WindowStopSpinBox);
    dac7Layout->addWidget(dac7TypeComboBox);
    dac7Layout->addSpacing(2);
    dac7Layout->addWidget(dac7ThresholdSpinBox);
    dac7Layout->addWidget(new QLabel(QSTRING_MU_SYMBOL + "V"));

    QHBoxLayout *dac8Layout = new QHBoxLayout;
    dac8Layout->addWidget(dacButton8);
    dac8Layout->addStretch(1);
    dac8Layout->addWidget(dac8WindowStartSpinBox);
    dac8Layout->addWidget(dac8WindowStopSpinBox);
    dac8Layout->addWidget(dac8TypeComboBox);
    dac8Layout->addSpacing(2);
    dac8Layout->addWidget(dac8ThresholdSpinBox);
    dac8Layout->addWidget(new QLabel(QSTRING_MU_SYMBOL + "V"));

    connect(dac1ThresholdSpinBox, SIGNAL(valueChanged(int)),
            this, SLOT(setDacThreshold1(int)));
    connect(dac2ThresholdSpinBox, SIGNAL(valueChanged(int)),
            this, SLOT(setDacThreshold2(int)));
    connect(dac3ThresholdSpinBox, SIGNAL(valueChanged(int)),
            this, SLOT(setDacThreshold3(int)));
    connect(dac4ThresholdSpinBox, SIGNAL(valueChanged(int)),
            this, SLOT(setDacThreshold4(int)));
    connect(dac5ThresholdSpinBox, SIGNAL(valueChanged(int)),
            this, SLOT(setDacThreshold5(int)));
    connect(dac6ThresholdSpinBox, SIGNAL(valueChanged(int)),
            this, SLOT(setDacThreshold6(int)));
    connect(dac7ThresholdSpinBox, SIGNAL(valueChanged(int)),
            this, SLOT(setDacThreshold7(int)));
    connect(dac8ThresholdSpinBox, SIGNAL(valueChanged(int)),
            this, SLOT(setDacThreshold8(int)));

    connect(dac1WindowStopSpinBox, SIGNAL(valueChanged(int)),
            this, SLOT(setDac1WindowStop(int)));
    connect(dac2WindowStartSpinBox, SIGNAL(valueChanged(int)),
            this, SLOT(setDac2WindowStart(int)));
    connect(dac2WindowStopSpinBox, SIGNAL(valueChanged(int)),
            this, SLOT(setDac2WindowStop(int)));
    connect(dac3WindowStartSpinBox, SIGNAL(valueChanged(int)),
            this, SLOT(setDac3WindowStart(int)));
    connect(dac3WindowStopSpinBox, SIGNAL(valueChanged(int)),
            this, SLOT(setDac3WindowStop(int)));
    connect(dac4WindowStartSpinBox, SIGNAL(valueChanged(int)),
            this, SLOT(setDac4WindowStart(int)));
    connect(dac4WindowStopSpinBox, SIGNAL(valueChanged(int)),
            this, SLOT(setDac4WindowStop(int)));
    connect(dac5WindowStartSpinBox, SIGNAL(valueChanged(int)),
            this, SLOT(setDac5WindowStart(int)));
    connect(dac5WindowStopSpinBox, SIGNAL(valueChanged(int)),
            this, SLOT(setDac5WindowStop(int)));
    connect(dac6WindowStartSpinBox, SIGNAL(valueChanged(int)),
            this, SLOT(setDac6WindowStart(int)));
    connect(dac6WindowStopSpinBox, SIGNAL(valueChanged(int)),
            this, SLOT(setDac6WindowStop(int)));
    connect(dac7WindowStartSpinBox, SIGNAL(valueChanged(int)),
            this, SLOT(setDac7WindowStart(int)));
    connect(dac7WindowStopSpinBox, SIGNAL(valueChanged(int)),
            this, SLOT(setDac7WindowStop(int)));
    connect(dac8WindowStartSpinBox, SIGNAL(valueChanged(int)),
            this, SLOT(setDac8WindowStart(int)));
    connect(dac8WindowStopSpinBox, SIGNAL(valueChanged(int)),
            this, SLOT(setDac8WindowStop(int)));

    connect(dac1TypeComboBox, SIGNAL(currentIndexChanged(int)),
            this, SLOT(setDac1ThresholdType(int)));
    connect(dac2TypeComboBox, SIGNAL(currentIndexChanged(int)),
            this, SLOT(setDac2ThresholdType(int)));
    connect(dac3TypeComboBox, SIGNAL(currentIndexChanged(int)),
            this, SLOT(setDac3ThresholdType(int)));
    connect(dac4TypeComboBox, SIGNAL(currentIndexChanged(int)),
            this, SLOT(setDac4ThresholdType(int)));
    connect(dac5TypeComboBox, SIGNAL(currentIndexChanged(int)),
            this, SLOT(setDac5ThresholdType(int)));
    connect(dac6TypeComboBox, SIGNAL(currentIndexChanged(int)),
            this, SLOT(setDac6ThresholdType(int)));
    connect(dac7TypeComboBox, SIGNAL(currentIndexChanged(int)),
            this, SLOT(setDac7ThresholdType(int)));
    connect(dac8TypeComboBox, SIGNAL(currentIndexChanged(int)),
            this, SLOT(setDac8ThresholdType(int)));

    // END UPDATE

    QVBoxLayout *dacMainLayout = new QVBoxLayout;
    dacMainLayout->addLayout(dacGainLayout);
    dacMainLayout->addLayout(dacNoiseSuppressLayout);
    dacMainLayout->addLayout(dacControlLayout);
    dacMainLayout->addLayout(dacHeadingLayout);
    dacMainLayout->addLayout(dac1Layout);
    dacMainLayout->addLayout(dac2Layout);
    dacMainLayout->addLayout(dac3Layout);
    dacMainLayout->addLayout(dac4Layout);
    dacMainLayout->addLayout(dac5Layout);
    dacMainLayout->addLayout(dac6Layout);
    dacMainLayout->addLayout(dac7Layout);
    dacMainLayout->addLayout(dac8Layout);
    dacMainLayout->addStretch(1);
    // dacMainLayout->addWidget(dacLockToSelectedBox);

    frameTab3->setLayout(dacMainLayout);

    QVBoxLayout *configLayout =  new QVBoxLayout;
    scanButton = new QPushButton(tr("Rescan Ports A-D"));
    setCableDelayButton = new QPushButton(tr("Manual"));
    digOutButton = new QPushButton(tr("Configure Realtime Control"));
    fastSettleCheckBox = new QCheckBox(tr("Manual"));
    externalFastSettleCheckBox = new QCheckBox(tr("Realtime Settle Control:"));
    externalFastSettleSpinBox = new QSpinBox();
    externalFastSettleSpinBox->setRange(0, 15);
    externalFastSettleSpinBox->setSingleStep(1);
    externalFastSettleSpinBox->setValue(0);

    QHBoxLayout *scanLayout = new QHBoxLayout;
    scanLayout->addWidget(scanButton);
    scanLayout->addStretch(1);
    scanLayout->addWidget(setCableDelayButton);

    QGroupBox *scanGroupBox = new QGroupBox(tr("Connected RHD2000 Amplifiers"));
    scanGroupBox->setLayout(scanLayout);

    QHBoxLayout *digOutLayout = new QHBoxLayout;
    digOutLayout->addWidget(digOutButton);
    digOutLayout->addStretch(1);

    QGroupBox *digOutGroupBox = new QGroupBox(tr("Auxiliary Digital Output Pins"));
    digOutGroupBox->setLayout(digOutLayout);

    QHBoxLayout *configTopLayout = new QHBoxLayout;
    configTopLayout->addWidget(scanGroupBox);
    configTopLayout->addWidget(digOutGroupBox);

    QHBoxLayout *fastSettleLayout = new QHBoxLayout;
    fastSettleLayout->addWidget(fastSettleCheckBox);
    fastSettleLayout->addStretch(1);
    fastSettleLayout->addWidget(externalFastSettleCheckBox);
    fastSettleLayout->addWidget(new QLabel(tr("DIN")));
    fastSettleLayout->addWidget(externalFastSettleSpinBox);
    fastSettleLayout->addWidget(helpDialogSettleButton);

    QGroupBox *fastSettleGroupBox = new QGroupBox(tr("Amplifier Fast Settle (Blanking)"));
    fastSettleGroupBox->setLayout(fastSettleLayout);

    note1LineEdit = new QLineEdit();
    note2LineEdit = new QLineEdit();
    note3LineEdit = new QLineEdit();
    note1LineEdit->setMaxLength(255);   // Note: default maxLength of a QLineEdit is 32767
    note2LineEdit->setMaxLength(255);
    note3LineEdit->setMaxLength(255);

    QVBoxLayout *notesLayout = new QVBoxLayout;
    notesLayout->addWidget(new QLabel(tr("The following text will be appended to saved data files.")));
    notesLayout->addWidget(new QLabel("Note 1:"));
    notesLayout->addWidget(note1LineEdit);
    notesLayout->addWidget(new QLabel("Note 2:"));
    notesLayout->addWidget(note2LineEdit);
    notesLayout->addWidget(new QLabel("Note 3:"));
    notesLayout->addWidget(note3LineEdit);
    notesLayout->addStretch(1);

    QGroupBox *notesGroupBox = new QGroupBox(tr("Notes"));
    notesGroupBox->setLayout(notesLayout);

    configLayout->addLayout(configTopLayout);
    configLayout->addWidget(fastSettleGroupBox);
    configLayout->addWidget(notesGroupBox);
    configLayout->addStretch(1);

    frameTab4->setLayout(configLayout);

    connect(scanButton, SIGNAL(clicked()),
            this, SLOT(scanPorts()));
    connect(setCableDelayButton, SIGNAL(clicked()),
            this, SLOT(manualCableDelayControl()));
    connect(digOutButton, SIGNAL(clicked()),
            this, SLOT(configDigOutControl()));
    connect(fastSettleCheckBox, SIGNAL(stateChanged(int)),
            this, SLOT(enableFastSettle(int)));
    connect(externalFastSettleCheckBox, SIGNAL(toggled(bool)),
            this, SLOT(enableExternalFastSettle(bool)));
    connect(externalFastSettleSpinBox, SIGNAL(valueChanged(int)),
            this, SLOT(setExternalFastSettleChannel(int)));

    QTabWidget *tabWidget1 = new QTabWidget();
    tabWidget1->addTab(frameTab1, tr("Bandwidth"));
    tabWidget1->addTab(frameTab2, tr("Impedance"));
    tabWidget1->addTab(frameTab3, tr("DAC/Audio"));
    tabWidget1->addTab(frameTab4, tr("Configure"));

    dspCutoffFreqLabel = new QLabel("0.00 Hz");
    lowerBandwidthLabel = new QLabel("0.00 Hz");
    upperBandwidthLabel = new QLabel("0.00 kHz");

    QHBoxLayout *sampleRateLayout = new QHBoxLayout;
    sampleRateLayout->addWidget(new QLabel(tr("Amplifier Sampling Rate")));
    sampleRateLayout->addWidget(sampleRateComboBox);
    sampleRateLayout->addStretch(1);

    QHBoxLayout *changeBandwidthLayout = new QHBoxLayout;
    changeBandwidthLayout->addWidget(changeBandwidthButton);
    changeBandwidthLayout->addStretch(1);
    changeBandwidthLayout->addWidget(helpDialogChipFiltersButton);

    QVBoxLayout *bandwidthLayout = new QVBoxLayout;
    bandwidthLayout->addWidget(dspCutoffFreqLabel);
    bandwidthLayout->addWidget(lowerBandwidthLabel);
    bandwidthLayout->addWidget(upperBandwidthLabel);
    bandwidthLayout->addLayout(changeBandwidthLayout);

    QGroupBox *bandwidthGroupBox = new QGroupBox(tr("Amplifier Hardware Bandwidth"));
    bandwidthGroupBox->setLayout(bandwidthLayout);

    highpassFilterCheckBox = new QCheckBox(tr("Software/DAC High-Pass Filter"));
    connect(highpassFilterCheckBox, SIGNAL(clicked(bool)),
           this, SLOT(enableHighpassFilter(bool)));
    highpassFilterLineEdit = new QLineEdit(QString::number(highpassFilterFrequency, 'f', 0));
    highpassFilterLineEdit->setValidator(new QDoubleValidator(0.01, 9999.99, 2, this));
    connect(highpassFilterLineEdit, SIGNAL(textChanged(const QString &)),
            this, SLOT(highpassFilterLineEditChanged()));

    QHBoxLayout *highpassFilterLayout = new QHBoxLayout;
    highpassFilterLayout->addWidget(highpassFilterCheckBox);
    highpassFilterLayout->addWidget(highpassFilterLineEdit);
    highpassFilterLayout->addWidget(new QLabel(tr("Hz")));
    highpassFilterLayout->addStretch(1);
    highpassFilterLayout->addWidget(helpDialogHighpassFilterButton);

    QHBoxLayout *notchFilterLayout = new QHBoxLayout;
    notchFilterLayout->addWidget(new QLabel(tr("Notch Filter Setting")));
    notchFilterLayout->addWidget(notchFilterComboBox);
    notchFilterLayout->addStretch(1);
    notchFilterLayout->addWidget(helpDialogNotchFilterButton);

    QVBoxLayout *offchipFilterLayout = new QVBoxLayout;
    offchipFilterLayout->addLayout(highpassFilterLayout);
    offchipFilterLayout->addLayout(notchFilterLayout);

    QGroupBox *notchFilterGroupBox = new QGroupBox(tr("Software Filters"));
    notchFilterGroupBox->setLayout(offchipFilterLayout);

    plotPointsCheckBox = new QCheckBox(tr("Plot Points Only to Reduce CPU Load"));
    connect(plotPointsCheckBox, SIGNAL(clicked(bool)),
            this, SLOT(plotPointsMode(bool)));

    QVBoxLayout *cpuLoadLayout = new QVBoxLayout;
    cpuLoadLayout->addWidget(plotPointsCheckBox);
    cpuLoadLayout->addStretch(1);

    QGroupBox *cpuLoadGroupBox = new QGroupBox(tr("CPU Load Management"));
    cpuLoadGroupBox->setLayout(cpuLoadLayout);

    QVBoxLayout *freqLayout = new QVBoxLayout;
    freqLayout->addLayout(sampleRateLayout);
    freqLayout->addWidget(bandwidthGroupBox);
    freqLayout->addWidget(notchFilterGroupBox);
    freqLayout->addWidget(cpuLoadGroupBox);
    freqLayout->addStretch(1);

    frameTab1->setLayout(freqLayout);

    QVBoxLayout *leftLayout = new QVBoxLayout;
    leftLayout->addWidget(groupBox1);
    leftLayout->addWidget(tabWidget1);
    leftLayout->addStretch(1);

    QHBoxLayout *mainLayout = new QHBoxLayout;
    mainLayout->addLayout(leftLayout);
    mainLayout->addWidget(wavePlot);
    mainLayout->setStretch(0, 0);
    mainLayout->setStretch(1, 1);

    QWidget *mainWidget = new QWidget;
    mainWidget->setLayout(mainLayout);

    QRect screenRect = QApplication::desktop()->screenGeometry();
    setCentralWidget(mainWidget);
    adjustSize();

    //If the screen height has less than 100 pixels to spare at the current size of mainWidget,
    //or if the screen width has less than 100 pixels to spare, put mainWidget inside a QScrollArea

    if ((screenRect.height() < mainWidget->height() + 100) ||
            (screenRect.width() < mainWidget->width() + 100)) {
        QScrollArea *scrollArea = new QScrollArea;
        scrollArea->setWidget(mainWidget);
        setCentralWidget(scrollArea);

        if (screenRect.height() < mainWidget->height() + 100)
            setMinimumHeight(screenRect.height() - 100);
        else
            setMinimumHeight(mainWidget->height() + 50);

        if (screenRect.width() < mainWidget->width() + 100)
            setMinimumWidth(screenRect.width() - 100);
        else
            setMinimumWidth(mainWidget->width() + 50);
    }

    wavePlot->setFocus();
}

// Create QActions linking menu items to functions.
void MainWindow::createActions()
{
    loadSettingsAction = new QAction(tr("Load Settings"), this);
    loadSettingsAction->setShortcut(tr("Ctrl+O"));
    connect(loadSettingsAction, SIGNAL(triggered()),
            this, SLOT(loadSettings()));

    saveSettingsAction = new QAction(tr("Save Settings"), this);
    saveSettingsAction->setShortcut(tr("Ctrl+S"));
    connect(saveSettingsAction, SIGNAL(triggered()),
            this, SLOT(saveSettings()));

    exitAction = new QAction(tr("E&xit"), this);
    exitAction->setShortcut(tr("Ctrl+Q"));
    connect(exitAction, SIGNAL(triggered()),
            this, SLOT(close()));

    originalOrderAction =
            new QAction(tr("Restore Original Channel Order"), this);
    connect(originalOrderAction, SIGNAL(triggered()),
            this, SLOT(restoreOriginalChannelOrder()));

    alphaOrderAction =
            new QAction(tr("Order Channels Alphabetically"), this);
    connect(alphaOrderAction, SIGNAL(triggered()),
            this, SLOT(alphabetizeChannels()));

    aboutAction =
            new QAction(tr("&About Intan GUI..."), this);
    connect(aboutAction, SIGNAL(triggered()),
            this, SLOT(about()));

    keyboardHelpAction =
            new QAction(tr("&Keyboard Shortcuts..."), this);
    keyboardHelpAction->setShortcut(tr("F1"));
    connect(keyboardHelpAction, SIGNAL(triggered()),
            this, SLOT(keyboardShortcutsHelp()));

    intanWebsiteAction =
            new QAction(tr("Visit Intan Website..."), this);
    connect(intanWebsiteAction, SIGNAL(triggered()),
            this, SLOT(openIntanWebsite()));

    renameChannelAction =
            new QAction(tr("Rename Channel"), this);
    renameChannelAction->setShortcut(tr("Ctrl+R"));
    connect(renameChannelAction, SIGNAL(triggered()),
            this, SLOT(renameChannel()));

    toggleChannelEnableAction =
            new QAction(tr("Enable/Disable Channel"), this);
    toggleChannelEnableAction->setShortcut(tr("Space"));
    connect(toggleChannelEnableAction, SIGNAL(triggered()),
            this, SLOT(toggleChannelEnable()));

    enableAllChannelsAction =
            new QAction(tr("Enable all Channels on Port"), this);
    connect(enableAllChannelsAction, SIGNAL(triggered()),
            this, SLOT(enableAllChannels()));

    disableAllChannelsAction =
            new QAction(tr("Disable all Channels on Port"), this);
    connect(disableAllChannelsAction, SIGNAL(triggered()),
            this, SLOT(disableAllChannels()));
}

// Create pull-down menus.
void MainWindow::createMenus()
{
    fileMenu = menuBar()->addMenu(tr("&File"));
    fileMenu->addAction(loadSettingsAction);
    fileMenu->addAction(saveSettingsAction);
    fileMenu->addSeparator();
    fileMenu->addAction(exitAction);

    channelMenu = menuBar()->addMenu(tr("&Channels"));
    channelMenu->addAction(renameChannelAction);
    channelMenu->addAction(toggleChannelEnableAction);
    channelMenu->addAction(enableAllChannelsAction);
    channelMenu->addAction(disableAllChannelsAction);
    channelMenu->addSeparator();
    channelMenu->addAction(originalOrderAction);
    channelMenu->addAction(alphaOrderAction);

    menuBar()->addSeparator();

    helpMenu = menuBar()->addMenu(tr("&Help"));
    helpMenu->addAction(keyboardHelpAction);
    helpMenu->addSeparator();
    helpMenu->addAction(intanWebsiteAction);
    helpMenu->addAction(aboutAction);
}

// Create status bar at bottom of the main window.
void MainWindow::createStatusBar()
{
    statusBarLabel = new QLabel(tr(""));
    statusBar()->addWidget(statusBarLabel, 1);
    statusBar()->setSizeGripEnabled(false);  // fixed window size
}

// Display "About" message box.
void MainWindow::about()
{
    QMessageBox::about(this, tr("About Intan Technologies RHD2000 Interface"),
            tr("<h2>Intan Technologies RHD2000 Interface</h2>"
               "<p>Version 1.5.2"
               "<p>Copyright &copy; 2013-2017 Intan Technologies"
               "<p>This biopotential recording application controls the RHD2000 "
               "USB Interface Board from Intan Technologies.  The C++/Qt source code "
               "for this application is freely available from Intan Technologies. "
               "For more information visit <i>http://www.intantech.com</i>."
               "<p>This program is free software: you can redistribute it and/or modify "
               "it under the terms of the GNU Lesser General Public License as published "
               "by the Free Software Foundation, either version 3 of the License, or "
               "(at your option) any later version."
               "<p>This program is distributed in the hope that it will be useful, "
               "but WITHOUT ANY WARRANTY; without even the implied warranty of "
               "MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the "
               "GNU Lesser General Public License for more details."
               "<p>You should have received a copy of the GNU Lesser General Public License "
               "along with this program.  If not, see <i>http://www.gnu.org/licenses/</i>."));
}

// Display keyboard shortcut window.
void MainWindow::keyboardShortcutsHelp()
{
    if (!keyboardShortcutDialog) {
        keyboardShortcutDialog = new KeyboardShortcutDialog(this);
    }
    keyboardShortcutDialog->show();
    keyboardShortcutDialog->raise();
    keyboardShortcutDialog->activateWindow();
    wavePlot->setFocus();
}

// Display on-chip filters help menu.
void MainWindow::chipFiltersHelp()
{
    if (!helpDialogChipFilters) {
        helpDialogChipFilters = new HelpDialogChipFilters(this);
    }
    helpDialogChipFilters->show();
    helpDialogChipFilters->raise();
    helpDialogChipFilters->activateWindow();
    wavePlot->setFocus();
}

// Display comparators help menu.
void MainWindow::comparatorsHelp()
{
    if (!helpDialogComparators) {
        helpDialogComparators = new HelpDialogComparators(this);
    }
    helpDialogComparators->show();
    helpDialogComparators->raise();
    helpDialogComparators->activateWindow();
    wavePlot->setFocus();
}

// Display DACs help menu.
void MainWindow::dacsHelp()
{
    if (!helpDialogDacs) {
        helpDialogDacs = new HelpDialogDacs(this);
    }
    helpDialogDacs->show();
    helpDialogDacs->raise();
    helpDialogDacs->activateWindow();
    wavePlot->setFocus();
}

// Display software/DAC high-pass filter help menu.
void MainWindow::highpassFilterHelp()
{
    if (!helpDialogHighpassFilter) {
        helpDialogHighpassFilter = new HelpDialogHighpassFilter(this);
    }
    helpDialogHighpassFilter->show();
    helpDialogHighpassFilter->raise();
    helpDialogHighpassFilter->activateWindow();
    wavePlot->setFocus();
}

// Display software notch filter help menu.
void MainWindow::notchFilterHelp()
{
    if (!helpDialogNotchFilter) {
        helpDialogNotchFilter = new HelpDialogNotchFilter(this);
    }
    helpDialogNotchFilter->show();
    helpDialogNotchFilter->raise();
    helpDialogNotchFilter->activateWindow();
    wavePlot->setFocus();
}

// Display fast settle help menu.
void MainWindow::fastSettleHelp()
{
    if (!helpDialogFastSettle) {
        helpDialogFastSettle = new HelpDialogFastSettle(this);
    }
    helpDialogFastSettle->show();
    helpDialogFastSettle->raise();
    helpDialogFastSettle->activateWindow();
    wavePlot->setFocus();
}

void MainWindow::closeEvent(QCloseEvent *event)
{
    // Perform any clean-up here before application closes.
    if (running) {
        stopInterfaceBoard(); // stop SPI communication before we exit
    }
    event->accept();
}

// Change the number of waveform frames displayed on the screen.
void MainWindow::changeNumFrames(int index)
{
    wavePlot->setNumFrames(numFramesComboBox->currentIndex());
    numFramesComboBox->setCurrentIndex(index);
    wavePlot->setFocus();
}

// Change voltage scale of waveform plots.
void MainWindow::changeYScale(int index)
{
    wavePlot->setYScale(yScaleList[index]);
    wavePlot->setFocus();
}

// Change time scale of waveform plots.
void MainWindow::changeTScale(int index)
{
    wavePlot->setTScale(tScaleList[index]);
    wavePlot->setFocus();
}

// Launch amplifier bandwidth selection dialog and set new bandwidth.
void MainWindow::changeBandwidth()
{
    BandwidthDialog bandwidthDialog(desiredLowerBandwidth, desiredUpperBandwidth,
                                    desiredDspCutoffFreq, dspEnabled, boardSampleRate, this);
    if (bandwidthDialog.exec()) {
        desiredDspCutoffFreq = bandwidthDialog.dspFreqLineEdit->text().toDouble();
        desiredLowerBandwidth = bandwidthDialog.lowFreqLineEdit->text().toDouble();
        desiredUpperBandwidth = bandwidthDialog.highFreqLineEdit->text().toDouble();
        dspEnabled = bandwidthDialog.dspEnableCheckBox->isChecked();
        changeSampleRate(sampleRateComboBox->currentIndex()); // this function sets new amp bandwidth
    }
    wavePlot->setFocus();
}

// Launch electrode impedance measurement frequency selection dialog.
void MainWindow::changeImpedanceFrequency()
{
    ImpedanceFreqDialog impedanceFreqDialog(desiredImpedanceFreq, actualLowerBandwidth, actualUpperBandwidth,
                                            actualDspCutoffFreq, dspEnabled, boardSampleRate, this);
    if (impedanceFreqDialog.exec()) {
        desiredImpedanceFreq = impedanceFreqDialog.impedanceFreqLineEdit->text().toDouble();
        updateImpedanceFrequency();
    }
    wavePlot->setFocus();
}

// Update electrode impedance measurement frequency, after checking that
// requested test frequency lies within acceptable ranges based on the
// amplifier bandwidth and the sampling rate.  See impedancefreqdialog.cpp
// for more information.
void MainWindow::updateImpedanceFrequency()
{
    int impedancePeriod;
    double lowerBandwidthLimit, upperBandwidthLimit;

    upperBandwidthLimit = actualUpperBandwidth / 1.5;
    lowerBandwidthLimit = actualLowerBandwidth * 1.5;
    if (dspEnabled) {
        if (actualDspCutoffFreq > actualLowerBandwidth) {
            lowerBandwidthLimit = actualDspCutoffFreq * 1.5;
        }
    }

    if (desiredImpedanceFreq > 0.0) {
        desiredImpedanceFreqLabel->setText("Desired Impedance Test Frequency: " +
                                           QString::number(desiredImpedanceFreq, 'f', 0) +
                                           " Hz");
        impedancePeriod = qRound(boardSampleRate / desiredImpedanceFreq);
        if (impedancePeriod >= 4 && impedancePeriod <= 1024 &&
                desiredImpedanceFreq >= lowerBandwidthLimit &&
                desiredImpedanceFreq <= upperBandwidthLimit) {
            actualImpedanceFreq = boardSampleRate / impedancePeriod;
            impedanceFreqValid = true;
        } else {
            actualImpedanceFreq = 0.0;
            impedanceFreqValid = false;
        }
    } else {
        desiredImpedanceFreqLabel->setText("Desired Impedance Test Frequency: -");
        actualImpedanceFreq = 0.0;
        impedanceFreqValid = false;
    }
    if (impedanceFreqValid) {
        actualImpedanceFreqLabel->setText("Actual Impedance Test Frequency: " +
                                          QString::number(actualImpedanceFreq, 'f', 1) +
                                          " Hz");
    } else {
        actualImpedanceFreqLabel->setText("Actual Impedance Test Frequency: -");
    }
    runImpedanceTestButton->setEnabled(impedanceFreqValid);
}

// Rename selected channel.
void MainWindow::renameChannel()
{
    QString newChannelName;

    RenameChannelDialog renameChannelDialog(wavePlot->getNativeChannelName(),
                                            wavePlot->getChannelName(), this);
    if (renameChannelDialog.exec()) {
        newChannelName = renameChannelDialog.nameLineEdit->text();
        wavePlot->setChannelName(newChannelName);
        wavePlot->refreshScreen();
    }
    wavePlot->setFocus();
}

void MainWindow::sortChannelsByName()
{
    wavePlot->sortChannelsByName();
    wavePlot->refreshScreen();
    wavePlot->setFocus();
}

void MainWindow::sortChannelsByNumber()
{
    wavePlot->sortChannelsByNumber();
    wavePlot->refreshScreen();
    wavePlot->setFocus();
}

void MainWindow::restoreOriginalChannelOrder()
{
    wavePlot->sortChannelsByNumber();
    wavePlot->refreshScreen();
    wavePlot->setFocus();
}

void MainWindow::alphabetizeChannels()
{
    wavePlot->sortChannelsByName();
    wavePlot->refreshScreen();
    wavePlot->setFocus();
}

void MainWindow::toggleChannelEnable()
{
    wavePlot->toggleSelectedChannelEnable();
    wavePlot->setFocus();
}

void MainWindow::enableAllChannels()
{
    wavePlot->enableAllChannels();
    wavePlot->setFocus();
}

void MainWindow::disableAllChannels()
{
    wavePlot->disableAllChannels();
    wavePlot->setFocus();
}

void MainWindow::changePort(int port)
{
    wavePlot->setPort(port);
    wavePlot->setFocus();
}

void MainWindow::changeDacGain(int index)
{
    if (!synthMode) {
        evalBoard->setDacGain(index);
    }
    setDacGainLabel(index);
    wavePlot->setFocus();
}

void MainWindow::setDacGainLabel(int gain)
{
    dacGainLabel->setText(QString::number(515 * pow(2.0, gain)) + " V/V");
}

void MainWindow::changeDacNoiseSuppress(int index)
{
    if (!synthMode) {
        evalBoard->setAudioNoiseSuppress(index);
    }
    setDacNoiseSuppressLabel(index);
    wavePlot->setFocus();
}

void MainWindow::setDacNoiseSuppressLabel(int noiseSuppress)
{
    dacNoiseSuppressLabel->setText("+/-" +
                                   QString::number(3.12 * noiseSuppress, 'f', 0) +
                                   " " + QSTRING_MU_SYMBOL + "V");
}

// Enable or disable DAC on USB interface board.
void MainWindow::dacEnable(bool enable)
{
    int dacChannel = dacButtonGroup->checkedId();

    dacEnabled[dacChannel] = enable;
    if (!synthMode) {
        evalBoard->enableDac(dacChannel, enable);
    }
    if (dacSelectedChannel[dacChannel]) {
        setDacChannelLabel(dacChannel, dacSelectedChannel[dacChannel]->customChannelName,
                           dacSelectedChannel[dacChannel]->nativeChannelName);
    } else {
        setDacChannelLabel(dacChannel, "n/a", "n/a");
    }
    wavePlot->setFocus();
}

// Route selected amplifier channel to selected DAC.
void MainWindow::dacSetChannel()
{
    int dacChannel = dacButtonGroup->checkedId();
    SignalChannel *selectedChannel = wavePlot->selectedChannel();
    if (selectedChannel->signalType == AmplifierSignal) {
        // If DAC is not yet enabled, enable it.
        if (!dacEnabled[dacChannel]) {
            dacEnableCheckBox->setChecked(true);
            dacEnable(true);
        }
        // Set DAC to selected channel and label it accordingly.
        dacSelectedChannel[dacChannel] = selectedChannel;
        if (!synthMode) {
            evalBoard->selectDacDataStream(dacChannel, selectedChannel->boardStream);
            evalBoard->selectDacDataChannel(dacChannel, selectedChannel->chipChannel);
        }
        setDacChannelLabel(dacChannel, selectedChannel->customChannelName,
                           selectedChannel->nativeChannelName);
    }
    wavePlot->setFocus();
}

void MainWindow::dacSelected(int dacChannel)
{
    dacEnableCheckBox->setChecked(dacEnabled[dacChannel]);
    wavePlot->setFocus();
}

// Label DAC selection button in GUI with selected amplifier channel.
void MainWindow::setDacChannelLabel(int dacChannel, QString channel,
                                    QString name)
{
    QString text;

    text = QString::number(dacChannel + 1);
    // if (dacChannel == 0) text += " (Audio L)";
    // if (dacChannel == 1) text += " (Audio R)";
    text += ": ";
    if (dacEnabled[dacChannel] == false) {
        text += "off";
    } else {
        text += name + " (" + channel + ")";
    }

    switch (dacChannel) {
    case 0:
        dacButton1->setText(text);
        break;
    case 1:
        dacButton2->setText(text);
        break;
    case 2:
        dacButton3->setText(text);
        break;
    case 3:
        dacButton4->setText(text);
        break;
    case 4:
        dacButton5->setText(text);
        break;
    case 5:
        dacButton6->setText(text);
        break;
    case 6:
        dacButton7->setText(text);
        break;
    case 7:
        dacButton8->setText(text);
        break;
    }
}

// Change notch filter settings.
void MainWindow::changeNotchFilter(int notchFilterIndex)
{
    switch (notchFilterIndex) {
    case 0:
        notchFilterEnabled = false;
        break;
    case 1:
        notchFilterFrequency = 50.0;
        notchFilterEnabled = true;
        break;
    case 2:
        notchFilterFrequency = 60.0;
        notchFilterEnabled = true;
        break;
    }
    signalProcessor->setNotchFilter(notchFilterFrequency, notchFilterBandwidth, boardSampleRate);
    signalProcessor->setNotchFilterEnabled(notchFilterEnabled);
    wavePlot->setFocus();
}

// Enable/disable software/FPGA high-pass filter.
void MainWindow::enableHighpassFilter(bool enable)
{
    highpassFilterEnabled = enable;
    signalProcessor->setHighpassFilterEnabled(enable);
    if (!synthMode) {
        evalBoard->enableDacHighpassFilter(enable);
    }
    wavePlot->setFocus();
}

// Update software/FPGA high-pass filter when LineEdit changes.
void MainWindow::highpassFilterLineEditChanged()
{
    setHighpassFilterCutoff(highpassFilterLineEdit->text().toDouble());
}

// Update software/FPGA high-pass filter cutoff frequency.
void MainWindow::setHighpassFilterCutoff(double cutoff)
{
    highpassFilterFrequency = cutoff;
    signalProcessor->setHighpassFilter(cutoff , boardSampleRate);
    if (!synthMode) {
        evalBoard->setDacHighpassFilter(cutoff);
    }
}

// Change RHD2000 interface board amplifier sample rate.
// This function also updates the Aux1, Aux2, and Aux3 SPI command
// sequences that are used to set RAM registers on the RHD2000 chips.
void MainWindow::changeSampleRate(int sampleRateIndex)
{
    Rhd2000EvalBoard::AmplifierSampleRate sampleRate =
            Rhd2000EvalBoard::SampleRate1000Hz;

    // Note: numUsbBlocksToRead is set to give an approximate frame rate of
    // 30 Hz for most sampling rates.

    switch (sampleRateIndex) {
    case 0:
        sampleRate = Rhd2000EvalBoard::SampleRate1000Hz;
        boardSampleRate = 1000.0;
        numUsbBlocksToRead = 1;
        break;
    case 1:
        sampleRate = Rhd2000EvalBoard::SampleRate1250Hz;
        boardSampleRate = 1250.0;
        numUsbBlocksToRead = 1;
        break;
    case 2:
        sampleRate = Rhd2000EvalBoard::SampleRate1500Hz;
        boardSampleRate = 1500.0;
        numUsbBlocksToRead = 1;
        break;
    case 3:
        sampleRate = Rhd2000EvalBoard::SampleRate2000Hz;
        boardSampleRate = 2000.0;
        numUsbBlocksToRead = 1;
        break;
    case 4:
        sampleRate = Rhd2000EvalBoard::SampleRate2500Hz;
        boardSampleRate = 2500.0;
        numUsbBlocksToRead = 2;
        break;
    case 5:
        sampleRate = Rhd2000EvalBoard::SampleRate3000Hz;
        boardSampleRate = 3000.0;
        numUsbBlocksToRead = 2;
        break;
    case 6:
        sampleRate = Rhd2000EvalBoard::SampleRate3333Hz;
        boardSampleRate = 10000.0 / 3.0;
        numUsbBlocksToRead = 2;
        break;
    case 7:
        sampleRate = Rhd2000EvalBoard::SampleRate4000Hz;
        boardSampleRate = 4000.0;
        numUsbBlocksToRead = 2;
        break;
    case 8:
        sampleRate = Rhd2000EvalBoard::SampleRate5000Hz;
        boardSampleRate = 5000.0;
        numUsbBlocksToRead = 3;
        break;
    case 9:
        sampleRate = Rhd2000EvalBoard::SampleRate6250Hz;
        boardSampleRate = 6250.0;
        numUsbBlocksToRead = 4;
        break;
    case 10:
        sampleRate = Rhd2000EvalBoard::SampleRate8000Hz;
        boardSampleRate = 8000.0;
        numUsbBlocksToRead = 4;
        break;
    case 11:
        sampleRate = Rhd2000EvalBoard::SampleRate10000Hz;
        boardSampleRate = 10000.0;
        numUsbBlocksToRead = 6;
        break;
    case 12:
        sampleRate = Rhd2000EvalBoard::SampleRate12500Hz;
        boardSampleRate = 12500.0;
        numUsbBlocksToRead = 7;
        break;
    case 13:
        sampleRate = Rhd2000EvalBoard::SampleRate15000Hz;
        boardSampleRate = 15000.0;
        numUsbBlocksToRead = 8;
        break;
    case 14:
        sampleRate = Rhd2000EvalBoard::SampleRate20000Hz;
        boardSampleRate = 20000.0;
        numUsbBlocksToRead = 12;
        break;
    case 15:
        sampleRate = Rhd2000EvalBoard::SampleRate25000Hz;
        boardSampleRate = 25000.0;
        numUsbBlocksToRead = 14;
        break;
    case 16:
        sampleRate = Rhd2000EvalBoard::SampleRate30000Hz;
        boardSampleRate = 30000.0;
        numUsbBlocksToRead = 16;
        break;
    }

    wavePlot->setNumUsbBlocksToPlot(numUsbBlocksToRead);

    // Set up an RHD2000 register object using this sample rate to
    // optimize MUX-related register settings.
    Rhd2000Registers chipRegisters(boardSampleRate);

    int commandSequenceLength;
    vector<int> commandList;

    if (!synthMode) {
        evalBoard->setSampleRate(sampleRate);

        // Now that we have set our sampling rate, we can set the MISO sampling delay
        // which is dependent on the sample rate.
        if (manualDelayEnabled[0]) {
            evalBoard->setCableDelay(Rhd2000EvalBoard::PortA, manualDelay[0]);
        } else {
            evalBoard->setCableLengthMeters(Rhd2000EvalBoard::PortA, cableLengthPortA);
        }
        if (manualDelayEnabled[1]) {
            evalBoard->setCableDelay(Rhd2000EvalBoard::PortB, manualDelay[1]);
        } else {
            evalBoard->setCableLengthMeters(Rhd2000EvalBoard::PortB, cableLengthPortB);
        }
        if (manualDelayEnabled[2]) {
            evalBoard->setCableDelay(Rhd2000EvalBoard::PortC, manualDelay[2]);
        } else {
            evalBoard->setCableLengthMeters(Rhd2000EvalBoard::PortC, cableLengthPortC);
        }
        if (manualDelayEnabled[3]) {
            evalBoard->setCableDelay(Rhd2000EvalBoard::PortD, manualDelay[3]);
        } else {
            evalBoard->setCableLengthMeters(Rhd2000EvalBoard::PortD, cableLengthPortD);
        }

        // Create command lists to be uploaded to auxiliary command slots.

        // Create a command list for the AuxCmd1 slot.  This command sequence will create a 250 Hz,
        // zero-amplitude sine wave (i.e., a flatline).  We will change this when we want to perform
        // impedance testing.
        // commandSequenceLength = chipRegisters.createCommandListZcheckDac(commandList, 250.0, 0.0);

        // Create a command list for the AuxCmd1 slot.  This command sequence will continuously
        // update Register 3, which controls the auxiliary digital output pin on each RHD2000 chip.
        // In concert with the v1.4 Rhythm FPGA code, this permits real-time control of the digital
        // output pin on chips on each SPI port.
        chipRegisters.setDigOutLow();   // Take auxiliary output out of HiZ mode.
        commandSequenceLength = chipRegisters.createCommandListUpdateDigOut(commandList);
        evalBoard->uploadCommandList(commandList, Rhd2000EvalBoard::AuxCmd1, 0);
        evalBoard->selectAuxCommandLength(Rhd2000EvalBoard::AuxCmd1, 0, commandSequenceLength - 1);
        evalBoard->selectAuxCommandBank(Rhd2000EvalBoard::PortA, Rhd2000EvalBoard::AuxCmd1, 0);
        evalBoard->selectAuxCommandBank(Rhd2000EvalBoard::PortB, Rhd2000EvalBoard::AuxCmd1, 0);
        evalBoard->selectAuxCommandBank(Rhd2000EvalBoard::PortC, Rhd2000EvalBoard::AuxCmd1, 0);
        evalBoard->selectAuxCommandBank(Rhd2000EvalBoard::PortD, Rhd2000EvalBoard::AuxCmd1, 0);

        // Next, we'll create a command list for the AuxCmd2 slot.  This command sequence
        // will sample the temperature sensor and other auxiliary ADC inputs.

        commandSequenceLength = chipRegisters.createCommandListTempSensor(commandList);
        evalBoard->uploadCommandList(commandList, Rhd2000EvalBoard::AuxCmd2, 0);
        evalBoard->selectAuxCommandLength(Rhd2000EvalBoard::AuxCmd2, 0, commandSequenceLength - 1);
        evalBoard->selectAuxCommandBank(Rhd2000EvalBoard::PortA, Rhd2000EvalBoard::AuxCmd2, 0);
        evalBoard->selectAuxCommandBank(Rhd2000EvalBoard::PortB, Rhd2000EvalBoard::AuxCmd2, 0);
        evalBoard->selectAuxCommandBank(Rhd2000EvalBoard::PortC, Rhd2000EvalBoard::AuxCmd2, 0);
        evalBoard->selectAuxCommandBank(Rhd2000EvalBoard::PortD, Rhd2000EvalBoard::AuxCmd2, 0);

        // For the AuxCmd3 slot, we will create three command sequences.  All sequences
        // will configure and read back the RHD2000 chip registers, but one sequence will
        // also run ADC calibration.  Another sequence will enable amplifier 'fast settle'.
    }
    // Before generating register configuration command sequences, set amplifier
    // bandwidth paramters.

    actualDspCutoffFreq = chipRegisters.setDspCutoffFreq(desiredDspCutoffFreq);
    actualLowerBandwidth = chipRegisters.setLowerBandwidth(desiredLowerBandwidth);
    actualUpperBandwidth = chipRegisters.setUpperBandwidth(desiredUpperBandwidth);
    chipRegisters.enableDsp(dspEnabled);

    if (dspEnabled) {
        dspCutoffFreqLabel->setText("Desired/Actual DSP Cutoff: " +
                                    QString::number(desiredDspCutoffFreq, 'f', 2) + " Hz / " +
                                    QString::number(actualDspCutoffFreq, 'f', 2) + " Hz");
    } else {
        dspCutoffFreqLabel->setText("Desired/Actual DSP Cutoff: DSP disabled");
    }
    lowerBandwidthLabel->setText("Desired/Actual Lower Bandwidth: " +
                                 QString::number(desiredLowerBandwidth, 'f', 2) + " Hz / " +
                                 QString::number(actualLowerBandwidth, 'f', 2) + " Hz");
    upperBandwidthLabel->setText("Desired/Actual Upper Bandwidth: " +
                                 QString::number(desiredUpperBandwidth / 1000.0, 'f', 2) + " kHz / " +
                                 QString::number(actualUpperBandwidth / 1000.0, 'f', 2) + " kHz");

    if (!synthMode) {
        chipRegisters.createCommandListRegisterConfig(commandList, true);
        // Upload version with ADC calibration to AuxCmd3 RAM Bank 0.
        evalBoard->uploadCommandList(commandList, Rhd2000EvalBoard::AuxCmd3, 0);
        evalBoard->selectAuxCommandLength(Rhd2000EvalBoard::AuxCmd3, 0,
                                          commandSequenceLength - 1);

        commandSequenceLength = chipRegisters.createCommandListRegisterConfig(commandList, false);
        // Upload version with no ADC calibration to AuxCmd3 RAM Bank 1.
        evalBoard->uploadCommandList(commandList, Rhd2000EvalBoard::AuxCmd3, 1);
        evalBoard->selectAuxCommandLength(Rhd2000EvalBoard::AuxCmd3, 0,
                                          commandSequenceLength - 1);

        chipRegisters.setFastSettle(true);
        commandSequenceLength = chipRegisters.createCommandListRegisterConfig(commandList, false);
        // Upload version with fast settle enabled to AuxCmd3 RAM Bank 2.
        evalBoard->uploadCommandList(commandList, Rhd2000EvalBoard::AuxCmd3, 2);
        evalBoard->selectAuxCommandLength(Rhd2000EvalBoard::AuxCmd3, 0,
                                          commandSequenceLength - 1);
        chipRegisters.setFastSettle(false);

        evalBoard->selectAuxCommandBank(Rhd2000EvalBoard::PortA, Rhd2000EvalBoard::AuxCmd3,
                                        fastSettleEnabled ? 2 : 1);
        evalBoard->selectAuxCommandBank(Rhd2000EvalBoard::PortB, Rhd2000EvalBoard::AuxCmd3,
                                        fastSettleEnabled ? 2 : 1);
        evalBoard->selectAuxCommandBank(Rhd2000EvalBoard::PortC, Rhd2000EvalBoard::AuxCmd3,
                                        fastSettleEnabled ? 2 : 1);
        evalBoard->selectAuxCommandBank(Rhd2000EvalBoard::PortD, Rhd2000EvalBoard::AuxCmd3,
                                        fastSettleEnabled ? 2 : 1);
    }

    wavePlot->setSampleRate(boardSampleRate);

    signalProcessor->setNotchFilter(notchFilterFrequency, notchFilterBandwidth, boardSampleRate);
    signalProcessor->setHighpassFilter(highpassFilterFrequency, boardSampleRate);

    if (!synthMode) {
        evalBoard->setDacHighpassFilter(highpassFilterFrequency);
    }

    if (spikeScopeDialog) {
        spikeScopeDialog->setSampleRate(boardSampleRate);
    }

    impedanceFreqValid = false;
    updateImpedanceFrequency();

    wavePlot->setFocus();
}

// Attempt to open a USB interface board connected to a USB port.
void MainWindow::openInterfaceBoard()
{
    evalBoard = new Rhd2000EvalBoard;

    // Open Opal Kelly XEM6010 board.
    int errorCode = evalBoard->open();

    // cerr << "In MainWindow::openInterfaceBoard.  errorCode = " << errorCode << "\n";

    if (errorCode < 1) {
        QMessageBox::StandardButton r;
        if (errorCode == -1) {
            r = QMessageBox::question(this, tr("Cannot load Opal Kelly FrontPanel DLL"),
                                  tr("Opal Kelly USB drivers not installed.  "
                                     "Click OK to run application with synthesized biopotential data for "
                                     "demonstration purposes."
                                     "<p>To use the RHD2000 Interface, click Cancel, load the correct "
                                     "Opal Kelly drivers, then restart the application."
                                     "<p>Visit http://www.intantech.com for more information."),
                                  QMessageBox::Ok | QMessageBox::Cancel);
        } else {
            r = QMessageBox::question(this, tr("Intan RHD2000 USB Interface Board Not Found"),
                                  tr("Intan Technologies RHD2000 Interface not found on any USB port.  "
                                     "Click OK to run application with synthesized biopotential data for "
                                     "demonstration purposes."
                                     "<p>To use the RHD2000 Interface, click Cancel, connect the device "
                                     "to a USB port, then restart the application."
                                     "<p>Visit http://www.intantech.com for more information."),
                                  QMessageBox::Ok | QMessageBox::Cancel);
        }
        if (r == QMessageBox::Ok) {
            QMessageBox::information(this, tr("Synthesized Data Mode"),
                                     tr("The software will generate synthetic biopotentials for "
                                        "demonstration purposes."
                                        "<p>If the amplifier sampling rate is set to 5 kS/s or higher, neural "
                                        "spikes will be generated.  If the sampling rate is set lower than 5 kS/s, "
                                        "ECG signals will be generated."
                                        "<p>In demonstration mode, the audio output will not work since this "
                                        "requires the line out signal from the interface board.  Also, electrode "
                                        "impedance testing is disabled in this mode."),
                                     QMessageBox::Ok);
            synthMode = true;
            delete evalBoard;
            evalBoard = 0;
            return;
        } else {
            exit(EXIT_FAILURE); // abort application
        }
    }

    // Load Rhythm FPGA configuration bitfile (provided by Intan Technologies).
    string bitfilename =
            QString(QCoreApplication::applicationDirPath() + "/main.bit").toStdString();

    if (!evalBoard->uploadFpgaBitfile(bitfilename)) {
        QMessageBox::critical(this, tr("FPGA Configuration File Upload Error"),
                              tr("Cannot upload configuration file to FPGA.  Make sure file main.bit "
                                 "is in the same directory as the executable file."));
        exit(EXIT_FAILURE); // abort application
    }

    // Initialize interface board.
    evalBoard->initialize();

    // Read 4-bit board mode.
    evalBoardMode = evalBoard->getBoardMode();

    // Set sample rate and upload all auxiliary SPI command sequences.
    changeSampleRate(sampleRateComboBox->currentIndex());

    // Select RAM Bank 0 for AuxCmd3 initially, so the ADC is calibrated.
    evalBoard->selectAuxCommandBank(Rhd2000EvalBoard::PortA, Rhd2000EvalBoard::AuxCmd3, 0);
    evalBoard->selectAuxCommandBank(Rhd2000EvalBoard::PortB, Rhd2000EvalBoard::AuxCmd3, 0);
    evalBoard->selectAuxCommandBank(Rhd2000EvalBoard::PortC, Rhd2000EvalBoard::AuxCmd3, 0);
    evalBoard->selectAuxCommandBank(Rhd2000EvalBoard::PortD, Rhd2000EvalBoard::AuxCmd3, 0);

    // Since our longest command sequence is 60 commands, we run the SPI
    // interface for 60 samples.
    evalBoard->setMaxTimeStep(60);
    evalBoard->setContinuousRunMode(false);

    // Start SPI interface.
    evalBoard->run();

    // Wait for the 60-sample run to complete.
    while (evalBoard->isRunning()) {
        qApp->processEvents();
    }

    // Read the resulting single data block from the USB interface.
    Rhd2000DataBlock *dataBlock = new Rhd2000DataBlock(evalBoard->getNumEnabledDataStreams());
    evalBoard->readDataBlock(dataBlock);

    // We don't need to do anything with this data block; it was used to configure
    // the RHD2000 amplifier chips and to run ADC calibration.
    delete dataBlock;

    // Now that ADC calibration has been performed, we switch to the command sequence
    // that does not execute ADC calibration.
    evalBoard->selectAuxCommandBank(Rhd2000EvalBoard::PortA, Rhd2000EvalBoard::AuxCmd3,
                                    fastSettleEnabled ? 2 : 1);
    evalBoard->selectAuxCommandBank(Rhd2000EvalBoard::PortB, Rhd2000EvalBoard::AuxCmd3,
                                    fastSettleEnabled ? 2 : 1);
    evalBoard->selectAuxCommandBank(Rhd2000EvalBoard::PortC, Rhd2000EvalBoard::AuxCmd3,
                                    fastSettleEnabled ? 2 : 1);
    evalBoard->selectAuxCommandBank(Rhd2000EvalBoard::PortD, Rhd2000EvalBoard::AuxCmd3,
                                    fastSettleEnabled ? 2 : 1);

    // Set default configuration for all eight DACs on interface board.
    evalBoard->enableDac(0, false);
    evalBoard->enableDac(1, false);
    evalBoard->enableDac(2, false);
    evalBoard->enableDac(3, false);
    evalBoard->enableDac(4, false);
    evalBoard->enableDac(5, false);
    evalBoard->enableDac(6, false);
    evalBoard->enableDac(7, false);
    evalBoard->selectDacDataStream(0, 8);   // Initially point DACs to DacManual1 input
    evalBoard->selectDacDataStream(1, 8);
    evalBoard->selectDacDataStream(2, 8);
    evalBoard->selectDacDataStream(3, 8);
    evalBoard->selectDacDataStream(4, 8);
    evalBoard->selectDacDataStream(5, 8);
    evalBoard->selectDacDataStream(6, 8);
    evalBoard->selectDacDataStream(7, 8);
    evalBoard->selectDacDataChannel(0, 0);
    evalBoard->selectDacDataChannel(1, 1);
    evalBoard->selectDacDataChannel(2, 0);
    evalBoard->selectDacDataChannel(3, 0);
    evalBoard->selectDacDataChannel(4, 0);
    evalBoard->selectDacDataChannel(5, 0);
    evalBoard->selectDacDataChannel(6, 0);
    evalBoard->selectDacDataChannel(7, 0);
    evalBoard->setDacManual(32768);
    evalBoard->setDacGain(0);
    evalBoard->setAudioNoiseSuppress(0);

    evalBoard->setCableLengthMeters(Rhd2000EvalBoard::PortA, 0.0);
    evalBoard->setCableLengthMeters(Rhd2000EvalBoard::PortB, 0.0);
    evalBoard->setCableLengthMeters(Rhd2000EvalBoard::PortC, 0.0);
    evalBoard->setCableLengthMeters(Rhd2000EvalBoard::PortD, 0.0);
}

// Scan SPI Ports A-D to find all connected RHD2000 amplifier chips.
// Read the chip ID from on-chip ROM register 63 to determine the number
// of amplifier channels on each port.  This process is repeated at all
// possible MISO delays in the FPGA, and the cable length on each port
// is inferred from this.
void MainWindow::findConnectedAmplifiers()
{
    int delay, stream, id, i, channel, port, auxName, vddName;
    int register59Value;
    int numChannelsOnPort[4] = {0, 0, 0, 0};
    QVector<int> portIndex, portIndexOld, chipIdOld;

    portIndex.resize(MAX_NUM_DATA_STREAMS);
    portIndexOld.resize(MAX_NUM_DATA_STREAMS);
    chipIdOld.resize(MAX_NUM_DATA_STREAMS);

    chipId.fill(-1);
    chipIdOld.fill(-1);
    portIndexOld.fill(-1);
    portIndex.fill(-1);

    Rhd2000EvalBoard::BoardDataSource initStreamPorts[8] = {
        Rhd2000EvalBoard::PortA1,
        Rhd2000EvalBoard::PortA2,
        Rhd2000EvalBoard::PortB1,
        Rhd2000EvalBoard::PortB2,
        Rhd2000EvalBoard::PortC1,
        Rhd2000EvalBoard::PortC2,
        Rhd2000EvalBoard::PortD1,
        Rhd2000EvalBoard::PortD2 };

    Rhd2000EvalBoard::BoardDataSource initStreamDdrPorts[8] = {
        Rhd2000EvalBoard::PortA1Ddr,
        Rhd2000EvalBoard::PortA2Ddr,
        Rhd2000EvalBoard::PortB1Ddr,
        Rhd2000EvalBoard::PortB2Ddr,
        Rhd2000EvalBoard::PortC1Ddr,
        Rhd2000EvalBoard::PortC2Ddr,
        Rhd2000EvalBoard::PortD1Ddr,
        Rhd2000EvalBoard::PortD2Ddr };

    if (!synthMode) {
        // Set sampling rate to highest value for maximum temporal resolution.
        changeSampleRate(sampleRateComboBox->count() - 1);

        // Enable all data streams, and set sources to cover one or two chips
        // on Ports A-D.
        evalBoard->setDataSource(0, initStreamPorts[0]);
        evalBoard->setDataSource(1, initStreamPorts[1]);
        evalBoard->setDataSource(2, initStreamPorts[2]);
        evalBoard->setDataSource(3, initStreamPorts[3]);
        evalBoard->setDataSource(4, initStreamPorts[4]);
        evalBoard->setDataSource(5, initStreamPorts[5]);
        evalBoard->setDataSource(6, initStreamPorts[6]);
        evalBoard->setDataSource(7, initStreamPorts[7]);

        portIndexOld[0] = 0;
        portIndexOld[1] = 0;
        portIndexOld[2] = 1;
        portIndexOld[3] = 1;
        portIndexOld[4] = 2;
        portIndexOld[5] = 2;
        portIndexOld[6] = 3;
        portIndexOld[7] = 3;

        evalBoard->enableDataStream(0, true);
        evalBoard->enableDataStream(1, true);
        evalBoard->enableDataStream(2, true);
        evalBoard->enableDataStream(3, true);
        evalBoard->enableDataStream(4, true);
        evalBoard->enableDataStream(5, true);
        evalBoard->enableDataStream(6, true);
        evalBoard->enableDataStream(7, true);

        evalBoard->selectAuxCommandBank(Rhd2000EvalBoard::PortA,
                                        Rhd2000EvalBoard::AuxCmd3, 0);
        evalBoard->selectAuxCommandBank(Rhd2000EvalBoard::PortB,
                                        Rhd2000EvalBoard::AuxCmd3, 0);
        evalBoard->selectAuxCommandBank(Rhd2000EvalBoard::PortC,
                                        Rhd2000EvalBoard::AuxCmd3, 0);
        evalBoard->selectAuxCommandBank(Rhd2000EvalBoard::PortD,
                                        Rhd2000EvalBoard::AuxCmd3, 0);

        // Since our longest command sequence is 60 commands, we run the SPI
        // interface for 60 samples.
        evalBoard->setMaxTimeStep(60);
        evalBoard->setContinuousRunMode(false);

        Rhd2000DataBlock *dataBlock =
                new Rhd2000DataBlock(evalBoard->getNumEnabledDataStreams());
        QVector<int> sumGoodDelays(MAX_NUM_DATA_STREAMS, 0);
        QVector<int> indexFirstGoodDelay(MAX_NUM_DATA_STREAMS, -1);
        QVector<int> indexSecondGoodDelay(MAX_NUM_DATA_STREAMS, -1);

        // Run SPI command sequence at all 16 possible FPGA MISO delay settings
        // to find optimum delay for each SPI interface cable.
        for (delay = 0; delay < 16; ++delay) {
            evalBoard->setCableDelay(Rhd2000EvalBoard::PortA, delay);
            evalBoard->setCableDelay(Rhd2000EvalBoard::PortB, delay);
            evalBoard->setCableDelay(Rhd2000EvalBoard::PortC, delay);
            evalBoard->setCableDelay(Rhd2000EvalBoard::PortD, delay);

            // Start SPI interface.
            evalBoard->run();

            // Wait for the 60-sample run to complete.
            while (evalBoard->isRunning()) {
                qApp->processEvents();
            }

            // Read the resulting single data block from the USB interface.
            evalBoard->readDataBlock(dataBlock);

            // Read the Intan chip ID number from each RHD2000 chip found.
            // Record delay settings that yield good communication with the chip.
            for (stream = 0; stream < MAX_NUM_DATA_STREAMS; ++stream) {
                id = deviceId(dataBlock, stream, register59Value);

                if (id == CHIP_ID_RHD2132 || id == CHIP_ID_RHD2216 ||
                        (id == CHIP_ID_RHD2164 && register59Value == REGISTER_59_MISO_A)) {
                    // cout << "Delay: " << delay << " on stream " << stream << " is good." << endl;
                    sumGoodDelays[stream] = sumGoodDelays[stream] + 1;
                    if (indexFirstGoodDelay[stream] == -1) {
                        indexFirstGoodDelay[stream] = delay;
                        chipIdOld[stream] = id;
                    } else if (indexSecondGoodDelay[stream] == -1) {
                        indexSecondGoodDelay[stream] = delay;
                        chipIdOld[stream] = id;
                    }
                }
            }
        }

        // Set cable delay settings that yield good communication with each
        // RHD2000 chip.
        QVector<int> optimumDelay(MAX_NUM_DATA_STREAMS, 0);
        for (stream = 0; stream < MAX_NUM_DATA_STREAMS; ++stream) {
            if (sumGoodDelays[stream] == 1 || sumGoodDelays[stream] == 2) {
                optimumDelay[stream] = indexFirstGoodDelay[stream];
            } else if (sumGoodDelays[stream] > 2) {
                optimumDelay[stream] = indexSecondGoodDelay[stream];
            }
        }

        evalBoard->setCableDelay(Rhd2000EvalBoard::PortA,
                                 qMax(optimumDelay[0], optimumDelay[1]));
        evalBoard->setCableDelay(Rhd2000EvalBoard::PortB,
                                 qMax(optimumDelay[2], optimumDelay[3]));
        evalBoard->setCableDelay(Rhd2000EvalBoard::PortC,
                                 qMax(optimumDelay[4], optimumDelay[5]));
        evalBoard->setCableDelay(Rhd2000EvalBoard::PortD,
                                 qMax(optimumDelay[6], optimumDelay[7]));

//        cout << "Port A cable delay: " << qMax(optimumDelay[0], optimumDelay[1]) << endl;
//        cout << "Port B cable delay: " << qMax(optimumDelay[2], optimumDelay[3]) << endl;
//        cout << "Port C cable delay: " << qMax(optimumDelay[4], optimumDelay[5]) << endl;
//        cout << "Port D cable delay: " << qMax(optimumDelay[6], optimumDelay[7]) << endl;


        cableLengthPortA =
                evalBoard->estimateCableLengthMeters(qMax(optimumDelay[0], optimumDelay[1]));
        cableLengthPortB =
                evalBoard->estimateCableLengthMeters(qMax(optimumDelay[2], optimumDelay[3]));
        cableLengthPortC =
                evalBoard->estimateCableLengthMeters(qMax(optimumDelay[4], optimumDelay[5]));
        cableLengthPortD =
                evalBoard->estimateCableLengthMeters(qMax(optimumDelay[6], optimumDelay[7]));

        delete dataBlock;

    } else {
        // If we are running with synthetic data (i.e., no interface board), just assume
        // that one RHD2132 is plugged into Port A.
        chipIdOld[0] = CHIP_ID_RHD2132;
        portIndexOld[0] = 0;
    }

    // Now that we know which RHD2000 amplifier chips are plugged into each SPI port,
    // add up the total number of amplifier channels on each port and calcualate the number
    // of data streams necessary to convey this data over the USB interface.
    int numStreamsRequired = 0;
    bool rhd2216ChipPresent = false;
    for (stream = 0; stream < MAX_NUM_DATA_STREAMS; ++stream) {
        if (chipIdOld[stream] == CHIP_ID_RHD2216) {
            numStreamsRequired++;
            if (numStreamsRequired <= MAX_NUM_DATA_STREAMS) {
                numChannelsOnPort[portIndexOld[stream]] += 16;
            }
            rhd2216ChipPresent = true;
        }
        if (chipIdOld[stream] == CHIP_ID_RHD2132) {
            numStreamsRequired++;
            if (numStreamsRequired <= MAX_NUM_DATA_STREAMS) {
                numChannelsOnPort[portIndexOld[stream]] += 32;
            }
        }
        if (chipIdOld[stream] == CHIP_ID_RHD2164) {
            numStreamsRequired += 2;
            if (numStreamsRequired <= MAX_NUM_DATA_STREAMS) {
                numChannelsOnPort[portIndexOld[stream]] += 64;
            }
        }
    }

    // If the user plugs in more chips than the USB interface can support, throw
    // up a warning that not all channels will be displayed.
    if (numStreamsRequired > 8) {
        if (rhd2216ChipPresent) {
            QMessageBox::warning(this, tr("Capacity of USB Interface Exceeded"),
                    tr("This RHD2000 USB interface board can support 256 only amplifier channels."
                       "<p>More than 256 total amplifier channels are currently connected.  (Each RHD2216 "
                       "chip counts as 32 channels for USB interface purposes.)"
                       "<p>Amplifier chips exceeding this limit will not appear in the GUI."));
        } else {
            QMessageBox::warning(this, tr("Capacity of USB Interface Exceeded"),
                    tr("This RHD2000 USB interface board can support 256 only amplifier channels."
                       "<p>More than 256 total amplifier channels are currently connected."
                       "<p>Amplifier chips exceeding this limit will not appear in the GUI."));
        }
    }

    // Reconfigure USB data streams in consecutive order to accommodate all connected chips.
    stream = 0;
    for (int oldStream = 0; oldStream < MAX_NUM_DATA_STREAMS; ++oldStream) {
        if ((chipIdOld[oldStream] == CHIP_ID_RHD2216) && (stream < MAX_NUM_DATA_STREAMS)) {
            chipId[stream] = CHIP_ID_RHD2216;
            portIndex[stream] = portIndexOld[oldStream];
            if (!synthMode) {
                evalBoard->enableDataStream(stream, true);
                evalBoard->setDataSource(stream, initStreamPorts[oldStream]);
            }
            stream++;
        } else if ((chipIdOld[oldStream] == CHIP_ID_RHD2132) && (stream < MAX_NUM_DATA_STREAMS)) {
            chipId[stream] = CHIP_ID_RHD2132;
            portIndex[stream] = portIndexOld[oldStream];
            if (!synthMode) {
                evalBoard->enableDataStream(stream, true);
                evalBoard->setDataSource(stream, initStreamPorts[oldStream]);
            }
            stream++ ;
        } else if ((chipIdOld[oldStream] == CHIP_ID_RHD2164) && (stream < MAX_NUM_DATA_STREAMS - 1)) {
            chipId[stream] = CHIP_ID_RHD2164;
            chipId[stream + 1] =  CHIP_ID_RHD2164_B;
            portIndex[stream] = portIndexOld[oldStream];
            portIndex[stream + 1] = portIndexOld[oldStream];
            if (!synthMode) {
                evalBoard->enableDataStream(stream, true);
                evalBoard->enableDataStream(stream + 1, true);
                evalBoard->setDataSource(stream, initStreamPorts[oldStream]);
                evalBoard->setDataSource(stream + 1, initStreamDdrPorts[oldStream]);
            }
            stream += 2;
        }
    }

    // Disable unused data streams.
    for (; stream < MAX_NUM_DATA_STREAMS; ++stream) {
        if (!synthMode) {
            evalBoard->enableDataStream(stream, false);
        }
    }

    // Add channel descriptions to the SignalSources object to create a list of all waveforms.
    for (port = 0; port < 4; ++port) {
        if (numChannelsOnPort[port] == 0) {
            signalSources->signalPort[port].channel.clear();
            signalSources->signalPort[port].enabled = false;
        } else if (signalSources->signalPort[port].numAmplifierChannels() !=
                   numChannelsOnPort[port]) {  // if number of channels on port has changed...
            signalSources->signalPort[port].channel.clear();  // ...clear existing channels...
            // ...and create new ones.
            channel = 0;
            // Create amplifier channels for each chip.
            for (stream = 0; stream < MAX_NUM_DATA_STREAMS; ++stream) {
                if (portIndex[stream] == port) {
                    if (chipId[stream] == CHIP_ID_RHD2216) {
                        for (i = 0; i < 16; ++i) {
                            signalSources->signalPort[port].addAmplifierChannel(channel++, i, stream);
                        }
                    } else if (chipId[stream] == CHIP_ID_RHD2132) {
                        for (i = 0; i < 32; ++i) {
                            signalSources->signalPort[port].addAmplifierChannel(channel++, i, stream);
                        }
                    } else if (chipId[stream] == CHIP_ID_RHD2164) {
                        for (i = 0; i < 32; ++i) {  // 32 channels on MISO A; another 32 on MISO B
                            signalSources->signalPort[port].addAmplifierChannel(channel++, i, stream);
                        }
                    } else if (chipId[stream] == CHIP_ID_RHD2164_B) {
                        for (i = 0; i < 32; ++i) {  // 32 channels on MISO A; another 32 on MISO B
                            signalSources->signalPort[port].addAmplifierChannel(channel++, i, stream);
                        }
                    }
                }
            }
            // Now create auxiliary input channels and supply voltage channels for each chip.
            auxName = 1;
            vddName = 1;
            for (stream = 0; stream < MAX_NUM_DATA_STREAMS; ++stream) {
                if (portIndex[stream] == port) {
                    if (chipId[stream] == CHIP_ID_RHD2216 ||
                            chipId[stream] == CHIP_ID_RHD2132 ||
                            chipId[stream] == CHIP_ID_RHD2164) {
                        signalSources->signalPort[port].addAuxInputChannel(channel++, 0, auxName++, stream);
                        signalSources->signalPort[port].addAuxInputChannel(channel++, 1, auxName++, stream);
                        signalSources->signalPort[port].addAuxInputChannel(channel++, 2, auxName++, stream);
                        signalSources->signalPort[port].addSupplyVoltageChannel(channel++, 0, vddName++, stream);
                    }
                }
            }
        } else {    // If number of channels on port has not changed, don't create new channels (since this
                    // would clear all user-defined channel names.  But we must update the data stream indices
                    // on the port.
            channel = 0;
            // Update stream indices for amplifier channels.
            for (stream = 0; stream < MAX_NUM_DATA_STREAMS; ++stream) {
                if (portIndex[stream] == port) {
                    if (chipId[stream] == CHIP_ID_RHD2216) {
                        for (i = channel; i < channel + 16; ++i) {
                            signalSources->signalPort[port].channel[i].boardStream = stream;
                        }
                        channel += 16;
                    } else if (chipId[stream] == CHIP_ID_RHD2132) {
                        for (i = channel; i < channel + 32; ++i) {
                            signalSources->signalPort[port].channel[i].boardStream = stream;
                        }
                        channel += 32;
                    } else if (chipId[stream] == CHIP_ID_RHD2164) {
                        for (i = channel; i < channel + 32; ++i) {  // 32 channels on MISO A; another 32 on MISO B
                            signalSources->signalPort[port].channel[i].boardStream = stream;
                        }
                        channel += 32;
                    } else if (chipId[stream] == CHIP_ID_RHD2164_B) {
                        for (i = channel; i < channel + 32; ++i) {  // 32 channels on MISO A; another 32 on MISO B
                            signalSources->signalPort[port].channel[i].boardStream = stream;
                        }
                        channel += 32;
                    }
                }
            }
            // Update stream indices for auxiliary channels and supply voltage channels.
            for (stream = 0; stream < MAX_NUM_DATA_STREAMS; ++stream) {
                if (portIndex[stream] == port) {
                    if (chipId[stream] == CHIP_ID_RHD2216 ||
                            chipId[stream] == CHIP_ID_RHD2132 ||
                            chipId[stream] == CHIP_ID_RHD2164) {
                        signalSources->signalPort[port].channel[channel++].boardStream = stream;
                        signalSources->signalPort[port].channel[channel++].boardStream = stream;
                        signalSources->signalPort[port].channel[channel++].boardStream = stream;
                        signalSources->signalPort[port].channel[channel++].boardStream = stream;
                    }
                }
            }
        }
    }

    // Update Port A-D radio buttons in GUI

    if (signalSources->signalPort[0].numAmplifierChannels() == 0) {
        signalSources->signalPort[0].enabled = false;
        displayPortAButton->setEnabled(false);
        displayPortAButton->setText(signalSources->signalPort[0].name);
    } else {
        signalSources->signalPort[0].enabled = true;
        displayPortAButton->setEnabled(true);
        displayPortAButton->setText(signalSources->signalPort[0].name +
          " (" + QString::number(signalSources->signalPort[0].numAmplifierChannels()) +
          " channels)");
    }

    if (signalSources->signalPort[1].numAmplifierChannels() == 0) {
        signalSources->signalPort[1].enabled = false;
        displayPortBButton->setEnabled(false);
        displayPortBButton->setText(signalSources->signalPort[1].name);
    } else {
        signalSources->signalPort[1].enabled = true;
        displayPortBButton->setEnabled(true);
        displayPortBButton->setText(signalSources->signalPort[1].name +
          " (" + QString::number(signalSources->signalPort[1].numAmplifierChannels()) +
          " channels)");
    }

    if (signalSources->signalPort[2].numAmplifierChannels() == 0) {
        signalSources->signalPort[2].enabled = false;
        displayPortCButton->setEnabled(false);
        displayPortCButton->setText(signalSources->signalPort[2].name);
    } else {
        signalSources->signalPort[2].enabled = true;
        displayPortCButton->setEnabled(true);
        displayPortCButton->setText(signalSources->signalPort[2].name +
          " (" + QString::number(signalSources->signalPort[2].numAmplifierChannels()) +
          " channels)");
    }

    if (signalSources->signalPort[3].numAmplifierChannels() == 0) {
        signalSources->signalPort[3].enabled = false;
        displayPortDButton->setEnabled(false);
        displayPortDButton->setText(signalSources->signalPort[3].name);
    } else {
        signalSources->signalPort[3].enabled = true;
        displayPortDButton->setEnabled(true);
        displayPortDButton->setText(signalSources->signalPort[3].name +
          " (" + QString::number(signalSources->signalPort[3].numAmplifierChannels()) +
          " channels)");
    }

    if (signalSources->signalPort[0].numAmplifierChannels() > 0) {
        displayPortAButton->setChecked(true);
    } else if (signalSources->signalPort[1].numAmplifierChannels() > 0) {
        displayPortBButton->setChecked(true);
    } else if (signalSources->signalPort[2].numAmplifierChannels() > 0) {
        displayPortCButton->setChecked(true);
    } else if (signalSources->signalPort[3].numAmplifierChannels() > 0) {
        displayPortDButton->setChecked(true);
    } else {
        displayAdcButton->setChecked(true);
    }

    // Return sample rate to original user-selected value.
    changeSampleRate(sampleRateComboBox->currentIndex());

//    signalSources->signalPort[0].print();
//    signalSources->signalPort[1].print();
//    signalSources->signalPort[2].print();
//    signalSources->signalPort[3].print();

}

// Return the Intan chip ID stored in ROM register 63.  If the data is invalid
// (due to a SPI communication channel with the wrong delay or a chip not present)
// then return -1.  The value of ROM register 59 is also returned.  This register
// has a value of 0 on RHD2132 and RHD2216 chips, but in RHD2164 chips it is used
// to align the DDR MISO A/B data from the SPI bus.  (Register 59 has a value of 53
// on MISO A and a value of 58 on MISO B.)
int MainWindow::deviceId(Rhd2000DataBlock *dataBlock, int stream, int &register59Value)
{
    bool intanChipPresent;

    // First, check ROM registers 32-36 to verify that they hold 'INTAN', and
    // the initial chip name ROM registers 24-26 that hold 'RHD'.
    // This is just used to verify that we are getting good data over the SPI
    // communication channel.
    intanChipPresent = ((char) dataBlock->auxiliaryData[stream][2][32] == 'I' &&
                        (char) dataBlock->auxiliaryData[stream][2][33] == 'N' &&
                        (char) dataBlock->auxiliaryData[stream][2][34] == 'T' &&
                        (char) dataBlock->auxiliaryData[stream][2][35] == 'A' &&
                        (char) dataBlock->auxiliaryData[stream][2][36] == 'N' &&
                        (char) dataBlock->auxiliaryData[stream][2][24] == 'R' &&
                        (char) dataBlock->auxiliaryData[stream][2][25] == 'H' &&
                        (char) dataBlock->auxiliaryData[stream][2][26] == 'D');

    // If the SPI communication is bad, return -1.  Otherwise, return the Intan
    // chip ID number stored in ROM regstier 63.
    if (!intanChipPresent) {
        register59Value = -1;
        return -1;
    } else {
        register59Value = dataBlock->auxiliaryData[stream][2][23]; // Register 59
        return dataBlock->auxiliaryData[stream][2][19]; // chip ID (Register 63)
    }
}

// Start recording data from USB interface board to disk.
void MainWindow::recordInterfaceBoard()
{
    // Create list of enabled channels that will be saved to disk.
    signalProcessor->createSaveList(signalSources, false, 0);

    startNewSaveFile(saveFormat);

    // Write save file header information.
    writeSaveFileHeader(*saveStream, *infoStream, saveFormat, signalProcessor->getNumTempSensors());

    // Disable some GUI buttons while recording is in progress.
    enableChannelButton->setEnabled(false);
    enableAllButton->setEnabled(false);
    disableAllButton->setEnabled(false);
    sampleRateComboBox->setEnabled(false);
    // recordFileSpinBox->setEnabled(false);
    setSaveFormatButton->setEnabled(false);

    recording = true;
    triggerSet = false;
    triggered = false;
    runInterfaceBoard();
}

// Wait for user-defined trigger to start recording data from USB interface board to disk.
void MainWindow::triggerRecordInterfaceBoard()
{
    TriggerRecordDialog triggerRecordDialog(recordTriggerChannel, recordTriggerPolarity,
                                            recordTriggerBuffer, postTriggerTime,
                                            saveTriggerChannel, this);

    if (triggerRecordDialog.exec()) {
        recordTriggerChannel = triggerRecordDialog.digitalInput;
        recordTriggerPolarity = triggerRecordDialog.triggerPolarity;
        recordTriggerBuffer = triggerRecordDialog.recordBuffer;
        postTriggerTime = triggerRecordDialog.postTriggerTime;
        saveTriggerChannel = (triggerRecordDialog.saveTriggerChannelCheckBox->checkState() == Qt::Checked);

        // Create list of enabled channels that will be saved to disk.
        signalProcessor->createSaveList(signalSources, saveTriggerChannel, recordTriggerChannel);

        // Disable some GUI buttons while recording is in progress.
        enableChannelButton->setEnabled(false);
        enableAllButton->setEnabled(false);
        disableAllButton->setEnabled(false);
        sampleRateComboBox->setEnabled(false);
        // recordFileSpinBox->setEnabled(false);
        setSaveFormatButton->setEnabled(false);

        recording = false;
        triggerSet = true;
        triggered = false;
        runInterfaceBoard();
    }

    wavePlot->setFocus();
}

// Write header to data save file, containing information on
// recording settings, amplifier parameters, and signal sources.
void MainWindow::writeSaveFileHeader(QDataStream &outStream, QDataStream &infoStream,
                                     SaveFormat format, int numTempSensors)
{
    for (int i = 0; i < 16; ++i) {
        signalSources->signalPort[6].channel[i].enabled = saveTtlOut;
    }

    switch (format) {
    case SaveFormatIntan:
        outStream << (quint32) DATA_FILE_MAGIC_NUMBER;
        outStream << (qint16) DATA_FILE_MAIN_VERSION_NUMBER;
        outStream << (qint16) DATA_FILE_SECONDARY_VERSION_NUMBER;

        outStream << boardSampleRate;

        outStream << (qint16) dspEnabled;
        outStream << actualDspCutoffFreq;
        outStream << actualLowerBandwidth;
        outStream << actualUpperBandwidth;

        outStream << desiredDspCutoffFreq;
        outStream << desiredLowerBandwidth;
        outStream << desiredUpperBandwidth;

        outStream << (qint16) notchFilterComboBox->currentIndex();

        outStream << desiredImpedanceFreq;
        outStream << actualImpedanceFreq;

        outStream << note1LineEdit->text();
        outStream << note2LineEdit->text();
        outStream << note3LineEdit->text();

        if (saveTemp) {                                 // version 1.1 addition
            outStream << (qint16) numTempSensors;
        } else {
            outStream << (qint16) 0;
        }

        outStream << (qint16) evalBoardMode;            // version 1.3 addition

        outStream << *signalSources;

        break;

    case SaveFormatFilePerSignalType:
    case SaveFormatFilePerChannel:
        infoStream << (quint32) DATA_FILE_MAGIC_NUMBER;
        infoStream << (qint16) DATA_FILE_MAIN_VERSION_NUMBER;
        infoStream << (qint16) DATA_FILE_SECONDARY_VERSION_NUMBER;

        infoStream << boardSampleRate;

        infoStream << (qint16) dspEnabled;
        infoStream << actualDspCutoffFreq;
        infoStream << actualLowerBandwidth;
        infoStream << actualUpperBandwidth;

        infoStream << desiredDspCutoffFreq;
        infoStream << desiredLowerBandwidth;
        infoStream << desiredUpperBandwidth;

        infoStream << (qint16) notchFilterComboBox->currentIndex();

        infoStream << desiredImpedanceFreq;
        infoStream << actualImpedanceFreq;

        infoStream << note1LineEdit->text();
        infoStream << note2LineEdit->text();
        infoStream << note3LineEdit->text();

        infoStream << (qint16) 0;

        infoStream << (qint16) evalBoardMode;            // version 1.3 addition (bug fix: added here in version 1.41)

        infoStream << *signalSources;

        break;
    }
}

// Start SPI communication to all connected RHD2000 amplifiers and stream
// waveform data over USB port.
void MainWindow::runInterfaceBoard()
{
    bool newDataReady;
    int triggerIndex;
    QTime timer;
    int extraCycles = 0;
    int timestampOffset = 0;
    unsigned int preTriggerBufferQueueLength = 0;
    queue<Rhd2000DataBlock> bufferQueue;
    static int fifoNearlyFull = 0;
    static int triggerEndCounter = 0;
    int triggerEndThreshold;

    triggerEndThreshold = qCeil(postTriggerTime * boardSampleRate / (numUsbBlocksToRead * SAMPLES_PER_DATA_BLOCK)) - 1;

    if (triggerSet) {
        preTriggerBufferQueueLength = numUsbBlocksToRead *
                (qCeil(recordTriggerBuffer /
                      (numUsbBlocksToRead * Rhd2000DataBlock::getSamplesPerDataBlock() / boardSampleRate)) + 1);
    }

    QSound triggerBeep(QDir::tempPath() + "/triggerbeep.wav");
    QSound triggerEndBeep(QDir::tempPath() + "/triggerendbeep.wav");

    // Average temperature sensor readings over a ~0.1 second interval.
    signalProcessor->tempHistoryReset(numUsbBlocksToRead * 3);

    running = true;
    wavePlot->setFocus();

    // Enable stop button on GUI while running
    stopButton->setEnabled(true);

    // Disable various buttons on GUI while running
    runButton->setEnabled(false);
    recordButton->setEnabled(false);
    triggerButton->setEnabled(false);

    baseFilenameButton->setEnabled(false);
    renameChannelButton->setEnabled(false);
    changeBandwidthButton->setEnabled(false);
    impedanceFreqSelectButton->setEnabled(false);
    runImpedanceTestButton->setEnabled(false);
    scanButton->setEnabled(false);
    setCableDelayButton->setEnabled(false);
    digOutButton->setEnabled(false);
    setSaveFormatButton->setEnabled(false);

    // Turn LEDs on to indicate that data acquisition is running.
    ttlOut[15] = 1;
    int ledArray[8] = {1, 0, 0, 0, 0, 0, 0, 0};
    int ledIndex = 0;
    if (!synthMode) {
        evalBoard->setLedDisplay(ledArray);
        evalBoard->setTtlOut(ttlOut);
    }

    unsigned int dataBlockSize;

    if (synthMode) {
        dataBlockSize = Rhd2000DataBlock::calculateDataBlockSizeInWords(1);
    } else {
        dataBlockSize = Rhd2000DataBlock::calculateDataBlockSizeInWords(
                    evalBoard->getNumEnabledDataStreams());
    }

    unsigned int wordsInFifo;
    double fifoPercentageFull, fifoCapacity, samplePeriod, latency;
    long long totalBytesWritten = 0;
    double totalRecordTimeSeconds = 0.0;
    double recordTimeIncrementSeconds = numUsbBlocksToRead *
            Rhd2000DataBlock::getSamplesPerDataBlock() / boardSampleRate;

    // Calculate the number of bytes per minute that we will be saving to disk
    // if recording data (excluding headers).
    double bytesPerMinute = Rhd2000DataBlock::getSamplesPerDataBlock() *
            ((double) signalProcessor->bytesPerBlock(saveFormat, saveTemp, saveTtlOut) /
             (double) Rhd2000DataBlock::getSamplesPerDataBlock()) * boardSampleRate;

    samplePeriod = 1.0 / boardSampleRate;
    fifoCapacity = Rhd2000EvalBoard::fifoCapacityInWords();

    if (recording) {
        setStatusBarRecording(bytesPerMinute);
    } else if (triggerSet) {
        setStatusBarWaitForTrigger();
    } else {
        setStatusBarRunning();
    }

    if (!synthMode) {
        evalBoard->setContinuousRunMode(true);
        evalBoard->run();
    } else {
        timer.start();
    }

    while (running) {
        // If we are running in demo mode, use a timer to periodically generate more synthetic
        // data.  If not, wait for a certain amount of data to be ready from the USB interface board.
        if (synthMode) {
            newDataReady = (timer.elapsed() >=
                            ((int) (1000.0 * 60.0 * (double) numUsbBlocksToRead / boardSampleRate)));
        } else {
            newDataReady = evalBoard->readDataBlocks(numUsbBlocksToRead, dataQueue);    // takes about 17 ms at 30 kS/s with 256 amplifiers
        }

        // If new data is ready, then read it.
        if (newDataReady) {
            // statusBarLabel->setText("Running.  Extra CPU cycles: " + QString::number(extraCycles));

            if (synthMode) {
                timer.start();  // restart timer
                fifoPercentageFull = 0.0;

                // Generate synthetic data
                totalBytesWritten +=
                        signalProcessor->loadSyntheticData(numUsbBlocksToRead,
                                                           boardSampleRate, recording,
                                                           *saveStream, saveFormat, saveTemp, saveTtlOut);
            } else {
                // Check the number of words stored in the Opal Kelly USB interface FIFO.
                wordsInFifo = evalBoard->numWordsInFifo();
                latency = 1000.0 * Rhd2000DataBlock::getSamplesPerDataBlock() *
                        (wordsInFifo / dataBlockSize) * samplePeriod;

                fifoPercentageFull = 100.0 * wordsInFifo / fifoCapacity;

                // Alert the user if the number of words in the FIFO is getting to be significant
                // or nearing FIFO capacity.

                fifoLagLabel->setText(QString::number(latency, 'f', 0) + " ms");
                if (latency > 50.0) {
                    fifoLagLabel->setStyleSheet("color: red");
                } else {
                    fifoLagLabel->setStyleSheet("color: green");
                }

                fifoFullLabel->setText("(" + QString::number(fifoPercentageFull, 'f', 0) + "% full)");
                if (fifoPercentageFull > 75.0) {
                    fifoFullLabel->setStyleSheet("color: red");
                } else {
                    fifoFullLabel->setStyleSheet("color: black");
                }
                // Read waveform data from USB interface board.
                totalBytesWritten +=
                        signalProcessor->loadAmplifierData(dataQueue, (int) numUsbBlocksToRead,
                                                           (triggerSet | triggered), recordTriggerChannel,
                                                           (triggered ? (1 - recordTriggerPolarity) : recordTriggerPolarity),
                                                           triggerIndex, triggerSet, bufferQueue,
                                                           recording, *saveStream, saveFormat, saveTemp,
                                                           saveTtlOut, timestampOffset);

                while (bufferQueue.size() > preTriggerBufferQueueLength) {
                    bufferQueue.pop();
                }

                if (triggerSet && (triggerIndex != -1)) {
                    triggerSet = false;
                    triggered = true;
                    recording = true;
                    timestampOffset = triggerIndex;

                    // Play trigger sound
                    triggerBeep.play();

                    startNewSaveFile(saveFormat);

                    // Write save file header information.
                    writeSaveFileHeader(*saveStream, *infoStream, saveFormat, signalProcessor->getNumTempSensors());

                    setStatusBarRecording(bytesPerMinute);

                    totalRecordTimeSeconds = bufferQueue.size() * Rhd2000DataBlock::getSamplesPerDataBlock() / boardSampleRate;

                    // Write contents of pre-trigger buffer to file.
                    totalBytesWritten += signalProcessor->saveBufferedData(bufferQueue, *saveStream, saveFormat,
                                                                           saveTemp, saveTtlOut, timestampOffset);
                } else if (triggered && (triggerIndex != -1)) { // New in version 1.5: episodic triggered recording
                    triggerEndCounter++;
                    if (triggerEndCounter > triggerEndThreshold) {
                                                    // Keep recording for the specified number of seconds after the trigger has
                                                    // been de-asserted.
                        triggerEndCounter = 0;
                        triggerSet = true;          // Enable trigger again for true episodic recording.
                        triggered = false;
                        recording = false;
                        closeSaveFile(saveFormat);
                        totalRecordTimeSeconds = 0.0;

                        setStatusBarWaitForTrigger();

                        // Play trigger end sound
                        triggerEndBeep.play();
                    }
                } else if (triggered) {
                    triggerEndCounter = 0;          // Ignore brief (< 1 second) trigger-off events.
                }
            }

            // Apply notch filter to amplifier data.
            signalProcessor->filterData(numUsbBlocksToRead, channelVisible);

            // Trigger WavePlot widget to display new waveform data.
            wavePlot->passFilteredData();

            // Trigger Spike Scope to update with new waveform data.
            if (spikeScopeDialog) {
                spikeScopeDialog->updateWaveform(numUsbBlocksToRead);
            }

            // If we are recording in Intan format and our data file has reached its specified
            // maximum length (e.g., 1 minute), close the current data file and open a new one.

            if (recording) {
                totalRecordTimeSeconds += recordTimeIncrementSeconds;

                if (saveFormat == SaveFormatIntan) {
                    if (totalRecordTimeSeconds >= (60 * newSaveFilePeriodMinutes)) {
                        closeSaveFile(saveFormat);
                        startNewSaveFile(saveFormat);

                        // Write save file header information.
                        writeSaveFileHeader(*saveStream, *infoStream, saveFormat, signalProcessor->getNumTempSensors());

                        setStatusBarRecording(bytesPerMinute);

                        totalRecordTimeSeconds = 0.0;
                    }
                }
            }

            // If the USB interface FIFO (on the FPGA board) exceeds 98% full, halt
            // data acquisition and display a warning message.
            if (fifoPercentageFull > 98.0) {
                fifoNearlyFull++;   // We must see the FIFO >98% full three times in a row to eliminate the possiblity
                                    // of a USB glitch causing recording to stop.  (Added for version 1.5.)
                if (fifoNearlyFull > 2) {
                    running = false;

                    // Stop data acquisition
                    if (!synthMode) {
                        evalBoard->setContinuousRunMode(false);
                        evalBoard->setMaxTimeStep(0);
                    }

                    if (recording) {
                        closeSaveFile(saveFormat);
                        recording = false;
                        triggerSet = false;
                        triggered = false;
                    }

                    // Turn off LED.
                    for (int i = 0; i < 8; ++i) ledArray[i] = 0;
                    ttlOut[15] = 0;
                    if (!synthMode) {
                        evalBoard->setLedDisplay(ledArray);
                        evalBoard->setTtlOut(ttlOut);
                    }

                    QMessageBox::critical(this, tr("USB Buffer Overrun Error"),
                                          tr("Recording was stopped because the USB FIFO buffer on the interface "
                                             "board reached maximum capacity.  This happens when the host computer "
                                             "cannot keep up with the data streaming from the interface board."
                                             "<p>Try lowering the sample rate, disabling the notch filter, or reducing "
                                             "the number of waveforms on the screen to reduce CPU load."));
                }
            } else {
                fifoNearlyFull = 0;
            }

            // Advance LED display
            ledArray[ledIndex] = 0;
            ledIndex++;
            if (ledIndex == 8) ledIndex = 0;
            ledArray[ledIndex] = 1;
            if (!synthMode) {
                evalBoard->setLedDisplay(ledArray);
            }
        }
        qApp->processEvents();  // Stay responsive to GUI events during this loop
        ++extraCycles;
    }

    // Stop data acquisition (when running == false)
    if (!synthMode) {
        evalBoard->setContinuousRunMode(false);
        evalBoard->setMaxTimeStep(0);

        // Flush USB FIFO on XEM6010
        evalBoard->flush();
    }

    // If external control of chip auxiliary output pins was enabled, make sure
    // all auxout pins are turned off when acquisition stops.
    if (!synthMode) {
        if (auxDigOutEnabled[0] || auxDigOutEnabled[1] || auxDigOutEnabled[2] || auxDigOutEnabled[3]) {
            evalBoard->enableExternalDigOut(Rhd2000EvalBoard::PortA, false);
            evalBoard->enableExternalDigOut(Rhd2000EvalBoard::PortB, false);
            evalBoard->enableExternalDigOut(Rhd2000EvalBoard::PortC, false);
            evalBoard->enableExternalDigOut(Rhd2000EvalBoard::PortD, false);
            evalBoard->setMaxTimeStep(60);
            evalBoard->run();
            // Wait for the 60-sample run to complete.
            while (evalBoard->isRunning()) {
                qApp->processEvents();
            }
            evalBoard->flush();
            evalBoard->setMaxTimeStep(0);
            evalBoard->enableExternalDigOut(Rhd2000EvalBoard::PortA, auxDigOutEnabled[0]);
            evalBoard->enableExternalDigOut(Rhd2000EvalBoard::PortB, auxDigOutEnabled[1]);
            evalBoard->enableExternalDigOut(Rhd2000EvalBoard::PortC, auxDigOutEnabled[2]);
            evalBoard->enableExternalDigOut(Rhd2000EvalBoard::PortD, auxDigOutEnabled[3]);
        }
    }

    // Close save file, if recording.
    if (recording) {
        closeSaveFile(saveFormat);
        recording = false;
    }

    // Reset trigger
    triggerSet = false;
    triggered = false;

    totalRecordTimeSeconds = 0.0;

    // Turn off LED.
    for (int i = 0; i < 8; ++i) ledArray[i] = 0;
    ttlOut[15] = 0;
    if (!synthMode) {
        evalBoard->setLedDisplay(ledArray);
        evalBoard->setTtlOut(ttlOut);
    }

    setStatusBarReady();

    // Enable/disable various GUI buttons.

    runButton->setEnabled(true);
    recordButton->setEnabled(validFilename);
    triggerButton->setEnabled(validFilename);
    stopButton->setEnabled(false);

    baseFilenameButton->setEnabled(true);
    renameChannelButton->setEnabled(true);
    changeBandwidthButton->setEnabled(true);
    impedanceFreqSelectButton->setEnabled(true);
    runImpedanceTestButton->setEnabled(impedanceFreqValid);
    scanButton->setEnabled(true);
    setCableDelayButton->setEnabled(true);
    digOutButton->setEnabled(true);

    enableChannelButton->setEnabled(true);
    enableAllButton->setEnabled(true);
    disableAllButton->setEnabled(true);
    sampleRateComboBox->setEnabled(true);
    setSaveFormatButton->setEnabled(true);
}

// Stop SPI data acquisition.
void MainWindow::stopInterfaceBoard()
{
    running = false;
    wavePlot->setFocus();
}

void MainWindow::selectBaseFilenameSlot()
{
    selectBaseFilename(saveFormat);
}

// Display file dialog to allow user to select base filename for data
// save files.
void MainWindow::selectBaseFilename(SaveFormat format)
{
    QString newFileName;

    switch (format) {
    case SaveFormatIntan:
        newFileName = QFileDialog::getSaveFileName(this,
                                                tr("Select Base Filename"), ".",
                                                tr("Intan Data Files (*.rhd)"));
        break;

    case SaveFormatFilePerSignalType:
        newFileName = QFileDialog::getSaveFileName(this,
                                                tr("Select Base Filename"), ".",
                                                tr("Intan Data Files (*.rhd)"));
        break;
    case SaveFormatFilePerChannel:
        newFileName = QFileDialog::getSaveFileName(this,
                                                tr("Select Base Filename"), ".",
                                                tr("Intan Data Files (*.rhd)"));
        break;
    }

    if (!newFileName.isEmpty()) {
        saveBaseFileName = newFileName;
        QFileInfo newFileInfo(newFileName);
        saveFilenameLineEdit->setText(newFileInfo.baseName());
    }
    validFilename = !saveBaseFileName.isEmpty();
    recordButton->setEnabled(validFilename);
    triggerButton->setEnabled(validFilename);
    wavePlot->setFocus();
}

// Open Intan Technologies website in the default browser.
void MainWindow::openIntanWebsite()
{
    QDesktopServices::openUrl(QUrl("http://www.intantech.com", QUrl::TolerantMode));
}

void MainWindow::setNumWaveformsComboBox(int index)
{
    numFramesComboBox->setCurrentIndex(index);
}

// Open Spike Scope dialog and initialize it.
void MainWindow::spikeScope()
{
    if (!spikeScopeDialog) {
        spikeScopeDialog = new SpikeScopeDialog(signalProcessor, signalSources,
                                                wavePlot->selectedChannel(), this);
        // add any 'connect' statements here
    }

    spikeScopeDialog->show();
    spikeScopeDialog->raise();
    spikeScopeDialog->activateWindow();
    spikeScopeDialog->setYScale(yScaleComboBox->currentIndex());
    spikeScopeDialog->setSampleRate(boardSampleRate);
    wavePlot->setFocus();
}

// Change selected channel on Spike Scope when user selects a new channel.
void MainWindow::newSelectedChannel(SignalChannel* newChannel)
{
    if (spikeScopeDialog) {
        spikeScopeDialog->setNewChannel(newChannel);
    }

    if (dacLockToSelectedBox->isChecked()) {
        if (newChannel->signalType == AmplifierSignal) {
            // Set DAC 1 to selected channel and label it accordingly.
            dacSelectedChannel[0] = newChannel;
            if (!synthMode) {
                evalBoard->selectDacDataStream(0, newChannel->boardStream);
                evalBoard->selectDacDataChannel(0, newChannel->chipChannel);
            }
            setDacChannelLabel(0, newChannel->customChannelName,
                               newChannel->nativeChannelName);
        }
    }
}

// Enable or disable RHD2000 amplifier fast settle function.
void MainWindow::enableFastSettle(int enabled)
{
    fastSettleEnabled = !(enabled == Qt::Unchecked);

    if (!synthMode) {
        evalBoard->selectAuxCommandBank(Rhd2000EvalBoard::PortA, Rhd2000EvalBoard::AuxCmd3,
                                        fastSettleEnabled ? 2 : 1);
        evalBoard->selectAuxCommandBank(Rhd2000EvalBoard::PortB, Rhd2000EvalBoard::AuxCmd3,
                                        fastSettleEnabled ? 2 : 1);
        evalBoard->selectAuxCommandBank(Rhd2000EvalBoard::PortC, Rhd2000EvalBoard::AuxCmd3,
                                        fastSettleEnabled ? 2 : 1);
        evalBoard->selectAuxCommandBank(Rhd2000EvalBoard::PortD, Rhd2000EvalBoard::AuxCmd3,
                                        fastSettleEnabled ? 2 : 1);
    }
    wavePlot->setFocus();
}

// Enable or disable external fast settling function.
void MainWindow::enableExternalFastSettle(bool enabled)
{
    if (!synthMode) {
        evalBoard->enableExternalFastSettle(enabled);
    }
    fastSettleCheckBox->setEnabled(!enabled);
    wavePlot->setFocus();
}

// Select TTL input channel for external fast settle control.
void MainWindow::setExternalFastSettleChannel(int channel)
{
    if (!synthMode) {
        evalBoard->setExternalFastSettleChannel(channel);
    }
    wavePlot->setFocus();
}

// Load application settings from *.isf (Intan Settings File) file.
void MainWindow::loadSettings()
{
    QString loadSettingsFileName;
    loadSettingsFileName = QFileDialog::getOpenFileName(this,
                                                        tr("Select Settings Filename"), ".",
                                                        tr("Intan Settings Files (*.isf)"));
    if (loadSettingsFileName.isEmpty()) {
        wavePlot->setFocus();
        return;
    }

    QFile settingsFile(loadSettingsFileName);
    if (!settingsFile.open(QIODevice::ReadOnly)) {
        cerr << "Can't open settings file " <<
                loadSettingsFileName.toStdString() << endl;
        wavePlot->setFocus();
        return;
    }

    // Load settings
    QDataStream inStream(&settingsFile);
    inStream.setVersion(QDataStream::Qt_4_8);
    inStream.setByteOrder(QDataStream::LittleEndian);
    inStream.setFloatingPointPrecision(QDataStream::SinglePrecision);

    qint16 tempQint16;
    quint32 tempQuint32;
    qint32 tempQint32;
    int versionMain, versionSecondary;

    inStream >> tempQuint32;
    if (tempQuint32 != SETTINGS_FILE_MAGIC_NUMBER) {
        QMessageBox::critical(this, tr("Cannot Parse Settings File"),
                              tr("Selected file is not a valid settings file."));
        wavePlot->setFocus();
        return;
    }

    statusBar()->showMessage("Restoring settings from file...");

    inStream >> tempQint16;
    versionMain = tempQint16;
    inStream >> tempQint16;
    versionSecondary = tempQint16;

    // Eventually check version number here for compatibility issues.

    inStream >> *signalSources;

    inStream >> tempQint16;
    sampleRateComboBox->setCurrentIndex(tempQint16);
    inStream >> tempQint16;
    yScaleComboBox->setCurrentIndex(tempQint16);
    inStream >> tempQint16;
    tScaleComboBox->setCurrentIndex(tempQint16);

    scanPorts();

    inStream >> tempQint16;
    notchFilterComboBox->setCurrentIndex(tempQint16);
    changeNotchFilter(notchFilterComboBox->currentIndex());

    inStream >> saveBaseFileName;
    QFileInfo fileInfo(saveBaseFileName);
    validFilename = !saveBaseFileName.isEmpty();
    if (validFilename) {
        saveFilenameLineEdit->setText(fileInfo.baseName());
    }
    recordButton->setEnabled(validFilename);
    triggerButton->setEnabled(validFilename);

    inStream >> tempQint16;
    // recordFileSpinBox->setValue(tempQint16);
    newSaveFilePeriodMinutes = tempQint16;

    inStream >> tempQint16;
    dspEnabled = (bool) tempQint16;
    inStream >> desiredDspCutoffFreq;
    inStream >> desiredLowerBandwidth;
    inStream >> desiredUpperBandwidth;

    inStream >> desiredImpedanceFreq;
    inStream >> actualImpedanceFreq;
    inStream >> tempQint16;
    impedanceFreqValid = (bool) tempQint16;

    // This will update bandwidth settings on RHD2000 chips and
    // the GUI bandwidth display:
    changeSampleRate(sampleRateComboBox->currentIndex());

    inStream >> tempQint16;
    dacGainSlider->setValue(tempQint16);
    changeDacGain(tempQint16);

    inStream >> tempQint16;
    dacNoiseSuppressSlider->setValue(tempQint16);
    changeDacNoiseSuppress(tempQint16);

    QVector<QString> dacNamesTemp;
    dacNamesTemp.resize(8);

    for (int i = 0; i < 8; ++i) {
        inStream >> tempQint16;
        dacEnabled[i] = (bool) tempQint16;
        inStream >> dacNamesTemp[i];
        dacSelectedChannel[i] =
                signalSources->findChannelFromName(dacNamesTemp[i]);
        if (dacSelectedChannel[i] == 0) {
            dacEnabled[i] = false;
        }
        if (dacEnabled[i]) {
            setDacChannelLabel(i, dacSelectedChannel[i]->customChannelName,
                               dacSelectedChannel[i]->nativeChannelName);
        } else {
            setDacChannelLabel(i, "n/a", "n/a");
        }
        if (!synthMode) {
            evalBoard->enableDac(i, dacEnabled[i]);
            if (dacEnabled[i]) {
                evalBoard->selectDacDataStream(i, dacSelectedChannel[i]->boardStream);
                evalBoard->selectDacDataChannel(i, dacSelectedChannel[i]->chipChannel);
            } else {
                evalBoard->selectDacDataStream(i, 0);
                evalBoard->selectDacDataChannel(i, 0);
            }
        }
    }
    dacButton1->setChecked(true);
    dacEnableCheckBox->setChecked(dacEnabled[0]);

    inStream >> tempQint16;
    fastSettleEnabled = (bool) tempQint16;
    fastSettleCheckBox->setChecked(fastSettleEnabled);
    enableFastSettle(fastSettleCheckBox->checkState());

    inStream >> tempQint16;
    plotPointsCheckBox->setChecked((bool) tempQint16);
    plotPointsMode((bool) tempQint16);

    QString noteText;
    inStream >> noteText;
    note1LineEdit->setText(noteText);
    inStream >> noteText;
    note2LineEdit->setText(noteText);
    inStream >> noteText;
    note3LineEdit->setText(noteText);

    // Ports are saved in reverse order.
    for (int port = 5; port >= 0; --port) {
        inStream >> tempQint16;
        if (signalSources->signalPort[port].enabled) {
            wavePlot->setNumFrames(tempQint16, port);
        }
        inStream >> tempQint16;
        if (signalSources->signalPort[port].enabled) {
            wavePlot->setTopLeftFrame(tempQint16, port);
        }
    }

    // Version 1.1 additions
    if ((versionMain == 1 && versionSecondary >= 1) || (versionMain > 1)) {
        inStream >> tempQint16;
        saveTemp = (bool) tempQint16;
    }

    // Version 1.2 additions
    if ((versionMain == 1 && versionSecondary >= 2) || (versionMain > 1)) {
        inStream >> tempQint16;
        recordTriggerChannel = tempQint16;
        inStream >> tempQint16;
        recordTriggerPolarity = tempQint16;
        inStream >> tempQint16;
        recordTriggerBuffer = tempQint16;

        inStream >> tempQint16;
        setSaveFormat((SaveFormat) tempQint16);

        inStream >> tempQint16;
        dacLockToSelectedBox->setChecked((bool) tempQint16);
    }

    // Version 1.3 additions
    if ((versionMain == 1 && versionSecondary >= 3) || (versionMain > 1)) {
        inStream >> tempQint32;
        dac1ThresholdSpinBox->setValue(tempQint32);
        setDacThreshold1(tempQint32);
        inStream >> tempQint32;
        dac2ThresholdSpinBox->setValue(tempQint32);
        setDacThreshold2(tempQint32);
        inStream >> tempQint32;
        dac3ThresholdSpinBox->setValue(tempQint32);
        setDacThreshold3(tempQint32);
        inStream >> tempQint32;
        dac4ThresholdSpinBox->setValue(tempQint32);
        setDacThreshold4(tempQint32);
        inStream >> tempQint32;
        dac5ThresholdSpinBox->setValue(tempQint32);
        setDacThreshold5(tempQint32);
        inStream >> tempQint32;
        dac6ThresholdSpinBox->setValue(tempQint32);
        setDacThreshold6(tempQint32);
        inStream >> tempQint32;
        dac7ThresholdSpinBox->setValue(tempQint32);
        setDacThreshold7(tempQint32);
        inStream >> tempQint32;
        dac8ThresholdSpinBox->setValue(tempQint32);
        setDacThreshold8(tempQint32);

        inStream >> tempQint16;
        saveTtlOut = (bool) tempQint16;

        inStream >> tempQint16;
        enableHighpassFilter((bool) tempQint16);
        highpassFilterCheckBox->setChecked(highpassFilterEnabled);

        inStream >> highpassFilterFrequency;
        highpassFilterLineEdit->setText(QString::number(highpassFilterFrequency, 'f', 2));
        setHighpassFilterCutoff(highpassFilterFrequency);
    }

    // Version 1.4 additions
    if ((versionMain == 1 && versionSecondary >= 4) || (versionMain > 1)) {
        inStream >> tempQint16;
        externalFastSettleCheckBox->setChecked((bool) tempQint16);
        enableExternalFastSettle((bool) tempQint16);

        inStream >> tempQint16;
        externalFastSettleSpinBox->setValue(tempQint16);
        setExternalFastSettleChannel(tempQint16);

        inStream >> tempQint16;
        auxDigOutEnabled[0] = (bool) tempQint16;
        inStream >> tempQint16;
        auxDigOutEnabled[1] = (bool) tempQint16;
        inStream >> tempQint16;
        auxDigOutEnabled[2] = (bool) tempQint16;
        inStream >> tempQint16;
        auxDigOutEnabled[3] = (bool) tempQint16;

        inStream >> tempQint16;
        auxDigOutChannel[0] = (int) tempQint16;
        inStream >> tempQint16;
        auxDigOutChannel[1] = (int) tempQint16;
        inStream >> tempQint16;
        auxDigOutChannel[2] = (int) tempQint16;
        inStream >> tempQint16;
        auxDigOutChannel[3] = (int) tempQint16;
        updateAuxDigOut();

        inStream >> tempQint16;
        manualDelayEnabled[0] = (bool) tempQint16;
        inStream >> tempQint16;
        manualDelayEnabled[1] = (bool) tempQint16;
        inStream >> tempQint16;
        manualDelayEnabled[2] = (bool) tempQint16;
        inStream >> tempQint16;
        manualDelayEnabled[3] = (bool) tempQint16;

        inStream >> tempQint16;
        manualDelay[0] = (int) tempQint16;
        inStream >> tempQint16;
        manualDelay[1] = (int) tempQint16;
        inStream >> tempQint16;
        manualDelay[2] = (int) tempQint16;
        inStream >> tempQint16;
        manualDelay[3] = (int) tempQint16;

        if (!synthMode) {
            if (manualDelayEnabled[0]) {
                evalBoard->setCableDelay(Rhd2000EvalBoard::PortA, manualDelay[0]);
            }
            if (manualDelayEnabled[1]) {
                evalBoard->setCableDelay(Rhd2000EvalBoard::PortB, manualDelay[1]);
            }
            if (manualDelayEnabled[2]) {
                evalBoard->setCableDelay(Rhd2000EvalBoard::PortC, manualDelay[2]);
            }
            if (manualDelayEnabled[3]) {
                evalBoard->setCableDelay(Rhd2000EvalBoard::PortD, manualDelay[3]);
            }
        }
    }

    // Version 1.5 additions
    if ((versionMain == 1 && versionSecondary >= 5) || (versionMain > 1)) {
        inStream >> tempQint16;
        postTriggerTime = tempQint16;
        inStream >> tempQint16;
        saveTriggerChannel = (bool) tempQint16;
    }

    settingsFile.close();

    wavePlot->refreshScreen();
    statusBar()->clearMessage();
    wavePlot->setFocus();
}

// Save application settings to *.isf (Intan Settings File) file.
void MainWindow::saveSettings()
{
    QString saveSettingsFileName;
    saveSettingsFileName = QFileDialog::getSaveFileName(this,
                                            tr("Select Settings Filename"), ".",
                                            tr("Intan Settings Files (*.isf)"));

    if (saveSettingsFileName.isEmpty()) {
        wavePlot->setFocus();
        return;
    }

    QFile settingsFile(saveSettingsFileName);
    if (!settingsFile.open(QIODevice::WriteOnly)) {
        QMessageBox::critical(this, tr("Cannot Save Settings File"),
                              tr("Cannot open new settings file for writing."));
        wavePlot->setFocus();
        return;
    }

    statusBar()->showMessage("Saving settings to file...");

    // Save settings
    QDataStream outStream(&settingsFile);
    outStream.setVersion(QDataStream::Qt_4_8);
    outStream.setByteOrder(QDataStream::LittleEndian);
    outStream.setFloatingPointPrecision(QDataStream::SinglePrecision);

    outStream << (quint32) SETTINGS_FILE_MAGIC_NUMBER;
    outStream << (qint16) SETTINGS_FILE_MAIN_VERSION_NUMBER;
    outStream << (qint16) SETTINGS_FILE_SECONDARY_VERSION_NUMBER;

    outStream << *signalSources;

    outStream << (qint16) sampleRateComboBox->currentIndex();
    outStream << (qint16) yScaleComboBox->currentIndex();
    outStream << (qint16) tScaleComboBox->currentIndex();
    outStream << (qint16) notchFilterComboBox->currentIndex();
    outStream << saveBaseFileName;
    outStream << (qint16) newSaveFilePeriodMinutes;
    outStream << (qint16) dspEnabled;
    outStream << desiredDspCutoffFreq;
    outStream << desiredLowerBandwidth;
    outStream << desiredUpperBandwidth;
    outStream << desiredImpedanceFreq;
    outStream << actualImpedanceFreq;
    outStream << (qint16) impedanceFreqValid;
    outStream << (qint16) dacGainSlider->value();
    outStream << (qint16) dacNoiseSuppressSlider->value();
    for (int i = 0; i < 8; ++i) {
        outStream << (qint16) dacEnabled[i];
        if (dacSelectedChannel[i]) {
            outStream << dacSelectedChannel[i]->nativeChannelName;
        } else {
            outStream << QString("");
        }
    }
    outStream << (qint16) fastSettleEnabled;
    outStream << (qint16) plotPointsCheckBox->isChecked();
    outStream << note1LineEdit->text();
    outStream << note2LineEdit->text();
    outStream << note3LineEdit->text();

    // We need to save the ports in reverse order to make things
    // work out correctly when we load them again.
    for (int port = 5; port >= 0; --port) {
        outStream << (qint16) wavePlot->getNumFramesIndex(port);
        outStream << (qint16) wavePlot->getTopLeftFrame(port);
    }

    outStream << (qint16) saveTemp;     // version 1.1 addition

    outStream << (qint16) recordTriggerChannel;     // version 1.2 additions
    outStream << (qint16) recordTriggerPolarity;
    outStream << (qint16) recordTriggerBuffer;

    outStream << (qint16) saveFormat;
    outStream << (qint16) dacLockToSelectedBox->isChecked();

    // version 1.3 additions
    outStream << (qint32) dac1ThresholdSpinBox->value();
    outStream << (qint32) dac2ThresholdSpinBox->value();
    outStream << (qint32) dac3ThresholdSpinBox->value();
    outStream << (qint32) dac4ThresholdSpinBox->value();
    outStream << (qint32) dac5ThresholdSpinBox->value();
    outStream << (qint32) dac6ThresholdSpinBox->value();
    outStream << (qint32) dac7ThresholdSpinBox->value();
    outStream << (qint32) dac8ThresholdSpinBox->value();

    outStream << (qint16) saveTtlOut;

    outStream << (qint16) highpassFilterEnabled;
    outStream << highpassFilterFrequency;

    // version 1.4 additions
    outStream << (qint16) externalFastSettleCheckBox->isChecked();
    outStream << (qint16) externalFastSettleSpinBox->value();

    outStream << (qint16) auxDigOutEnabled[0];
    outStream << (qint16) auxDigOutEnabled[1];
    outStream << (qint16) auxDigOutEnabled[2];
    outStream << (qint16) auxDigOutEnabled[3];

    outStream << (qint16) auxDigOutChannel[0];
    outStream << (qint16) auxDigOutChannel[1];
    outStream << (qint16) auxDigOutChannel[2];
    outStream << (qint16) auxDigOutChannel[3];

    outStream << (qint16) manualDelayEnabled[0];
    outStream << (qint16) manualDelayEnabled[1];
    outStream << (qint16) manualDelayEnabled[2];
    outStream << (qint16) manualDelayEnabled[3];

    outStream << (qint16) manualDelay[0];
    outStream << (qint16) manualDelay[1];
    outStream << (qint16) manualDelay[2];
    outStream << (qint16) manualDelay[3];

    // version 1.5 additions
    outStream << (qint16) postTriggerTime;
    outStream << (qint16) saveTriggerChannel;

    settingsFile.close();

    statusBar()->clearMessage();
    wavePlot->setFocus();
}

// Enable or disable the display of electrode impedances.
void MainWindow::showImpedances(bool enabled)
{
    wavePlot->setImpedanceLabels(enabled);
    wavePlot->setFocus();
}

// Execute an electrode impedance measurement procedure.
void MainWindow::runImpedanceMeasurement()
{
    // We can't really measure impedances in demo mode, so just return.
    if (synthMode) {
        showImpedanceCheckBox->setChecked(true);
        showImpedances(true);
        wavePlot->setFocus();
        return;
    }

    Rhd2000Registers chipRegisters(boardSampleRate);
    int commandSequenceLength, stream, channel, capRange;
    double cSeries;
    vector<int> commandList;
    int triggerIndex;                       // dummy reference variable; not used
    queue<Rhd2000DataBlock> bufferQueue;    // dummy reference variable; not used

    bool rhd2164ChipPresent = false;
    for (stream = 0; stream < MAX_NUM_DATA_STREAMS; ++stream) {
        if (chipId[stream] == CHIP_ID_RHD2164_B) {
            rhd2164ChipPresent = true;
        }
    }

    // Disable external fast settling, since this interferes with DAC commands in AuxCmd1.
    evalBoard->enableExternalFastSettle(false);

    // Disable auxiliary digital output control during impedance measurements.
    evalBoard->enableExternalDigOut(Rhd2000EvalBoard::PortA, false);
    evalBoard->enableExternalDigOut(Rhd2000EvalBoard::PortB, false);
    evalBoard->enableExternalDigOut(Rhd2000EvalBoard::PortC, false);
    evalBoard->enableExternalDigOut(Rhd2000EvalBoard::PortD, false);

    // Turn LEDs on to indicate that data acquisition is running.
    ttlOut[15] = 1;
    int ledArray[8] = {1, 0, 0, 0, 0, 0, 0, 0};
    int ledIndex = 0;
    evalBoard->setLedDisplay(ledArray);
    evalBoard->setTtlOut(ttlOut);

    statusBar()->showMessage("Measuring electrode impedances...");

    // Create a progress bar to let user know how long this will take.
    QProgressDialog progress("Measuring Electrode Impedances", "Abort", 0, 98, this);
    progress.setWindowTitle("Progress");
    progress.setMinimumDuration(0);
    progress.setModal(true);
    progress.setValue(0);

    // Create a command list for the AuxCmd1 slot.
    commandSequenceLength =
            chipRegisters.createCommandListZcheckDac(commandList, actualImpedanceFreq, 128.0);
    evalBoard->uploadCommandList(commandList, Rhd2000EvalBoard::AuxCmd1, 1);
    evalBoard->selectAuxCommandLength(Rhd2000EvalBoard::AuxCmd1,
                                      0, commandSequenceLength - 1);

    progress.setValue(1);

    evalBoard->selectAuxCommandBank(Rhd2000EvalBoard::PortA,
                                    Rhd2000EvalBoard::AuxCmd1, 1);
    evalBoard->selectAuxCommandBank(Rhd2000EvalBoard::PortB,
                                    Rhd2000EvalBoard::AuxCmd1, 1);
    evalBoard->selectAuxCommandBank(Rhd2000EvalBoard::PortC,
                                    Rhd2000EvalBoard::AuxCmd1, 1);
    evalBoard->selectAuxCommandBank(Rhd2000EvalBoard::PortD,
                                    Rhd2000EvalBoard::AuxCmd1, 1);

    // Select number of periods to measure impedance over
    int numPeriods = qRound(0.020 * actualImpedanceFreq); // Test each channel for at least 20 msec...
    if (numPeriods < 5) numPeriods = 5; // ...but always measure across no fewer than 5 complete periods
    double period = boardSampleRate / actualImpedanceFreq;
    int numBlocks = qCeil((numPeriods + 2.0) * period / 60.0);  // + 2 periods to give time to settle initially
    if (numBlocks < 2) numBlocks = 2;   // need first block for command to switch channels to take effect.

    actualDspCutoffFreq = chipRegisters.setDspCutoffFreq(desiredDspCutoffFreq);
    actualLowerBandwidth = chipRegisters.setLowerBandwidth(desiredLowerBandwidth);
    actualUpperBandwidth = chipRegisters.setUpperBandwidth(desiredUpperBandwidth);
    chipRegisters.enableDsp(dspEnabled);
    chipRegisters.enableZcheck(true);
    commandSequenceLength = chipRegisters.createCommandListRegisterConfig(commandList, false);
    // Upload version with no ADC calibration to AuxCmd3 RAM Bank 1.
    evalBoard->uploadCommandList(commandList, Rhd2000EvalBoard::AuxCmd3, 3);
    evalBoard->selectAuxCommandLength(Rhd2000EvalBoard::AuxCmd3, 0, commandSequenceLength - 1);
    evalBoard->selectAuxCommandBank(Rhd2000EvalBoard::PortA, Rhd2000EvalBoard::AuxCmd3, 3);
    evalBoard->selectAuxCommandBank(Rhd2000EvalBoard::PortB, Rhd2000EvalBoard::AuxCmd3, 3);
    evalBoard->selectAuxCommandBank(Rhd2000EvalBoard::PortC, Rhd2000EvalBoard::AuxCmd3, 3);
    evalBoard->selectAuxCommandBank(Rhd2000EvalBoard::PortD, Rhd2000EvalBoard::AuxCmd3, 3);

    evalBoard->setContinuousRunMode(false);
    evalBoard->setMaxTimeStep(SAMPLES_PER_DATA_BLOCK * numBlocks);

    // Create matrices of doubles of size (numStreams x 32 x 3) to store complex amplitudes
    // of all amplifier channels (32 on each data stream) at three different Cseries values.
    QVector<QVector<QVector<double> > > measuredMagnitude;
    QVector<QVector<QVector<double> > > measuredPhase;
    measuredMagnitude.resize(evalBoard->getNumEnabledDataStreams());
    measuredPhase.resize(evalBoard->getNumEnabledDataStreams());
    for (int i = 0; i < evalBoard->getNumEnabledDataStreams(); ++i) {
        measuredMagnitude[i].resize(32);
        measuredPhase[i].resize(32);
        for (int j = 0; j < 32; ++j) {
            measuredMagnitude[i][j].resize(3);
            measuredPhase[i][j].resize(3);
        }
    }

    // We execute three complete electrode impedance measurements: one each with
    // Cseries set to 0.1 pF, 1 pF, and 10 pF.  Then we select the best measurement
    // for each channel so that we achieve a wide impedance measurement range.
    for (capRange = 0; capRange < 3; ++ capRange) {
        switch (capRange) {
        case 0:
            chipRegisters.setZcheckScale(Rhd2000Registers::ZcheckCs100fF);
            cSeries = 0.1e-12;
            break;
        case 1:
            chipRegisters.setZcheckScale(Rhd2000Registers::ZcheckCs1pF);
            cSeries = 1.0e-12;
            break;
        case 2:
            chipRegisters.setZcheckScale(Rhd2000Registers::ZcheckCs10pF);
            cSeries = 10.0e-12;
            break;
        }

        // Check all 32 channels across all active data streams.
        for (channel = 0; channel < 32; ++channel) {

            progress.setValue(32 * capRange + channel + 2);
            if (progress.wasCanceled()) {
                evalBoard->setContinuousRunMode(false);
                evalBoard->setMaxTimeStep(0);
                evalBoard->flush();
                for (int i = 0; i < 8; ++i) ledArray[i] = 0;
                ttlOut[15] = 0;
                evalBoard->setLedDisplay(ledArray);
                evalBoard->setTtlOut(ttlOut);
                statusBar()->clearMessage();
                wavePlot->setFocus();
                return;
            }

            chipRegisters.setZcheckChannel(channel);
            commandSequenceLength =
                    chipRegisters.createCommandListRegisterConfig(commandList, false);
            // Upload version with no ADC calibration to AuxCmd3 RAM Bank 1.
            evalBoard->uploadCommandList(commandList, Rhd2000EvalBoard::AuxCmd3, 3);

            evalBoard->run();
            while (evalBoard->isRunning() ) {
                qApp->processEvents();
            }
            evalBoard->readDataBlocks(numBlocks, dataQueue);
            signalProcessor->loadAmplifierData(dataQueue, numBlocks, false, 0, 0, triggerIndex, false, bufferQueue,
                                               false, *saveStream, saveFormat, false, false, 0);
            for (stream = 0; stream < evalBoard->getNumEnabledDataStreams(); ++stream) {
                if (chipId[stream] != CHIP_ID_RHD2164_B) {
                    signalProcessor->measureComplexAmplitude(measuredMagnitude, measuredPhase,
                                                        capRange, stream, channel,  numBlocks, boardSampleRate,
                                                        actualImpedanceFreq, numPeriods);
               }
            }

            // If an RHD2164 chip is plugged in, we have to set the Zcheck select register to channels 32-63
            // and repeat the previous steps.
            if (rhd2164ChipPresent) {
                chipRegisters.setZcheckChannel(channel + 32); // address channels 32-63
                commandSequenceLength =
                        chipRegisters.createCommandListRegisterConfig(commandList, false);
                // Upload version with no ADC calibration to AuxCmd3 RAM Bank 1.
                evalBoard->uploadCommandList(commandList, Rhd2000EvalBoard::AuxCmd3, 3);

                evalBoard->run();
                while (evalBoard->isRunning() ) {
                    qApp->processEvents();
                }
                evalBoard->readDataBlocks(numBlocks, dataQueue);
                signalProcessor->loadAmplifierData(dataQueue, numBlocks, false, 0, 0, triggerIndex, false, bufferQueue,
                                                   false, *saveStream, saveFormat, false, false, 0);
                for (stream = 0; stream < evalBoard->getNumEnabledDataStreams(); ++stream) {
                    if (chipId[stream] == CHIP_ID_RHD2164_B) {
                        signalProcessor->measureComplexAmplitude(measuredMagnitude, measuredPhase,
                                                            capRange, stream, channel,  numBlocks, boardSampleRate,
                                                            actualImpedanceFreq, numPeriods);
                    }
                }
            }

            // Advance LED display
            ledArray[ledIndex] = 0;
            ledIndex++;
            if (ledIndex == 8) ledIndex = 0;
            ledArray[ledIndex] = 1;
            evalBoard->setLedDisplay(ledArray);
        }
    }

    SignalChannel *signalChannel;
    double distance, minDistance, current, Cseries;
    double impedanceMagnitude, impedancePhase;

    const double bestAmplitude = 250.0;  // we favor voltage readings that are closest to 250 uV: not too large,
                                         // and not too small.
    const double dacVoltageAmplitude = 128 * (1.225 / 256);  // this assumes the DAC amplitude was set to 128
    const double parasiticCapacitance = 10.0e-12;  // 10 pF: an estimate of on-chip parasitic capacitance.
    double relativeFreq = actualImpedanceFreq / boardSampleRate;

    int bestAmplitudeIndex;
    for (stream = 0; stream < evalBoard->getNumEnabledDataStreams(); ++stream) {
        for (channel = 0; channel < 32; ++channel) {
            signalChannel = signalSources->findAmplifierChannel(stream, channel);
            if (signalChannel) {
                minDistance = 9.9e99;  // ridiculously large number
                for (capRange = 0; capRange < 3; ++capRange) {
                    // Find the measured amplitude that is closest to bestAmplitude on a logarithmic scale
                    distance = qAbs(qLn(measuredMagnitude[stream][channel][capRange] / bestAmplitude));
                    if (distance < minDistance) {
                        bestAmplitudeIndex = capRange;
                        minDistance = distance;
                    }
                }
                switch (bestAmplitudeIndex) {
                case 0:
                    Cseries = 0.1e-12;
                    break;
                case 1:
                    Cseries = 1.0e-12;
                    break;
                case 2:
                    Cseries = 10.0e-12;
                    break;
                }

                // Calculate current amplitude produced by on-chip voltage DAC
                current = TWO_PI * actualImpedanceFreq * dacVoltageAmplitude * Cseries;

                // Calculate impedance magnitude from calculated current and measured voltage.
                impedanceMagnitude = 1.0e-6 * (measuredMagnitude[stream][channel][bestAmplitudeIndex] / current) *
                        (18.0 * relativeFreq * relativeFreq + 1.0);

                // Calculate impedance phase, with small correction factor accounting for the
                // 3-command SPI pipeline delay.
                impedancePhase = measuredPhase[stream][channel][bestAmplitudeIndex] + (360.0 * (3.0 / period));

                // Factor out on-chip parasitic capacitance from impedance measurement.
                factorOutParallelCapacitance(impedanceMagnitude, impedancePhase, actualImpedanceFreq,
                                             parasiticCapacitance);

                // Perform empirical resistance correction to improve accuarcy at sample rates below
                // 15 kS/s.
                empiricalResistanceCorrection(impedanceMagnitude, impedancePhase,
                                              boardSampleRate);

                signalChannel->electrodeImpedanceMagnitude = impedanceMagnitude;
                signalChannel->electrodeImpedancePhase = impedancePhase;
            }
        }
    }

    evalBoard->setContinuousRunMode(false);
    evalBoard->setMaxTimeStep(0);
    evalBoard->flush();

    // Switch back to flatline
    evalBoard->selectAuxCommandBank(Rhd2000EvalBoard::PortA, Rhd2000EvalBoard::AuxCmd1, 0);
    evalBoard->selectAuxCommandBank(Rhd2000EvalBoard::PortB, Rhd2000EvalBoard::AuxCmd1, 0);
    evalBoard->selectAuxCommandBank(Rhd2000EvalBoard::PortC, Rhd2000EvalBoard::AuxCmd1, 0);
    evalBoard->selectAuxCommandBank(Rhd2000EvalBoard::PortD, Rhd2000EvalBoard::AuxCmd1, 0);
    evalBoard->selectAuxCommandLength(Rhd2000EvalBoard::AuxCmd1, 0, 59);

    evalBoard->selectAuxCommandBank(Rhd2000EvalBoard::PortA, Rhd2000EvalBoard::AuxCmd3,
                                    fastSettleEnabled ? 2 : 1);
    evalBoard->selectAuxCommandBank(Rhd2000EvalBoard::PortB, Rhd2000EvalBoard::AuxCmd3,
                                    fastSettleEnabled ? 2 : 1);
    evalBoard->selectAuxCommandBank(Rhd2000EvalBoard::PortC, Rhd2000EvalBoard::AuxCmd3,
                                    fastSettleEnabled ? 2 : 1);
    evalBoard->selectAuxCommandBank(Rhd2000EvalBoard::PortD, Rhd2000EvalBoard::AuxCmd3,
                                    fastSettleEnabled ? 2 : 1);

    progress.setValue(progress.maximum());

    // Turn off LED.
    for (int i = 0; i < 8; ++i) ledArray[i] = 0;
    ttlOut[15] = 0;
    evalBoard->setLedDisplay(ledArray);
    evalBoard->setTtlOut(ttlOut);

    // Re-enable external fast settling, if selected.
    evalBoard->enableExternalFastSettle(externalFastSettleCheckBox->isChecked());

    // Re-enable auxiliary digital output control, if selected.
    evalBoard->enableExternalDigOut(Rhd2000EvalBoard::PortA, auxDigOutEnabled[0]);
    evalBoard->enableExternalDigOut(Rhd2000EvalBoard::PortB, auxDigOutEnabled[1]);
    evalBoard->enableExternalDigOut(Rhd2000EvalBoard::PortC, auxDigOutEnabled[2]);
    evalBoard->enableExternalDigOut(Rhd2000EvalBoard::PortD, auxDigOutEnabled[3]);

    saveImpedancesButton->setEnabled(true);
    statusBar()->clearMessage();
    showImpedanceCheckBox->setChecked(true);
    showImpedances(true);
    wavePlot->setFocus();
}

// Given a measured complex impedance that is the result of an electrode impedance in parallel
// with a parasitic capacitance (i.e., due to the amplifier input capacitance and other
// capacitances associated with the chip bondpads), this function factors out the effect of the
// parasitic capacitance to return the acutal electrode impedance.
void MainWindow::factorOutParallelCapacitance(double &impedanceMagnitude, double &impedancePhase,
                                              double frequency, double parasiticCapacitance)
{
    // First, convert from polar coordinates to rectangular coordinates.
    double measuredR = impedanceMagnitude * qCos(DEGREES_TO_RADIANS * impedancePhase);
    double measuredX = impedanceMagnitude * qSin(DEGREES_TO_RADIANS * impedancePhase);

    double capTerm = TWO_PI * frequency * parasiticCapacitance;
    double xTerm = capTerm * (measuredR * measuredR + measuredX * measuredX);
    double denominator = capTerm * xTerm + 2 * capTerm * measuredX + 1;
    double trueR = measuredR / denominator;
    double trueX = (measuredX + xTerm) / denominator;

    // Now, convert from rectangular coordinates back to polar coordinates.
    impedanceMagnitude = qSqrt(trueR * trueR + trueX * trueX);
    impedancePhase = RADIANS_TO_DEGREES * qAtan2(trueX, trueR);
}

// This is a purely empirical function to correct observed errors in the real component
// of measured electrode impedances at sampling rates below 15 kS/s.  At low sampling rates,
// it is difficult to approximate a smooth sine wave with the on-chip voltage DAC and 10 kHz
// 2-pole lowpass filter.  This function attempts to somewhat correct for this, but a better
// solution is to always run impedance measurements at 20 kS/s, where they seem to be most
// accurate.
void MainWindow::empiricalResistanceCorrection(double &impedanceMagnitude, double &impedancePhase,
                                               double boardSampleRate)
{
    // First, convert from polar coordinates to rectangular coordinates.
    double impedanceR = impedanceMagnitude * qCos(DEGREES_TO_RADIANS * impedancePhase);
    double impedanceX = impedanceMagnitude * qSin(DEGREES_TO_RADIANS * impedancePhase);

    // Emprically derived correction factor (i.e., no physical basis for this equation).
    impedanceR /= 10.0 * qExp(-boardSampleRate / 2500.0) * qCos(TWO_PI * boardSampleRate / 15000.0) + 1.0;

    // Now, convert from rectangular coordinates back to polar coordinates.
    impedanceMagnitude = qSqrt(impedanceR * impedanceR + impedanceX * impedanceX);
    impedancePhase = RADIANS_TO_DEGREES * qAtan2(impedanceX, impedanceR);
}

// Save measured electrode impedances in CSV (Comma Separated Values) text file.
void MainWindow::saveImpedances()
{
    double equivalentR, equivalentC;

    QString csvFileName;
    csvFileName = QFileDialog::getSaveFileName(this,
                                            tr("Save Impedance Data As"), ".",
                                            tr("CSV (Comma delimited) (*.csv)"));

    if (!csvFileName.isEmpty()) {
        QFile csvFile(csvFileName);

        if (!csvFile.open(QIODevice::WriteOnly | QIODevice::Text)) {
            cerr << "Cannot open CSV file for writing: " <<
                    qPrintable(csvFile.errorString()) << endl;
        }
        QTextStream out(&csvFile);

        out << "Channel Number,Channel Name,Port,Enabled,";
        out << "Impedance Magnitude at " << actualImpedanceFreq << " Hz (ohms),";
        out << "Impedance Phase at " << actualImpedanceFreq << " Hz (degrees),";
        out << "Series RC equivalent R (Ohms),";
        out << "Series RC equivalent C (Farads)" << endl;

        SignalChannel *signalChannel;
        for (int stream = 0; stream < evalBoard->getNumEnabledDataStreams(); ++stream) {
            for (int channel = 0; channel < 32; ++channel) {
                signalChannel = signalSources->findAmplifierChannel(stream, channel);
                if (signalChannel != nullptr) {
                    equivalentR = signalChannel->electrodeImpedanceMagnitude *
                        qCos(DEGREES_TO_RADIANS * signalChannel->electrodeImpedancePhase);
                    equivalentC = 1.0 / (TWO_PI * actualImpedanceFreq * signalChannel->electrodeImpedanceMagnitude *
                        -1.0 * qSin(DEGREES_TO_RADIANS * signalChannel->electrodeImpedancePhase));

                    out.setRealNumberNotation(QTextStream::ScientificNotation);
                    out.setRealNumberPrecision(2);

                    out << signalChannel->nativeChannelName << ",";
                    out << signalChannel->customChannelName << ",";
                    out << signalChannel->signalGroup->name << ",";
                    out << signalChannel->enabled << ",";
                    out << signalChannel->electrodeImpedanceMagnitude << ",";

                    out.setRealNumberNotation(QTextStream::FixedNotation);
                    out.setRealNumberPrecision(0);

                    out << signalChannel->electrodeImpedancePhase << ",";

                    out.setRealNumberNotation(QTextStream::ScientificNotation);
                    out.setRealNumberPrecision(2);

                    out << equivalentR << ",";
                    out << equivalentC << endl;
                }
            }
        }

        csvFile.close();
    }
    wavePlot->setFocus();
}

void MainWindow::plotPointsMode(bool enabled)
{
    wavePlot->setPointPlotMode(enabled);
    wavePlot->setFocus();
}

void MainWindow::setStatusBarReady()
{
    if (!synthMode) {
        statusBarLabel->setText("Ready.");
    } else {
        statusBarLabel->setText("No USB board connected.  Ready to run with synthesized data.");
    }
}

void MainWindow::setStatusBarRunning()
{
    if (!synthMode) {
        statusBarLabel->setText("Running.");
    } else {
        statusBarLabel->setText("Running with synthesized data.");
    }
}

void MainWindow::setStatusBarRecording(double bytesPerMinute)
{
    if (!synthMode) {
        statusBarLabel->setText("Saving data to file " + saveFileName + ".  (" +
                                QString::number(bytesPerMinute / (1024.0 * 1024.0), 'f', 1) +
                                " MB/minute.  File size may be reduced by disabling unused inputs.)");
    } else {
        statusBarLabel->setText("Saving synthesized data to file " + saveFileName + ".  (" +
                                QString::number(bytesPerMinute / (1024.0 * 1024.0), 'f', 1) +
                                " MB/minute.  File size may be reduced by disabling unused inputs.)");
    }
}

void MainWindow::setStatusBarWaitForTrigger()
{
    if (recordTriggerPolarity == 0) {
        statusBarLabel->setText("Waiting for logic high trigger on digital input " +
                                QString::number(recordTriggerChannel) + "...");
    } else {
        statusBarLabel->setText("Waiting for logic low trigger on digital input " +
                                QString::number(recordTriggerChannel) + "...");
    }
}

// Set the format of the saved data file.
void MainWindow::setSaveFormat(SaveFormat format)
{
    saveFormat = format;
}

// Create and open a new save file for data (saveFile), and create a new
// data stream (saveStream) for writing to the file.
void MainWindow::startNewSaveFile(SaveFormat format)
{
    QFileInfo fileInfo(saveBaseFileName);
    QDateTime dateTime = QDateTime::currentDateTime();

    if (format == SaveFormatIntan) {
        // Add time and date stamp to base filename.
        saveFileName = fileInfo.path();
        saveFileName += "/";
        saveFileName += fileInfo.baseName();
        saveFileName += "_";
        saveFileName += dateTime.toString("yyMMdd");    // date stamp
        saveFileName += "_";
        saveFileName += dateTime.toString("HHmmss");    // time stamp
        saveFileName += ".rhd";

        saveFile = new QFile(saveFileName);

        if (!saveFile->open(QIODevice::WriteOnly)) {
            cerr << "Cannot open file for writing: " <<
                    qPrintable(saveFile->errorString()) << endl;
        }

        saveStream = new QDataStream(saveFile);
        saveStream->setVersion(QDataStream::Qt_4_8);

        // Set to little endian mode for compatibilty with MATLAB,
        // which is little endian on all platforms
        saveStream->setByteOrder(QDataStream::LittleEndian);

        // Write 4-byte floating-point numbers (instead of the default 8-byte numbers)
        // to save disk space.
        saveStream->setFloatingPointPrecision(QDataStream::SinglePrecision);

    } else if (format == SaveFormatFilePerSignalType) {
        // Create 'save file' name for status bar display.
        saveFileName = fileInfo.path();
        saveFileName += "/";
        saveFileName += fileInfo.baseName();
        saveFileName += "_";
        saveFileName += dateTime.toString("yyMMdd");    // date stamp
        saveFileName += "_";
        saveFileName += dateTime.toString("HHmmss");    // time stamp

        // Create subdirectory for data, timestamp, and info files.
        QString subdirName;
        subdirName = fileInfo.baseName();
        subdirName += "_";
        subdirName += dateTime.toString("yyMMdd");    // date stamp
        subdirName += "_";
        subdirName += dateTime.toString("HHmmss");    // time stamp

        QDir dir(fileInfo.path());
        dir.mkdir(subdirName);

        QDir subdir(fileInfo.path() + "/" + subdirName);

        infoFileName = subdir.path() + "/" + "info.rhd";

        signalProcessor->createTimestampFilename(subdir.path());
        signalProcessor->openTimestampFile();

        signalProcessor->createSignalTypeFilenames(subdir.path());
        signalProcessor->openSignalTypeFiles(saveTtlOut);

        infoFile = new QFile(infoFileName);

        if (!infoFile->open(QIODevice::WriteOnly)) {
            cerr << "Cannot open file for writing: " <<
                    qPrintable(infoFile->errorString()) << endl;
        }

        infoStream = new QDataStream(infoFile);
        infoStream->setVersion(QDataStream::Qt_4_8);

        // Set to little endian mode for compatibilty with MATLAB,
        // which is little endian on all platforms
        infoStream->setByteOrder(QDataStream::LittleEndian);

        // Write 4-byte floating-point numbers (instead of the default 8-byte numbers)
        // to save disk space.
        infoStream->setFloatingPointPrecision(QDataStream::SinglePrecision);

    } else if (format == SaveFormatFilePerChannel) {
        // Create 'save file' name for status bar display.
        saveFileName = fileInfo.path();
        saveFileName += "/";
        saveFileName += fileInfo.baseName();
        saveFileName += "_";
        saveFileName += dateTime.toString("yyMMdd");    // date stamp
        saveFileName += "_";
        saveFileName += dateTime.toString("HHmmss");    // time stamp

        // Create subdirectory for individual channel data files.
        QString subdirName;
        subdirName = fileInfo.baseName();
        subdirName += "_";
        subdirName += dateTime.toString("yyMMdd");    // date stamp
        subdirName += "_";
        subdirName += dateTime.toString("HHmmss");    // time stamp

        QDir dir(fileInfo.path());
        dir.mkdir(subdirName);

        QDir subdir(fileInfo.path() + "/" + subdirName);

        // Create filename for each channel.
        signalProcessor->createTimestampFilename(subdir.path());
        signalProcessor->createFilenames(signalSources, subdir.path());

        // Open save files and output streams.
        signalProcessor->openTimestampFile();
        signalProcessor->openSaveFiles(signalSources);

        // Create info file.
        infoFileName = subdir.path() + "/" + "info.rhd";

        infoFile = new QFile(infoFileName);

        if (!infoFile->open(QIODevice::WriteOnly)) {
            cerr << "Cannot open file for writing: " <<
                    qPrintable(infoFile->errorString()) << endl;
        }

        infoStream = new QDataStream(infoFile);
        infoStream->setVersion(QDataStream::Qt_4_8);

        // Set to little endian mode for compatibilty with MATLAB,
        // which is little endian on all platforms
        infoStream->setByteOrder(QDataStream::LittleEndian);

        // Write 4-byte floating-point numbers (instead of the default 8-byte numbers)
        // to save disk space.
        infoStream->setFloatingPointPrecision(QDataStream::SinglePrecision);
    }
}

void MainWindow::closeSaveFile(SaveFormat format) {
    switch (format) {
    case SaveFormatIntan:
        saveFile->close();
        delete saveStream;
        delete saveFile;
        break;

    case SaveFormatFilePerSignalType:
        signalProcessor->closeTimestampFile();
        signalProcessor->closeSignalTypeFiles();
        infoFile->close();
        delete infoStream;
        delete infoFile;
        break;

    case SaveFormatFilePerChannel:
        signalProcessor->closeTimestampFile();
        signalProcessor->closeSaveFiles(signalSources);
        infoFile->close();
        delete infoStream;
        delete infoFile;
        break;
    }
}

// Launch save file format selection dialog.
void MainWindow::setSaveFormatDialog()
{
    SetSaveFormatDialog saveFormatDialog(saveFormat, saveTemp, saveTtlOut, newSaveFilePeriodMinutes, this);

    if (saveFormatDialog.exec()) {
        saveFormat = (SaveFormat) saveFormatDialog.buttonGroup->checkedId();
        saveTemp = (saveFormatDialog.saveTemperatureCheckBox->checkState() == Qt::Checked);
        saveTtlOut = (saveFormatDialog.saveTtlOutCheckBox->checkState() == Qt::Checked);
        newSaveFilePeriodMinutes = saveFormatDialog.recordTimeSpinBox->value();

        setSaveFormat(saveFormat);
    }
    wavePlot->setFocus();
}

// MM - UPDATE - WINDOW DISCRIMINATOR - 1/16/2018

void MainWindow::changeDetectionMethod(bool enable)
{
    if (!synthMode) {
        evalBoard->setDetectionMode(enable);
    }

}
void MainWindow::setDac1WindowStart()
{
    if (!synthMode) evalBoard->setDacWindowStart(0, 0x0000);
}

void MainWindow::setDacThreshold1(int threshold)
{
    int threshLevel = qRound((double) threshold / 0.195) + 32768;
    if (!synthMode) evalBoard->setDacThreshold(0, threshLevel, threshold >= 0);
}

void MainWindow::setDac1WindowStop(int sample)
{
    if (!synthMode) evalBoard->setDacWindowStop(0, sample);
}

void MainWindow::setDacThreshold2(int threshold)
{
    int threshLevel = qRound((double) threshold / 0.195) + 32768;
    if (!synthMode) evalBoard->setDacThreshold(1, threshLevel, threshold >= 0);
}

void MainWindow::setDac2WindowStart(int sample)
{
    if (!synthMode) evalBoard->setDacWindowStart(1, sample);
}

void MainWindow::setDac2WindowStop(int sample)
{
    if (!synthMode) evalBoard->setDacWindowStop(1, sample);
}

void MainWindow::setDacThreshold3(int threshold)
{
    int threshLevel = qRound((double) threshold / 0.195) + 32768;
    if (!synthMode) evalBoard->setDacThreshold(2, threshLevel, threshold >= 0);
}

void MainWindow::setDac3WindowStart(int sample)
{
    if (!synthMode) evalBoard->setDacWindowStart(2, sample);
}

void MainWindow::setDac3WindowStop(int sample)
{
    if (!synthMode) evalBoard->setDacWindowStop(2, sample);
}

void MainWindow::setDacThreshold4(int threshold)
{
    int threshLevel = qRound((double) threshold / 0.195) + 32768;
    if (!synthMode) evalBoard->setDacThreshold(3, threshLevel, threshold >= 0);
}

void MainWindow::setDac4WindowStart(int sample)
{
    if (!synthMode) evalBoard->setDacWindowStart(3, sample);
}

void MainWindow::setDac4WindowStop(int sample)
{
    if (!synthMode) evalBoard->setDacWindowStop(3, sample);
}

void MainWindow::setDacThreshold5(int threshold)
{
    int threshLevel = qRound((double) threshold / 0.195) + 32768;
    if (!synthMode) evalBoard->setDacThreshold(4, threshLevel, threshold >= 0);
}

void MainWindow::setDac5WindowStart(int sample)
{
    if (!synthMode) evalBoard->setDacWindowStart(4, sample);
}

void MainWindow::setDac5WindowStop(int sample)
{
    if (!synthMode) evalBoard->setDacWindowStop(4, sample);
}

void MainWindow::setDacThreshold6(int threshold)
{
    int threshLevel = qRound((double) threshold / 0.195) + 32768;
    if (!synthMode) evalBoard->setDacThreshold(5, threshLevel, threshold >= 0);
}

void MainWindow::setDac6WindowStart(int sample)
{
    if (!synthMode) evalBoard->setDacWindowStart(5, sample);
}

void MainWindow::setDac6WindowStop(int sample)
{
    if (!synthMode) evalBoard->setDacWindowStop(5, sample);
}

void MainWindow::setDacThreshold7(int threshold)
{
    int threshLevel = qRound((double) threshold / 0.195) + 32768;
    if (!synthMode) evalBoard->setDacThreshold(6, threshLevel, threshold >= 0);
}

void MainWindow::setDac7WindowStart(int sample)
{
    if (!synthMode) evalBoard->setDacWindowStart(6, sample);
}

void MainWindow::setDac7WindowStop(int sample)
{
    if (!synthMode) evalBoard->setDacWindowStop(6, sample);
}

void MainWindow::setDacThreshold8(int threshold)
{
    int threshLevel = qRound((double) threshold / 0.195) + 32768;
    if (!synthMode) evalBoard->setDacThreshold(7, threshLevel, threshold >= 0);
}

void MainWindow::setDac8WindowStart(int sample)
{
    if (!synthMode) evalBoard->setDacWindowStart(7, sample);
}

void MainWindow::setDac8WindowStop(int sample)
{
    if (!synthMode) evalBoard->setDacWindowStop(7, sample);
}

void MainWindow::setDac1ThresholdType(int thresholdType)
{
    if (!synthMode) evalBoard->changeThresholdType(0, thresholdType);
}

void MainWindow::setDac2ThresholdType(int thresholdType)
{
    if (!synthMode) evalBoard->changeThresholdType(1, thresholdType);
}

void MainWindow::setDac3ThresholdType(int thresholdType)
{
    if (!synthMode) evalBoard->changeThresholdType(2, thresholdType);
}

void MainWindow::setDac4ThresholdType(int thresholdType)
{
    if (!synthMode) evalBoard->changeThresholdType(3, thresholdType);
}

void MainWindow::setDac5ThresholdType(int thresholdType)
{
    if (!synthMode) evalBoard->changeThresholdType(4, thresholdType);
}

void MainWindow::setDac6ThresholdType(int thresholdType)
{
    if (!synthMode) evalBoard->changeThresholdType(5, thresholdType);
}

void MainWindow::setDac7ThresholdType(int thresholdType)
{
    if (!synthMode) evalBoard->changeThresholdType(6, thresholdType);
}

void MainWindow::setDac8ThresholdType(int thresholdType)
{
    if (!synthMode) evalBoard->changeThresholdType(7, thresholdType);
}
// END UPDATE

int MainWindow::getEvalBoardMode()
{
    return evalBoardMode;
}

// Launch auxiliary digital output control configuration dialog.
void MainWindow::configDigOutControl()
{
    AuxDigOutConfigDialog auxDigOutConfigDialog(auxDigOutEnabled, auxDigOutChannel, this);
    if (auxDigOutConfigDialog.exec()) {
        for (int port = 0; port < 4; port++) {
            auxDigOutEnabled[port] = auxDigOutConfigDialog.enabled(port);
            auxDigOutChannel[port] = auxDigOutConfigDialog.channel(port);
        }
        updateAuxDigOut();
    }
    wavePlot->setFocus();
}

void MainWindow::updateAuxDigOut()
{
    if (!synthMode) {
        evalBoard->enableExternalDigOut(Rhd2000EvalBoard::PortA, auxDigOutEnabled[0]);
        evalBoard->enableExternalDigOut(Rhd2000EvalBoard::PortB, auxDigOutEnabled[1]);
        evalBoard->enableExternalDigOut(Rhd2000EvalBoard::PortC, auxDigOutEnabled[2]);
        evalBoard->enableExternalDigOut(Rhd2000EvalBoard::PortD, auxDigOutEnabled[3]);
        evalBoard->setExternalDigOutChannel(Rhd2000EvalBoard::PortA, auxDigOutChannel[0]);
        evalBoard->setExternalDigOutChannel(Rhd2000EvalBoard::PortB, auxDigOutChannel[1]);
        evalBoard->setExternalDigOutChannel(Rhd2000EvalBoard::PortC, auxDigOutChannel[2]);
        evalBoard->setExternalDigOutChannel(Rhd2000EvalBoard::PortD, auxDigOutChannel[3]);
    }
}

// Launch manual cable delay configuration dialog.
void MainWindow::manualCableDelayControl()
{
    vector<int> currentDelays;
    currentDelays.resize(4, 0);
    if (!synthMode) {
     evalBoard->getCableDelay(currentDelays);
    }

    CableDelayDialog manualCableDelayDialog(manualDelayEnabled, currentDelays, this);
    if (manualCableDelayDialog.exec()) {
        manualDelayEnabled[0] = manualCableDelayDialog.manualPortACheckBox->isChecked();
        manualDelayEnabled[1] = manualCableDelayDialog.manualPortBCheckBox->isChecked();
        manualDelayEnabled[2] = manualCableDelayDialog.manualPortCCheckBox->isChecked();
        manualDelayEnabled[3] = manualCableDelayDialog.manualPortDCheckBox->isChecked();
        if (manualDelayEnabled[0]) {
            manualDelay[0] = manualCableDelayDialog.delayPortASpinBox->value();
            if (!synthMode) {
                evalBoard->setCableDelay(Rhd2000EvalBoard::PortA, manualDelay[0]);
            }
        }
        if (manualDelayEnabled[1]) {
            manualDelay[1] = manualCableDelayDialog.delayPortBSpinBox->value();
            if (!synthMode) {
                evalBoard->setCableDelay(Rhd2000EvalBoard::PortB, manualDelay[1]);
            }
        }
        if (manualDelayEnabled[2]) {
            manualDelay[2] = manualCableDelayDialog.delayPortCSpinBox->value();
            if (!synthMode) {
                evalBoard->setCableDelay(Rhd2000EvalBoard::PortC, manualDelay[2]);
            }
            }
        if (manualDelayEnabled[3]) {
            manualDelay[3] = manualCableDelayDialog.delayPortDSpinBox->value();
            if (!synthMode) {
                evalBoard->setCableDelay(Rhd2000EvalBoard::PortD, manualDelay[3]);
            }
        }
    }
    scanPorts();
    wavePlot->setFocus();
}

bool MainWindow::isRecording()
{
    return recording;
}
