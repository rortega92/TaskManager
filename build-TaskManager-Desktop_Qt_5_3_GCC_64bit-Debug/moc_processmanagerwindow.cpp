/****************************************************************************
** Meta object code from reading C++ file 'processmanagerwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../TaskManager/processmanagerwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'processmanagerwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ProcessManagerWindow_t {
    QByteArrayData data[7];
    char stringdata[129];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ProcessManagerWindow_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ProcessManagerWindow_t qt_meta_stringdata_ProcessManagerWindow = {
    {
QT_MOC_LITERAL(0, 0, 20),
QT_MOC_LITERAL(1, 21, 21),
QT_MOC_LITERAL(2, 43, 0),
QT_MOC_LITERAL(3, 44, 26),
QT_MOC_LITERAL(4, 71, 27),
QT_MOC_LITERAL(5, 99, 5),
QT_MOC_LITERAL(6, 105, 23)
    },
    "ProcessManagerWindow\0on_pushButton_clicked\0"
    "\0on_spinBox_editingFinished\0"
    "on_viewTableProcess_clicked\0index\0"
    "on_pushButton_2_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ProcessManagerWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x08 /* Private */,
       3,    0,   35,    2, 0x08 /* Private */,
       4,    1,   36,    2, 0x08 /* Private */,
       6,    0,   39,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    5,
    QMetaType::Void,

       0        // eod
};

void ProcessManagerWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ProcessManagerWindow *_t = static_cast<ProcessManagerWindow *>(_o);
        switch (_id) {
        case 0: _t->on_pushButton_clicked(); break;
        case 3: _t->on_pushButton_2_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject ProcessManagerWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_ProcessManagerWindow.data,
      qt_meta_data_ProcessManagerWindow,  qt_static_metacall, 0, 0}
};


const QMetaObject *ProcessManagerWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ProcessManagerWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ProcessManagerWindow.stringdata))
        return static_cast<void*>(const_cast< ProcessManagerWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int ProcessManagerWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
