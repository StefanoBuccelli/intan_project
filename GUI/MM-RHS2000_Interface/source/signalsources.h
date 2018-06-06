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

#ifndef SIGNALSOURCES_H
#define SIGNALSOURCES_H

class SignalGroup;
class SignalChannel;
class QDataStream;
class QXmlStreamWriter;

class SignalSources
{
    friend QDataStream &operator<<(QDataStream &outStream, const SignalSources &a);
    friend QDataStream &operator>>(QDataStream &inStream, SignalSources &a);

public:
    SignalSources(int numPorts);
    SignalChannel* findChannelFromName(const QString &nativeName);
    SignalChannel* findAmplifierChannel(int boardStream, int chipChannel);
    void writeToXml(QXmlStreamWriter &xml);
    void disableAllStim();

    QVector<SignalGroup> signalPort;

private:

};

#endif // SIGNALSOURCES_H
