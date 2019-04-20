/**
 * \file validationFormat.h
 * \brief Appel des fonctions de validation format
 * \date 2019-02-28
 * \author Guillaume St-Georges
 */

#ifndef VALIDATIONFORMAT_H_
#define VALIDATIONFORMAT_H_

#include <iostream>

namespace util{
bool validerFormatNom (const std::string& p_nom);
bool validerCodeIssn (const std::string& p_issn);
bool validerCodeIsbn (const std::string& p_isbn);
}
#endif /* VALIDATIONFORMAT_H_ */
