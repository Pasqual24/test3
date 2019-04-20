#ifndef GESTIONBIBLIOGRAPHIEGUI_H
#define GESTIONBIBLIOGRAPHIEGUI_H

#include <QtGui/QMainWindow>
#include "ui_gestionbibliographiegui.h"

class GestionBibliographieGUI : public QMainWindow
{
    Q_OBJECT

public:
    GestionBibliographieGUI(QWidget *parent = 0);
    ~GestionBibliographieGUI();

    private slots:
		void AjouterUnOuvrage();
		//ajoutEmployeComission();

private:
    Ui::GestionBibliographieGUIClass ui;

};

#endif // GESTIONBIBLIOGRAPHIEGUI_H
