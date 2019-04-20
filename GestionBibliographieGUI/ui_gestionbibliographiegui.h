/********************************************************************************
** Form generated from reading UI file 'gestionbibliographiegui.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GESTIONBIBLIOGRAPHIEGUI_H
#define UI_GESTIONBIBLIOGRAPHIEGUI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GestionBibliographieGUIClass
{
public:
    QAction *actionAjouter_reference;
    QAction *actionSupprimer;
    QAction *actionQuitter;
    QWidget *centralwidget;
    QMenuBar *menubar;
    QMenu *menuMenu;

    void setupUi(QMainWindow *GestionBibliographieGUIClass)
    {
        if (GestionBibliographieGUIClass->objectName().isEmpty())
            GestionBibliographieGUIClass->setObjectName(QString::fromUtf8("GestionBibliographieGUIClass"));
        GestionBibliographieGUIClass->resize(517, 307);
        actionAjouter_reference = new QAction(GestionBibliographieGUIClass);
        actionAjouter_reference->setObjectName(QString::fromUtf8("actionAjouter_reference"));
        actionSupprimer = new QAction(GestionBibliographieGUIClass);
        actionSupprimer->setObjectName(QString::fromUtf8("actionSupprimer"));
        actionQuitter = new QAction(GestionBibliographieGUIClass);
        actionQuitter->setObjectName(QString::fromUtf8("actionQuitter"));
        centralwidget = new QWidget(GestionBibliographieGUIClass);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        GestionBibliographieGUIClass->setCentralWidget(centralwidget);
        menubar = new QMenuBar(GestionBibliographieGUIClass);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 517, 25));
        menuMenu = new QMenu(menubar);
        menuMenu->setObjectName(QString::fromUtf8("menuMenu"));
        GestionBibliographieGUIClass->setMenuBar(menubar);

        menubar->addAction(menuMenu->menuAction());
        menuMenu->addAction(actionAjouter_reference);
        menuMenu->addAction(actionSupprimer);
        menuMenu->addSeparator();
        menuMenu->addAction(actionQuitter);

        retranslateUi(GestionBibliographieGUIClass);

        QMetaObject::connectSlotsByName(GestionBibliographieGUIClass);
    } // setupUi

    void retranslateUi(QMainWindow *GestionBibliographieGUIClass)
    {
        GestionBibliographieGUIClass->setWindowTitle(QApplication::translate("GestionBibliographieGUIClass", "MainWindow", 0, QApplication::UnicodeUTF8));
        actionAjouter_reference->setText(QApplication::translate("GestionBibliographieGUIClass", "Ajouter r\303\251f\303\251rence", 0, QApplication::UnicodeUTF8));
        actionSupprimer->setText(QApplication::translate("GestionBibliographieGUIClass", "Supprimer", 0, QApplication::UnicodeUTF8));
        actionQuitter->setText(QApplication::translate("GestionBibliographieGUIClass", "Quitter", 0, QApplication::UnicodeUTF8));
        menuMenu->setTitle(QApplication::translate("GestionBibliographieGUIClass", "Menu", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class GestionBibliographieGUIClass: public Ui_GestionBibliographieGUIClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GESTIONBIBLIOGRAPHIEGUI_H
