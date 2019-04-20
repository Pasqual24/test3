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
 * \brief Test de la fonction ajouterReference de la classe Bibliographie.
 */
TEST_F(BiblioFix, ajouterReference){
	Journal jour("Guillaume St-Georges", "Au pays des merveilles", 2010, "Journal Le Soleil", 3, 4, 100, "ISSN 1937-4771");
	Ouvrage testouvrage("Guillaume St-Georges", "Au pays des merveilles", "Edito", "Montreal", 2010, "ISBN 978-0-387-77591-3");
	t_bib.ajouterReference(jour);
	t_bib.ajouterReference(testouvrage);
	ASSERT_EQ("[1] " + jour.reqReferenceFormate() + "[2] " + testouvrage.reqReferenceFormate(), t_bib.reqBibliographieFormate());
}
/**
 * \brief Test de la fonction reqBibliographieFormate de la classe Bibliographie.
 */
TEST_F(BiblioFix, reqBibliographieFormate){
	Journal jour("Guillaume St-Georges", "Au pays des merveilles", 2010, "Journal Le Soleil", 3, 4, 100, "ISSN 1937-4771");
	Ouvrage testouvrage("Guillaume St-Georges", "Au pays des merveilles", "Edito", "Montreal", 2010, "ISBN 978-0-387-77591-3");
	t_bib.ajouterReference(jour);
	t_bib.ajouterReference(testouvrage);
	ASSERT_EQ("[1] " + jour.reqReferenceFormate() +"[2] " + testouvrage.reqReferenceFormate(), t_bib.reqBibliographieFormate());
}
/**
 * \brief Test de la fonction referenceEstDejaPresente de la classe Bibliographie
 */
TEST_F(BiblioFix, referenceEstDejaPresente){
	Journal jour1("Guillaume St-Georges", "Au pays des merveilles", 2010, "Journal Le Soleil", 3, 4, 100, "ISSN 1937-4771");
	Journal jour2("Guillaume St-Georges", "Au pays des merveilles", 2010, "Journal Le Soleil", 3, 4, 100, "ISSN 1937-4771");
	t_bib.ajouterReference(jour1);
	t_bib.ajouterReference(jour2);
	ASSERT_EQ("[1] " + jour1.reqReferenceFormate(), t_bib.reqBibliographieFormate());
}


