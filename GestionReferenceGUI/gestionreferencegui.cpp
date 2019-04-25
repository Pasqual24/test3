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
				ui.erreurSupprimer->setText("Champ invalide.");
				throw;
			}
			catch(ReferenceDejaPresenteException& e){
				ui.erreurSupprimer->setText("Cette référence est déjà présente.");
			}
	}
}
void GestionReferenceGUI::ajoutJournal(){
	ajouterJournalQt ajqt;
	if(ajqt.exec()){
			try{
				biblio::Journal m_journal(ajqt.reqAuteurs(), ajqt.reqTitre(), ajqt.reqAnnee(), ajqt.reqNom(), ajqt.reqVolume(), ajqt.reqNumero(), ajqt.reqPage(), ajqt.reqIdentifiant());
				bibliographie.ajouterReference(m_journal);

				}
				catch(PreconditionException& e){
					ui.erreurSupprimer->setText("Champ invalide.");
					throw;
				}
				catch(ReferenceDejaPresenteException& e){
					ui.erreurSupprimer->setText("Cette référence est déjà présente.");
				}
		}
}

void GestionReferenceGUI::afficherBibliographie(){
	QString qTexte = QString::fromStdString(bibliographie.reqBibliographieFormate());
	ui.afficherBiblio->setText(qTexte);
}

void GestionReferenceGUI::supprimerReference(){
	if(util::validerCodeIsbn(reqIdentifiantASupprimer()) or util::validerCodeIssn(reqIdentifiantASupprimer())){
		try{
			bibliographie.supprimerReference(reqIdentifiantASupprimer());
			}
			catch(ReferenceAbsenteException& e){
				ui.erreurSupprimer->setText("Cet identifiant n'est pas dans la bibliographie.");
			}

	}
}
