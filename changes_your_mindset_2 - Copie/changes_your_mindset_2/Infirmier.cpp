#include "Infirmier.h"
#include <iostream>
#include <iomanip>
#include "Const.h"

Infirmier::Infirmier()
{
}

Infirmier::Infirmier(const std::string & nom, const std::string & prenom, unsigned int nbChambre): nom_(nom), prenom_(prenom), nbChambre_(nbChambre)
{
}


Infirmier::~Infirmier()
{
}

std::string Infirmier::obtenirNom() const
{
	return nom_;
}

std::string Infirmier::obtenirNomComplet()const // georges ajout
{
	return prenom_, " ", nom_;

}

std::string Infirmier::obtenirPrenom() const
{
	return prenom_;
}

unsigned int Infirmier::obtenirNbChambre() const
{
	return nbChambre_;
}

void Infirmier::modifierNom(const std::string & nom)
{
	nom_ = nom;
}

void Infirmier::modifierPrenom(const std::string & prenom)
{
	prenom_ = prenom;
}

void Infirmier::modifierNbChambre(unsigned int nbChambre)
{
	nbChambre_ = nbChambre;
}

 std::ostream& operator<<(std::ostream & out, const Infirmier& infirmier) //   georges  ajt
{
	 cout << "| " << infirmier.obtenirNomComplet() << AFFICHER_ESPACE(espace_nom - infirmier.obtenirNom().size());
	std::cout << " | " << AFFICHER_ESPACE(espace_chambre - std::to_string(infirmier.nbChambre_).size()/2);
	std::cout << infirmier.nbChambre_ << AFFICHER_ESPACE(espace_chambre);
	std::cout << "|" << std::endl;
	return out;
 }

 bool Infirmier:: operator==(Infirmier& f1)       // aj
 {
	 Infirmier f2;
	 if (f2.obtenirNomComplet() == f1.obtenirNomComplet())
		 return  true;
 }

 bool Infirmier:: operator==(const string & nomComplet) const  // aj
 {
	 Infirmier f1;
	 if (f1.obtenirNomComplet() == nomComplet)
		 return true;
 }

 /*bool Infirmier::operator==(const string & chaine) const
 {
	 Infirmier f1;
	 if (chaine == f1.obtenirNomComplet())
		 return true;
 }
 

 friend bool Infirmier:: operator==(const string & chaine) const
 {
		 Infirmier f1;
		 if (chaine == f1.obtenirNomComplet)
			 return true;
 }*/

void Infirmier::information() const // A MODIFIER... (si necessaire) georges ajout 
{
	cout << *this;
	

}









