/********************************************************************************
** Form generated from reading UI file 'ajouterjournal.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AJOUTERJOURNAL_H
#define UI_AJOUTERJOURNAL_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_ajouterJournalClass
{
public:

    void setupUi(QDialog *ajouterJournalClass)
    {
        if (ajouterJournalClass->objectName().isEmpty())
            ajouterJournalClass->setObjectName(QString::fromUtf8("ajouterJournalClass"));
        ajouterJournalClass->resize(400, 300);

        retranslateUi(ajouterJournalClass);

        QMetaObject::connectSlotsByName(ajouterJournalClass);
    } // setupUi

    void retranslateUi(QDialog *ajouterJournalClass)
    {
        ajouterJournalClass->setWindowTitle(QApplication::translate("ajouterJournalClass", "ajouterJournal", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ajouterJournalClass: public Ui_ajouterJournalClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AJOUTERJOURNAL_H
