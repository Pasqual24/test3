#ifndef GESTIONREFERENCEGUI_H
#define GESTIONREFERENCEGUI_H

#include <QtGui/QMainWindow>
#include "ui_gestionreferencegui.h"
#include <vector>
#include "Reference.h"

class GestionReferenceGUI : public QMainWindow
{
    Q_OBJECT

public:
    GestionReferenceGUI(QWidget *parent = 0);
    ~GestionReferenceGUI();
private slots:
	void ajoutOuvrage();
	void ajoutJournal();
	void afficherBibliographie();
	void supprimerReference();

private:
    Ui::GestionReferenceGUIClass ui;
};

#endif // GESTIONREFERENCEGUI_H
