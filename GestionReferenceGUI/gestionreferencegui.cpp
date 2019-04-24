#include "gestionreferencegui.h"
#include "ajouterouvrageqt.h"
#include "ajouterjournalqt.h"
#include "afficherbibliographieqt.h"
#include "supprimerreferenceqt.h"
#include <iostream>


GestionReferenceGUI::GestionReferenceGUI(QWidget *parent)
    : QMainWindow(parent)
{
	ui.setupUi(this);
	QObject::connect(ui.ajouterOuvrage, SIGNAL(clicked()), this, SLOT(ajoutOuvrage()));
	QObject::connect(ui.ajouterJournal, SIGNAL(clicked()), this, SLOT(ajoutJournal()));
	QObject::connect(ui.affichierBibliographie, SIGNAL(clicked()), this, SLOT(afficherBibliographie()));
	QObject::connect(ui.supprimerReference, SIGNAL(clicked()), this, SLOT(supprimerReference()));
}

GestionReferenceGUI::~GestionReferenceGUI()
{

}

void GestionReferenceGUI::ajoutOuvrage(){
	ajouterOuvrageQt aoqt;
	aoqt.exec();
}
void GestionReferenceGUI::ajoutJournal(){
	ajouterJournalQt ajqt;
	ajqt.exec();
}

void GestionReferenceGUI::afficherBibliographie(){
	afficherBibliographieQt abqt;
	abqt.exec();
}

void GestionReferenceGUI::supprimerReference(){
	supprimerReferenceQt srqt;
	srqt.exec();
}
