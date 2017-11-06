#include "Medecin.h"
#include "Infirmier.h"
#include "Personnel.h"
#include <iostream>
#include <iomanip>
#include "Const.h"

using namespace std;

class Hopital {

public:
	Hopital(string nom, Personnel* personnel);
	string  obtenirNom() const;
	void  modifierNom(string nom);
	Personnel obtenirPersonnel();
	friend std::ostream& operator<<(std::ostream& out, const Hopital& hopital);
	void  modifierPersonnel(Personnel*personnel);
private:
  string nom_;
  Personnel * personnel_;




};