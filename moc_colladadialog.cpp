/****************************************************************************
** Meta object code from reading C++ file 'colladadialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "colladadialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'colladadialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CColladaDialog_t {
    QByteArrayData data[11];
    char stringdata[280];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_CColladaDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_CColladaDialog_t qt_meta_stringdata_CColladaDialog = {
    {
QT_MOC_LITERAL(0, 0, 14),
QT_MOC_LITERAL(1, 15, 24),
QT_MOC_LITERAL(2, 40, 0),
QT_MOC_LITERAL(3, 41, 29),
QT_MOC_LITERAL(4, 71, 40),
QT_MOC_LITERAL(5, 112, 19),
QT_MOC_LITERAL(6, 132, 28),
QT_MOC_LITERAL(7, 161, 29),
QT_MOC_LITERAL(8, 191, 40),
QT_MOC_LITERAL(9, 232, 19),
QT_MOC_LITERAL(10, 252, 26)
    },
    "CColladaDialog\0on_qqMergeImport_clicked\0"
    "\0on_qqImportMeshesOnly_clicked\0"
    "on_qqImportScalingFactor_editingFinished\0"
    "on_qqImport_clicked\0on_qqExportAnimation_clicked\0"
    "on_qqExportShapesOnly_clicked\0"
    "on_qqExportScalingFactor_editingFinished\0"
    "on_qqExport_clicked\0on_qqImportUngroup_clicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CColladaDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08,
       3,    0,   60,    2, 0x08,
       4,    0,   61,    2, 0x08,
       5,    0,   62,    2, 0x08,
       6,    0,   63,    2, 0x08,
       7,    0,   64,    2, 0x08,
       8,    0,   65,    2, 0x08,
       9,    0,   66,    2, 0x08,
      10,    0,   67,    2, 0x08,

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

       0        // eod
};

void CColladaDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CColladaDialog *_t = static_cast<CColladaDialog *>(_o);
        switch (_id) {
        case 0: _t->on_qqMergeImport_clicked(); break;
        case 1: _t->on_qqImportMeshesOnly_clicked(); break;
        case 2: _t->on_qqImportScalingFactor_editingFinished(); break;
        case 3: _t->on_qqImport_clicked(); break;
        case 4: _t->on_qqExportAnimation_clicked(); break;
        case 5: _t->on_qqExportShapesOnly_clicked(); break;
        case 6: _t->on_qqExportScalingFactor_editingFinished(); break;
        case 7: _t->on_qqExport_clicked(); break;
        case 8: _t->on_qqImportUngroup_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject CColladaDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CColladaDialog.data,
      qt_meta_data_CColladaDialog,  qt_static_metacall, 0, 0}
};


const QMetaObject *CColladaDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CColladaDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CColladaDialog.stringdata))
        return static_cast<void*>(const_cast< CColladaDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int CColladaDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
