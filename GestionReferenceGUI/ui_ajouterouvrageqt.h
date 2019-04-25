/********************************************************************************
** Form generated from reading UI file 'ajouterouvrageqt.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AJOUTEROUVRAGEQT_H
#define UI_AJOUTEROUVRAGEQT_H

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

class Ui_ajouterOuvrageQtClass
{
public:
    QLineEdit *nomAuteurOuvrage;
    QLineEdit *titreOeuvreOuvrage;
    QLineEdit *villeEditionOuvrage;
    QLineEdit *editeurOuvrage;
    QLineEdit *anneeEditionOuvrage;
    QLineEdit *codeISBNOuvrage;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *enregistrerOuvrage;
    QPushButton *retourOuvrage;
    QLabel *erreurOuvrage;

    void setupUi(QDialog *ajouterOuvrageQtClass)
    {
        if (ajouterOuvrageQtClass->objectName().isEmpty())
            ajouterOuvrageQtClass->setObjectName(QString::fromUtf8("ajouterOuvrageQtClass"));
        ajouterOuvrageQtClass->resize(493, 300);
        nomAuteurOuvrage = new QLineEdit(ajouterOuvrageQtClass);
        nomAuteurOuvrage->setObjectName(QString::fromUtf8("nomAuteurOuvrage"));
        nomAuteurOuvrage->setGeometry(QRect(210, 10, 113, 27));
        titreOeuvreOuvrage = new QLineEdit(ajouterOuvrageQtClass);
        titreOeuvreOuvrage->setObjectName(QString::fromUtf8("titreOeuvreOuvrage"));
        titreOeuvreOuvrage->setGeometry(QRect(210, 40, 113, 27));
        villeEditionOuvrage = new QLineEdit(ajouterOuvrageQtClass);
        villeEditionOuvrage->setObjectName(QString::fromUtf8("villeEditionOuvrage"));
        villeEditionOuvrage->setGeometry(QRect(210, 80, 113, 27));
        editeurOuvrage = new QLineEdit(ajouterOuvrageQtClass);
        editeurOuvrage->setObjectName(QString::fromUtf8("editeurOuvrage"));
        editeurOuvrage->setGeometry(QRect(210, 120, 113, 27));
        anneeEditionOuvrage = new QLineEdit(ajouterOuvrageQtClass);
        anneeEditionOuvrage->setObjectName(QString::fromUtf8("anneeEditionOuvrage"));
        anneeEditionOuvrage->setGeometry(QRect(210, 160, 113, 27));
        codeISBNOuvrage = new QLineEdit(ajouterOuvrageQtClass);
        codeISBNOuvrage->setObjectName(QString::fromUtf8("codeISBNOuvrage"));
        codeISBNOuvrage->setGeometry(QRect(210, 200, 113, 27));
        label = new QLabel(ajouterOuvrageQtClass);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 10, 91, 20));
        label_2 = new QLabel(ajouterOuvrageQtClass);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(90, 40, 91, 20));
        label_3 = new QLabel(ajouterOuvrageQtClass);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(100, 80, 81, 20));
        label_4 = new QLabel(ajouterOuvrageQtClass);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(70, 120, 111, 20));
        label_5 = new QLabel(ajouterOuvrageQtClass);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(80, 160, 91, 20));
        label_6 = new QLabel(ajouterOuvrageQtClass);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(80, 210, 101, 20));
        enregistrerOuvrage = new QPushButton(ajouterOuvrageQtClass);
        enregistrerOuvrage->setObjectName(QString::fromUtf8("enregistrerOuvrage"));
        enregistrerOuvrage->setGeometry(QRect(80, 250, 80, 28));
        retourOuvrage = new QPushButton(ajouterOuvrageQtClass);
        retourOuvrage->setObjectName(QString::fromUtf8("retourOuvrage"));
        retourOuvrage->setGeometry(QRect(240, 250, 80, 28));
        erreurOuvrage = new QLabel(ajouterOuvrageQtClass);
        erreurOuvrage->setObjectName(QString::fromUtf8("erreurOuvrage"));
        erreurOuvrage->setGeometry(QRect(370, 30, 101, 221));
        erreurOuvrage->setWordWrap(true);

        retranslateUi(ajouterOuvrageQtClass);

        QMetaObject::connectSlotsByName(ajouterOuvrageQtClass);
    } // setupUi

    void retranslateUi(QDialog *ajouterOuvrageQtClass)
    {
        ajouterOuvrageQtClass->setWindowTitle(QApplication::translate("ajouterOuvrageQtClass", "Ajouter un ouvrage", 0, QApplication::UnicodeUTF8));
        codeISBNOuvrage->setText(QApplication::translate("ajouterOuvrageQtClass", "ISBN 978-0-387-77591-3", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ajouterOuvrageQtClass", "Nom de l'auteur", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ajouterOuvrageQtClass", "Titre de l'oeuvre", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("ajouterOuvrageQtClass", "Ville d'\303\251dition", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("ajouterOuvrageQtClass", "\303\211diteur de l'ouvrage", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("ajouterOuvrageQtClass", "Ann\303\251e d'\303\251dition", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("ajouterOuvrageQtClass", "Code ISBN valide", 0, QApplication::UnicodeUTF8));
        enregistrerOuvrage->setText(QApplication::translate("ajouterOuvrageQtClass", "Enregistrer", 0, QApplication::UnicodeUTF8));
        retourOuvrage->setText(QApplication::translate("ajouterOuvrageQtClass", "Retour", 0, QApplication::UnicodeUTF8));
        erreurOuvrage->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ajouterOuvrageQtClass: public Ui_ajouterOuvrageQtClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AJOUTEROUVRAGEQT_H
