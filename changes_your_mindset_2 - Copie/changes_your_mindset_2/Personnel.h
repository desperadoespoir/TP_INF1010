#ifndef PERSONNEL_H
#define PERSONNEL_H

#include <string>
#include <vector>
#include "Medecin.h"
#include "Infirmier.h"

using namespace std;

class Personnel
{
public:
	// Constructeur par defaut
	Personnel();

	// Destructeur
	~Personnel();
	
	// Methodes publiques
	bool ajouterMedecin(Medecin* medecin);
	bool retirerMedecin(const std::string& nom);
	bool ajouterInfirmier(Infirmier* infirmier);
	bool retirerInfirmier(const std::string& nom);

	Personnel& operator+=(Medecin* medecin);
	Personnel& operator-=(Medecin* medecin);
	Personnel& operator+=(Infirmier* infirmier);
	Personnel& operator-=(Infirmier* infirmier);
		
	void information() const; // A MODIFIER... (si necessaire)
	friend std:: ostream& operator<<(std:: ostream& out, Personnel& personnel);
	// _________TP2______________


	void afficherInfirmiers() const; // A MODIFIER... (si necessaire)
	void afficherMedecins() const; // A MODIFIER... (si necessaire)

private:
	vector <Medecin*>  medecins_;
	vector <Infirmier*> infirmiers_;
	// vrai

	
	// _________TP2___________
};

#endif