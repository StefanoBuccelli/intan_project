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

#ifndef SETSAVEFORMATDIALOG_H
#define SETSAVEFORMATDIALOG_H

#include <QDialog>

#include "globalconstants.h"

class QDialogButtonBox;
class QSpinBox;
class QCheckBox;
class QRadioButton;
class QButtonGroup;

class SetSaveFormatDialog : public QDialog
{
    Q_OBJECT
public:
    explicit SetSaveFormatDialog(SaveFormat initSaveFormat,
                                 bool initSaveTtlOut, bool initSaveDcAmps, int initNewSaveFilePeriodMinutes,
                                 QWidget *parent);

    QSpinBox *recordTimeSpinBox;
    QCheckBox *saveTtlOutCheckBox;
    QCheckBox *saveDcAmpsCheckBox;
    QDialogButtonBox *buttonBox;
    QButtonGroup *buttonGroup;

    SaveFormat saveFormat;
    int newSaveFilePeriodMinutes;

signals:
    
public slots:
    
private slots:

private:
    QRadioButton *saveFormatIntanButton;
    QRadioButton *saveFormatNeuroScopeButton;
    QRadioButton *saveFormatOpenEphysButton;

};

#endif // SETSAVEFORMATDIALOG_H
