/****************************************************************************
** Meta object code from reading C++ file 'welcome_window.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../welcome_window.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'welcome_window.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_welcome_window_t {
    QByteArrayData data[6];
    char stringdata0[110];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_welcome_window_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_welcome_window_t qt_meta_stringdata_welcome_window = {
    {
QT_MOC_LITERAL(0, 0, 14), // "welcome_window"
QT_MOC_LITERAL(1, 15, 23), // "on_button_login_clicked"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 15), // "on_Quit_clicked"
QT_MOC_LITERAL(4, 56, 24), // "on_button_signin_clicked"
QT_MOC_LITERAL(5, 81, 28) // "on_pushButton_player_clicked"

    },
    "welcome_window\0on_button_login_clicked\0"
    "\0on_Quit_clicked\0on_button_signin_clicked\0"
    "on_pushButton_player_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_welcome_window[] = {

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
       4,    0,   36,    2, 0x08 /* Private */,
       5,    0,   37,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void welcome_window::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        welcome_window *_t = static_cast<welcome_window *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_button_login_clicked(); break;
        case 1: _t->on_Quit_clicked(); break;
        case 2: _t->on_button_signin_clicked(); break;
        case 3: _t->on_pushButton_player_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject welcome_window::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_welcome_window.data,
      qt_meta_data_welcome_window,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *welcome_window::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *welcome_window::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_welcome_window.stringdata0))
        return static_cast<void*>(const_cast< welcome_window*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int welcome_window::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE