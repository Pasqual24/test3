/**
 * \file Reference.h
 * \brief Prototype de la classe Reference
 * \date 2019-02-22
 * \author Guillaume St-Georges
 */

#ifndef REFERENCE_H_
#define REFERENCE_H_
#include <string>
#include "validationFormat.h"
namespace biblio{
/**
 * \class Reference
 * \brief Classe Reference permettant de modéliser les objets reference
 */
class Reference
{
public:
	Reference(std::string p_auteurs, std::string p_titre, int p_annee,
			std::string p_identifiant);
	int reqAnnee() const;
	const std::string& reqAuteurs() const;
	void asgAuteurs(const std::string& p_auteurs);
	const std::string& reqIdentifiant() const;
	const std::string& reqTitre() const;
	virtual std::string reqReferenceFormate() const=0;
	bool operator==(const Reference& ref) const;
	virtual ~Reference(){};
	virtual Reference* clone() const=0;

private:
	void verifieInvariant() const;
	std::string m_auteurs;
	std::string m_titre;
	int m_annee;
	std::string m_identifiant;
};
}
#endif /* REFERENCE_H_ */
