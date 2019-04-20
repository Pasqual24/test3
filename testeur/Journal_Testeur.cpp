/**
 * Journal_Testeur.cpp
 *
 *  Created on: 2019-04-07
 *      Author: Guillaume St-Georges
 */

#include "Journal.h"
#include <gtest/gtest.h>
#include "ContratException.h"
#include <sstream>

using namespace biblio;
using namespace std;


/**
 * \brief Test du constructeur de Journal avec des paramètres valides
 */

TEST(Journal, constructeurValideAvecParametres){
	Journal jour("Guillaume St-Georges", "Au pays des merveilles", 2010, "Journal Le Soleil", 3, 4, 100, "ISSN 1937-4771");
	ASSERT_EQ("Journal Le Soleil", jour.reqNom());
	ASSERT_EQ(3, jour.reqVolume());
	ASSERT_EQ(4, jour.reqNumero());
	ASSERT_EQ(100, jour.reqPage());
}

/**
 * \brief Test du constructeur de journal avec un nom de journal invalide
 */

TEST(Journal, constructeurAvecJournalInvalide){
	ASSERT_THROW(Journal jour("Guillaume St-Georges", "Au pays des merveilles", 2010, "", 3, 4, 100, "ISSN 1937-4771"), PreconditionException);
}

/**
 * \brief Test du constructeur de journal avec un volume invalide
 */

TEST(Journal, constructeurAvecVolumeInvalide){
	ASSERT_THROW(Journal jour("Guillaume St-Georges", "Au pays des merveilles", 2010, "Journal Le Soleil", -3, 4, 100, "ISSN 1937-4771"), PreconditionException);
}

/**
 * \brief Test du constructeur de journal avec un numéro invalide
 */

TEST(Journal, constructeurAvecNumeroInvalide){
	ASSERT_THROW(Journal jour("Guillaume St-Georges", "Au pays des merveilles", 2010, "Journal Le Soleil", 3, -4, 100, "ISSN 1937-4771"), PreconditionException);
}

/**
 * \brief Test du constructeur de journal avec un nb de pages invalides
 */

TEST(Journal, constructeurAvecNbPagesInvalide){
	ASSERT_THROW(Journal jour("Guillaume St-Georges", "Au pays des merveilles", 2010, "Journal Le Soleil", 3, 4, -100, "ISSN 1937-4771"), PreconditionException);
}
/**
 * \brief Test du constructeur de journal avec un identifiant invalide
 */
TEST(Journal, constructeurAvecIdentifiantInvalide){
	ASSERT_THROW(Journal jour("Guillaume St-Georges", "Au pays des merveilles", 2010, "Journal Le Soleil", 3, 4, 100, "ISSN 1937-47"), PreconditionException);
}
/**
 *\brief Création d'une classe fixture pour tester les getters et les setters de la classe Journal
 */
class JournalFix: public:: testing::Test{
public:
	JournalFix() :t_jour("Guillaume St-Georges", "Au pays des merveilles", 2010, "Journal Le Soleil", 3, 4, 100, "ISSN 1937-4771")
{}
	Journal t_jour;
};
/**
 * \brief Test de l'accesseur du nom du journal
 */
TEST_F(JournalFix, reqNom){
	ASSERT_EQ("Journal Le Soleil", t_jour.reqNom());
}
/**
 * \brief Test de l'accesseur pour le numéro du volume du journal
 */

TEST_F(JournalFix, reqVolume){
	ASSERT_EQ(3, t_jour.reqVolume());
}
/**
 * \brief Test de l'accesseur du volume du journal
 */

TEST_F(JournalFix, reqNumero){
	ASSERT_EQ(4, t_jour.reqNumero());
}
/**
 * \brief Test de l'accesseur du nombre de pages
 */

TEST_F(JournalFix, reqPage){
	ASSERT_EQ(100, t_jour.reqPage());
}
/**
 * \brief Test du formatteur de l'objet Journal
 */

TEST_F(JournalFix, reqReferenceFormate){
	ASSERT_EQ("Guillaume St-Georges. Au pays des merveilles. Journal Le Soleil, vol. 3, no. 4, pp. 100, 2010. ISSN 1937-4771.", t_jour.reqReferenceFormate());
}
/**
 * \brief Test du clône de Journal
 */

TEST_F(JournalFix, TestClone){
	Reference* cloneReference = t_jour.clone();
	Journal* cloneJournal = (Journal*) cloneReference;
	ASSERT_EQ((*cloneJournal).reqReferenceFormate(), t_jour.reqReferenceFormate());
}


