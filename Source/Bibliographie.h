/*
 * Bibliographie.h
 *
 *  Created on: 2019-04-08
 *      Author: etudiant
 */

#ifndef BIBLIOGRAPHIE_H_
#define BIBLIOGRAPHIE_H_

#include "Reference.h"
#include <string>
#include <sstream>
#include <vector>

namespace biblio{
/**
 * \class Bibliographie
 * \brief Classe Bibliographie
 */
class Bibliographie
{
public:
	~Bibliographie();
	Bibliographie(const std::string& p_nom);
	void ajouterReference (const Reference& p_nouvelleReference);
	std::string reqBibliographieFormate() const;
	const std::string& reqNombiblio() const;
	void supprimerReference(const std::string& p_identifiant);

private:

	bool referenceEstDejaPresente(const std::string& p_identifiant) const;
	std::string m_nom;
	std::vector<Reference*> m_vReferences;
};
}
#endif /* BIBLIOGRAPHIE_H_ */
