/**
 * Bibliographie_Testeur.cpp
 *
 *  Created on: 2019-04-07
 *  Author: Guillaume St-Georges
 */

#include "Bibliographie.h"
#include "Reference.h"
#include "Journal.h"
#include "Ouvrage.h"
#include <gtest/gtest.h>
#include "ContratException.h"
#include <sstream>
#include "ReferenceException.h"

using namespace biblio;
using namespace std;
/**
 * \brief Test du constructeur avec paramètre de Bibliographie.
 */
TEST(Bibliographie, constructeurAvecParametreValide){
	Bibliographie bib("bibliographie");
	ASSERT_EQ("bibliographie", bib.reqNombiblio());
}

/**
 *\brief Class fixture BiblioFix qui sert pour tester les accesseurs.
 */
class BiblioFix: public:: testing::Test{
public:
	BiblioFix() :t_bib("bibliographie")
{}
	Bibliographie t_bib;
};
/**
 * \brief Test de l'accesseur du nom de la Bibliographie.
 */
TEST_F(BiblioFix, reqNom){
	ASSERT_EQ("bibliographie", t_bib.reqNombiblio());
}

/**
 * \brief Test de la fonction referenceEstDejaPresente de la classe Bibliographie
 */
TEST_F(BiblioFix, referenceEstDejaPresente){
	Journal jour1("Guillaume St-Georges", "Au pays des merveilles", 2010, "Journal Le Soleil", 3, 4, 100, "ISSN 1937-4771");
	Journal jour2("Guillaume St-Georges", "Au pays des merveilles", 2010, "Journal Le Soleil", 3, 4, 100, "ISSN 1937-4771");
	t_bib.ajouterReference(jour1);
	ASSERT_THROW(t_bib.ajouterReference(jour2), ReferenceDejaPresenteException);

	t_bib.supprimerReference("ISSN 1937-4771");
}

/**
 * \brief Test de la fonction referenceEstDejaPresente de la classe Bibliographie
 */
TEST_F(BiblioFix, referenceAbsente){
	Journal jour1("Guillaume St-Georges", "Au pays des merveilles", 2010, "Journal Le Soleil", 3, 4, 100, "ISSN 1937-4771");

	ASSERT_THROW(t_bib.supprimerReference("ISSN 1937-4771"), ReferenceAbsenteException);

	t_bib.ajouterReference(jour1);
}
