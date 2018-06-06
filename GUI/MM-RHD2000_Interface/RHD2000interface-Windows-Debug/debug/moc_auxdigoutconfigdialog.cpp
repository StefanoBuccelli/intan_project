/****************************************************************************
** Meta object code from reading C++ file 'auxdigoutconfigdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../source/auxdigoutconfigdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'auxdigoutconfigdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AuxDigOutConfigDialog_t {
    QByteArrayData data[12];
    char stringdata0[194];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AuxDigOutConfigDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AuxDigOutConfigDialog_t qt_meta_stringdata_AuxDigOutConfigDialog = {
    {
QT_MOC_LITERAL(0, 0, 21), // "AuxDigOutConfigDialog"
QT_MOC_LITERAL(1, 22, 18), // "enablePortAChanged"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 6), // "enable"
QT_MOC_LITERAL(4, 49, 18), // "enablePortBChanged"
QT_MOC_LITERAL(5, 68, 18), // "enablePortCChanged"
QT_MOC_LITERAL(6, 87, 18), // "enablePortDChanged"
QT_MOC_LITERAL(7, 106, 19), // "channelPortAChanged"
QT_MOC_LITERAL(8, 126, 7), // "channel"
QT_MOC_LITERAL(9, 134, 19), // "channelPortBChanged"
QT_MOC_LITERAL(10, 154, 19), // "channelPortCChanged"
QT_MOC_LITERAL(11, 174, 19) // "channelPortDChanged"

    },
    "AuxDigOutConfigDialog\0enablePortAChanged\0"
    "\0enable\0enablePortBChanged\0"
    "enablePortCChanged\0enablePortDChanged\0"
    "channelPortAChanged\0channel\0"
    "channelPortBChanged\0channelPortCChanged\0"
    "channelPortDChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AuxDigOutConfigDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x08 /* Private */,
       4,    1,   57,    2, 0x08 /* Private */,
       5,    1,   60,    2, 0x08 /* Private */,
       6,    1,   63,    2, 0x08 /* Private */,
       7,    1,   66,    2, 0x08 /* Private */,
       9,    1,   69,    2, 0x08 /* Private */,
      10,    1,   72,    2, 0x08 /* Private */,
      11,    1,   75,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,    8,

       0        // eod
};

void AuxDigOutConfigDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AuxDigOutConfigDialog *_t = static_cast<AuxDigOutConfigDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->enablePortAChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->enablePortBChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->enablePortCChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->enablePortDChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->channelPortAChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->channelPortBChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->channelPortCChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->channelPortDChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject AuxDigOutConfigDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_AuxDigOutConfigDialog.data,
      qt_meta_data_AuxDigOutConfigDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *AuxDigOutConfigDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AuxDigOutConfigDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_AuxDigOutConfigDialog.stringdata0))
        return static_cast<void*>(const_cast< AuxDigOutConfigDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int AuxDigOutConfigDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
