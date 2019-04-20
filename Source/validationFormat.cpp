/**
 * \file validationFormat.cpp
 * \brief Utilisation des fonctions de validationFormat dans la classe Reference
 * \date 2019-02-28
 * \author Guillaume St-Georges
 */


#include "validationFormat.h"
#include <string>
#include <cctype>
#include <stdexcept>


using namespace std;


namespace util{
/**
 *
 * \param p_nom Nom d'un nom
 * \return True/False La validité du format du nom
 */
	bool validerFormatNom(const std::string& p_nom) {
		if (p_nom.length() < 1) {
			return false;
		}
		for (unsigned int i = 0; i < p_nom.length(); i++) {
			if (!isalpha(p_nom[i]) && (isspace(p_nom[i]) == true || isdigit(p_nom[i])== true)){
				return false;
			}
		}
		return true;
		}

/**
 *
 * \param[in] p_issn Le code ISSN
 * \return True/False La validité du code ISSN
 */
	bool validerCodeIssn (const std::string& p_issn){

		if (p_issn.length() == 14){
			if (p_issn[0] == 'I' && p_issn[1] == 'S' && p_issn[2] == 'S' && p_issn[3] == 'N' && p_issn[4] == ' ' && p_issn[9] == '-'){
				string a;
				for(unsigned int i = 0; i < p_issn.length(); i++){
					if (isdigit(p_issn[i]) == true || isalpha(p_issn[13]) == 'X'){
						a += p_issn[i];
					}
				}
				int valeur[] = {8, 7, 6, 5, 4, 3, 2};
				int somme = 0;
				int b;
				int c;
				for(unsigned int i = 0; i < 7; i++){
					somme += valeur[i] * (int)(a[i] - 48);
				}
				b = somme % 11;
				c = 11 - b;
				if(c == (int)(p_issn[13]-48)){
					return true;
				}
				if (p_issn[13] == 'X' && c == 10){
					return true;
				}
				else{
					return false;
				}
			}
		}
	}
/**
 *
 * \param[in] p_isbn
 * \return True/False La validité du code ISBN
 */
	bool validerCodeIsbn (const std::string& p_isbn){
		if(p_isbn[0] == 'I' && p_isbn[1] == 'S' && p_isbn[2] == 'B' && p_isbn[3] == 'N' && p_isbn[4] == ' '){
			if(p_isbn.length() == 18){
				string bon;
				for(unsigned int i = 0; i < p_isbn.length(); i++){
					if (isdigit(p_isbn[i]) == true){
						bon += p_isbn[i];
						}
					}
					int valeur[] = {10, 9, 8, 7, 6, 5, 4, 3, 2};
					int somme = 0;
					int b;
					int c;
					for(unsigned int i = 0; i < 9; i++){
						somme += valeur[i] * (int)(bon[i] - 48);
					}
					b = somme % 11;
					c = 11 - b;
					if(c == (int)(p_isbn[17]-48)){
						return true;
					}
					else if (p_isbn[17] == 'X' && c == 10){
						return true;
					}
					else{
						return false;
					}

				}
			else if(p_isbn.length() == 22){
				if(p_isbn[8] == '-'){
				string chiffre;
				for(unsigned int i = 0; i < p_isbn.length(); i++){
					if (isdigit(p_isbn[i]) == true){
						chiffre += p_isbn[i];
						}
					}
					int value[] = {1, 3, 1, 3, 1, 3, 1, 3, 1, 3, 1, 3};
					int resultat = 0;
					int b;
					int c;
					for(unsigned int i = 0; i < 12; i++){
						resultat += value[i] * (int)(chiffre[i] - 48);
					}
					b = resultat % 10;
					c = 10 - b;
					if(c == (int)(p_isbn[21]-48)){
						return true;
					}
					else{
						return false;
					}
				}else{
					return false;
				}
			}
		}
	}
}

