/**
 * Journal.h
 *
 *  Created on: 2019-03-31
 *  Author: Guillaume St-Georges
 */

#ifndef JOURNAL_H_
#define JOURNAL_H_
#include <string>
#include "Reference.h"

/**
 * \class Journal
 * \brief C'est la classe Journal
 *
 */
namespace biblio{
class Journal: public Reference
{
public:
~Journal();
Journal(std::string p_auteurs, std::string p_titre, int p_annee, std::string p_nom, int p_volume, int p_numero, int p_page, std::string p_identifiant);
const std::string& reqNom() const;
int reqNumero() const;
int reqPage() const;
int reqVolume() const;
std::string reqReferenceFormate() const;
virtual Reference* clone() const;

private:
	std::string m_nom;
	int m_volume;
	int m_numero;
	int m_page;
	void verifieInvariant() const;
};
}
#endif /* JOURNAL_H_ */
