/****************************************************************************
** Meta object code from reading C++ file 'gestionreferencegui.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../gestionreferencegui.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gestionreferencegui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GestionReferenceGUI[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      21,   20,   20,   20, 0x08,
      36,   20,   20,   20, 0x08,
      51,   20,   20,   20, 0x08,
      75,   20,   20,   20, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_GestionReferenceGUI[] = {
    "GestionReferenceGUI\0\0ajoutOuvrage()\0"
    "ajoutJournal()\0afficherBibliographie()\0"
    "supprimerReference()\0"
};

void GestionReferenceGUI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        GestionReferenceGUI *_t = static_cast<GestionReferenceGUI *>(_o);
        switch (_id) {
        case 0: _t->ajoutOuvrage(); break;
        case 1: _t->ajoutJournal(); break;
        case 2: _t->afficherBibliographie(); break;
        case 3: _t->supprimerReference(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData GestionReferenceGUI::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GestionReferenceGUI::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_GestionReferenceGUI,
      qt_meta_data_GestionReferenceGUI, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GestionReferenceGUI::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GestionReferenceGUI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GestionReferenceGUI::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GestionReferenceGUI))
        return static_cast<void*>(const_cast< GestionReferenceGUI*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int GestionReferenceGUI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
