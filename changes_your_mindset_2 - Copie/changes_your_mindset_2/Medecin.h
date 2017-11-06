#ifndef MEDECIN_H
#define MEDECIN_H

#include <string>
#include "Specialite.h"

using namespace std;

class Medecin 
{
public:
	// Constructeurs par parametre
	Medecin(); // A MODIFIER... (si necessaire)
	Medecin(const string & nom, int horaires, Specialite* specialite); // A MODIFIER... (si necessaire)
	
	Medecin(const Medecin& m); //aj

	// Destructeur
	~Medecin(); // A MODIFIER... (si necessaire)
	
	
	// Methodes d'acces
	string obtenirNom() const;
	int obtenirHoraires() const;
	Specialite obtenirSpecialite() const ;
	
	// Methodes de modification
	void modifierNom(const string& nom);
	void modifierHoraires(int horaires);
	void modifierSpecialite(Specialite* specialite);
	
	
	
	
	friend std::ostream& operator<<(std::ostream& out, const Medecin& infirmier); // georges ajout
	void operator=(Medecin & m);  //aj
	bool operator==(const Medecin & medecin);   // aj
	bool operator==(const string & nom);  // aj
	friend bool operator==( string & friendNom, Medecin& m);
	void information() const; // A MODIFIER... (si necessaire)


private:
	// Variables privees
	string nom_;
	int horaires_;
	Specialite* specialite_;
	
};

#endif