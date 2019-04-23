/********************************************************************************
** Form generated from reading UI file 'supprimerreferenceqt.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUPPRIMERREFERENCEQT_H
#define UI_SUPPRIMERREFERENCEQT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_supprimerReferenceQtClass
{
public:
    QLineEdit *codeISSNOuISBN;
    QLabel *label;
    QPushButton *enregistrerSupprimer;
    QPushButton *retourSupprimer;

    void setupUi(QDialog *supprimerReferenceQtClass)
    {
        if (supprimerReferenceQtClass->objectName().isEmpty())
            supprimerReferenceQtClass->setObjectName(QString::fromUtf8("supprimerReferenceQtClass"));
        supprimerReferenceQtClass->resize(400, 300);
        codeISSNOuISBN = new QLineEdit(supprimerReferenceQtClass);
        codeISSNOuISBN->setObjectName(QString::fromUtf8("codeISSNOuISBN"));
        codeISSNOuISBN->setGeometry(QRect(210, 100, 113, 27));
        label = new QLabel(supprimerReferenceQtClass);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 80, 151, 61));
        enregistrerSupprimer = new QPushButton(supprimerReferenceQtClass);
        enregistrerSupprimer->setObjectName(QString::fromUtf8("enregistrerSupprimer"));
        enregistrerSupprimer->setGeometry(QRect(70, 200, 80, 28));
        retourSupprimer = new QPushButton(supprimerReferenceQtClass);
        retourSupprimer->setObjectName(QString::fromUtf8("retourSupprimer"));
        retourSupprimer->setGeometry(QRect(240, 200, 80, 28));

        retranslateUi(supprimerReferenceQtClass);

        QMetaObject::connectSlotsByName(supprimerReferenceQtClass);
    } // setupUi

    void retranslateUi(QDialog *supprimerReferenceQtClass)
    {
        supprimerReferenceQtClass->setWindowTitle(QApplication::translate("supprimerReferenceQtClass", "Supprimer la r\303\251f\303\251rence", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("supprimerReferenceQtClass", "Code ISSN ou ISBN valide", 0, QApplication::UnicodeUTF8));
        enregistrerSupprimer->setText(QApplication::translate("supprimerReferenceQtClass", "Enregistrer", 0, QApplication::UnicodeUTF8));
        retourSupprimer->setText(QApplication::translate("supprimerReferenceQtClass", "Retour", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class supprimerReferenceQtClass: public Ui_supprimerReferenceQtClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUPPRIMERREFERENCEQT_H
