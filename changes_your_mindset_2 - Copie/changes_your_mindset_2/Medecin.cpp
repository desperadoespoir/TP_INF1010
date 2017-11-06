#include "Medecin.h"
#include <iostream>
#include <iomanip>
#include "Const.h"

Medecin::Medecin()  /*, horaires_(0)*/
{
	nom_ = "";
	horaires_ = 0;
	specialite_ = nullptr;
}

Medecin::Medecin(const string& nom, int horaires, Specialite* specialite)  
{
	nom_ = nom;
	horaires_ = horaires;
	//specialite_ = nullptr;
	specialite_ = /*new Specialite*/ specialite;

}



Medecin::~Medecin() // A MODIFIER... (si necessaire)
{
	
}


 Medecin::Medecin(const Medecin& m)

{

	// Medecin k;
	  

	nom_ = m.obtenirNom();
	horaires_ = m.obtenirHoraires();
	specialite_ = m.specialite_;

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


void  Medecin:: operator=(Medecin & m)    // aj 
{
	//*this.obtenirSpecialite() = nullptr;



	nom_ = m.obtenirNom();
	horaires_ = m.obtenirHoraires();
	specialite_ = m.specialite_;


}





std::ostream& operator<<(std::ostream& out, const Medecin& medecin) // georges ajout

{

	std::cout << "| " << medecin.nom_ << AFFICHER_ESPACE(espace_nom - medecin.nom_.size());
	std::cout << " | " << AFFICHER_ESPACE(espace_horaires - std::to_string(medecin.horaires_).size()) << medecin.horaires_;
	std::cout << AFFICHER_ESPACE(espace_horaires);
	medecin.obtenirSpecialite();
	std::cout << endl;

	return out;

}

bool Medecin::operator==(const Medecin& medecin)   // aj
    
{

	if (nom_ == medecin.nom_)
		return true;

}


bool Medecin :: operator==(const string & nom)    //   aj

{

	if (nom_ == nom)
		return  true;

	else
		return false;
	

}

 bool operator==( string & friendNom , Medecin& m)
{
	if (friendNom == m.nom_)
		return  true;

	else
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