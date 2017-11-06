
#ifndef SPECIALITE_H
#define SPECIALITE_H

#include <string>
#include <iostream>

using namespace std;

class Specialite
{
public:
	Specialite();

	Specialite(const std::string& domaine, unsigned int niveau);

	std::string obtenirDomaine() const;
	unsigned int obtenirNiveau() const;

	void modifierDomaine(const std::string& domaine);
	void modifierNiveau(unsigned int niveau);

	void information() const; // A MODIFIER... (si necessaire) 
	friend std::ostream & operator<<(std::ostream & out, const Specialite& s);
	// _________TP2___________
private:
	std::string domaine_;
	unsigned int niveau_;
};

#endif



