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

#ifndef SPIKESCOPEDIALOG_H
#define SPIKESCOPEDIALOG_H

#include <QDialog>

using namespace std;

class QPushButton;
class QComboBox;
class QCheckBox;
class QSpinBox;
class SpikePlot;
class SignalProcessor;
class SignalSources;
class SignalChannel;

class SpikeScopeDialog : public QDialog
{
    Q_OBJECT
public:
    explicit SpikeScopeDialog(SignalProcessor *inSignalProcessor, SignalSources *inSignalSources,
                              SignalChannel *initialChannel, QWidget *parent = 0);
    void setYScale(int index);
    void setSampleRate(double newSampleRate);
    void updateWaveform(int numBlocks);
    void setVoltageThresholdDisplay(int value);
    void setNewChannel(SignalChannel* newChannel);
    void expandYScale();
    void contractYScale();
    void setDetectionMode(bool mode);

    // MM - UPDATE - WINDOW DISCRIMINATOR - 1/17/18
    bool detMode;
    int currentDACChannel;
    QVector<bool> wEnable;
    QVector<int> wStart;
    QVector<int> wStop;
    QVector<int> wType;
    QVector<int> wThresh;
    // END UPDATE

    // MM - UPDATE - WINDOW DISCRIMINATOR - 1/18/18
    void setDACenable(int channel, bool enable);
    void setDACWindowStart(int channel, int sample);
    void setDACWindowStop(int channel, int sample);
    void setDACTriggerType(int channel, int index);
    void setDACThreshold(int channel, int threshold);
    void setCurrentChannel(int channel);
    void setWMax(int maxWindowStop);
    // END UPDATE

signals:

    
public slots:
    
private slots:
    void changeYScale(int index);
    void setTriggerType(int index);
    void resetThresholdToZero();
    void setNumSpikes(int index);
    void clearScope();
    void setDigitalInput(int index);
    void setVoltageThreshold(int value);
    void setEdgePolarity(int index);
    void applyToAll();

    // MM - UPDATE - WINDOW DISCRIMINATOR - 1/18/18
    void enableDACChannel(bool enable);
    void changeDACChannel(int index);
    void changeDACWindowStart(int sample);
    void changeDACWindowStop(int sample);
    void changeDACTriggerType(int index);
    void changeDACThreshold(int threshold);
    // END UPDATE

private:
    QVector<int> yScaleList;

    SignalProcessor *signalProcessor;
    SignalSources *signalSources;
    SignalChannel *currentChannel;

    QPushButton *resetToZeroButton;
    QPushButton *clearScopeButton;
    QPushButton *applyToAllButton;

    // MM - UPDATE - WINDOW DISCRIMINATOR - 1/17/18
    QCheckBox *enableDacChannelCheckBox;
    QComboBox *selectDacChannelComboBox;
    QSpinBox *startWindowSpinBox;
    QSpinBox *stopWindowSpinBox;
    QComboBox *setWindowTypeComboBox;
    QSpinBox *setWindowThresholdSpinBox;
    // END UPDATE

    QComboBox *triggerTypeComboBox;
    QComboBox *numSpikesComboBox;
    QComboBox *digitalInputComboBox;
    QComboBox *edgePolarityComboBox;
    QComboBox *yScaleComboBox;

    QSpinBox *thresholdSpinBox;
    SpikePlot *spikePlot;

};

#endif // SPIKESCOPEDIALOG_H
