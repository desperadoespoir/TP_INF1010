#include"Hopital.h"

Hopital::Hopital(string nom, Personnel* personnel) 
{
	nom_ = nom;
	personnel_ = nullptr;
	personnel_= new Personnel;
}
string Hopital::obtenirNom() const 
{
	return nom_;

}
void Hopital::modifierNom(string nom)
{
	nom_ = nom ;

}

Personnel Hopital::obtenirPersonnel()
{
	return *personnel_;

}

void Hopital::modifierPersonnel(Personnel* personnel) {

	personnel_ = personnel;
}




std::ostream& operator<<(std::ostream& out, const Hopital & hopital)
{

	cout << "hopital" << hopital.obtenirNom() << endl;
	 cout<< hopital.personnel_;
	
	return out ;


 }
