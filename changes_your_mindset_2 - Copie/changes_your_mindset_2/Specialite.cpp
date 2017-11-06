#include "Specialite.h"
#include <iostream>
#include <iomanip>
#include "Const.h"

Specialite::Specialite()
{
}

Specialite::Specialite(const string & domaine, unsigned int niveau): domaine_(domaine), niveau_(niveau)
{
}

std::string Specialite::obtenirDomaine() const
{
	return domaine_;
}

unsigned int Specialite::obtenirNiveau() const
{
	return niveau_;
}

void Specialite::modifierDomaine(const string & domaine)
{
	domaine_ = domaine;
}

void Specialite::modifierNiveau(unsigned int niveau)
{
	niveau_ = niveau;
}





std::ostream & operator<<(std::ostream & out, const Specialite & s)
{
	//return out << specialite.obtenirDomaine()<<"     " << specialite.obtenirNiveau() << endl;
	//return out << m.obtenirSpecialite().obtenirDomaine() << "     " << m.obtenirSpecialite().obtenirNiveau() << endl;

	return out << " | " << s.obtenirDomaine() << AFFICHER_ESPACE(espace_domaine - s.obtenirDomaine().size())
	 << " | " << AFFICHER_ESPACE(espace_niveau - std::to_string(s.obtenirNiveau()).size()) << s.obtenirNiveau()

	<< AFFICHER_ESPACE(espace_niveau) << " | "<<endl;
	
}



void Specialite::information()   // A MODIFIER... (si necessaire)  //			aj
{

	cout << *this;
}
	/*cout << " | " << m.obtenirSpecialite().obtenirDomaine() << AFFICHER_ESPACE(espace_domaine - specialite.domaine_.size());
	cout << " | " << AFFICHER_ESPACE(espace_niveau - std::to_string(specialite.niveau_).size()) << specialite.niveau_;

	cout << AFFICHER_ESPACE(espace_niveau) << " | ";
}*/


/*{
	cout << " | " << m.obtenirSpecialite().obtenirDomaine() << AFFICHER_ESPACE(espace_domaine -m.obtenirSpecialite().obtenirDomaine().size());
	cout << " | " << AFFICHER_ESPACE(espace_niveau - std::to_string(m.obtenirSpecialite().obtenirNiveau()).size()) << m.obtenirSpecialite().obtenirNiveau();

	cout << AFFICHER_ESPACE(espace_niveau) << " | ";*/

	

