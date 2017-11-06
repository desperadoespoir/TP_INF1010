

#ifndef HOPITAL_H
#define HOPITAL_H

#include "Medecin.h"
#include "Infirmier.h"
#include "Personnel.h"
#include <iostream>
#include <iomanip>
#include "Const.h"

using namespace std;

class Hopital {

public:
	Hopital();
	Hopital(string nom, Personnel* personnel);
	~Hopital();
	string  obtenirNom() const;
	void  modifierNom(string nom);
	Personnel obtenirPersonnel() const;
	friend ostream& operator<<(std::ostream& out, const Hopital& hopital);
	void  modifierPersonnel(Personnel*personnel);


private:
  string nom_;
  Personnel * personnel_;




};
#endif