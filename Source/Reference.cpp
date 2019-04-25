/**
 * \file Reference.cpp
 * \brief Implémentation de la classe Reference
 * \date 2019-02-22
 * \author Guillaume St-Georges
 */

#include "Reference.h"
#include <sstream>
#include "ContratException.h"

using namespace std;
/**
 * \brief Constructeur qui crée un objet reference
 * \param[in] p_auteurs Le/les noms des auteurs
 * \param[in] p_titre Le titre de l'oeuvre
 * \param[in] p_annee L'année de référence de l'oeuvre
 * \param[in] p_identifiant Le code de référence de l'oeuvre
 * \pre p_auteurs doit être valide selon la fonction validerFormatNom
 * \pre p_titre ne doit pas être vide
 * \pre p_annee doit être strictement supérieur à 0
 * \pre p_identifiant doit être un code ISSN ou ISBN valide
 * \post m_auteurs doit être égale à p_auteurs
 * \post m_titre doit être égal à p_titre
 * \post m_annee doit être égal à p_annee
 * \post m_identifiant doit être égal à p_identifiant
 * \return Un objet reference
 */
namespace biblio{

Reference::Reference(string p_auteurs, string p_titre, int p_annee, string p_identifiant):m_auteurs(p_auteurs), m_titre(p_titre), m_annee(p_annee), m_identifiant(p_identifiant)
{
	PRECONDITION(util::validerFormatNom(p_auteurs));
	PRECONDITION(!p_titre.empty());
	PRECONDITION(p_annee > 0);
	PRECONDITION(util::validerCodeIsbn(p_identifiant)||util::validerCodeIssn(p_identifiant));
	POSTCONDITION(m_auteurs == p_auteurs);
	POSTCONDITION(m_titre == p_titre);
	POSTCONDITION(m_annee == p_annee);
	POSTCONDITION(m_identifiant == p_identifiant);
	INVARIANTS();
}
/**
 * \brief Accesseur pour l'année
 * \param[in] m_annee L'année de référence
 * \return m_annee L'année de référence
 */
int Reference::reqAnnee() const
{
	return m_annee;
}
/**
 * \brief Accesseur pour le/les auteurs
 * \return m_auteurs Le(s) nom(s) de l'auteur ou des auteurs
 */
const std::string& Reference::reqAuteurs() const
{
	return m_auteurs;
}
/**
 * \brief  des auteurs
 * \param[in] p_auteurs Les noms des auteurs
 */
void Reference::asgAuteurs(const std::string& p_auteurs)
{
	PRECONDITION(util::validerFormatNom(p_auteurs));
	m_auteurs = p_auteurs;
	POSTCONDITION(m_auteurs == p_auteurs);
	INVARIANTS();
}
/**
 * \brief Assigneur d'identifiant
 * \return m_identifiant Le code identifiant de l'oeuvre
 */
const std::string& Reference::reqIdentifiant() const
{
	return m_identifiant;
}
/**
 * \brief Assigneur de titre
 * \return m_identifiant Une lecture de l'identifiant
 */
const std::string& Reference::reqTitre() const
{
	return m_titre;
}
/**
 *
 * \return os.str() Une référence complète
 */
std::string Reference::reqReferenceFormate() const{
	std::ostringstream os;
	os << m_auteurs << ". " << m_titre << ".";
	return os.str();
}
/**
 *
 * \param[in] ref Un objet de la classe Reference
 * \return m_auteurs == ref.m_auteurs && m_titre == ref.m_titre && m_annee == ref.m_annee && m_identifiant == ref.m_identifiant Des opérateurs logiques d'égalité
 */
bool Reference::operator==(const Reference& ref) const{

return m_auteurs == ref.m_auteurs && m_titre == ref.m_titre && m_annee == ref.m_annee && m_identifiant == ref.m_identifiant;
}
/**
 * \brief Méthode vérifieInvariant qui vérifie que rien ne varie durant l'exécution du programme.
 */
void Reference::verifieInvariant() const{

	INVARIANT(util::validerFormatNom(m_auteurs) &&
			!m_titre.empty() && m_annee > 0 &&
			(util::validerCodeIsbn(m_identifiant)||util::validerCodeIssn(m_identifiant)));
}

}
