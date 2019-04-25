#include "ajouterjournalqt.h"

ajouterJournalQt::ajouterJournalQt(QWidget *parent)
    : QDialog(parent)
{
	ui.setupUi(this);
	QObject::connect(ui.enregistrerJournal, SIGNAL(clicked()), this, SLOT(enregistrerJournal()));
}

ajouterJournalQt::~ajouterJournalQt()
{

}

std::string ajouterJournalQt::reqAuteurs() const{
	return ui.nomAuteurJournal ->text().toStdString();
}
std::string ajouterJournalQt::reqTitre() const{
	return ui.titreJournal_2 ->text().toStdString();
}
std::string ajouterJournalQt::reqNom() const{
	return ui.nomRevueJournal->text().toStdString();
}
std::string ajouterJournalQt::reqIdentifiant() const{
	return ui.codeISSNJournal->text().toStdString();
}
int ajouterJournalQt::reqAnnee() const{
	return ui.anneePublicationJournal->text().toInt();
}
int ajouterJournalQt::reqVolume() const{
	return ui.numeroVolumeJournal->text().toInt();
}
int ajouterJournalQt::reqNumero() const{
	return ui.numeroVolumeJournal->text().toInt();
}
int ajouterJournalQt::reqPage() const{
	return ui.numeroPage->text().toInt();
}


void ajouterJournalQt::enregistrerJournal(){
	if(util::validerFormatNom(this->reqAuteurs()) && (!this->reqTitre().empty()) && (this->reqAnnee() > 0) && (util::validerCodeIssn(this->reqIdentifiant()) && (!this->reqNom().empty()) && (this->reqVolume() > 0) && (this->reqNumero() > 0) && (this->reqPage() > 0)))
			{
				accept();
			}
	ui.erreurJournal->setText("Tu es dans l'erreur, gamin !");
}
