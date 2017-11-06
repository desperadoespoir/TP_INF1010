
#include"Hopital.h"

Hopital::Hopital() : nom_(""), personnel_(nullptr)
{
}

Hopital::Hopital(string nom, Personnel* personnel) : nom_(nom), personnel_(new Personnel)
{
}
Hopital::~Hopital()
{
}
string Hopital::obtenirNom() const 
{
	return nom_;

}
void Hopital::modifierNom(string nom)
{
	nom_ = nom ;

}

Personnel Hopital::obtenirPersonnel() const
{
	return *personnel_;

}

void Hopital::modifierPersonnel(Personnel* personnel) {

	personnel_ = personnel;
}




std::ostream& operator<<(std::ostream& out, const Hopital & hopital)
{

	cout << "==========================hopital"<< hopital.obtenirNom() << "==========="<<endl;
	 //hopital.obtenirPersonnel().afficherMedecins();
	//hopital.personnel_->information();
	return out ;


 }
