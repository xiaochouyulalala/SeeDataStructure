/****************************************************************************
** Meta object code from reading C++ file 'SeerBreakpointsBrowserWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../BaseDebug/SeerBreakpointsBrowserWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SeerBreakpointsBrowserWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SeerBreakpointsBrowserWidget_t {
    QByteArrayData data[25];
    char stringdata0[392];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SeerBreakpointsBrowserWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SeerBreakpointsBrowserWidget_t qt_meta_stringdata_SeerBreakpointsBrowserWidget = {
    {
QT_MOC_LITERAL(0, 0, 28), // "SeerBreakpointsBrowserWidget"
QT_MOC_LITERAL(1, 29, 22), // "refreshBreakpointsList"
QT_MOC_LITERAL(2, 52, 0), // ""
QT_MOC_LITERAL(3, 53, 17), // "deleteBreakpoints"
QT_MOC_LITERAL(4, 71, 11), // "breakpoints"
QT_MOC_LITERAL(5, 83, 17), // "enableBreakpoints"
QT_MOC_LITERAL(6, 101, 18), // "disableBreakpoints"
QT_MOC_LITERAL(7, 120, 16), // "insertBreakpoint"
QT_MOC_LITERAL(8, 137, 10), // "breakpoint"
QT_MOC_LITERAL(9, 148, 12), // "selectedFile"
QT_MOC_LITERAL(10, 161, 4), // "file"
QT_MOC_LITERAL(11, 166, 8), // "fullname"
QT_MOC_LITERAL(12, 175, 6), // "lineno"
QT_MOC_LITERAL(13, 182, 10), // "handleText"
QT_MOC_LITERAL(14, 193, 4), // "text"
QT_MOC_LITERAL(15, 198, 26), // "handleStoppingPointReached"
QT_MOC_LITERAL(16, 225, 23), // "handleItemDoubleClicked"
QT_MOC_LITERAL(17, 249, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(18, 266, 4), // "item"
QT_MOC_LITERAL(19, 271, 6), // "column"
QT_MOC_LITERAL(20, 278, 23), // "handleRefreshToolButton"
QT_MOC_LITERAL(21, 302, 19), // "handleAddToolButton"
QT_MOC_LITERAL(22, 322, 22), // "handleDeleteToolButton"
QT_MOC_LITERAL(23, 345, 22), // "handleEnableToolButton"
QT_MOC_LITERAL(24, 368, 23) // "handleDisableToolButton"

    },
    "SeerBreakpointsBrowserWidget\0"
    "refreshBreakpointsList\0\0deleteBreakpoints\0"
    "breakpoints\0enableBreakpoints\0"
    "disableBreakpoints\0insertBreakpoint\0"
    "breakpoint\0selectedFile\0file\0fullname\0"
    "lineno\0handleText\0text\0"
    "handleStoppingPointReached\0"
    "handleItemDoubleClicked\0QTreeWidgetItem*\0"
    "item\0column\0handleRefreshToolButton\0"
    "handleAddToolButton\0handleDeleteToolButton\0"
    "handleEnableToolButton\0handleDisableToolButton"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SeerBreakpointsBrowserWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x06 /* Public */,
       3,    1,   85,    2, 0x06 /* Public */,
       5,    1,   88,    2, 0x06 /* Public */,
       6,    1,   91,    2, 0x06 /* Public */,
       7,    1,   94,    2, 0x06 /* Public */,
       9,    3,   97,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    1,  104,    2, 0x0a /* Public */,
      15,    0,  107,    2, 0x0a /* Public */,
      16,    2,  108,    2, 0x08 /* Private */,
      20,    0,  113,    2, 0x08 /* Private */,
      21,    0,  114,    2, 0x08 /* Private */,
      22,    0,  115,    2, 0x08 /* Private */,
      23,    0,  116,    2, 0x08 /* Private */,
      24,    0,  117,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Int,   10,   11,   12,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 17, QMetaType::Int,   18,   19,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SeerBreakpointsBrowserWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SeerBreakpointsBrowserWidget *_t = static_cast<SeerBreakpointsBrowserWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->refreshBreakpointsList(); break;
        case 1: _t->deleteBreakpoints((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->enableBreakpoints((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->disableBreakpoints((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->insertBreakpoint((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->selectedFile((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 6: _t->handleText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->handleStoppingPointReached(); break;
        case 8: _t->handleItemDoubleClicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 9: _t->handleRefreshToolButton(); break;
        case 10: _t->handleAddToolButton(); break;
        case 11: _t->handleDeleteToolButton(); break;
        case 12: _t->handleEnableToolButton(); break;
        case 13: _t->handleDisableToolButton(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SeerBreakpointsBrowserWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SeerBreakpointsBrowserWidget::refreshBreakpointsList)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SeerBreakpointsBrowserWidget::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SeerBreakpointsBrowserWidget::deleteBreakpoints)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SeerBreakpointsBrowserWidget::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SeerBreakpointsBrowserWidget::enableBreakpoints)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (SeerBreakpointsBrowserWidget::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SeerBreakpointsBrowserWidget::disableBreakpoints)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (SeerBreakpointsBrowserWidget::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SeerBreakpointsBrowserWidget::insertBreakpoint)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (SeerBreakpointsBrowserWidget::*)(QString , QString , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SeerBreakpointsBrowserWidget::selectedFile)) {
                *result = 5;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SeerBreakpointsBrowserWidget::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_SeerBreakpointsBrowserWidget.data,
    qt_meta_data_SeerBreakpointsBrowserWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SeerBreakpointsBrowserWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SeerBreakpointsBrowserWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SeerBreakpointsBrowserWidget.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::SeerBreakpointsBrowserWidgetForm"))
        return static_cast< Ui::SeerBreakpointsBrowserWidgetForm*>(this);
    return QWidget::qt_metacast(_clname);
}

int SeerBreakpointsBrowserWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void SeerBreakpointsBrowserWidget::refreshBreakpointsList()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void SeerBreakpointsBrowserWidget::deleteBreakpoints(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SeerBreakpointsBrowserWidget::enableBreakpoints(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void SeerBreakpointsBrowserWidget::disableBreakpoints(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void SeerBreakpointsBrowserWidget::insertBreakpoint(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void SeerBreakpointsBrowserWidget::selectedFile(QString _t1, QString _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
