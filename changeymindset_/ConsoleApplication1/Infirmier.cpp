
#include"Infirmier.h"




Infirmier::Infirmier() {
	nom_ = "default";
	prenom_= "default";
	nbreChambres_ = 0;

}



Infirmier::Infirmier(string nom, string prenom, int nbreChambres) {

	nom_ = nom;
	prenom_ = prenom;
	nbreChambres_ = nbreChambres;

}

Infirmier::~Infirmier() {

}

 string Infirmier::getNom()const 
 
 {
	return nom_;
 }

 void Infirmier::setNom(string nom) {
	 nom_ = nom;
 }

 string Infirmier::getPrenom() const {

	 return prenom_;
 }

 void  Infirmier::setPrenom(string prenom) {
	 prenom_ = prenom;
	 
 }

 int Infirmier::getNbreChambres() const {
	 return nbreChambres_;
 }
 
 void Infirmier::setNbreChambres(int nbreChambres) {
	 nbreChambres_ = nbreChambres;

 }











