/****************************************************************************
** Meta object code from reading C++ file 'player_window.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../headers/player_window.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'player_window.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_player_window_t {
    QByteArrayData data[15];
    char stringdata0[322];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_player_window_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_player_window_t qt_meta_stringdata_player_window = {
    {
QT_MOC_LITERAL(0, 0, 13), // "player_window"
QT_MOC_LITERAL(1, 14, 40), // "on_horizontalSlider_progress_..."
QT_MOC_LITERAL(2, 55, 0), // ""
QT_MOC_LITERAL(3, 56, 8), // "position"
QT_MOC_LITERAL(4, 65, 38), // "on_horizontalSlider_volume_sl..."
QT_MOC_LITERAL(5, 104, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(6, 126, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(7, 150, 18), // "on_positionChanged"
QT_MOC_LITERAL(8, 169, 18), // "on_durationChanged"
QT_MOC_LITERAL(9, 188, 23), // "on_pushButton_3_clicked"
QT_MOC_LITERAL(10, 212, 23), // "on_pushButton_4_clicked"
QT_MOC_LITERAL(11, 236, 23), // "on_pushButton_5_clicked"
QT_MOC_LITERAL(12, 260, 27), // "on_pushButton_pause_clicked"
QT_MOC_LITERAL(13, 288, 23), // "on_pushButton_6_clicked"
QT_MOC_LITERAL(14, 312, 9) // "song_info"

    },
    "player_window\0on_horizontalSlider_progress_sliderMoved\0"
    "\0position\0on_horizontalSlider_volume_sliderMoved\0"
    "on_pushButton_clicked\0on_pushButton_2_clicked\0"
    "on_positionChanged\0on_durationChanged\0"
    "on_pushButton_3_clicked\0on_pushButton_4_clicked\0"
    "on_pushButton_5_clicked\0"
    "on_pushButton_pause_clicked\0"
    "on_pushButton_6_clicked\0song_info"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_player_window[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x08 /* Private */,
       4,    1,   77,    2, 0x08 /* Private */,
       5,    0,   80,    2, 0x08 /* Private */,
       6,    0,   81,    2, 0x08 /* Private */,
       7,    1,   82,    2, 0x08 /* Private */,
       8,    1,   85,    2, 0x08 /* Private */,
       9,    0,   88,    2, 0x08 /* Private */,
      10,    0,   89,    2, 0x08 /* Private */,
      11,    0,   90,    2, 0x08 /* Private */,
      12,    0,   91,    2, 0x08 /* Private */,
      13,    0,   92,    2, 0x08 /* Private */,
      14,    0,   93,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong,    3,
    QMetaType::Void, QMetaType::LongLong,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void player_window::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        player_window *_t = static_cast<player_window *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_horizontalSlider_progress_sliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_horizontalSlider_volume_sliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_pushButton_clicked(); break;
        case 3: _t->on_pushButton_2_clicked(); break;
        case 4: _t->on_positionChanged((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 5: _t->on_durationChanged((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 6: _t->on_pushButton_3_clicked(); break;
        case 7: _t->on_pushButton_4_clicked(); break;
        case 8: _t->on_pushButton_5_clicked(); break;
        case 9: _t->on_pushButton_pause_clicked(); break;
        case 10: _t->on_pushButton_6_clicked(); break;
        case 11: _t->song_info(); break;
        default: ;
        }
    }
}

const QMetaObject player_window::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_player_window.data,
      qt_meta_data_player_window,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *player_window::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *player_window::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_player_window.stringdata0))
        return static_cast<void*>(const_cast< player_window*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int player_window::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
