/****************************************************************************
** Meta object code from reading C++ file 'form_menu.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.16)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../form_menu.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'form_menu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.16. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FormMenu_t {
    QByteArrayData data[13];
    char stringdata0[405];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FormMenu_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FormMenu_t qt_meta_stringdata_FormMenu = {
    {
QT_MOC_LITERAL(0, 0, 8), // "FormMenu"
QT_MOC_LITERAL(1, 9, 27), // "on_push_button_exit_clicked"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 29), // "on_push_button_groups_clicked"
QT_MOC_LITERAL(4, 68, 30), // "on_push_button_streams_clicked"
QT_MOC_LITERAL(5, 99, 48), // "on_push_button_relationship_g..."
QT_MOC_LITERAL(6, 148, 34), // "on_push_button_disciplines_cl..."
QT_MOC_LITERAL(7, 183, 31), // "on_push_button_teachers_clicked"
QT_MOC_LITERAL(8, 215, 55), // "on_push_button_relationship_t..."
QT_MOC_LITERAL(9, 271, 31), // "on_push_button_students_clicked"
QT_MOC_LITERAL(10, 303, 34), // "on_push_button_auditoriums_cl..."
QT_MOC_LITERAL(11, 338, 31), // "on_push_button_lectures_clicked"
QT_MOC_LITERAL(12, 370, 34) // "on_push_button_change_user_cl..."

    },
    "FormMenu\0on_push_button_exit_clicked\0"
    "\0on_push_button_groups_clicked\0"
    "on_push_button_streams_clicked\0"
    "on_push_button_relationship_group_stream_clicked\0"
    "on_push_button_disciplines_clicked\0"
    "on_push_button_teachers_clicked\0"
    "on_push_button_relationship_teacher_disciplines_clicked\0"
    "on_push_button_students_clicked\0"
    "on_push_button_auditoriums_clicked\0"
    "on_push_button_lectures_clicked\0"
    "on_push_button_change_user_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FormMenu[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x08 /* Private */,
       3,    0,   70,    2, 0x08 /* Private */,
       4,    0,   71,    2, 0x08 /* Private */,
       5,    0,   72,    2, 0x08 /* Private */,
       6,    0,   73,    2, 0x08 /* Private */,
       7,    0,   74,    2, 0x08 /* Private */,
       8,    0,   75,    2, 0x08 /* Private */,
       9,    0,   76,    2, 0x08 /* Private */,
      10,    0,   77,    2, 0x08 /* Private */,
      11,    0,   78,    2, 0x08 /* Private */,
      12,    0,   79,    2, 0x08 /* Private */,

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

       0        // eod
};

void FormMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FormMenu *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_push_button_exit_clicked(); break;
        case 1: _t->on_push_button_groups_clicked(); break;
        case 2: _t->on_push_button_streams_clicked(); break;
        case 3: _t->on_push_button_relationship_group_stream_clicked(); break;
        case 4: _t->on_push_button_disciplines_clicked(); break;
        case 5: _t->on_push_button_teachers_clicked(); break;
        case 6: _t->on_push_button_relationship_teacher_disciplines_clicked(); break;
        case 7: _t->on_push_button_students_clicked(); break;
        case 8: _t->on_push_button_auditoriums_clicked(); break;
        case 9: _t->on_push_button_lectures_clicked(); break;
        case 10: _t->on_push_button_change_user_clicked(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject FormMenu::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_FormMenu.data,
    qt_meta_data_FormMenu,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FormMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FormMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FormMenu.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int FormMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
