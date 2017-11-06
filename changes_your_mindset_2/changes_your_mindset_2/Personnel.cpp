#include "Medecin.h"
#include "Infirmier.h"
#include "Personnel.h"
#include <iostream>
#include <iomanip>
#include "Const.h"

using namespace std;
Personnel::Personnel() 
{
	

	
	


};

Personnel::~Personnel() {
	
	for (unsigned int i = 0; i < medecins_.size(); i++)
	  delete medecins_[i];

	for (unsigned int j = 0; j < infirmiers_.size(); j++)
		delete infirmiers_[j];
};
	
bool Personnel::ajouterMedecin( Medecin* medecin )  
{
	// A MODIFIER...
	for (unsigned int i = 0; i < medecins_.size(); i++)
	{
		if ((*medecin)==(*medecins_[i]))
		{
			cout << "impossible d'ajouter ce medecin" << endl;
			return false;
		}

	}
		cout << (*medecin).obtenirNom() << "a ete ajouté avec success" << endl;
		medecins_.push_back(medecin);

		return true;
}

bool Personnel::retirerMedecin(const std::string& nom)
{
	// A MODIFIER...

	for (unsigned int i = 0; i < medecins_.size(); i++)
	{
		if ((*medecins_[i]) == nom)
		{
			medecins_[i] = medecins_[medecins_.size() - 1];

			

			medecins_.pop_back();

			return true;
		}


	}
	cout << "impossible de retirer  ce medecin" << endl;

	return false;

}


bool Personnel::ajouterInfirmier(Infirmier*infirmier)
{	// A modifier
		for (unsigned int i= 0; i< infirmiers_.size(); i++)
		{
			if ((*infirmiers_[i])==(*infirmier))
			{
				cout << "impossible d'ajouter cet infirmier" << endl;
				return false;
			}

		}
			infirmiers_.push_back(infirmier);
			cout << infirmier->obtenirNom() << "a ete ajouté avec success" << endl;
			return true;
}



bool Personnel::retirerInfirmier(const std::string& nomComplet)
	{
		// A modifier

		for (unsigned int i = 0; i < infirmiers_.size(); i++)
		{
			if ((*infirmiers_[i]).operator==(nomComplet) == true)

			{

				infirmiers_[i] = infirmiers_[infirmiers_.size()];


				infirmiers_.pop_back();


				return true;

			}


		}
		cout << "impossible de retirer  cet infirmier" << endl;

		return false;

}
	
	





	void Personnel::information() const // A MODIFIER...
	{
		(*this).afficherMedecins();
		(*this).afficherInfirmiers();
	}




Personnel& Personnel::operator+=(Medecin* medecin)
	{
		(*this).ajouterMedecin(medecin);
		return *this;
	}




Personnel& Personnel:: operator-=(Medecin* medecin)
	{
		(*this).retirerMedecin(medecin->obtenirNom());
		return *this;
	}
	

	
Personnel& Personnel :: operator+=(Infirmier* infirmier) 

{
	(*this).ajouterInfirmier(infirmier);
	return *this;

}


Personnel& Personnel :: operator-=(Infirmier* infirmier) 
{
	(*this).retirerInfirmier(infirmier->obtenirNom());
	return *this;
}

std:: ostream& operator<<(std:: ostream& out, Personnel& personnel)

{
	personnel.afficherMedecins();

	personnel.afficherInfirmiers();
	 return out;
}

void Personnel::afficherMedecins() const // A MODIFIER... (si necessaire)
{
	string tabMed = "Tableau Medecins";
	string nom = "Nom";
	string horaires = "Horaires";
	string domaine = "Domaine Specialite";
	string niveau = "Niveau Specialite";

	std::cout << AFFICHER_ESPACE(espacement_medecin / 2) << tabMed 
		<< AFFICHER_ESPACE(espacement_medecin / 2) << endl;

	std::cout << AFFICHER_LINE(espacement_medecin + tabMed.size()) << endl;

	std::cout << "| " << nom << AFFICHER_ESPACE(espace_nom - nom.size()) 
		<< " | " << horaires << AFFICHER_ESPACE(2*espace_horaires - horaires.size())
		<< " | " << domaine << AFFICHER_ESPACE(espace_domaine - domaine.size()) 
		<< " | " << AFFICHER_ESPACE(espace_niveau - niveau.size() / 2) << niveau
		<< AFFICHER_ESPACE(espace_niveau - niveau.size() / 2)
		<< "| " << endl;
		
	std::cout << AFFICHER_LINE(espacement_medecin + tabMed.size()) << endl;
		for (size_t i = 0; i <medecins_.size(); i++)
	{	
	 medecins_[i]->information();
		std::cout << endl;
	}
	std::cout << AFFICHER_LINE(espacement_medecin + tabMed.size()) << endl;
	std::cout << AFFICHER_ESPACE(espacement_medecin + tabMed.size()) << endl;
}

void Personnel::afficherInfirmiers() const // A MODIFIER... (si necessaire)
{
	string tabInf = "Tableau Infimiers";
	string nomComplet = "Nom Complet";
	string nbChambre = "Nombre de Chambre";
	std::cout << AFFICHER_ESPACE(espacement_infirmier/2) << tabInf 
		<< AFFICHER_ESPACE(espacement_infirmier/2) << endl;
	std::cout << AFFICHER_LINE(espacement_infirmier + tabInf.size()) << endl;
	
	std::cout << "| " << nomComplet << AFFICHER_ESPACE(espace_nom - nomComplet.size())
		 << " | " << nbChambre << AFFICHER_ESPACE(2 * espace_chambre - nbChambre.size())
		 << " | " << endl;
	std::cout << AFFICHER_LINE(espacement_infirmier + tabInf.size()) << endl;

	for (size_t i = 0; i < infirmiers_.size(); i++)
	{
		infirmiers_[i]->information();
		std::cout << endl;
	}

	std::cout << AFFICHER_LINE(espacement_infirmier + tabInf.size());
}