/**
 * gestionBibliographie.cpp
 *
 *  Created on: 2019-04-10
 *      Author: Guillaume St-Georges
 */

#include <string>
#include "Reference.h"
#include "Ouvrage.h"
#include "Journal.h"
#include "Bibliographie.h"
#include <sstream>
#include <iostream>
using namespace std;
using namespace util;
using namespace biblio;

int main(){

	string auteurs;
	string titre;
	string identifiant;
	string anneeString;
	string reponse;
	string modification;
	string ville;
	string editeur;
	int annee;
	char buffer[255];
	Bibliographie bibliographie("bibliographie");
	cout << "Bienvenue dans l'outil de gestion de references bibliographiques" << endl;
	cout << "================================================================" << endl;
	cout << "-------------------------------------------------------" << endl;
	cout << "Ajoutez un ouvrage" << endl;
	cout << "-------------------------------------------------------" << endl;
	do{
		cout << "Entrez le nom du ou des auteurs : " << endl;
		cin.getline(buffer, 255);
		auteurs = buffer;
	}while(!util::validerFormatNom(auteurs) || auteurs[0] == ' ');
	do{
		cout << "Rentrez le titre de l'oeuvre: " << endl;
		cin.getline(buffer, 255);
		titre = buffer;
	}while(titre.empty());
	do{
		cout << "Entrez la ville d’édition:" << endl;
		cin.getline(buffer, 255);
		ville = buffer;
	}while(!util::validerFormatNom(ville));

	do{
		cout << "Entrez l'éditeur :" << endl;
		cin.getline(buffer, 255);
		editeur = buffer;
		}while(!util::validerFormatNom(editeur));

	do{
		annee = 0;
		bool validationAnnee = true;
		cout<<"Rentrez l'année d'édition: "<< endl;
	    cin.getline(buffer, 255);
	    anneeString = buffer;
		for (unsigned int i = 0; i < anneeString.length(); i++){
			if (!isdigit(anneeString[i])){
				validationAnnee = false;
			}
			else{
				validationAnnee = true;
			}
		}
		if (validationAnnee == true){
			istringstream(anneeString) >> annee;
		}
	}while(annee <= 0);
	do{
		cout << "Rentrez le code ISBN de la référence: " << endl;
		cin.getline(buffer, 255);
		identifiant = buffer;
	}while(!util::validerCodeIsbn(identifiant));
	Ouvrage ouvrage(auteurs, titre, editeur, ville, annee, identifiant);
	bibliographie.ajouterReference(ouvrage);

	cout << endl;
	cout << "-------------------------------------------------------" << endl;
	cout << "Ajoutez un ouvrage" << endl;
	cout << "-------------------------------------------------------" << endl;
	string auteurs1;
	string titre1;
	string ville1;
	string editeur1;
	string identifiant1;
	string anneeString1;
	int annee1;
	do{
		cout << "Entrez le nom du ou des auteurs : " << endl;
		cin.getline(buffer, 255);
		auteurs1 = buffer;
	}while(!util::validerFormatNom(auteurs1) || auteurs1[0] == ' ');
	do{
		cout << "Rentrez le titre de l'oeuvre: " << endl;
		cin.getline(buffer, 255);
		titre1 = buffer;
	}while(titre1.empty());
	do{
		cout << "Entrez la ville d’édition:" << endl;
		cin.getline(buffer, 255);
		ville1 = buffer;
	}while(!util::validerFormatNom(ville1));

	do{
		cout << "Entrez l'éditeur :" << endl;
		cin.getline(buffer, 255);
		editeur1 = buffer;
		}while(!util::validerFormatNom(editeur1));

	do{
		annee1 = 0;
		bool validationAnnee = true;
		cout<<"Rentrez l'année d'édition: "<< endl;
		cin.getline(buffer, 255);
		anneeString1 = buffer;
		for (unsigned int i = 0; i < anneeString1.length(); i++){
			if (!isdigit(anneeString1[i])){
				validationAnnee = false;
			}
			else{
				validationAnnee = true;
			}
		}
		if (validationAnnee == true){
			istringstream(anneeString1) >> annee1;
		}
	}while(annee1 <= 0);
	do{
		cout << "Rentrez le code ISBN de la référence: " << endl;
		cin.getline(buffer, 255);
		identifiant1 = buffer;
	}while(!util::validerCodeIsbn(identifiant1));
	Ouvrage ouvrage_1(auteurs1, titre1, editeur1, ville1, annee1, identifiant1);
	bibliographie.ajouterReference(ouvrage_1);

		cout << endl;
		cout << "-------------------------------------------------------" << endl;
		cout << "Ajoutez une référence de type article de journal" << endl;
		cout << "-------------------------------------------------------" << endl;
		string auteurs2;
		string titre2;
		string nomRevue;
		string volumeString;
		string numeroString;
		string pageString;
		string annee2String;
		int volume;
		int numero;
		int page;
		int annee2;
		string identifiant2;
		do{
			cout << "Entrez le nom du ou des auteurs : " << endl;
			cin.getline(buffer, 255);
			auteurs2 = buffer;
		}while(!util::validerFormatNom(auteurs2) || auteurs2[0] == ' ');
		do{
			cout << "Rentrez le titre de l'oeuvre: " << endl;
			cin.getline(buffer, 255);
			titre2 = buffer;
		}while(titre2.empty());
		do{
			cout << "Entrez le nom de la revue dans laquelle a été publiée la référence :" << endl;
			cin.getline(buffer, 255);
			nomRevue = buffer;
		}while(nomRevue.empty());
		do{
			volume = 0;
			bool validationAnnee = true;
			cout<<"Entrez le volume : "<< endl;
			cin.getline(buffer, 255);
			volumeString = buffer;
			for (unsigned int i = 0; i < volumeString.length(); i++){
				if (!isdigit(volumeString[i])){
					validationAnnee = false;
				}
				else{
					validationAnnee = true;
				}
			}
			if (validationAnnee == true){
				istringstream(volumeString) >> volume;
			}
		}while(volume < 0);

		do{
			numero = 0;
			bool validationAnnee = true;
			cout<<"Entrez le numero : "<< endl;
			cin.getline(buffer, 255);
			numeroString = buffer;
			for (unsigned int i = 0; i < numeroString.length(); i++){
				if (!isdigit(numeroString[i])){
					validationAnnee = false;
				}
				else{
					validationAnnee = true;
				}
			}
			if (validationAnnee == true){
				istringstream(numeroString) >> numero;
			}
		}while(numero < 0);
		do{
			page = 0;
			bool validationAnnee = true;
			cout<<"Entrez la page ou commence la référence : "<< endl;
			cin.getline(buffer, 255);
			pageString = buffer;
			for (unsigned int i = 0; i < pageString.length(); i++){
				if (!isdigit(pageString[i])){
					validationAnnee = false;
				}
				else{
					validationAnnee = true;
				}
			}
			if (validationAnnee == true){
				istringstream(pageString) >> page;
			}
		}while(page < 0);
		do{
			annee2 = 0;
			bool validationAnnee = true;
			cout<<"Entrez l'année d'édition : "<< endl;
			cin.getline(buffer, 255);
			annee2String = buffer;
			for (unsigned int i = 0; i < annee2String.length(); i++){
				if (!isdigit(annee2String[i])){
					validationAnnee = false;
				}
				else{
					validationAnnee = true;
				}
			}
			if (validationAnnee == true){
				istringstream(annee2String) >> annee2;
			}
		}while(annee2 < 0);
		do{
			cout << "Rentrez le code ISSN de la référence: " << endl;
			cin.getline(buffer, 255);
			identifiant2 = buffer;
		}while(!util::validerCodeIssn(identifiant2));

		Journal journal(auteurs2, titre2, annee2, nomRevue, volume, numero, page, identifiant2);
		bibliographie.ajouterReference(journal);
		cout << endl;
		cout << "-------------------------------------------------------" << endl;
		cout << "Ajoutez une référence de type article de journal" << endl;
		cout << "-------------------------------------------------------" << endl;
		string auteurs3;
		string titre3;
		string nomRevue1;
		string volumeString1;
		string numeroString1;
		string pageString1;
		string annee3String;
		int volume1;
		int numero1;
		int page1;
		int annee3;
		string identifiant3;
		do{
			cout << "Entrez le nom du ou des auteurs : " << endl;
			cin.getline(buffer, 255);
			auteurs3 = buffer;
		}while(!util::validerFormatNom(auteurs3) || auteurs3[0] == ' ');
		do{
			cout << "Rentrez le titre de l'oeuvre: " << endl;
			cin.getline(buffer, 255);
			titre3 = buffer;
		}while(titre3.empty());
		do{
			cout << "Entrez le nom de la revue dans laquelle a été publiée la référence :" << endl;
			cin.getline(buffer, 255);
			nomRevue1 = buffer;
		}while(nomRevue1.empty());
		do{
			volume1 = 0;
			bool validationAnnee = true;
			cout<<"Entrez le volume : "<< endl;
			cin.getline(buffer, 255);
			volumeString1 = buffer;
			for (unsigned int i = 0; i < volumeString1.length(); i++){
				if (!isdigit(volumeString1[i])){
					validationAnnee = false;
				}
				else{
					validationAnnee = true;
				}
			}
			if (validationAnnee == true){
				istringstream(volumeString1) >> volume1;
			}
		}while(volume1 < 0);

		do{
			numero1 = 0;
			bool validationAnnee = true;
			cout<<"Entrez le numero : "<< endl;
			cin.getline(buffer, 255);
			numeroString1 = buffer;
			for (unsigned int i = 0; i < numeroString1.length(); i++){
				if (!isdigit(numeroString1[i])){
					validationAnnee = false;
				}
				else{
					validationAnnee = true;
				}
			}
			if (validationAnnee == true){
				istringstream(numeroString1) >> numero1;
			}
		}while(numero1 < 0);
		do{
			page1 = 0;
			bool validationAnnee = true;
			cout<<"Entrez la page ou commence la référence : "<< endl;
			cin.getline(buffer, 255);
			pageString1 = buffer;
			for (unsigned int i = 0; i < pageString1.length(); i++){
				if (!isdigit(pageString1[i])){
					validationAnnee = false;
				}
				else{
					validationAnnee = true;
				}
			}
			if (validationAnnee == true){
				istringstream(pageString1) >> page1;
			}
		}while(page1 < 0);
		do{
			annee3 = 0;
			bool validationAnnee = true;
			cout<<"Entrez l'année d'édition : "<< endl;
			cin.getline(buffer, 255);
			annee3String = buffer;
			for (unsigned int i = 0; i < annee3String.length(); i++){
				if (!isdigit(annee3String[i])){
					validationAnnee = false;
				}
				else{
					validationAnnee = true;
				}
			}
			if (validationAnnee == true){
				istringstream(annee3String) >> annee3;
			}
		}while(annee3 < 0);
		do{
			cout << "Rentrez le code ISSN de la référence: " << endl;
			cin.getline(buffer, 255);
			identifiant3 = buffer;
		}while(!util::validerCodeIssn(identifiant3));

		Journal journal1(auteurs3, titre3, annee3, nomRevue1, volume1, numero1, page1, identifiant3);
		bibliographie.ajouterReference(journal1);
		cout << "Références bibliographiques enregistrées :" << endl;
		cout << "Bibliographie" << endl;
		cout << "===============================" << endl;
		cout << bibliographie.reqBibliographieFormate() << endl;

	return 0;
}



