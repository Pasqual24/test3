/********************************************************************************
** Form generated from reading UI file 'ajouterjournalqt.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AJOUTERJOURNALQT_H
#define UI_AJOUTERJOURNALQT_H

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

class Ui_ajouterJournalQtClass
{
public:
    QLineEdit *nomAuteurJournal;
    QLineEdit *titreOeuvreJournal;
    QLineEdit *nomRevueJournal;
    QLineEdit *numeroVolumeJournal;
    QLineEdit *numeroJournal;
    QLineEdit *numeroPage;
    QLineEdit *anneePublicationJournal;
    QLineEdit *codeISSNJournal;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QPushButton *enregistrerJournal;
    QPushButton *retourJournal;

    void setupUi(QDialog *ajouterJournalQtClass)
    {
        if (ajouterJournalQtClass->objectName().isEmpty())
            ajouterJournalQtClass->setObjectName(QString::fromUtf8("ajouterJournalQtClass"));
        ajouterJournalQtClass->resize(400, 300);
        nomAuteurJournal = new QLineEdit(ajouterJournalQtClass);
        nomAuteurJournal->setObjectName(QString::fromUtf8("nomAuteurJournal"));
        nomAuteurJournal->setGeometry(QRect(220, 10, 113, 27));
        titreOeuvreJournal = new QLineEdit(ajouterJournalQtClass);
        titreOeuvreJournal->setObjectName(QString::fromUtf8("titreOeuvreJournal"));
        titreOeuvreJournal->setGeometry(QRect(220, 40, 113, 27));
        nomRevueJournal = new QLineEdit(ajouterJournalQtClass);
        nomRevueJournal->setObjectName(QString::fromUtf8("nomRevueJournal"));
        nomRevueJournal->setGeometry(QRect(220, 70, 113, 27));
        numeroVolumeJournal = new QLineEdit(ajouterJournalQtClass);
        numeroVolumeJournal->setObjectName(QString::fromUtf8("numeroVolumeJournal"));
        numeroVolumeJournal->setGeometry(QRect(220, 100, 113, 27));
        numeroJournal = new QLineEdit(ajouterJournalQtClass);
        numeroJournal->setObjectName(QString::fromUtf8("numeroJournal"));
        numeroJournal->setGeometry(QRect(220, 130, 113, 27));
        numeroPage = new QLineEdit(ajouterJournalQtClass);
        numeroPage->setObjectName(QString::fromUtf8("numeroPage"));
        numeroPage->setGeometry(QRect(220, 160, 113, 27));
        anneePublicationJournal = new QLineEdit(ajouterJournalQtClass);
        anneePublicationJournal->setObjectName(QString::fromUtf8("anneePublicationJournal"));
        anneePublicationJournal->setGeometry(QRect(220, 190, 113, 27));
        codeISSNJournal = new QLineEdit(ajouterJournalQtClass);
        codeISSNJournal->setObjectName(QString::fromUtf8("codeISSNJournal"));
        codeISSNJournal->setGeometry(QRect(220, 220, 113, 27));
        label = new QLabel(ajouterJournalQtClass);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(84, 10, 91, 20));
        label_2 = new QLabel(ajouterJournalQtClass);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(94, 40, 91, 20));
        label_3 = new QLabel(ajouterJournalQtClass);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(94, 70, 91, 20));
        label_4 = new QLabel(ajouterJournalQtClass);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(74, 100, 111, 20));
        label_5 = new QLabel(ajouterJournalQtClass);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(84, 130, 111, 20));
        label_6 = new QLabel(ajouterJournalQtClass);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(84, 160, 111, 20));
        label_7 = new QLabel(ajouterJournalQtClass);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(70, 190, 121, 20));
        label_8 = new QLabel(ajouterJournalQtClass);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(94, 220, 101, 20));
        enregistrerJournal = new QPushButton(ajouterJournalQtClass);
        enregistrerJournal->setObjectName(QString::fromUtf8("enregistrerJournal"));
        enregistrerJournal->setGeometry(QRect(80, 260, 80, 28));
        retourJournal = new QPushButton(ajouterJournalQtClass);
        retourJournal->setObjectName(QString::fromUtf8("retourJournal"));
        retourJournal->setGeometry(QRect(230, 260, 80, 28));

        retranslateUi(ajouterJournalQtClass);

        QMetaObject::connectSlotsByName(ajouterJournalQtClass);
    } // setupUi

    void retranslateUi(QDialog *ajouterJournalQtClass)
    {
        ajouterJournalQtClass->setWindowTitle(QApplication::translate("ajouterJournalQtClass", "Ajouter un journal", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ajouterJournalQtClass", "Nom de l'auteur", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ajouterJournalQtClass", "Titre de l'oeuvre", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("ajouterJournalQtClass", "Nom de la revue", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("ajouterJournalQtClass", "Num\303\251ro du volume", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("ajouterJournalQtClass", "Num\303\251ro du journal", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("ajouterJournalQtClass", "Num\303\251ro de la page", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("ajouterJournalQtClass", "Ann\303\251e de publication", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("ajouterJournalQtClass", "Code ISSN valide", 0, QApplication::UnicodeUTF8));
        enregistrerJournal->setText(QApplication::translate("ajouterJournalQtClass", "Enregistrer", 0, QApplication::UnicodeUTF8));
        retourJournal->setText(QApplication::translate("ajouterJournalQtClass", "Retour", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ajouterJournalQtClass: public Ui_ajouterJournalQtClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AJOUTERJOURNALQT_H