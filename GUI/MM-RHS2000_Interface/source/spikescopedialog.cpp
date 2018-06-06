//  ------------------------------------------------------------------------
//
//  This file is part of the Intan Technologies RHS2000 Interface
//  Version 1.01
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
#include <iostream>

#include "globalconstants.h"
#include "spikescopedialog.h"
#include "signalchannel.h"
#include "signalgroup.h"
#include "spikeplot.h"

// Spike scope dialog.
// This dialog allows users to view 3-msec snippets of neural spikes triggered
// either from a selectable voltage threshold or a digital input threshold.  Multiple
// spikes are superimposed on the display so that users can compare spike shapes.

SpikeScopeDialog::SpikeScopeDialog(SignalProcessor *inSignalProcessor, SignalSources *inSignalSources,
                                   SignalChannel *initialChannel, QWidget *parent) :
    QDialog(parent)
{
    // MM - UPDATE - WINDOW DISCRIMINATOR - 1/22/18
    detMode = false;
    currentDACChannel = 0;
    wEnable.resize(8);
    wEnable.fill(false);
    wStart.resize(8);
    wStart.fill(0);
    wStop.resize(8);
    wStop.fill(0);
    wType.resize(8);
    wType[0] = 0;
    wType[1] = 1;
    wType[2] = 0;
    wType[3] = 1;
    wType[4] = 0;
    wType[5] = 1;
    wType[6] = 0;
    wType[7] = 1;
    wThresh.resize(8);
    wThresh.fill(0);
    // END UPDATE

    setFont(QFont("Arial", 18));

    signalProcessor = inSignalProcessor;
    signalSources = inSignalSources;

    spikePlot = new SpikePlot(signalProcessor, initialChannel, this, this);
    currentChannel = initialChannel;

    resetToZeroButton = new QPushButton(tr("Zero"));
    clearScopeButton = new QPushButton(tr("Clear Scope"));
    applyToAllButton = new QPushButton(tr("Apply to Entire Port"));

    connect(resetToZeroButton, SIGNAL(clicked()),
            this, SLOT(resetThresholdToZero()));
    connect(clearScopeButton, SIGNAL(clicked()),
            this, SLOT(clearScope()));
    connect(applyToAllButton, SIGNAL(clicked()),
            this, SLOT(applyToAll()));

    triggerTypeComboBox = new QComboBox();
    triggerTypeComboBox->addItem(tr("Voltage Threshold"));
    triggerTypeComboBox->addItem(tr("Digital Input"));
    triggerTypeComboBox->setCurrentIndex(0);
    triggerTypeComboBox->setEnabled(true);

    connect(triggerTypeComboBox, SIGNAL(currentIndexChanged(int)),
            this, SLOT(setTriggerType(int)));

    thresholdSpinBox = new QSpinBox();
    thresholdSpinBox->setRange(-5000, 5000);
    thresholdSpinBox->setSingleStep(5);
    thresholdSpinBox->setValue(0);

    connect(thresholdSpinBox, SIGNAL(valueChanged(int)),
            this, SLOT(setVoltageThreshold(int)));

    QHBoxLayout *thresholdSpinBoxLayout = new QHBoxLayout;
    thresholdSpinBoxLayout->addWidget(resetToZeroButton);
    thresholdSpinBoxLayout->addWidget(thresholdSpinBox);
    thresholdSpinBoxLayout->addWidget(new QLabel(QSTRING_MU_SYMBOL + "V"));
    // thresholdSpinBoxLayout->addStretch(1);

    // MM - UPDATE - WINDOW DISCRIMINATOR - 1/17/18

    QHBoxLayout *windowLabelLayout = new QHBoxLayout;
    windowLabelLayout -> addStretch(1);
    windowLabelLayout -> addWidget(new QLabel(tr("Channel")));
    windowLabelLayout -> addStretch(1);
    windowLabelLayout -> addWidget(new QLabel(tr("Start")));
    windowLabelLayout -> addStretch(1);
    windowLabelLayout -> addWidget(new QLabel(tr("Stop")));
    windowLabelLayout -> addSpacing(5);
    windowLabelLayout -> addStretch(2);
    windowLabelLayout -> addWidget(new QLabel(tr("Type")));
    windowLabelLayout -> addStretch(2);
    windowLabelLayout -> addWidget(new QLabel(QSTRING_MU_SYMBOL + "V"));
    windowLabelLayout -> addStretch(1);
    windowLabelLayout -> addSpacing(5);

    enableDacChannelCheckBox = new QCheckBox();
    enableDacChannelCheckBox->setChecked(false);

    connect(enableDacChannelCheckBox, SIGNAL(toggled(bool)),
                this, SLOT(enableDACChannel(bool)));

    selectDacChannelComboBox = new QComboBox();
    selectDacChannelComboBox->addItem(tr("DAC-1"));
    selectDacChannelComboBox->addItem(tr("DAC-2"));
    selectDacChannelComboBox->addItem(tr("DAC-3"));
    selectDacChannelComboBox->addItem(tr("DAC-4"));
    selectDacChannelComboBox->addItem(tr("DAC-5"));
    selectDacChannelComboBox->addItem(tr("DAC-6"));
    selectDacChannelComboBox->addItem(tr("DAC-7"));
    selectDacChannelComboBox->addItem(tr("DAC-8"));
    selectDacChannelComboBox->setCurrentIndex(0);

    connect(selectDacChannelComboBox, SIGNAL(currentIndexChanged(int)),
                this, SLOT(changeDACChannel(int)));

    startWindowSpinBox = new QSpinBox();
    startWindowSpinBox->setRange(0x0000,0x003c);
    startWindowSpinBox->setSingleStep(1);
    startWindowSpinBox->setValue(0);

    connect(startWindowSpinBox, SIGNAL(valueChanged(int)),
                this, SLOT(changeDACWindowStart(int)));

    stopWindowSpinBox = new QSpinBox();
    stopWindowSpinBox->setRange(0x0000,0x003c);
    stopWindowSpinBox->setSingleStep(1);
    stopWindowSpinBox->setValue(0);

    connect(stopWindowSpinBox, SIGNAL(valueChanged(int)),
                this, SLOT(changeDACWindowStop(int)));

    setWindowTypeComboBox = new QComboBox();
    setWindowTypeComboBox->addItem(tr("Include"));
    setWindowTypeComboBox->addItem(tr("Exclude"));
    setWindowTypeComboBox->setCurrentIndex(0);

    connect(setWindowTypeComboBox, SIGNAL(currentIndexChanged(int)),
                this, SLOT(changeDACTriggerType(int)));

    setWindowThresholdSpinBox = new QSpinBox();
    setWindowThresholdSpinBox->setRange(-5000, 5000);
    setWindowThresholdSpinBox->setSingleStep(5);
    setWindowThresholdSpinBox->setValue(0);

    connect(setWindowThresholdSpinBox, SIGNAL(valueChanged(int)),
                this, SLOT(changeDACThreshold(int)));

    QHBoxLayout *windowDetectorLayout = new QHBoxLayout;
    windowDetectorLayout->addWidget(enableDacChannelCheckBox);
    windowDetectorLayout->addWidget(selectDacChannelComboBox);
    windowDetectorLayout->addSpacing(15);
    windowDetectorLayout->addWidget(startWindowSpinBox);
    windowDetectorLayout->addSpacing(5);
    windowDetectorLayout->addWidget(stopWindowSpinBox);
    windowDetectorLayout->addSpacing(30);
    windowDetectorLayout->addWidget(setWindowTypeComboBox);
    windowDetectorLayout->addWidget(setWindowThresholdSpinBox);

    // END UPDATE

    digitalInputComboBox = new QComboBox();
    digitalInputComboBox->addItem(tr("DIGITAL IN 1"));
    digitalInputComboBox->addItem(tr("DIGITAL IN 2"));
    digitalInputComboBox->addItem(tr("DIGITAL IN 3"));
    digitalInputComboBox->addItem(tr("DIGITAL IN 4"));
    digitalInputComboBox->addItem(tr("DIGITAL IN 5"));
    digitalInputComboBox->addItem(tr("DIGITAL IN 6"));
    digitalInputComboBox->addItem(tr("DIGITAL IN 7"));
    digitalInputComboBox->addItem(tr("DIGITAL IN 8"));
    digitalInputComboBox->addItem(tr("DIGITAL IN 9"));
    digitalInputComboBox->addItem(tr("DIGITAL IN 10"));
    digitalInputComboBox->addItem(tr("DIGITAL IN 11"));
    digitalInputComboBox->addItem(tr("DIGITAL IN 12"));
    digitalInputComboBox->addItem(tr("DIGITAL IN 13"));
    digitalInputComboBox->addItem(tr("DIGITAL IN 14"));
    digitalInputComboBox->addItem(tr("DIGITAL IN 15"));
    digitalInputComboBox->addItem(tr("DIGITAL IN 16"));
    digitalInputComboBox->setCurrentIndex(0);

    connect(digitalInputComboBox, SIGNAL(currentIndexChanged(int)),
            this, SLOT(setDigitalInput(int)));

    edgePolarityComboBox = new QComboBox();
    edgePolarityComboBox->addItem(tr("Rising Edge"));
    edgePolarityComboBox->addItem(tr("Falling Edge"));
    edgePolarityComboBox->setCurrentIndex(0);

    connect(edgePolarityComboBox, SIGNAL(currentIndexChanged(int)),
            this, SLOT(setEdgePolarity(int)));

    numSpikesComboBox = new QComboBox();
    numSpikesComboBox->addItem(tr("Show 10 Spikes"));
    numSpikesComboBox->addItem(tr("Show 20 Spikes"));
    numSpikesComboBox->addItem(tr("Show 30 Spikes"));
    // numSpikesComboBox->addItem(tr("Show 50 Spikes")); // Doesn't play nicely
    numSpikesComboBox->setCurrentIndex(1);

    connect(numSpikesComboBox, SIGNAL(currentIndexChanged(int)),
            this, SLOT(setNumSpikes(int)));

    yScaleList.append(50);
    yScaleList.append(100);
    yScaleList.append(200);
    yScaleList.append(500);
    yScaleList.append(1000);
    yScaleList.append(2000);
    yScaleList.append(5000);

    yScaleComboBox = new QComboBox();
    for (int i = 0; i < yScaleList.size(); ++i) {
        yScaleComboBox->addItem("+/-" + QString::number(yScaleList[i]) +
                                " " + QSTRING_MU_SYMBOL + "V");
    }
    yScaleComboBox->setCurrentIndex(4);

    connect(yScaleComboBox, SIGNAL(currentIndexChanged(int)),
            this, SLOT(changeYScale(int)));

    QVBoxLayout *triggerLayout = new QVBoxLayout;
    triggerLayout->addWidget(new QLabel(tr("Type:")));
    triggerLayout->addWidget(triggerTypeComboBox);
    triggerLayout->addStretch(1);
    triggerLayout->addWidget(new QLabel(tr("Voltage Threshold:")));
    triggerLayout->addLayout(thresholdSpinBoxLayout);
    triggerLayout->addStretch(3);
    triggerLayout->addWidget(new QLabel(tr("Digital Source:")));
    triggerLayout->addWidget(digitalInputComboBox);
    triggerLayout->addWidget(edgePolarityComboBox);
    triggerLayout->addStretch(3);
    triggerLayout->addWidget(new QLabel(tr("Window Discriminator:")));
    triggerLayout->addLayout(windowLabelLayout);
    triggerLayout->addLayout(windowDetectorLayout);

    QVBoxLayout *displayLayout = new QVBoxLayout;
    displayLayout->addWidget(new QLabel(tr("Voltage Scale:")));
    displayLayout->addWidget(yScaleComboBox);
    displayLayout->addWidget(numSpikesComboBox);
    displayLayout->addWidget(clearScopeButton);

    QGroupBox *triggerGroupBox = new QGroupBox(tr("Trigger Settings"));
    triggerGroupBox->setLayout(triggerLayout);

    QGroupBox *displayGroupBox = new QGroupBox(tr("Display Settings"));
    displayGroupBox->setLayout(displayLayout);

    QVBoxLayout *leftLayout = new QVBoxLayout;
    leftLayout->addWidget(triggerGroupBox);
    leftLayout->addWidget(applyToAllButton);
    leftLayout->addStretch(1);
    leftLayout->addWidget(displayGroupBox);
    leftLayout->setStretch(0,2);
    leftLayout->setStretch(1,0);
    leftLayout->setStretch(2,0);

    QHBoxLayout *mainLayout = new QHBoxLayout;
    mainLayout->addLayout(leftLayout);
    mainLayout->addWidget(spikePlot);
    mainLayout->setStretch(0, 0);
    mainLayout->setStretch(1, 2);

    setLayout(mainLayout);

    setTriggerType(triggerTypeComboBox->currentIndex());
    setNumSpikes(numSpikesComboBox->currentIndex());
    setVoltageThreshold(thresholdSpinBox->value());
    setDigitalInput(digitalInputComboBox->currentIndex());
    setEdgePolarity(edgePolarityComboBox->currentIndex());
}

void SpikeScopeDialog::changeYScale(int index)
{
    spikePlot->setYScale(yScaleList[index]);
}

void SpikeScopeDialog::setYScale(int index)
{
    yScaleComboBox->setCurrentIndex(index);
    spikePlot->setYScale(yScaleList[index]);
}

void SpikeScopeDialog::setSampleRate(double newSampleRate)
{
    spikePlot->setSampleRate(newSampleRate);
}

// Select a voltage trigger if index == 0.
// Select a digital input trigger if index == 1.
void SpikeScopeDialog::setTriggerType(int index)
{

    thresholdSpinBox->setEnabled((index == 0) && (!detMode));
    resetToZeroButton->setEnabled((index == 0) && (!detMode));
    digitalInputComboBox->setEnabled((index == 1) && (!detMode));
    edgePolarityComboBox->setEnabled((index == 1) && (!detMode));
    spikePlot->setVoltageTriggerMode((index == 0) && (!detMode));

    // MM - UPDATE - WINDOW DISCRIMINATOR - 1/18/18
    enableDacChannelCheckBox->setEnabled(detMode);
    selectDacChannelComboBox->setEnabled(detMode);
    startWindowSpinBox->setEnabled(detMode);
    stopWindowSpinBox->setEnabled(detMode);
    setWindowTypeComboBox->setEnabled(detMode);
    setWindowThresholdSpinBox->setEnabled(detMode);
    // END UPDATE
}

void SpikeScopeDialog::resetThresholdToZero()
{
    thresholdSpinBox->setValue(0);
}

void SpikeScopeDialog::updateWaveform(int numBlocks)
{
    spikePlot->updateWaveform(numBlocks);
}

// Set number of spikes plotted superimposed.
void SpikeScopeDialog::setNumSpikes(int index)
{
    int num;

    switch (index) {
        case 0: num = 10; break;
        case 1: num = 20; break;
        case 2: num = 30; break;
//        case 3: num = 50; break;
    }

    spikePlot->setMaxNumSpikeWaveforms(num);
}

void SpikeScopeDialog::clearScope()
{
    spikePlot->clearScope();
}

void SpikeScopeDialog::setDigitalInput(int index)
{
    spikePlot->setDigitalTriggerChannel(index);
}

void SpikeScopeDialog::setVoltageThreshold(int value)
{
    spikePlot->setVoltageThreshold(value);
}

void SpikeScopeDialog::setVoltageThresholdDisplay(int value)
{
    if (spikePlot->wMode) {
        setWindowThresholdSpinBox->setValue(value);
    } else {
        thresholdSpinBox->setValue(value);
    }

}

void SpikeScopeDialog::setEdgePolarity(int index)
{
    spikePlot->setDigitalEdgePolarity(index == 0);
}

// Set Spike Scope to a new signal channel source.
void SpikeScopeDialog::setNewChannel(SignalChannel* newChannel)
{
    spikePlot->setNewChannel(newChannel);
    currentChannel = newChannel;
    if (newChannel->voltageTriggerMode) {
        triggerTypeComboBox->setCurrentIndex(0);
    } else {
        triggerTypeComboBox->setCurrentIndex(1);
    }
    thresholdSpinBox->setValue(newChannel->voltageThreshold);
    digitalInputComboBox->setCurrentIndex(newChannel->digitalTriggerChannel);
    if (newChannel->digitalEdgePolarity) {
        edgePolarityComboBox->setCurrentIndex(0);
    } else {
        edgePolarityComboBox->setCurrentIndex(1);
    }
    spikePlot->updateLevelStartStop();
}

void SpikeScopeDialog::expandYScale()
{
    if (yScaleComboBox->currentIndex() > 0) {
        yScaleComboBox->setCurrentIndex(yScaleComboBox->currentIndex() - 1);
        changeYScale(yScaleComboBox->currentIndex());
    }
}

void SpikeScopeDialog::contractYScale()
{
    if (yScaleComboBox->currentIndex() < yScaleList.size() - 1) {
        yScaleComboBox->setCurrentIndex(yScaleComboBox->currentIndex() + 1);
        changeYScale(yScaleComboBox->currentIndex());
    }
}

void SpikeScopeDialog::setDetectionMode(bool mode)
{
    detMode = mode;
    setTriggerType(triggerTypeComboBox->currentIndex());
    triggerTypeComboBox->setEnabled(!mode);
    applyToAllButton->setEnabled(!mode);

    if (mode) {
        setWindowTitle(tr("Window Scope"));
    } else {
        setWindowTitle(tr("Spike Scope"));
    }

    spikePlot->wMode = mode;
}

void SpikeScopeDialog::setDACenable(int channel, bool enable)
{
    if (channel < 0 || channel > 7) {
        cerr << "Error in SpikeScopeDialog::setDACenable: channel out of range." << endl;
        return;
    }

    wEnable[channel] = enable;
    currentDACChannel = channel;
    enableDacChannelCheckBox->setChecked(enable);
    spikePlot->setCurrentChannel(channel);
    emit enableDACChannel(enable);
}

void SpikeScopeDialog::setDACWindowStart(int channel, int sample)
{
    if (channel < 0 || channel > 7) {
        cerr << "Error in SpikeScopeDialog::setDACWindowStart: channel out of range." << endl;
        return;
    }

    if (sample < 0 || sample > 60) {
        cerr << "Error in SpikeScopeDialog::setDACWindowStart: sample out of range." << endl;
        return;
    }

    wStart[channel] = sample;
    currentDACChannel = channel;
    spikePlot->setCurrentChannel(channel);
    emit changeDACWindowStart(sample);
}

void SpikeScopeDialog::setDACWindowStop(int channel, int sample)
{
    if (channel < 0 || channel > 7) {
        cerr << "Error in SpikeScopeDialog::setDACWindowStop: channel out of range." << endl;
        return;
    }

    if (sample < 0 || sample > 60) {
        cerr << "Error in SpikeScopeDialog::setDACWindowStop: sample out of range." << endl;
        return;
    }

    wStop[channel] = sample;
    currentDACChannel = channel;
    spikePlot->setCurrentChannel(channel);
    emit changeDACWindowStop(sample);
}

void SpikeScopeDialog::setDACTriggerType(int channel, int index)
{
    if (channel < 0 || channel > 7) {
        cerr << "Error in SpikeScopeDialog::setDACTriggerType: channel out of range." << endl;
        return;
    }

    if (index < 0 || index > 1) {
        cerr << "Error in SpikeScopeDialog::setDACTriggerType: index out of range." << endl;
        return;
    }

    wType[channel] = index;
    currentDACChannel = channel;
    spikePlot->setCurrentChannel(channel);
    emit changeDACTriggerType(index);
}

void SpikeScopeDialog::setDACThreshold(int channel, int threshold)
{
    if (channel < 0 || channel > 7) {
        cerr << "Error in SpikeScopeDialog::setDACThreshold: channel out of range." << endl;
        return;
    }

    if (threshold < -5000 || threshold > 5000) {
        cerr << "Error in SpikeScopeDialog::setDACThreshold: threshold out of range." << endl;
        return;
    }

    wThresh[channel] = threshold;
    currentDACChannel = channel;
    spikePlot->setCurrentChannel(channel);
    emit changeDACThreshold(threshold);
}

void SpikeScopeDialog::setCurrentChannel(int channel)
{
    if (channel < 0 || channel > 7) {
        cerr << "Error in SpikeScopeDialog::setCurrentChannel: channel out of range." << endl;
        return;
    }

    selectDacChannelComboBox->setCurrentIndex(channel);
    currentDACChannel = channel;
    emit changeDACChannel(channel);
}

void SpikeScopeDialog::setWMax(int maxWindowStop)
{
    if (maxWindowStop < 0 || maxWindowStop > 60) {
        cerr << "Error in SpikeScopeDialog::setWMax: channel out of range." << endl;
        return;
    }

    spikePlot->setWMax(maxWindowStop);
}

// Apply trigger settings to all channels on selected port.
void SpikeScopeDialog::applyToAll()
{
    QMessageBox::StandardButton r;
    r = QMessageBox::question(this, tr("Trigger Settings"),
                                 tr("Do you really want to copy the current channel's trigger "
                                    "settings to <b>all</b> amplifier channels on this port?"),
                                 QMessageBox::Yes | QMessageBox::No);
    if (r == QMessageBox::Yes) {
        for (int i = 0; i < currentChannel->signalGroup->numChannels(); ++i) {
            currentChannel->signalGroup->channel[i].voltageTriggerMode = currentChannel->voltageTriggerMode;
            currentChannel->signalGroup->channel[i].voltageThreshold = currentChannel->voltageThreshold;
            currentChannel->signalGroup->channel[i].digitalTriggerChannel = currentChannel->digitalTriggerChannel;
            currentChannel->signalGroup->channel[i].digitalEdgePolarity = currentChannel->digitalEdgePolarity;
        }
    }
}

void SpikeScopeDialog::enableDACChannel(bool enable)
{
    wEnable[currentDACChannel] = enable;
    spikePlot->wEnable[currentDACChannel] = enable;
    spikePlot->drawAxisLines();
}

void SpikeScopeDialog::changeDACChannel(int index)
{
    currentDACChannel = index;
    spikePlot->setCurrentChannel(index);
    enableDacChannelCheckBox->setChecked(wEnable[index]);
    startWindowSpinBox->setValue(wStart[index]);
    stopWindowSpinBox->setValue(wStop[index]);
    setWindowTypeComboBox->setCurrentIndex(wType[index]);
    setWindowThresholdSpinBox->setValue(wThresh[index]);
    spikePlot->updateLevelStartStop();
}

void SpikeScopeDialog::changeDACWindowStart(int sample)
{
    wStart[currentDACChannel] = sample;
    spikePlot->wStart[currentDACChannel] = sample;
    spikePlot->drawAxisLines();
    spikePlot->updateLevelStartStop();
}

void SpikeScopeDialog::changeDACWindowStop(int sample)
{
    wStop[currentDACChannel] = sample;
    spikePlot->wStop[currentDACChannel] = sample;
    spikePlot->drawAxisLines();
    spikePlot->updateLevelStartStop();
}

void SpikeScopeDialog::changeDACTriggerType(int index)
{
    wType[currentDACChannel] = index;
    spikePlot->wType[currentDACChannel] = index;
    spikePlot->drawAxisLines();
}

void SpikeScopeDialog::changeDACThreshold(int threshold)
{
    wThresh[currentDACChannel] = threshold;
    spikePlot->wThresh[currentDACChannel] = threshold;
    spikePlot->drawAxisLines();
    spikePlot->updateLevelStartStop();
}
