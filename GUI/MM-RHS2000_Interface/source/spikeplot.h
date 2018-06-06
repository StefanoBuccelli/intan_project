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

#ifndef SPIKEPLOT_H
#define SPIKEPLOT_H

#define SPIKEPLOT_X_SIZE 800
#define SPIKEPLOT_Y_SIZE 800
#define FSM_DIG_TRIGGER_CHANNEL 12
#define FSM_DIG_TRACKER_CHANNEL 13
#define BUFFER_SIZE 10000
#define SPIKE_WINDOW_T 3.0
#define SPIKE_WINDOW_PRE_TRIGGER 1.0
#define SPIKE_WINDOW_VLINE_1 0.5
#define SPIKE_WINDOW_VLINE_2 1.0
#define SPIKE_WINDOW_VLINE_3 2.0
#define SAMPLE_DETECTION_DELAY 1

#include <QWidget>
#include <QPen>

using namespace std;

class SignalProcessor;
class SpikeScopeDialog;
class SignalChannel;

class SpikePlot : public QWidget
{
    Q_OBJECT
public:
    explicit SpikePlot(SignalProcessor *inSignalProcessor, SignalChannel *initialChannel,
                       SpikeScopeDialog *inSpikeScopeDialog, QWidget *parent = 0);
    void setYScale(int newYScale);
    void setSampleRate(double newSampleRate);
    void updateWaveform(int numBlocks);
    void setMaxNumSpikeWaveforms(int num);
    void clearScope();
    void setVoltageTriggerMode(bool voltageMode);
    void setVoltageThreshold(int threshold);
    void setDigitalTriggerChannel(int channel);
    void setDigitalEdgePolarity(bool risingEdge);
    void setNewChannel(SignalChannel* newChannel);

    QSize minimumSizeHint() const;
    QSize sizeHint() const;

    // MM - UPDATE - WINDOW DISCRIMINATOR - 1/23/18
    QVector<bool> wEnable;
    QVector<int> wStart;
    QVector<int> wStop;
    QVector<int> wType;
    QVector<int> wThresh;
    bool wMode;
    void drawAxisLines();
    void setWMax(int maxWindowStop);
    void updateLevelStartStop();
    void setCurrentChannel(int channel);
    // END UPDATE

signals:
    
public slots:


protected:
    void paintEvent(QPaintEvent *event);
    void closeEvent(QCloseEvent *event);
    void mousePressEvent(QMouseEvent *event);
    void wheelEvent(QWheelEvent *event);
    void keyPressEvent(QKeyEvent *event);
    void resizeEvent(QResizeEvent* event);

private:
    void drawAxisText();
    void updateSpikePlot(double rms);
    void initializeDisplay();

    SignalProcessor *signalProcessor;
    SpikeScopeDialog *spikeScopeDialog;

    QVector<QVector<double> > spikeWaveform;
    QVector<double> spikeWaveformBuffer;
    QVector<int> digitalInputBuffer;

    int spikeWaveformIndex;
    int numSpikeWaveforms;
    int maxNumSpikeWaveforms;
    int maxNumSpikeSamples;
    bool voltageTriggerMode;
    int voltageThreshold;
    int digitalTriggerChannel;
    bool digitalEdgePolarity;

    // MM - UPDATE - WINDOW DISCRIMINATOR - 1/19/18
    int wMax;
    int thisChannel;
    int colorIndex;

    QVector<int> fsmTriggerBuffer;
    QVector<int> fsmTrackerBuffer;
    QVector<QVector<bool>> fsmColors;

    QVector<double> levelStartPoint;
    QVector<double> levelStopPoint;
    QVector<double> levelHeight;

    QPen penThisInclude;
    QPen penThisExclude;
    QPen penOtherInclude;
    QPen penOtherExclude;
    QPen penIncludeSpike;
    QPen penExcludeSpike;

    double frameX;
    double frameY;
    double frameW;
    double yAxisLength;
    double yScaleFactor;
    // END UPDATE

    int preTriggerTSteps;
    int totalTSteps;
    bool startingNewChannel;
    int rmsDisplayPeriod;

    SignalChannel *selectedChannel;

    QRect frame;

    double tStepMsec;
    int yScale;
    double savedRms;

    QPixmap pixmap;

    QVector<QVector<QColor>> scopeColors;
    
};

#endif // SPIKEPLOT_H
