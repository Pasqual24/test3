#include "ajouterouvrageqt.h"

ajouterOuvrageQt::ajouterOuvrageQt(QWidget *parent)
    : QDialog(parent)
{
	ui.setupUi(this);
}

ajouterOuvrageQt::~ajouterOuvrageQt()
{

}

std::string ajouterOuvrageQt::reqAuteurs() const{
	return ui.nomAuteurOuvrage->text().toStdString();
}
std::string ajouterOuvrageQt::reqTitre() const{
	return ui.titreOeuvreOuvrage->text().toStdString();
}
std::string ajouterOuvrageQt::reqVille() const{
	return ui.villeEditionOuvrage->text().toStdString();
}
std::string ajouterOuvrageQt::reqEditeur() const{
	return ui.editeurOuvrage->text().toStdString();
}
int ajouterOuvrageQt::reqAnnee() const{
	return ui.anneeEditionOuvrage->text().toInt();
}
std::string ajouterOuvrageQt::reqIdentifiant() const{
	return ui.codeISBNOuvrage->text().toStdString();
}
void ajouterOuvrageQt::enregistrerOuvrage(){
	m_ouvrage = biblio::Ouvrage(reqAuteurs(), reqTitre(), reqEditeur(), reqVille(), reqAnnee(), reqIdentifiant());
	accept();
}
