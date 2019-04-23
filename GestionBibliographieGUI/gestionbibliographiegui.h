#ifndef GESTIONBIBLIOGRAPHIEGUI_H
#define GESTIONBIBLIOGRAPHIEGUI_H

#include <QtGui/QMainWindow>
#include "ui_gestionbibliographiegui.h"
#include <vector>
#include "Reference.h"
#include "Ouvrage.h"
#include "Journal.h"
#include "Bibliographie.h"


class GestionBibliographieGUI : public QMainWindow
{
    Q_OBJECT

public:
    GestionBibliographieGUI(QWidget *parent = 0);
    ~GestionBibliographieGUI();

    private slots:
		void AjouterUnOuvrage();
		void ajouterJournal();
		//ajoutEmployeComission();

private:
    Ui::GestionBibliographieGUIClass ui;

};

#endif // GESTIONBIBLIOGRAPHIEGUI_H
