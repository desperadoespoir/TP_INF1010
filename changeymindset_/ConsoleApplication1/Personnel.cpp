/**********************************************
 * Titre: Travail pratique #1 - Personnel.cpp
 * Date: 10 janvier 2017
 * Auteur:
 *********************************************/



#include "Medecin.h"
#include "Infirmier.h"
#include "Personnel.h"
#include "Specialite.h"
#include <iostream>
Personnel::Personnel()
{
// A completer

	tableauMedecins_ = nullptr;
	tableauInfirmiers_ = nullptr;
	tableauMedecins_ = new Medecin[capaciteTableauMedecins_];
	tableauInfirmiers_ = new Infirmier[capaciteTableauInfirmiers_];


		 compteurMedecin_ = 0;
		 compteurInfirmier_ = 0;

		capaciteTableauMedecins_ = 3;
		capaciteTableauInfirmiers_ = 3;
}

Personnel::~Personnel()
{
// A completer
	
	delete[] tableauMedecins_;
	delete[] tableauInfirmiers_;
	tableauMedecins_ = nullptr;
	tableauInfirmiers_ = nullptr;
}

void Personnel::ajouterMedecin(Medecin& unMedecin)
{
// A completer 
	tableauMedecins_ = nullptr;
	tableauMedecins_ = new Medecin[capaciteTableauMedecins_];
	if (compteurMedecin_ < capaciteTableauMedecins_) {
		tableauMedecins_[compteurMedecin_++] = unMedecin;
	}

	else {
		capaciteTableauMedecins_ = capaciteTableauMedecins_ * 2;
		tableauMedecins_[compteurMedecin_++] = unMedecin;

	}
}

void Personnel::ajouterInfirmier(Infirmier& unInfirmier)
{
// A completer

	tableauInfirmiers_ = nullptr;

	tableauInfirmiers_ = new Infirmier[capaciteTableauInfirmiers_];

	if (compteurInfirmier_ < capaciteTableauInfirmiers_) {

		tableauInfirmiers_[compteurInfirmier_++] = unInfirmier;
	}

	else {
		capaciteTableauInfirmiers_ = capaciteTableauInfirmiers_ * 3;
		tableauInfirmiers_[compteurInfirmier_++] = unInfirmier;

	}
}

void Personnel::afficherMedecins()
{  
	int a = 12;
	for (unsigned int i = 0; i<compteurMedecin_; i++) {
	//	cout << tableauMedecins_[i].obtenirNom() << setw(sizeof(tableauMedecins_[i].obtenirNom())+( sizeof(tableauMedecins_[i].obtenirNom())-a)*-1) << tableauMedecins_[i].obtenirHoraires() << setw(sizeof(tableauMedecins_[i].obtenirHoraires()) + (sizeof(tableauMedecins_[i].obtenirHoraires()) - a)*-1) << tableauMedecins_[i].obtenirSpecialite().getDomaine() << setw(sizeof(tableauMedecins_[i].obtenirSpecialite()) + (sizeof(tableauMedecins_[i].obtenirSpecialite()) - a)*-1) << tableauMedecins_[i].obtenirSpecialite().getNiveau() << endl;
		cout << tableauMedecins_[i].obtenirNom() << setw(25) << tableauMedecins_[i].obtenirHoraires() << setw(34) << tableauMedecins_[i].obtenirSpecialite().getDomaine() << setw(40) << tableauMedecins_[i].obtenirSpecialite().getNiveau() << endl;

		cout << endl;
	}




// A completer
}

void Personnel::afficherInfirmiers()
{


	int a = 10;
	unsigned int i = 0;
	while ( i <compteurInfirmier_ ) {
 
	//cout << tableauInfirmiers_[i].getNom() << setw(sizeof(tableauInfirmiers_[i].getNom()) + (sizeof(tableauInfirmiers_[i].getNom()) - a)*-1) << tableauInfirmiers_[i].getPrenom() << setw(sizeof(tableauInfirmiers_[i].getPrenom()) + (sizeof(tableauInfirmiers_[i].getPrenom()) - a)*-1) << tableauInfirmiers_[i].getNbreChambres() << endl;
		cout << tableauInfirmiers_[i].getNom() << setw(25) << tableauInfirmiers_[i].getPrenom() << setw(30) << tableauInfirmiers_[i].getNbreChambres() << endl;

		i++;
		cout << endl;
	}



	
}


