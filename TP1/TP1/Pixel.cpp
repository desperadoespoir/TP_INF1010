/**************************************************
* Titre: Travail pratique #1
* Date: Septembre 2017
* Auteur:
Gnaga Dogbeda Georges   1870143
Mehdi Haddoud  1851658
**************************************************/

#include "Pixel.h"
#include "Const.h"

using namespace std;



Pixel::Pixel()                         // intialisation des  attributs à Zero
{

	tauxRouge_ = 0;
	tauxVert_ = 0;
	tauxBleu_ = 0;

}
Pixel:: ~Pixel()
{



}

Pixel::Pixel(unsigned int tauxRouge, unsigned int tauxVert, unsigned int tauxBleu)     // intialisation des  attributs à valeur des paramétres
{

	tauxRouge_ = tauxRouge;
	tauxVert_ = tauxVert;
	tauxBleu_ = tauxBleu;

}


unsigned int Pixel::obtenirTeinteRouge()const
{

	return tauxRouge_;
}


unsigned int Pixel:: obtenirTeinteVert() const 
{
	return tauxVert_;

}

unsigned int Pixel::obtenirTeinteBleu() const
{

	return tauxBleu_;
}


void Pixel::modifierTeinteRouge(int incrementRouge)  
{ 
	

	int somme = incrementRouge + tauxRouge_;											

	if (somme >= MIN_CONCENTRATION_COULEUR && somme <= MAX_CONCENTRATION_COULEUR)         																			//conprise  entre 0 et 255
	{
		tauxRouge_ = abs(somme);
	}
	else
	{
		if (somme < MIN_CONCENTRATION_COULEUR)											
																						
		{

			tauxRouge_ = MIN_CONCENTRATION_COULEUR;									// mets tauxRouge_ à 0 si somme est < 0

		}
		else                                                                         
		{

			tauxRouge_ = MAX_CONCENTRATION_COULEUR;									// mets tauxRouge_  à max puisque la somme
																					//n'est ni < 0  ni dans [0, 255] ,  donc > 255

		}

	}
}


void Pixel::modifierTeinteVert(int incrementVert)							
{
	

	int somme = tauxVert_ + incrementVert;


	if (somme >= MIN_CONCENTRATION_COULEUR && somme <= MAX_CONCENTRATION_COULEUR)
	{
		tauxVert_= somme;
	}
	else
	{
		if (somme < MIN_CONCENTRATION_COULEUR)
		{

			tauxVert_ = MIN_CONCENTRATION_COULEUR;
		}
		else
		{

			tauxVert_ = MAX_CONCENTRATION_COULEUR;

		}

	}

}

void Pixel::modifierTeinteBleu(int incrementBleu)   
{
	int somme = tauxBleu_ + incrementBleu;

	

	if (somme >= MIN_CONCENTRATION_COULEUR && somme <= MAX_CONCENTRATION_COULEUR)
	{
		tauxBleu_ = somme;
	}
	else
	{
		if (somme < MIN_CONCENTRATION_COULEUR)
		{

			tauxBleu_ = MIN_CONCENTRATION_COULEUR;
		}
		else
		{

				tauxBleu_ = MAX_CONCENTRATION_COULEUR;

		}

	}

	
}

void Pixel::afficherPixel() const
{
	if (tauxRouge_==0 && tauxBleu_==0 && tauxVert_>0)			// verifie si le pixel est vert 
	{

		cout << "G";
	}
	else
	{

		if (tauxVert_ == 0 && tauxBleu_== 0 && tauxRouge_>0 )					// verifie si le pixel est rouge
		{
			cout << "R";
		}
		else
		{

			if (tauxVert_ == 0 && tauxRouge_ == 0 && tauxBleu_>0)				// verifie si le pixel est Bleu
			{
				cout << "B";
			}
			else
				if (tauxVert_>= 0 && tauxRouge_>= 0 && tauxBleu_>=0)	 // verifie si le pixel est composé
																		//de plus que une couleur  ou aucune couleur 
					cout << "Q";
			
		}

	}

}









