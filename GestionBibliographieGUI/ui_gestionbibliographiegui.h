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
#include <QtGui/QMenuBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GestionBibliographieGUIClass
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;

    void setupUi(QMainWindow *GestionBibliographieGUIClass)
    {
        if (GestionBibliographieGUIClass->objectName().isEmpty())
            GestionBibliographieGUIClass->setObjectName(QString::fromUtf8("GestionBibliographieGUIClass"));
        GestionBibliographieGUIClass->resize(800, 600);
        centralwidget = new QWidget(GestionBibliographieGUIClass);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        GestionBibliographieGUIClass->setCentralWidget(centralwidget);
        menubar = new QMenuBar(GestionBibliographieGUIClass);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
        GestionBibliographieGUIClass->setMenuBar(menubar);

        retranslateUi(GestionBibliographieGUIClass);

        QMetaObject::connectSlotsByName(GestionBibliographieGUIClass);
    } // setupUi

    void retranslateUi(QMainWindow *GestionBibliographieGUIClass)
    {
        GestionBibliographieGUIClass->setWindowTitle(QApplication::translate("GestionBibliographieGUIClass", "MainWindow", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class GestionBibliographieGUIClass: public Ui_GestionBibliographieGUIClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GESTIONBIBLIOGRAPHIEGUI_H
