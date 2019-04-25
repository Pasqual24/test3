/********************************************************************************
** Form generated from reading UI file 'gestionreferencegui.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GESTIONREFERENCEGUI_H
#define UI_GESTIONREFERENCEGUI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTextEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GestionReferenceGUIClass
{
public:
    QWidget *centralwidget;
    QPushButton *quitter;
    QPushButton *ajouterOuvrage;
    QPushButton *ajouterJournal;
    QPushButton *supprimerReference;
    QPushButton *affichierBibliographie;
    QTextEdit *afficherBiblio;
    QLabel *identifiantISSNISBN;
    QLineEdit *identifiantSupprimer;
    QLabel *erreurSupprimer;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *GestionReferenceGUIClass)
    {
        if (GestionReferenceGUIClass->objectName().isEmpty())
            GestionReferenceGUIClass->setObjectName(QString::fromUtf8("GestionReferenceGUIClass"));
        GestionReferenceGUIClass->resize(800, 487);
        centralwidget = new QWidget(GestionReferenceGUIClass);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        quitter = new QPushButton(centralwidget);
        quitter->setObjectName(QString::fromUtf8("quitter"));
        quitter->setGeometry(QRect(150, 180, 80, 28));
        ajouterOuvrage = new QPushButton(centralwidget);
        ajouterOuvrage->setObjectName(QString::fromUtf8("ajouterOuvrage"));
        ajouterOuvrage->setGeometry(QRect(100, 50, 191, 28));
        ajouterJournal = new QPushButton(centralwidget);
        ajouterJournal->setObjectName(QString::fromUtf8("ajouterJournal"));
        ajouterJournal->setGeometry(QRect(110, 90, 161, 28));
        supprimerReference = new QPushButton(centralwidget);
        supprimerReference->setObjectName(QString::fromUtf8("supprimerReference"));
        supprimerReference->setGeometry(QRect(150, 300, 171, 28));
        affichierBibliographie = new QPushButton(centralwidget);
        affichierBibliographie->setObjectName(QString::fromUtf8("affichierBibliographie"));
        affichierBibliographie->setGeometry(QRect(110, 140, 171, 28));
        afficherBiblio = new QTextEdit(centralwidget);
        afficherBiblio->setObjectName(QString::fromUtf8("afficherBiblio"));
        afficherBiblio->setGeometry(QRect(360, 20, 371, 261));
        afficherBiblio->setReadOnly(true);
        identifiantISSNISBN = new QLabel(centralwidget);
        identifiantISSNISBN->setObjectName(QString::fromUtf8("identifiantISSNISBN"));
        identifiantISSNISBN->setGeometry(QRect(380, 310, 151, 20));
        identifiantSupprimer = new QLineEdit(centralwidget);
        identifiantSupprimer->setObjectName(QString::fromUtf8("identifiantSupprimer"));
        identifiantSupprimer->setGeometry(QRect(540, 310, 113, 27));
        erreurSupprimer = new QLabel(centralwidget);
        erreurSupprimer->setObjectName(QString::fromUtf8("erreurSupprimer"));
        erreurSupprimer->setGeometry(QRect(390, 360, 321, 51));
        erreurSupprimer->setWordWrap(true);
        GestionReferenceGUIClass->setCentralWidget(centralwidget);
        menubar = new QMenuBar(GestionReferenceGUIClass);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
        GestionReferenceGUIClass->setMenuBar(menubar);
        statusbar = new QStatusBar(GestionReferenceGUIClass);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        GestionReferenceGUIClass->setStatusBar(statusbar);

        retranslateUi(GestionReferenceGUIClass);
        QObject::connect(quitter, SIGNAL(clicked()), GestionReferenceGUIClass, SLOT(close()));

        QMetaObject::connectSlotsByName(GestionReferenceGUIClass);
    } // setupUi

    void retranslateUi(QMainWindow *GestionReferenceGUIClass)
    {
        GestionReferenceGUIClass->setWindowTitle(QApplication::translate("GestionReferenceGUIClass", "Gestion des r\303\251f\303\251rences", 0, QApplication::UnicodeUTF8));
        quitter->setText(QApplication::translate("GestionReferenceGUIClass", "Quitter", 0, QApplication::UnicodeUTF8));
        ajouterOuvrage->setText(QApplication::translate("GestionReferenceGUIClass", "Ajouter un ouvrage", 0, QApplication::UnicodeUTF8));
        ajouterJournal->setText(QApplication::translate("GestionReferenceGUIClass", "Ajouter un journal", 0, QApplication::UnicodeUTF8));
        supprimerReference->setText(QApplication::translate("GestionReferenceGUIClass", "Supprimer une r\303\251f\303\251rence", 0, QApplication::UnicodeUTF8));
        affichierBibliographie->setText(QApplication::translate("GestionReferenceGUIClass", "Afficher la bibliographie", 0, QApplication::UnicodeUTF8));
        identifiantISSNISBN->setText(QApplication::translate("GestionReferenceGUIClass", "Code ISSN ou ISBN valide", 0, QApplication::UnicodeUTF8));
        erreurSupprimer->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class GestionReferenceGUIClass: public Ui_GestionReferenceGUIClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GESTIONREFERENCEGUI_H
