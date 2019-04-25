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
    QLineEdit *nomRevueJournal;
    QLineEdit *numeroVolumeJournal;
    QLineEdit *numeroPage;
    QLineEdit *anneePublicationJournal;
    QLineEdit *codeISSNJournal;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QPushButton *enregistrerJournal;
    QPushButton *retourJournal;
    QLabel *titreJournal;
    QLineEdit *titreJournal_2;
    QLabel *erreurJournal;

    void setupUi(QDialog *ajouterJournalQtClass)
    {
        if (ajouterJournalQtClass->objectName().isEmpty())
            ajouterJournalQtClass->setObjectName(QString::fromUtf8("ajouterJournalQtClass"));
        ajouterJournalQtClass->resize(476, 321);
        nomAuteurJournal = new QLineEdit(ajouterJournalQtClass);
        nomAuteurJournal->setObjectName(QString::fromUtf8("nomAuteurJournal"));
        nomAuteurJournal->setGeometry(QRect(220, 10, 113, 27));
        nomRevueJournal = new QLineEdit(ajouterJournalQtClass);
        nomRevueJournal->setObjectName(QString::fromUtf8("nomRevueJournal"));
        nomRevueJournal->setGeometry(QRect(220, 70, 113, 27));
        numeroVolumeJournal = new QLineEdit(ajouterJournalQtClass);
        numeroVolumeJournal->setObjectName(QString::fromUtf8("numeroVolumeJournal"));
        numeroVolumeJournal->setGeometry(QRect(220, 110, 113, 27));
        numeroPage = new QLineEdit(ajouterJournalQtClass);
        numeroPage->setObjectName(QString::fromUtf8("numeroPage"));
        numeroPage->setGeometry(QRect(220, 140, 113, 27));
        anneePublicationJournal = new QLineEdit(ajouterJournalQtClass);
        anneePublicationJournal->setObjectName(QString::fromUtf8("anneePublicationJournal"));
        anneePublicationJournal->setGeometry(QRect(220, 180, 113, 27));
        codeISSNJournal = new QLineEdit(ajouterJournalQtClass);
        codeISSNJournal->setObjectName(QString::fromUtf8("codeISSNJournal"));
        codeISSNJournal->setGeometry(QRect(220, 220, 113, 27));
        label = new QLabel(ajouterJournalQtClass);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(100, 10, 91, 20));
        label_3 = new QLabel(ajouterJournalQtClass);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(110, 70, 91, 20));
        label_4 = new QLabel(ajouterJournalQtClass);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(100, 110, 111, 20));
        label_6 = new QLabel(ajouterJournalQtClass);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(100, 150, 111, 20));
        label_7 = new QLabel(ajouterJournalQtClass);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(90, 180, 121, 20));
        label_8 = new QLabel(ajouterJournalQtClass);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(100, 220, 101, 20));
        enregistrerJournal = new QPushButton(ajouterJournalQtClass);
        enregistrerJournal->setObjectName(QString::fromUtf8("enregistrerJournal"));
        enregistrerJournal->setGeometry(QRect(110, 270, 80, 28));
        retourJournal = new QPushButton(ajouterJournalQtClass);
        retourJournal->setObjectName(QString::fromUtf8("retourJournal"));
        retourJournal->setGeometry(QRect(250, 270, 80, 28));
        titreJournal = new QLabel(ajouterJournalQtClass);
        titreJournal->setObjectName(QString::fromUtf8("titreJournal"));
        titreJournal->setGeometry(QRect(110, 40, 91, 20));
        titreJournal_2 = new QLineEdit(ajouterJournalQtClass);
        titreJournal_2->setObjectName(QString::fromUtf8("titreJournal_2"));
        titreJournal_2->setGeometry(QRect(220, 40, 113, 27));
        erreurJournal = new QLabel(ajouterJournalQtClass);
        erreurJournal->setObjectName(QString::fromUtf8("erreurJournal"));
        erreurJournal->setGeometry(QRect(370, 50, 81, 221));
        erreurJournal->setWordWrap(true);

        retranslateUi(ajouterJournalQtClass);

        QMetaObject::connectSlotsByName(ajouterJournalQtClass);
    } // setupUi

    void retranslateUi(QDialog *ajouterJournalQtClass)
    {
        ajouterJournalQtClass->setWindowTitle(QApplication::translate("ajouterJournalQtClass", "Ajouter un journal", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ajouterJournalQtClass", "Nom de l'auteur", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("ajouterJournalQtClass", "Nom de la revue", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("ajouterJournalQtClass", "Num\303\251ro du volume", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("ajouterJournalQtClass", "Num\303\251ro de la page", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("ajouterJournalQtClass", "Ann\303\251e de publication", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("ajouterJournalQtClass", "Code ISSN valide", 0, QApplication::UnicodeUTF8));
        enregistrerJournal->setText(QApplication::translate("ajouterJournalQtClass", "Enregistrer", 0, QApplication::UnicodeUTF8));
        retourJournal->setText(QApplication::translate("ajouterJournalQtClass", "Retour", 0, QApplication::UnicodeUTF8));
        titreJournal->setText(QApplication::translate("ajouterJournalQtClass", "Titre du journal", 0, QApplication::UnicodeUTF8));
        erreurJournal->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ajouterJournalQtClass: public Ui_ajouterJournalQtClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AJOUTERJOURNALQT_H
