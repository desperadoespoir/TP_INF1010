#include "Echiquier.h"


Echiquier::Echiquier()
{

	unsigned int capaciteTableauPion_ = 20;
	unsigned int capaciteTableauTour_ = 20;
	
	tableauTours_ = new Tour[capaciteTableauTour_];	 
	tableauPions_ = new Pion[capaciteTableauPion_];
	compteurPion_ = 0;
	compteurTour_ = 0;
	  
	  
}



Echiquier::~Echiquier() 
{
	delete[]tableauPions_;
	delete[]tableauTours_;
}

void Echiquier ::ajouterRoi(const Roi &unRoi, int position)
{
	rois_[position] = unRoi;

}
void Echiquier::ajouterTour(const Tour& uneTour) 
{
	
	tableauTours_[compteurTour_++] = uneTour;

}
void Echiquier::ajouterPion(const Pion& unPion) 
{
	tableauPions_[compteurPion_++] = unPion;

}

void Echiquier::enleverTour(const string id) 
{
	Tour* t = new Tour[compteurTour_ - 1];
	for (int i = 0; i < compteurTour_; i++)
	{
		if (tableauTours_[i].obtenirId() == id) 
		{
			for (int j = i; j < compteurTour_; j++)
			{
				tableauTours_[j] = tableauTours_[j + 1];
			}

			for (int a = 0; a < (compteurTour_ - 1); a++)
			{
				t[a] = tableauTours_[a];

			}
			delete[] tableauTours_;
			tableauTours_ = t;
		}
	}
}
void Echiquier::enleverPion(const string id) // probleme ici si je mets Pion* p = new Pion[capaciteTableauPion_];## compilateur bloque, mais ca marche pour Tour.
{
	Pion* p = new Pion[compteurPion_];
	for (unsigned int i = 0; i < compteurPion_; i++)
	{
		if (tableauPions_[i].obtenirId() == id)
		{
			for (unsigned int j = i; j <  compteurPion_; j++)
			{
				tableauPions_[j] = tableauPions_[j + 1];
			}

			for (unsigned int a = 0; a < (compteurPion_ - 1); a++)
			{
				p[a] = tableauPions_[a];

			}
			delete[] tableauPions_;
			tableauPions_ = p;
			cout << "pion enleve  avec succes" << endl;
		}
	}
}

void Echiquier::deplacerPiece(string id, int toX, int toY) 
{
	for (int i = 0; i < compteurPion_; i++) 
	{
		if (tableauPions_[i].obtenirId() == id)
			tableauPions_[i].deplacer(toX, toY);
	
	}

	for (int i = 0; i < compteurTour_; i++)
	{
		if (tableauTours_[i].obtenirId() == id)
			tableauTours_[i].deplacer(toX, toY);
	}

	for (int i = 0; i < 2; i++)
	{
		if (rois_[i].obtenirId() == id)
			rois_[i].deplacer(toX, toY);
	}

}

