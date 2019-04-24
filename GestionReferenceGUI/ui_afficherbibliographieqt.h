/********************************************************************************
** Form generated from reading UI file 'afficherbibliographieqt.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AFFICHERBIBLIOGRAPHIEQT_H
#define UI_AFFICHERBIBLIOGRAPHIEQT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_afficherBibliographieQtClass
{
public:
    QTextEdit *affichageBibliographie;

    void setupUi(QDialog *afficherBibliographieQtClass)
    {
        if (afficherBibliographieQtClass->objectName().isEmpty())
            afficherBibliographieQtClass->setObjectName(QString::fromUtf8("afficherBibliographieQtClass"));
        afficherBibliographieQtClass->resize(400, 300);
        affichageBibliographie = new QTextEdit(afficherBibliographieQtClass);
        affichageBibliographie->setObjectName(QString::fromUtf8("affichageBibliographie"));
        affichageBibliographie->setGeometry(QRect(40, 20, 331, 261));

        retranslateUi(afficherBibliographieQtClass);

        QMetaObject::connectSlotsByName(afficherBibliographieQtClass);
    } // setupUi

    void retranslateUi(QDialog *afficherBibliographieQtClass)
    {
        afficherBibliographieQtClass->setWindowTitle(QApplication::translate("afficherBibliographieQtClass", "Afficher la bibliographie", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class afficherBibliographieQtClass: public Ui_afficherBibliographieQtClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AFFICHERBIBLIOGRAPHIEQT_H
