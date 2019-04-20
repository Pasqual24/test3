/**
 * Ouvrage_Testeur.cpp
 *
 *  Created on: 2019-04-07
 *  Author: Guillaume St-Georges
 */

#include "Ouvrage.h"
#include <gtest/gtest.h>
#include "ContratException.h"
#include <sstream>

using namespace biblio;
using namespace std;
/**
 * \brief Test du constructeur avec des paramètres valides
 */

TEST(Ouvrage, constructeurAvecParametresValides){
	Ouvrage testouvrage("Guillaume St-Georges", "Au pays des merveilles", "Edito", "Montreal", 2010, "ISBN 978-0-387-77591-3");
	ASSERT_EQ("Edito", testouvrage.reqEditeur());
	ASSERT_EQ("Montreal", testouvrage.reqVille());
}
/**
 * \brief Test du constructeur avec un éditeur invalide
 */
TEST(Ouvrage, constructeurAvecEditeurInvalide){
	ASSERT_THROW(Ouvrage testouvrage("Guillaume St-Georges", "Au pays des merveilles", "Edito123", "Montreal", 2010, "ISBN 978-0-387-77591-3"), PreconditionException);
}
/**
 * \brief Test du constructeur avec une ville invalide
 */
TEST(Ouvrage, constructeurAvecVilleInvalide){
	ASSERT_THROW(Ouvrage testouvrage("Guillaume St-Georges", "Au pays des merveilles", "Edito", "Montreal123", 2010, "ISBN 978-0-387-77591-3"), PreconditionException);
}
/**
 * \brief Test du constructeur avec un identifiant invalide
 */
TEST(Ouvrage, constructeurAvecIdentifiantInvalide){
	ASSERT_THROW(Ouvrage testouvrage("Guillaume St-Georges", "Au pays des merveilles", "Edito", "Montreal", 2010, "ISBN 978-0-387-77591"), PreconditionException);
}
/**
 * \brief Création d'une classe fixture pour tester les getters et les setters de Ouvrage
 */

class OuvrageFix: public:: testing::Test{
public:
	OuvrageFix() :t_ouv("Guillaume St-Georges", "Au pays des merveilles", "Edito", "Montreal", 2010, "ISBN 978-0-387-77591-3")
{}
	Ouvrage t_ouv;
};
/**
 * \brief Test de l'accesseur de l'éditeur
 */
TEST_F(OuvrageFix, reqEditeur){
	ASSERT_EQ("Edito", t_ouv.reqEditeur());
}
/**
 * \brief Test de l'accesseur de la ville
 */

TEST_F(OuvrageFix, reqVille){
	ASSERT_EQ("Montreal", t_ouv.reqVille());
}
/**
 * \brief Test du formatteur de l'ouvrage
 */

TEST_F(OuvrageFix, reqReferenceFormate){
	ASSERT_EQ("Guillaume St-Georges. Au pays des merveilles. Montreal : Edito, 2010. ISBN 978-0-387-77591-3.", t_ouv.reqReferenceFormate());
}
/**
 * \brief Test du clône
 */

TEST_F(OuvrageFix, TestClone){
	Reference* cloneReference = t_ouv.clone();
	Ouvrage* cloneOuvrage = (Ouvrage*) cloneReference;
	ASSERT_EQ((*cloneOuvrage).reqReferenceFormate(), t_ouv.reqReferenceFormate());
}
//TEST()
