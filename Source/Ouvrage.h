/*
 * Ouvrage.h
 *
 *  Created on: 2019-03-31
 *      Author: etudiant
 */

#ifndef OUVRAGE_H_
#define OUVRAGE_H_
#include <string>
#include "Reference.h"

namespace biblio{
/**
 * \class Ouvrage
 * \brief Classe Ouvrage
 */

class Ouvrage: public Reference
{

public:
~Ouvrage();
Ouvrage(std::string p_auteurs, std::string p_titre, std::string p_editeur, std::string p_ville, int p_annee, std::string p_identifiant);
const std::string& reqEditeur() const;
const std::string& reqVille() const;
std::string reqReferenceFormate() const;
virtual Reference* clone() const;


private:
	std::string m_editeur;
	std::string m_ville;
	void verifieInvariant() const;
};

}
#endif /* OUVRAGE_H_ */
