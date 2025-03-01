/****************************************************************************
** Meta object code from reading C++ file 'scoregridclass.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../models/scoregridclass.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'scoregridclass.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN14ScoreGridClassE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN14ScoreGridClassE = QtMocHelpers::stringData(
    "ScoreGridClass",
    "YourScoreChanged",
    "",
    "OpnScoreChanged",
    "YourGameScoreChanged",
    "OpnGameScoreChanged",
    "getMOpnGameScore",
    "setMOpnGameScore",
    "mOpnGameScore",
    "YourScore",
    "OpnScore",
    "YourGameScore",
    "OpnGameScore"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN14ScoreGridClassE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       4,   58, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    2, 0x06,    5 /* Public */,
       3,    0,   51,    2, 0x06,    6 /* Public */,
       4,    0,   52,    2, 0x06,    7 /* Public */,
       5,    0,   53,    2, 0x06,    8 /* Public */,
       6,    0,   54,    2, 0x106,    9 /* Public | MethodIsConst  */,
       7,    1,   55,    2, 0x06,   10 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,    8,

 // properties: name, type, flags, notifyId, revision
       9, QMetaType::Int, 0x00015903, uint(0), 0,
      10, QMetaType::Int, 0x00015903, uint(1), 0,
      11, QMetaType::Int, 0x00015903, uint(2), 0,
      12, QMetaType::Int, 0x00015903, uint(3), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject ScoreGridClass::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ZN14ScoreGridClassE.offsetsAndSizes,
    qt_meta_data_ZN14ScoreGridClassE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN14ScoreGridClassE_t,
        // property 'YourScore'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'OpnScore'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'YourGameScore'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'OpnGameScore'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ScoreGridClass, std::true_type>,
        // method 'YourScoreChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'OpnScoreChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'YourGameScoreChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'OpnGameScoreChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'getMOpnGameScore'
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setMOpnGameScore'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void ScoreGridClass::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ScoreGridClass *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->YourScoreChanged(); break;
        case 1: _t->OpnScoreChanged(); break;
        case 2: _t->YourGameScoreChanged(); break;
        case 3: _t->OpnGameScoreChanged(); break;
        case 4: { int _r = _t->getMOpnGameScore();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 5: _t->setMOpnGameScore((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (ScoreGridClass::*)();
            if (_q_method_type _q_method = &ScoreGridClass::YourScoreChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _q_method_type = void (ScoreGridClass::*)();
            if (_q_method_type _q_method = &ScoreGridClass::OpnScoreChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _q_method_type = void (ScoreGridClass::*)();
            if (_q_method_type _q_method = &ScoreGridClass::YourGameScoreChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _q_method_type = void (ScoreGridClass::*)();
            if (_q_method_type _q_method = &ScoreGridClass::OpnGameScoreChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _q_method_type = int (ScoreGridClass::*)() const;
            if (_q_method_type _q_method = &ScoreGridClass::getMOpnGameScore; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _q_method_type = void (ScoreGridClass::*)(int );
            if (_q_method_type _q_method = &ScoreGridClass::setMOpnGameScore; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->YourScore(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->OpnScore(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->YourGameScore(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->OpnGameScore(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setYourScore(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setOpnScore(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setYourGameScore(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setOpnGameScore(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *ScoreGridClass::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ScoreGridClass::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN14ScoreGridClassE.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ScoreGridClass::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void ScoreGridClass::YourScoreChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ScoreGridClass::OpnScoreChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ScoreGridClass::YourGameScoreChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void ScoreGridClass::OpnGameScoreChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
int ScoreGridClass::getMOpnGameScore()const
{
    int _t0{};
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t0))) };
    QMetaObject::activate(const_cast< ScoreGridClass *>(this), &staticMetaObject, 4, _a);
    return _t0;
}

// SIGNAL 5
void ScoreGridClass::setMOpnGameScore(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
