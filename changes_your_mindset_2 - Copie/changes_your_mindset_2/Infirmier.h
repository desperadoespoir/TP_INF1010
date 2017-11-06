#ifndef INFIRMIER_H
#define INFIRMIER_H

#include <string>
#include <iostream>
using namespace std;
class Infirmier
{
public:
	Infirmier(); // A MODIFIER... (si necessaire)
	Infirmier(const std::string& nom, const std::string& prenom, unsigned int nbChambre); // A MODIFIER... (si necessaire)
	~Infirmier(); // A MODIFIER... (si necessaire)

	std::string obtenirNom() const; 
	std::string obtenirPrenom() const;
	unsigned int obtenirNbChambre() const;

	std::string obtenirNomComplet() const; // georges ajout.

	void modifierNom(const std::string& nom);
	void modifierPrenom(const std::string& prenom);
	void modifierNbChambre(unsigned int nbChambre);
	friend std::ostream& operator<<(std::ostream& out, const Infirmier& infirmier); // georges ajout

	void information() const; // A MODIFIER... (si necessaire)  georges aout

  bool operator== (Infirmier& f1); //aj
  bool  operator== (const string & nomComplet) const;   // aj
   //friend  bool  operator== (const string & chaine) const;  // aj
  


private:	
	std::string nom_;
	std::string prenom_;
	unsigned int nbChambre_;


};

#endif
