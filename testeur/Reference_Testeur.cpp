/**
 * Reference_Testeur.cpp
 *
 *  Created on: 2019-04-07
 *  Author: Guillaume St-Georges
 */

#include "Reference.h"
#include <gtest/gtest.h>
#include "ContratException.h"
#include <sstream>

using namespace biblio;
using namespace std;
/**
 * \class TestReference
 * \brief Testeur du constructeur de la classe Reference
 */
class TestReference: public Reference{

public:
	TestReference(string p_auteurs, string p_titre, int p_annee, string p_identifiant):
		Reference(p_auteurs, p_titre, p_annee, p_identifiant)
{}

string reqReferenceFormate() const{
	ostringstream os;
	os << TestReference::reqReferenceFormate();
	return os.str();
}
virtual ~TestReference(){}

Reference* clone() const{
	return new TestReference(*this);
}
};

/**
 * \brief Test du contructeur avec paramètres valides
 */
TEST(TestReference, constructeurValideAvecParametres){
	TestReference ref("Homayoon Beigi", "Fundamentals of Speaker Recognition", 2011, "ISBN 978-0-387-77591-3");
	ASSERT_EQ("Homayoon Beigi", ref.reqAuteurs());
	ASSERT_EQ("Fundamentals of Speaker Recognition", ref.reqTitre());
	ASSERT_EQ(2011, ref.reqAnnee());
	ASSERT_EQ("ISBN 978-0-387-77591-3", ref.reqIdentifiant());
}
/**
 * \brief Test du constructeur avec auteurs invalides
 */

TEST(TestReference, constructeurAvecAuteursInvalide){
	ASSERT_THROW(TestReference ref("Guillaume123", "Fundamentals of Speaker Recognition", 2011, "ISBN 978-0-387-77591-3"), PreconditionException);
}
/**
 *
 *\brief Test du constructeur avec un titre invalide
 */

TEST(TestReference, constructeurAvecTitreInvalide){
	ASSERT_THROW(TestReference ref("Homayoon Beigi", "", 2011, "ISBN 978-0-387-77591-3"), PreconditionException);
}

/**
 * \brief Test du constructeur avec une annee invalide
 */
TEST(TestReference, constructeurAvecAnneeInvalide){
	ASSERT_THROW(TestReference ref("Homayoon Beigi", "Fundamentals of Speaker Recognition", -2011, "ISBN 978-0-387-77591-3"), PreconditionException);
}
/**
 * \brief Test du constructeur avec un identifiant invalide
 */

TEST(TestReference, constructeurAvecIdentifiantInvalide){
	ASSERT_THROW(TestReference ref("Homayoon Beigi", "Fundamentals of Speaker Recognition", 2011, "ISBN 978-0-387-77591"), PreconditionException);
}

/**
 * \class ReferenceFix
 * \brief Fixture pour les tests de getters et setters
 */

class ReferenceFix: public:: testing::Test{
public:
	ReferenceFix() :t_ref("Homayoon Beigi", "Fundamentals of Speaker Recognition", 2011, "ISBN 978-0-387-77591-3"),
	t_ref1("Homayoon Beigi", "Fundamentals of Speaker Recognition", 2011, "ISBN 978-0-387-77591-3"),
	t_ref2("Guillaume St-Georges", "Fundamentals of Speaker Recognition", 2011, "ISBN 978-0-387-77591-3")
{}
	TestReference t_ref;
	TestReference t_ref1;
	TestReference t_ref2;
};
/**
 * \brief Test de l'accesseur de l'auteur
 */

TEST_F(ReferenceFix, reqAuteurs){
	ASSERT_EQ("Homayoon Beigi", t_ref.reqAuteurs());
}
/**
 * \brief Test de l'accesseur du titre
 */

TEST_F(ReferenceFix, reqTitre){
	ASSERT_EQ("Fundamentals of Speaker Recognition", t_ref.reqTitre());
}
/**
 * \brief Test de l'accesseur de l'annee
 */
TEST_F(ReferenceFix, reqAnnee){
	ASSERT_EQ(2011, t_ref.reqAnnee());
}
/**
 * \brief Test de l'accesseur de l'identifiant
 */
TEST_F(ReferenceFix, reqIdentifiant){
	ASSERT_EQ("ISBN 978-0-387-77591-3", t_ref.reqIdentifiant());
}
/**
 * \brief Test du format de l'objet reference
 */

TEST_F(ReferenceFix, reqReferenceFormate){
	ostringstream os;
	os << t_ref.reqAuteurs() << ". " << t_ref.reqTitre() << "." << endl;
	ASSERT_EQ(os.str(), t_ref.reqReferenceFormate());
}
/**
 * \brief Test de l'invalidité de l'auteur
 */
TEST_F(ReferenceFix, asgAuteursInvalide){
	ASSERT_THROW(t_ref.asgAuteurs("Guillaume123"), PreconditionException);
}
/**
 * \brief Test de la validité de l'auteur
 */

TEST_F(ReferenceFix, asgAuteursValide){
	t_ref.asgAuteurs("Guillaume St-Georges");
	ASSERT_EQ("Guillaume St-Georges", t_ref.reqAuteurs());
}
/**
 * \brief Test de la validitié de l'opérateur d'égalité
 */

TEST_F(ReferenceFix, operEgal){
	ASSERT_EQ(t_ref == t_ref1, true);
}
/**
 * \brief Test de l'invalidité de l'opérateur d'égalité
 */

TEST_F(ReferenceFix, operEgalInvalide){
	ASSERT_EQ(t_ref == t_ref2, false);
}








