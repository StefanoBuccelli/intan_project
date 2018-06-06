/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../source/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[101];
    char stringdata0[1711];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 5), // "about"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 21), // "keyboardShortcutsHelp"
QT_MOC_LITERAL(4, 40, 15), // "chipFiltersHelp"
QT_MOC_LITERAL(5, 56, 15), // "comparatorsHelp"
QT_MOC_LITERAL(6, 72, 8), // "dacsHelp"
QT_MOC_LITERAL(7, 81, 18), // "highpassFilterHelp"
QT_MOC_LITERAL(8, 100, 15), // "notchFilterHelp"
QT_MOC_LITERAL(9, 116, 14), // "fastSettleHelp"
QT_MOC_LITERAL(10, 131, 16), // "openIntanWebsite"
QT_MOC_LITERAL(11, 148, 17), // "runInterfaceBoard"
QT_MOC_LITERAL(12, 166, 20), // "recordInterfaceBoard"
QT_MOC_LITERAL(13, 187, 27), // "triggerRecordInterfaceBoard"
QT_MOC_LITERAL(14, 215, 18), // "stopInterfaceBoard"
QT_MOC_LITERAL(15, 234, 22), // "selectBaseFilenameSlot"
QT_MOC_LITERAL(16, 257, 15), // "changeNumFrames"
QT_MOC_LITERAL(17, 273, 5), // "index"
QT_MOC_LITERAL(18, 279, 12), // "changeYScale"
QT_MOC_LITERAL(19, 292, 12), // "changeTScale"
QT_MOC_LITERAL(20, 305, 16), // "changeSampleRate"
QT_MOC_LITERAL(21, 322, 15), // "sampleRateIndex"
QT_MOC_LITERAL(22, 338, 17), // "changeNotchFilter"
QT_MOC_LITERAL(23, 356, 16), // "notchFilterIndex"
QT_MOC_LITERAL(24, 373, 21), // "changeDetectionMethod"
QT_MOC_LITERAL(25, 395, 14), // "detMethodIndex"
QT_MOC_LITERAL(26, 410, 20), // "enableHighpassFilter"
QT_MOC_LITERAL(27, 431, 6), // "enable"
QT_MOC_LITERAL(28, 438, 29), // "highpassFilterLineEditChanged"
QT_MOC_LITERAL(29, 468, 15), // "changeBandwidth"
QT_MOC_LITERAL(30, 484, 24), // "changeImpedanceFrequency"
QT_MOC_LITERAL(31, 509, 10), // "changePort"
QT_MOC_LITERAL(32, 520, 4), // "port"
QT_MOC_LITERAL(33, 525, 13), // "changeDacGain"
QT_MOC_LITERAL(34, 539, 22), // "changeDacNoiseSuppress"
QT_MOC_LITERAL(35, 562, 9), // "dacEnable"
QT_MOC_LITERAL(36, 572, 13), // "dacSetChannel"
QT_MOC_LITERAL(37, 586, 11), // "dacSelected"
QT_MOC_LITERAL(38, 598, 10), // "dacChannel"
QT_MOC_LITERAL(39, 609, 13), // "renameChannel"
QT_MOC_LITERAL(40, 623, 20), // "sortChannelsByNumber"
QT_MOC_LITERAL(41, 644, 18), // "sortChannelsByName"
QT_MOC_LITERAL(42, 663, 27), // "restoreOriginalChannelOrder"
QT_MOC_LITERAL(43, 691, 19), // "alphabetizeChannels"
QT_MOC_LITERAL(44, 711, 19), // "toggleChannelEnable"
QT_MOC_LITERAL(45, 731, 17), // "enableAllChannels"
QT_MOC_LITERAL(46, 749, 18), // "disableAllChannels"
QT_MOC_LITERAL(47, 768, 10), // "spikeScope"
QT_MOC_LITERAL(48, 779, 18), // "newSelectedChannel"
QT_MOC_LITERAL(49, 798, 14), // "SignalChannel*"
QT_MOC_LITERAL(50, 813, 10), // "newChannel"
QT_MOC_LITERAL(51, 824, 9), // "scanPorts"
QT_MOC_LITERAL(52, 834, 16), // "enableFastSettle"
QT_MOC_LITERAL(53, 851, 7), // "enabled"
QT_MOC_LITERAL(54, 859, 24), // "enableExternalFastSettle"
QT_MOC_LITERAL(55, 884, 28), // "setExternalFastSettleChannel"
QT_MOC_LITERAL(56, 913, 7), // "channel"
QT_MOC_LITERAL(57, 921, 12), // "loadSettings"
QT_MOC_LITERAL(58, 934, 12), // "saveSettings"
QT_MOC_LITERAL(59, 947, 14), // "showImpedances"
QT_MOC_LITERAL(60, 962, 14), // "saveImpedances"
QT_MOC_LITERAL(61, 977, 23), // "runImpedanceMeasurement"
QT_MOC_LITERAL(62, 1001, 19), // "configDigOutControl"
QT_MOC_LITERAL(63, 1021, 23), // "manualCableDelayControl"
QT_MOC_LITERAL(64, 1045, 14), // "plotPointsMode"
QT_MOC_LITERAL(65, 1060, 19), // "setSaveFormatDialog"
QT_MOC_LITERAL(66, 1080, 16), // "setDacThreshold1"
QT_MOC_LITERAL(67, 1097, 9), // "threshold"
QT_MOC_LITERAL(68, 1107, 16), // "setDacThreshold2"
QT_MOC_LITERAL(69, 1124, 16), // "setDacThreshold3"
QT_MOC_LITERAL(70, 1141, 16), // "setDacThreshold4"
QT_MOC_LITERAL(71, 1158, 16), // "setDacThreshold5"
QT_MOC_LITERAL(72, 1175, 16), // "setDacThreshold6"
QT_MOC_LITERAL(73, 1192, 16), // "setDacThreshold7"
QT_MOC_LITERAL(74, 1209, 16), // "setDacThreshold8"
QT_MOC_LITERAL(75, 1226, 18), // "setDac1WindowStart"
QT_MOC_LITERAL(76, 1245, 17), // "setDac1WindowStop"
QT_MOC_LITERAL(77, 1263, 6), // "sample"
QT_MOC_LITERAL(78, 1270, 18), // "setDac2WindowStart"
QT_MOC_LITERAL(79, 1289, 17), // "setDac2WindowStop"
QT_MOC_LITERAL(80, 1307, 18), // "setDac3WindowStart"
QT_MOC_LITERAL(81, 1326, 17), // "setDac3WindowStop"
QT_MOC_LITERAL(82, 1344, 18), // "setDac4WindowStart"
QT_MOC_LITERAL(83, 1363, 17), // "setDac4WindowStop"
QT_MOC_LITERAL(84, 1381, 18), // "setDac5WindowStart"
QT_MOC_LITERAL(85, 1400, 17), // "setDac5WindowStop"
QT_MOC_LITERAL(86, 1418, 18), // "setDac6WindowStart"
QT_MOC_LITERAL(87, 1437, 17), // "setDac6WindowStop"
QT_MOC_LITERAL(88, 1455, 18), // "setDac7WindowStart"
QT_MOC_LITERAL(89, 1474, 17), // "setDac7WindowStop"
QT_MOC_LITERAL(90, 1492, 18), // "setDac8WindowStart"
QT_MOC_LITERAL(91, 1511, 17), // "setDac8WindowStop"
QT_MOC_LITERAL(92, 1529, 20), // "setDac1ThresholdType"
QT_MOC_LITERAL(93, 1550, 13), // "thresholdType"
QT_MOC_LITERAL(94, 1564, 20), // "setDac2ThresholdType"
QT_MOC_LITERAL(95, 1585, 20), // "setDac3ThresholdType"
QT_MOC_LITERAL(96, 1606, 20), // "setDac4ThresholdType"
QT_MOC_LITERAL(97, 1627, 20), // "setDac5ThresholdType"
QT_MOC_LITERAL(98, 1648, 20), // "setDac6ThresholdType"
QT_MOC_LITERAL(99, 1669, 20), // "setDac7ThresholdType"
QT_MOC_LITERAL(100, 1690, 20) // "setDac8ThresholdType"

    },
    "MainWindow\0about\0\0keyboardShortcutsHelp\0"
    "chipFiltersHelp\0comparatorsHelp\0"
    "dacsHelp\0highpassFilterHelp\0notchFilterHelp\0"
    "fastSettleHelp\0openIntanWebsite\0"
    "runInterfaceBoard\0recordInterfaceBoard\0"
    "triggerRecordInterfaceBoard\0"
    "stopInterfaceBoard\0selectBaseFilenameSlot\0"
    "changeNumFrames\0index\0changeYScale\0"
    "changeTScale\0changeSampleRate\0"
    "sampleRateIndex\0changeNotchFilter\0"
    "notchFilterIndex\0changeDetectionMethod\0"
    "detMethodIndex\0enableHighpassFilter\0"
    "enable\0highpassFilterLineEditChanged\0"
    "changeBandwidth\0changeImpedanceFrequency\0"
    "changePort\0port\0changeDacGain\0"
    "changeDacNoiseSuppress\0dacEnable\0"
    "dacSetChannel\0dacSelected\0dacChannel\0"
    "renameChannel\0sortChannelsByNumber\0"
    "sortChannelsByName\0restoreOriginalChannelOrder\0"
    "alphabetizeChannels\0toggleChannelEnable\0"
    "enableAllChannels\0disableAllChannels\0"
    "spikeScope\0newSelectedChannel\0"
    "SignalChannel*\0newChannel\0scanPorts\0"
    "enableFastSettle\0enabled\0"
    "enableExternalFastSettle\0"
    "setExternalFastSettleChannel\0channel\0"
    "loadSettings\0saveSettings\0showImpedances\0"
    "saveImpedances\0runImpedanceMeasurement\0"
    "configDigOutControl\0manualCableDelayControl\0"
    "plotPointsMode\0setSaveFormatDialog\0"
    "setDacThreshold1\0threshold\0setDacThreshold2\0"
    "setDacThreshold3\0setDacThreshold4\0"
    "setDacThreshold5\0setDacThreshold6\0"
    "setDacThreshold7\0setDacThreshold8\0"
    "setDac1WindowStart\0setDac1WindowStop\0"
    "sample\0setDac2WindowStart\0setDac2WindowStop\0"
    "setDac3WindowStart\0setDac3WindowStop\0"
    "setDac4WindowStart\0setDac4WindowStop\0"
    "setDac5WindowStart\0setDac5WindowStop\0"
    "setDac6WindowStart\0setDac6WindowStop\0"
    "setDac7WindowStart\0setDac7WindowStop\0"
    "setDac8WindowStart\0setDac8WindowStop\0"
    "setDac1ThresholdType\0thresholdType\0"
    "setDac2ThresholdType\0setDac3ThresholdType\0"
    "setDac4ThresholdType\0setDac5ThresholdType\0"
    "setDac6ThresholdType\0setDac7ThresholdType\0"
    "setDac8ThresholdType"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      85,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  439,    2, 0x08 /* Private */,
       3,    0,  440,    2, 0x08 /* Private */,
       4,    0,  441,    2, 0x08 /* Private */,
       5,    0,  442,    2, 0x08 /* Private */,
       6,    0,  443,    2, 0x08 /* Private */,
       7,    0,  444,    2, 0x08 /* Private */,
       8,    0,  445,    2, 0x08 /* Private */,
       9,    0,  446,    2, 0x08 /* Private */,
      10,    0,  447,    2, 0x08 /* Private */,
      11,    0,  448,    2, 0x08 /* Private */,
      12,    0,  449,    2, 0x08 /* Private */,
      13,    0,  450,    2, 0x08 /* Private */,
      14,    0,  451,    2, 0x08 /* Private */,
      15,    0,  452,    2, 0x08 /* Private */,
      16,    1,  453,    2, 0x08 /* Private */,
      18,    1,  456,    2, 0x08 /* Private */,
      19,    1,  459,    2, 0x08 /* Private */,
      20,    1,  462,    2, 0x08 /* Private */,
      22,    1,  465,    2, 0x08 /* Private */,
      24,    1,  468,    2, 0x08 /* Private */,
      26,    1,  471,    2, 0x08 /* Private */,
      28,    0,  474,    2, 0x08 /* Private */,
      29,    0,  475,    2, 0x08 /* Private */,
      30,    0,  476,    2, 0x08 /* Private */,
      31,    1,  477,    2, 0x08 /* Private */,
      33,    1,  480,    2, 0x08 /* Private */,
      34,    1,  483,    2, 0x08 /* Private */,
      35,    1,  486,    2, 0x08 /* Private */,
      36,    0,  489,    2, 0x08 /* Private */,
      37,    1,  490,    2, 0x08 /* Private */,
      39,    0,  493,    2, 0x08 /* Private */,
      40,    0,  494,    2, 0x08 /* Private */,
      41,    0,  495,    2, 0x08 /* Private */,
      42,    0,  496,    2, 0x08 /* Private */,
      43,    0,  497,    2, 0x08 /* Private */,
      44,    0,  498,    2, 0x08 /* Private */,
      45,    0,  499,    2, 0x08 /* Private */,
      46,    0,  500,    2, 0x08 /* Private */,
      47,    0,  501,    2, 0x08 /* Private */,
      48,    1,  502,    2, 0x08 /* Private */,
      51,    0,  505,    2, 0x08 /* Private */,
      52,    1,  506,    2, 0x08 /* Private */,
      54,    1,  509,    2, 0x08 /* Private */,
      55,    1,  512,    2, 0x08 /* Private */,
      57,    0,  515,    2, 0x08 /* Private */,
      58,    0,  516,    2, 0x08 /* Private */,
      59,    1,  517,    2, 0x08 /* Private */,
      60,    0,  520,    2, 0x08 /* Private */,
      61,    0,  521,    2, 0x08 /* Private */,
      62,    0,  522,    2, 0x08 /* Private */,
      63,    0,  523,    2, 0x08 /* Private */,
      64,    1,  524,    2, 0x08 /* Private */,
      65,    0,  527,    2, 0x08 /* Private */,
      66,    1,  528,    2, 0x08 /* Private */,
      68,    1,  531,    2, 0x08 /* Private */,
      69,    1,  534,    2, 0x08 /* Private */,
      70,    1,  537,    2, 0x08 /* Private */,
      71,    1,  540,    2, 0x08 /* Private */,
      72,    1,  543,    2, 0x08 /* Private */,
      73,    1,  546,    2, 0x08 /* Private */,
      74,    1,  549,    2, 0x08 /* Private */,
      75,    0,  552,    2, 0x08 /* Private */,
      76,    1,  553,    2, 0x08 /* Private */,
      78,    1,  556,    2, 0x08 /* Private */,
      79,    1,  559,    2, 0x08 /* Private */,
      80,    1,  562,    2, 0x08 /* Private */,
      81,    1,  565,    2, 0x08 /* Private */,
      82,    1,  568,    2, 0x08 /* Private */,
      83,    1,  571,    2, 0x08 /* Private */,
      84,    1,  574,    2, 0x08 /* Private */,
      85,    1,  577,    2, 0x08 /* Private */,
      86,    1,  580,    2, 0x08 /* Private */,
      87,    1,  583,    2, 0x08 /* Private */,
      88,    1,  586,    2, 0x08 /* Private */,
      89,    1,  589,    2, 0x08 /* Private */,
      90,    1,  592,    2, 0x08 /* Private */,
      91,    1,  595,    2, 0x08 /* Private */,
      92,    1,  598,    2, 0x08 /* Private */,
      94,    1,  601,    2, 0x08 /* Private */,
      95,    1,  604,    2, 0x08 /* Private */,
      96,    1,  607,    2, 0x08 /* Private */,
      97,    1,  610,    2, 0x08 /* Private */,
      98,    1,  613,    2, 0x08 /* Private */,
      99,    1,  616,    2, 0x08 /* Private */,
     100,    1,  619,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void, QMetaType::Int,   21,
    QMetaType::Void, QMetaType::Int,   23,
    QMetaType::Void, QMetaType::Int,   25,
    QMetaType::Void, QMetaType::Bool,   27,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   32,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void, QMetaType::Bool,   27,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   38,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 49,   50,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   53,
    QMetaType::Void, QMetaType::Bool,   53,
    QMetaType::Void, QMetaType::Int,   56,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   53,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   53,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   67,
    QMetaType::Void, QMetaType::Int,   67,
    QMetaType::Void, QMetaType::Int,   67,
    QMetaType::Void, QMetaType::Int,   67,
    QMetaType::Void, QMetaType::Int,   67,
    QMetaType::Void, QMetaType::Int,   67,
    QMetaType::Void, QMetaType::Int,   67,
    QMetaType::Void, QMetaType::Int,   67,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   77,
    QMetaType::Void, QMetaType::Int,   77,
    QMetaType::Void, QMetaType::Int,   77,
    QMetaType::Void, QMetaType::Int,   77,
    QMetaType::Void, QMetaType::Int,   77,
    QMetaType::Void, QMetaType::Int,   77,
    QMetaType::Void, QMetaType::Int,   77,
    QMetaType::Void, QMetaType::Int,   77,
    QMetaType::Void, QMetaType::Int,   77,
    QMetaType::Void, QMetaType::Int,   77,
    QMetaType::Void, QMetaType::Int,   77,
    QMetaType::Void, QMetaType::Int,   77,
    QMetaType::Void, QMetaType::Int,   77,
    QMetaType::Void, QMetaType::Int,   77,
    QMetaType::Void, QMetaType::Int,   77,
    QMetaType::Void, QMetaType::Int,   93,
    QMetaType::Void, QMetaType::Int,   93,
    QMetaType::Void, QMetaType::Int,   93,
    QMetaType::Void, QMetaType::Int,   93,
    QMetaType::Void, QMetaType::Int,   93,
    QMetaType::Void, QMetaType::Int,   93,
    QMetaType::Void, QMetaType::Int,   93,
    QMetaType::Void, QMetaType::Int,   93,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->about(); break;
        case 1: _t->keyboardShortcutsHelp(); break;
        case 2: _t->chipFiltersHelp(); break;
        case 3: _t->comparatorsHelp(); break;
        case 4: _t->dacsHelp(); break;
        case 5: _t->highpassFilterHelp(); break;
        case 6: _t->notchFilterHelp(); break;
        case 7: _t->fastSettleHelp(); break;
        case 8: _t->openIntanWebsite(); break;
        case 9: _t->runInterfaceBoard(); break;
        case 10: _t->recordInterfaceBoard(); break;
        case 11: _t->triggerRecordInterfaceBoard(); break;
        case 12: _t->stopInterfaceBoard(); break;
        case 13: _t->selectBaseFilenameSlot(); break;
        case 14: _t->changeNumFrames((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->changeYScale((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->changeTScale((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->changeSampleRate((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: _t->changeNotchFilter((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: _t->changeDetectionMethod((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: _t->enableHighpassFilter((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 21: _t->highpassFilterLineEditChanged(); break;
        case 22: _t->changeBandwidth(); break;
        case 23: _t->changeImpedanceFrequency(); break;
        case 24: _t->changePort((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 25: _t->changeDacGain((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 26: _t->changeDacNoiseSuppress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 27: _t->dacEnable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 28: _t->dacSetChannel(); break;
        case 29: _t->dacSelected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 30: _t->renameChannel(); break;
        case 31: _t->sortChannelsByNumber(); break;
        case 32: _t->sortChannelsByName(); break;
        case 33: _t->restoreOriginalChannelOrder(); break;
        case 34: _t->alphabetizeChannels(); break;
        case 35: _t->toggleChannelEnable(); break;
        case 36: _t->enableAllChannels(); break;
        case 37: _t->disableAllChannels(); break;
        case 38: _t->spikeScope(); break;
        case 39: _t->newSelectedChannel((*reinterpret_cast< SignalChannel*(*)>(_a[1]))); break;
        case 40: _t->scanPorts(); break;
        case 41: _t->enableFastSettle((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 42: _t->enableExternalFastSettle((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 43: _t->setExternalFastSettleChannel((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 44: _t->loadSettings(); break;
        case 45: _t->saveSettings(); break;
        case 46: _t->showImpedances((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 47: _t->saveImpedances(); break;
        case 48: _t->runImpedanceMeasurement(); break;
        case 49: _t->configDigOutControl(); break;
        case 50: _t->manualCableDelayControl(); break;
        case 51: _t->plotPointsMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 52: _t->setSaveFormatDialog(); break;
        case 53: _t->setDacThreshold1((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 54: _t->setDacThreshold2((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 55: _t->setDacThreshold3((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 56: _t->setDacThreshold4((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 57: _t->setDacThreshold5((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 58: _t->setDacThreshold6((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 59: _t->setDacThreshold7((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 60: _t->setDacThreshold8((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 61: _t->setDac1WindowStart(); break;
        case 62: _t->setDac1WindowStop((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 63: _t->setDac2WindowStart((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 64: _t->setDac2WindowStop((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 65: _t->setDac3WindowStart((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 66: _t->setDac3WindowStop((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 67: _t->setDac4WindowStart((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 68: _t->setDac4WindowStop((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 69: _t->setDac5WindowStart((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 70: _t->setDac5WindowStop((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 71: _t->setDac6WindowStart((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 72: _t->setDac6WindowStop((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 73: _t->setDac7WindowStart((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 74: _t->setDac7WindowStop((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 75: _t->setDac8WindowStart((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 76: _t->setDac8WindowStop((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 77: _t->setDac1ThresholdType((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 78: _t->setDac2ThresholdType((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 79: _t->setDac3ThresholdType((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 80: _t->setDac4ThresholdType((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 81: _t->setDac5ThresholdType((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 82: _t->setDac6ThresholdType((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 83: _t->setDac7ThresholdType((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 84: _t->setDac8ThresholdType((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 85)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 85;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 85)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 85;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
