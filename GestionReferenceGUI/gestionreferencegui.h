#ifndef GESTIONREFERENCEGUI_H
#define GESTIONREFERENCEGUI_H

#include <QtGui/QMainWindow>
#include "ui_gestionreferencegui.h"
#include <vector>
#include "Reference.h"
#include "Bibliographie.h"

class GestionReferenceGUI : public QMainWindow
{
    Q_OBJECT

public:
    GestionReferenceGUI(QWidget *parent = 0);
    ~GestionReferenceGUI();
    biblio::Bibliographie& reqBibliographie() const;
    std::string reqIdentifiantASupprimer() const;

private slots:
	void ajoutOuvrage();
	void ajoutJournal();
	void afficherBibliographie();
	void supprimerReference();
private:
    Ui::GestionReferenceGUIClass ui;
};

#endif // GESTIONREFERENCEGUI_H


//member privé: bibliopgraphie dans le main
//accesseur pour y accéder de l'extérieur?
//
