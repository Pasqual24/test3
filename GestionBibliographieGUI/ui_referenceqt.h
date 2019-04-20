/********************************************************************************
** Form generated from reading UI file 'referenceqt.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REFERENCEQT_H
#define UI_REFERENCEQT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_ReferenceQtClass
{
public:
    QLineEdit *lineEdit;

    void setupUi(QDialog *ReferenceQtClass)
    {
        if (ReferenceQtClass->objectName().isEmpty())
            ReferenceQtClass->setObjectName(QString::fromUtf8("ReferenceQtClass"));
        ReferenceQtClass->resize(400, 300);
        lineEdit = new QLineEdit(ReferenceQtClass);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(60, 50, 113, 27));

        retranslateUi(ReferenceQtClass);

        QMetaObject::connectSlotsByName(ReferenceQtClass);
    } // setupUi

    void retranslateUi(QDialog *ReferenceQtClass)
    {
        ReferenceQtClass->setWindowTitle(QApplication::translate("ReferenceQtClass", "Ajouter un ouvrage", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ReferenceQtClass: public Ui_ReferenceQtClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REFERENCEQT_H
