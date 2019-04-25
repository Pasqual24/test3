/*
 * Bibliographie.cpp
 *
 *  Created on: 2019-04-08
 *      Author: etudiant
 */

#include "Bibliographie.h"
#include "Reference.h"
#include <string>
#include <sstream>
#include <vector>
#include "ContratException.h"
#include "ReferenceException.h"
//#include <QMessageBox>

using namespace std;
using namespace biblio;
namespace biblio {
/**
 * \brief Constructeur de bibliographie pour donner un nom à la bibliographie
 * @param p_nom Nom de la bibliographie
 */
Bibliographie::Bibliographie(const std::string& p_nom) :
		m_nom(p_nom)
{
	PRECONDITION(!p_nom.empty());
	std::vector<Reference*> m_vReferences;
}

const string& Bibliographie::reqNombiblio() const
{
		return m_nom;
}

/**
 * \brief Méthode qui ajoute une référence formatée dans le vecteur reference.
 * @param p_nouvelleReference Nouvelle référence formaté.
 */
void Bibliographie::ajouterReference(const Reference& p_nouvelleReference)
{
	try{
		if(Bibliographie::referenceEstDejaPresente(p_nouvelleReference.reqIdentifiant()))
		{
			cout << "DÉJÀ PRÉSENTE"	 << endl;
			throw ReferenceDejaPresenteException("OYEHA");
		}
		m_vReferences.push_back(p_nouvelleReference.clone());
	}
	catch (ReferenceException& e)
	{
		cout << "DÉJÀ PRÉSENTE"	 << endl;
	}

}
/**
 * \brief Méthode qui vérifie si la nouvelle référence est déjà dans le vecteur.
 * @param p_identifiant Nouvelle identifiant ISSN ou ISBN
 * @return refDejaPresente Un booléen qui indique si la référence est présente ou non.
 */

bool Bibliographie::referenceEstDejaPresente(
		const std::string& p_identifiant) const
{
	bool refDejaPresente = false;
	for (unsigned int i = 0; i < m_vReferences.size(); i++)
	{
		if (m_vReferences[i]->reqIdentifiant() == p_identifiant)
		{
			refDejaPresente = true;
		}

	}
	return refDejaPresente;
}
/**
 *\brief Une méthode qui retourne une bibliographie formaté.
 * @return os.str() La bibliographie formatée.
 */
string Bibliographie::reqBibliographieFormate() const
{
	std::ostringstream os;
	os << "Bibliographie\n" << "===============================\n";
	for(unsigned int i = 0; i < m_vReferences.size(); i++){
		os << "[" << i + 1 << "] " << m_vReferences[i]->reqReferenceFormate() << endl;
	}
	return os.str();
}
/**
 *\brief Un destructeur pour la classe Bibliographie.
 */

Bibliographie::~Bibliographie()
{
	for (unsigned int i = 0; i < m_vReferences.size(); i++){
		m_vReferences.erase(m_vReferences.begin() + i);
	}
}

void Bibliographie::supprimerReference(const std::string& p_identifiant)
{
	try
	{
		vector<Reference*>::iterator iterI = m_vReferences.begin();
		bool trouve = false;
		cout << "test version 5" << endl;

		while (!trouve && iterI != m_vReferences.end())
		{
			if((*iterI)->reqIdentifiant() == p_identifiant)
			{
				trouve = true;
				m_vReferences.erase(iterI);
				cout << "EFFACÉ" << endl;
				break;
			}
			iterI++;
		}

		if (!trouve)
		{
			throw ReferenceAbsenteException("La référence n'est pas présente dans la bibliographie");
		}

	}
	catch (ReferenceAbsenteException& e)
	{
		cout << "exception, do something kthx" << endl;
	}
}

}

