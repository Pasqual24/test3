#include "gestionreferencegui.h"
#include "ajouterouvrageqt.h"
#include "ajouterjournalqt.h"
#include "ReferenceException.h"
#include <iostream>
#include <qmessagebox.h>
#include <qtextstream.h>

biblio::Bibliographie bibliographie("Ma Bibliographie");

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
std::string GestionReferenceGUI::reqIdentifiantASupprimer() const{
	return ui.identifiantSupprimer ->text().toStdString();
}

void GestionReferenceGUI::ajoutOuvrage(){
	ajouterOuvrageQt aoqt;
	if(aoqt.exec()){
		try{
			biblio::Ouvrage m_ouvrage(aoqt.reqAuteurs(), aoqt.reqTitre(), aoqt.reqEditeur(), aoqt.reqVille(), aoqt.reqAnnee(), aoqt.reqIdentifiant());
			bibliographie.ajouterReference(m_ouvrage);

			}
			catch(PreconditionException& e){
				QString message = (e.what());
				QMessageBox::information(0, "erreur", message);
			}
			catch(ReferenceDejaPresenteException& e){
				QString message = (e.what());
				QMessageBox::information(0, "erreur", message);
			}
	}
}
void GestionReferenceGUI::ajoutJournal(){
	ajouterJournalQt ajqt;
	ajqt.exec();
}

void GestionReferenceGUI::afficherBibliographie(){
	QString qTexte = QString::fromStdString(bibliographie.reqBibliographieFormate());
	ui.afficherBiblio->setText(qTexte);
}

void GestionReferenceGUI::supprimerReference(){
	if(util::validerCodeIsbn(reqIdentifiantASupprimer()) or util::validerCodeIssn(reqIdentifiantASupprimer())){
		try{

			}
			catch(PreconditionException& e){
				QString message = (e.what());
				QMessageBox::information(0, "erreur", message);
			}

	}
}
