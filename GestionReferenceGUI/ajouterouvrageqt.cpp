#include "ajouterouvrageqt.h"

ajouterOuvrageQt::ajouterOuvrageQt(QWidget *parent)
		: QDialog(parent)
{
	ui.setupUi(this);
	QObject::connect(ui.enregistrerOuvrage, SIGNAL(clicked()), this, SLOT(enregisterOuvrage()));
}

ajouterOuvrageQt::~ajouterOuvrageQt()
{

}

std::string ajouterOuvrageQt::reqAuteurs() const{
	return ui.nomAuteurOuvrage ->text().toStdString();
}
std::string ajouterOuvrageQt::reqTitre() const{
	return ui.titreOeuvreOuvrage ->text().toStdString();
}
std::string ajouterOuvrageQt::reqVille() const{
	return ui.villeEditionOuvrage ->text().toStdString();
}
std::string ajouterOuvrageQt::reqEditeur() const{
	return ui.editeurOuvrage ->text().toStdString();
}
int ajouterOuvrageQt::reqAnnee() const{
	return ui.anneeEditionOuvrage ->text().toInt();
}
std::string ajouterOuvrageQt::reqIdentifiant() const{
	return ui.codeISBNOuvrage ->text().toStdString();
}

void ajouterOuvrageQt::enregisterOuvrage(){
		if(util::validerFormatNom(this->reqAuteurs()) and util::validerFormatNom(this->reqTitre()) and util::validerFormatNom(this->reqEditeur()) and util::validerFormatNom(this->reqVille()) and this->reqAnnee() > 0 and util::validerCodeIsbn(this->reqIdentifiant())){
			accept();
		}
		ui.erreurOuvrage->setText("Tu es dans l'erreur, gamin !");
}
