#include "Medecin.h"
#include <iostream>
#include <iomanip>
#include "Const.h"
using namespace std;
Medecin::Medecin() : nom_(""), horaires_(0), specialite_(nullptr)  /*, horaires_(0)*/
{
}

Medecin::Medecin(const string& nom, int horaires, Specialite* specialite) : nom_(nom), horaires_(horaires), specialite_(specialite)
{
}



Medecin::~Medecin() // A MODIFIER... (si necessaire)
{
	
}


 Medecin::Medecin(const Medecin& m) : nom_(m.obtenirNom()), horaires_(m.obtenirHoraires()), specialite_(m.specialite_)
{
}

string Medecin::obtenirNom() const
{
	return nom_;
}

int Medecin::obtenirHoraires() const
{
	return horaires_;
}

  Specialite Medecin::obtenirSpecialite() const
{
	return  *specialite_;
}

void Medecin::modifierNom(const string& nom)
{
	nom_ = nom;
}

void Medecin::modifierHoraires(int horaires)
{
	horaires_ = horaires;
}

void Medecin::modifierSpecialite(Specialite* specialite)
{
	specialite_ = specialite;
}


Medecin&  Medecin:: operator=(const Medecin & m)    // aj 
{
	if(this != &m) {
		delete specialite_;
		specialite_ = new Specialite(*(m.specialite_));
		nom_ = m.nom_;
		horaires_ = m.horaires_;
	}
	return *this;
}





std::ostream& operator<<(std::ostream& out, const Medecin& medecin) // georges ajout

{

	std::cout << "| " << medecin.nom_ << AFFICHER_ESPACE(espace_nom - medecin.nom_.size());
	std::cout << " | " << AFFICHER_ESPACE(espace_horaires - std::to_string(medecin.horaires_).size()) << medecin.horaires_;
	std::cout << AFFICHER_ESPACE(espace_horaires)
	<<medecin.obtenirSpecialite();
	std::cout << endl;

	return out;

}

bool Medecin::operator==(const Medecin& medecin)  const // aj
    
{

	if (nom_ == medecin.nom_)
		return true;
	return false;
}


bool Medecin :: operator==(const string & nom) const   //   aj

{

	if (nom_ == nom)
		return  true;
	return false;
	

}

 bool operator==( string & friendNom , Medecin& m)
{
	if (friendNom == m.nom_)
		return  true;
	return false;

}
	



void Medecin::information() const
{
	cout << *this;
	
	//std::cout << "| " << nom_ << AFFICHER_ESPACE(espace_nom - nom_.size());
	//std::cout << " | " << AFFICHER_ESPACE(espace_horaires - std::to_string(horaires_).size()) << horaires_;
	//std::cout << AFFICHER_ESPACE(espace_horaires);
	//std::cout << specialite_;
	//std::cout << endl;

}