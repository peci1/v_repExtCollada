/********************************************************************************
** Form generated from reading UI file 'colladadialog.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COLLADADIALOG_H
#define UI_COLLADADIALOG_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_CColladaDialog
{
public:
    QGroupBox *groupBox;
    QCheckBox *qqImportMeshesOnly;
    QCheckBox *qqMergeImport;
    QLabel *label;
    QLineEdit *qqImportScalingFactor;
    QPushButton *qqImport;
    QCheckBox *qqImportUngroup;
    QGroupBox *groupBox_2;
    QCheckBox *qqExportShapesOnly;
    QLineEdit *qqExportScalingFactor;
    QLabel *label_2;
    QCheckBox *qqExportAnimation;
    QPushButton *qqExport;
    QLabel *label_3;

    void setupUi(QDialog *CColladaDialog)
    {
        if (CColladaDialog->objectName().isEmpty())
            CColladaDialog->setObjectName(QStringLiteral("CColladaDialog"));
        CColladaDialog->resize(311, 333);
        CColladaDialog->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        groupBox = new QGroupBox(CColladaDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 291, 151));
        qqImportMeshesOnly = new QCheckBox(groupBox);
        qqImportMeshesOnly->setObjectName(QStringLiteral("qqImportMeshesOnly"));
        qqImportMeshesOnly->setGeometry(QRect(10, 40, 151, 17));
        qqMergeImport = new QCheckBox(groupBox);
        qqMergeImport->setObjectName(QStringLiteral("qqMergeImport"));
        qqMergeImport->setGeometry(QRect(10, 20, 151, 17));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 80, 91, 16));
        qqImportScalingFactor = new QLineEdit(groupBox);
        qqImportScalingFactor->setObjectName(QStringLiteral("qqImportScalingFactor"));
        qqImportScalingFactor->setGeometry(QRect(100, 80, 61, 20));
        qqImport = new QPushButton(groupBox);
        qqImport->setObjectName(QStringLiteral("qqImport"));
        qqImport->setGeometry(QRect(200, 110, 75, 23));
        qqImportUngroup = new QCheckBox(groupBox);
        qqImportUngroup->setObjectName(QStringLiteral("qqImportUngroup"));
        qqImportUngroup->setGeometry(QRect(10, 60, 181, 17));
        groupBox_2 = new QGroupBox(CColladaDialog);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 170, 291, 151));
        qqExportShapesOnly = new QCheckBox(groupBox_2);
        qqExportShapesOnly->setObjectName(QStringLiteral("qqExportShapesOnly"));
        qqExportShapesOnly->setGeometry(QRect(10, 40, 151, 17));
        qqExportScalingFactor = new QLineEdit(groupBox_2);
        qqExportScalingFactor->setObjectName(QStringLiteral("qqExportScalingFactor"));
        qqExportScalingFactor->setGeometry(QRect(100, 60, 61, 20));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 60, 91, 16));
        qqExportAnimation = new QCheckBox(groupBox_2);
        qqExportAnimation->setObjectName(QStringLiteral("qqExportAnimation"));
        qqExportAnimation->setGeometry(QRect(10, 20, 271, 17));
        qqExport = new QPushButton(groupBox_2);
        qqExport->setObjectName(QStringLiteral("qqExport"));
        qqExport->setGeometry(QRect(200, 90, 75, 23));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 120, 271, 16));
        QWidget::setTabOrder(qqMergeImport, qqImportMeshesOnly);
        QWidget::setTabOrder(qqImportMeshesOnly, qqImportUngroup);
        QWidget::setTabOrder(qqImportUngroup, qqImportScalingFactor);
        QWidget::setTabOrder(qqImportScalingFactor, qqImport);
        QWidget::setTabOrder(qqImport, qqExportAnimation);
        QWidget::setTabOrder(qqExportAnimation, qqExportShapesOnly);
        QWidget::setTabOrder(qqExportShapesOnly, qqExportScalingFactor);
        QWidget::setTabOrder(qqExportScalingFactor, qqExport);

        retranslateUi(CColladaDialog);

        QMetaObject::connectSlotsByName(CColladaDialog);
    } // setupUi

    void retranslateUi(QDialog *CColladaDialog)
    {
        CColladaDialog->setWindowTitle(QApplication::translate("CColladaDialog", "Collada Import/Export", 0));
        groupBox->setTitle(QApplication::translate("CColladaDialog", "Collada import", 0));
        qqImportMeshesOnly->setText(QApplication::translate("CColladaDialog", "Import meshes only", 0));
        qqMergeImport->setText(QApplication::translate("CColladaDialog", "Merge imported meshes", 0));
        label->setText(QApplication::translate("CColladaDialog", "Scaling factor", 0));
        qqImport->setText(QApplication::translate("CColladaDialog", "Import", 0));
        qqImportUngroup->setText(QApplication::translate("CColladaDialog", "Ungroup grouped meshes", 0));
        groupBox_2->setTitle(QApplication::translate("CColladaDialog", "Collada export", 0));
        qqExportShapesOnly->setText(QApplication::translate("CColladaDialog", "Export shapes only", 0));
        label_2->setText(QApplication::translate("CColladaDialog", "Scaling factor", 0));
        qqExportAnimation->setText(QApplication::translate("CColladaDialog", "Export animation (started at next simulation run)", 0));
        qqExport->setText(QApplication::translate("CColladaDialog", "Export", 0));
        label_3->setText(QApplication::translate("CColladaDialog", "(only visible shapes will be exported)", 0));
    } // retranslateUi

};

namespace Ui {
    class CColladaDialog: public Ui_CColladaDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COLLADADIALOG_H
