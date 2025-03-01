/****************************************************************************
** Meta object code from reading C++ file 'UiBridge.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../models/UiBridge.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#include <QtCore/QSet>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UiBridge.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN8UiBridgeE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN8UiBridgeE = QtMocHelpers::stringData(
    "UiBridge",
    "cardsChanged",
    "",
    "P1cardsChanged",
    "P2cardsChanged",
    "P3cardsChanged",
    "CardsOnTableChanged",
    "UiHokmChanged",
    "ScoregirdChanged",
    "selectCard",
    "popCards",
    "insertCards",
    "terminateall",
    "setHokm",
    "cards",
    "QSet<QString>",
    "P1cards",
    "P2cards",
    "P3cards",
    "CardsOnTable",
    "UiHokm",
    "Scoregird",
    "ScoreGridClass"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN8UiBridgeE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       7,  106, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   86,    2, 0x06,    8 /* Public */,
       3,    0,   87,    2, 0x06,    9 /* Public */,
       4,    0,   88,    2, 0x06,   10 /* Public */,
       5,    0,   89,    2, 0x06,   11 /* Public */,
       6,    0,   90,    2, 0x06,   12 /* Public */,
       7,    0,   91,    2, 0x06,   13 /* Public */,
       8,    0,   92,    2, 0x06,   14 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       9,    1,   93,    2, 0x0a,   15 /* Public */,
      10,    1,   96,    2, 0x0a,   17 /* Public */,
      11,    1,   99,    2, 0x0a,   19 /* Public */,
      12,    0,  102,    2, 0x0a,   21 /* Public */,
      13,    1,  103,    2, 0x0a,   22 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QChar,    2,

 // properties: name, type, flags, notifyId, revision
      14, 0x80000000 | 15, 0x0001590b, uint(0), 0,
      16, QMetaType::Int, 0x00015903, uint(1), 0,
      17, QMetaType::Int, 0x00015903, uint(2), 0,
      18, QMetaType::Int, 0x00015903, uint(3), 0,
      19, QMetaType::QStringList, 0x00015903, uint(4), 0,
      20, QMetaType::QChar, 0x00015903, uint(5), 0,
      21, 0x80000000 | 22, 0x0001590b, uint(6), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject UiBridge::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ZN8UiBridgeE.offsetsAndSizes,
    qt_meta_data_ZN8UiBridgeE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN8UiBridgeE_t,
        // property 'cards'
        QtPrivate::TypeAndForceComplete<QSet<QString>, std::true_type>,
        // property 'P1cards'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'P2cards'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'P3cards'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'CardsOnTable'
        QtPrivate::TypeAndForceComplete<QList<QString>, std::true_type>,
        // property 'UiHokm'
        QtPrivate::TypeAndForceComplete<QChar, std::true_type>,
        // property 'Scoregird'
        QtPrivate::TypeAndForceComplete<ScoreGridClass, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<UiBridge, std::true_type>,
        // method 'cardsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'P1cardsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'P2cardsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'P3cardsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'CardsOnTableChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'UiHokmChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ScoregirdChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'selectCard'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'popCards'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'insertCards'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'terminateall'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setHokm'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QChar, std::false_type>
    >,
    nullptr
} };

void UiBridge::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<UiBridge *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->cardsChanged(); break;
        case 1: _t->P1cardsChanged(); break;
        case 2: _t->P2cardsChanged(); break;
        case 3: _t->P3cardsChanged(); break;
        case 4: _t->CardsOnTableChanged(); break;
        case 5: _t->UiHokmChanged(); break;
        case 6: _t->ScoregirdChanged(); break;
        case 7: _t->selectCard((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 8: _t->popCards((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 9: _t->insertCards((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 10: _t->terminateall(); break;
        case 11: _t->setHokm((*reinterpret_cast< std::add_pointer_t<QChar>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (UiBridge::*)();
            if (_q_method_type _q_method = &UiBridge::cardsChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _q_method_type = void (UiBridge::*)();
            if (_q_method_type _q_method = &UiBridge::P1cardsChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _q_method_type = void (UiBridge::*)();
            if (_q_method_type _q_method = &UiBridge::P2cardsChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _q_method_type = void (UiBridge::*)();
            if (_q_method_type _q_method = &UiBridge::P3cardsChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _q_method_type = void (UiBridge::*)();
            if (_q_method_type _q_method = &UiBridge::CardsOnTableChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _q_method_type = void (UiBridge::*)();
            if (_q_method_type _q_method = &UiBridge::UiHokmChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _q_method_type = void (UiBridge::*)();
            if (_q_method_type _q_method = &UiBridge::ScoregirdChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
    }
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSet<QString> >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QSet<QString>*>(_v) = _t->cards(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->P1cards(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->P2cards(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->P3cards(); break;
        case 4: *reinterpret_cast< QList<QString>*>(_v) = _t->CardsOnTable(); break;
        case 5: *reinterpret_cast< QChar*>(_v) = _t->UiHokm(); break;
        case 6: *reinterpret_cast< ScoreGridClass*>(_v) = _t->Scoregird(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setCards(*reinterpret_cast< QSet<QString>*>(_v)); break;
        case 1: _t->setP1cards(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setP2cards(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setP3cards(*reinterpret_cast< int*>(_v)); break;
        case 4: _t->setCardsOnTable(*reinterpret_cast< QList<QString>*>(_v)); break;
        case 5: _t->setUiHokm(*reinterpret_cast< QChar*>(_v)); break;
        case 6: _t->setScoregird(*reinterpret_cast< ScoreGridClass*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *UiBridge::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UiBridge::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN8UiBridgeE.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int UiBridge::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 12;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void UiBridge::cardsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void UiBridge::P1cardsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void UiBridge::P2cardsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void UiBridge::P3cardsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void UiBridge::CardsOnTableChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void UiBridge::UiHokmChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void UiBridge::ScoregirdChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}
QT_WARNING_POP
