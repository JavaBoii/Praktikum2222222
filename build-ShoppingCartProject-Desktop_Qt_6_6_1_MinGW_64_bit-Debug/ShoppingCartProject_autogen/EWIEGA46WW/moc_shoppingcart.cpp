/****************************************************************************
** Meta object code from reading C++ file 'shoppingcart.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../ShoppingCartProject/shoppingcart.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'shoppingcart.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.1. It"
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

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSShoppingCartENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSShoppingCartENDCLASS = QtMocHelpers::stringData(
    "ShoppingCart",
    "Description",
    "A shopping cart of an e-commerce shop",
    "personName",
    "creationDate",
    "totalAmount"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSShoppingCartENDCLASS_t {
    uint offsetsAndSizes[12];
    char stringdata0[13];
    char stringdata1[12];
    char stringdata2[38];
    char stringdata3[11];
    char stringdata4[13];
    char stringdata5[12];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSShoppingCartENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSShoppingCartENDCLASS_t qt_meta_stringdata_CLASSShoppingCartENDCLASS = {
    {
        QT_MOC_LITERAL(0, 12),  // "ShoppingCart"
        QT_MOC_LITERAL(13, 11),  // "Description"
        QT_MOC_LITERAL(25, 37),  // "A shopping cart of an e-comme..."
        QT_MOC_LITERAL(63, 10),  // "personName"
        QT_MOC_LITERAL(74, 12),  // "creationDate"
        QT_MOC_LITERAL(87, 11)   // "totalAmount"
    },
    "ShoppingCart",
    "Description",
    "A shopping cart of an e-commerce shop",
    "personName",
    "creationDate",
    "totalAmount"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSShoppingCartENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       1,   14, // classinfo
       0,    0, // methods
       3,   16, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // classinfo: key, value
       1,    2,

 // properties: name, type, flags
       3, QMetaType::QString, 0x00015103, uint(-1), 0,
       4, QMetaType::QDate, 0x00015001, uint(-1), 0,
       5, QMetaType::Double, 0x00015103, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject ShoppingCart::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSShoppingCartENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSShoppingCartENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSShoppingCartENDCLASS_t,
        // property 'personName'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'creationDate'
        QtPrivate::TypeAndForceComplete<QDate, std::true_type>,
        // property 'totalAmount'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ShoppingCart, std::true_type>
    >,
    nullptr
} };

void ShoppingCart::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ShoppingCart *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->getPersonName(); break;
        case 1: *reinterpret_cast< QDate*>(_v) = _t->getCreationDate(); break;
        case 2: *reinterpret_cast< double*>(_v) = _t->getTotalAmount(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ShoppingCart *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setPersonName(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setTotalAmount(*reinterpret_cast< double*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *ShoppingCart::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ShoppingCart::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSShoppingCartENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ShoppingCart::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
