/**************************************************
* Titre: Travail pratique #1
* Date: Septembre 2017
* Auteur:
Gnaga Dogbeda Georges   1870143
Mehdi Haddoud  1851658
**************************************************/

#include "Image.h"
using namespace std;


Image::Image() 
{
	
	nombrePixelEnHauteur_=1;
	nombrePixelEnLargeur_ = 1;
	

	pixels_ = new Pixel*[nombrePixelEnHauteur_];

	for (int i = 0; i < nombrePixelEnHauteur_; i++)
		pixels_[i] = new Pixel[nombrePixelEnLargeur_];
	
}
Image ::~Image()						
{

	for (int i = 0; i < nombrePixelEnHauteur_; i++)
	{	
		delete[] pixels_[i];
		pixels_[i] = nullptr;
	}
	delete[] pixels_;
	pixels_=nullptr;
}

Image::Image(const string& nomImage, unsigned int nombrePixelHauteur, unsigned int nombrePixelLargeur)
	
{
	nomImage_ = nomImage;
	nombrePixelEnHauteur_ = nombrePixelHauteur;
	nombrePixelEnLargeur_ = nombrePixelLargeur;
	
	pixels_ = new Pixel*[nombrePixelHauteur];

	for (int i = 0; i < nombrePixelEnHauteur_; i++)
		pixels_[i] = new Pixel[nombrePixelLargeur];
		
	
}

void Image::doublerTailleEnLargeur()						// l'idee c'est de creer d'un nouveau  tableau[][] 
															//dans laquelle l'on transferera les contenus du tableau pixels_ 
{											
	Pixel** tableau = nullptr;											
	int somme = nombrePixelEnLargeur_ *2;				  //  on double la taille  en largeur

	tableau = new Pixel*[nombrePixelEnHauteur_];		 //  initialisation  du tableau en hauteur tableau[***][] 

	for (int i = 0; i < nombrePixelEnHauteur_; i++) 
	{

		tableau[i] = new Pixel[somme];					//initialisation  du tableau en largeur tableau[][***]
	}

	for (int i = 0; i < nombrePixelEnHauteur_; i++)     
	{

		for (int j = 0; j < nombrePixelEnLargeur_; j++)
		{

			tableau[i][j] = pixels_[i][j];					//  copie tous les contenus pixels_ dans le nouveau tableau			
		}

		
	}


	for (int i = 0; i < nombrePixelEnHauteur_; i++)       //  destruction et initialisation de pixels_
	{
		delete[] pixels_[i]; 
		pixels_[i] = nullptr;
	}
	

	
	pixels_ = tableau;									 //  pointer pixels_  vers le nouveau tableau 
	
	nombrePixelEnLargeur_ = somme;     					// réinitialisation de la taille en largeur 
														//a  somme = 2* l'ancienne taille largeur




}
void Image ::doublerTailleEnHauteur()
{

	Pixel** tableau_1;
	int somme = nombrePixelEnHauteur_ *2;   

	tableau_1 = new Pixel*[somme];					// initialisation du nouveau tableau a la  hauteur initiale *2
	 
	for (int i = 0; i < somme; i++)   
	{

		tableau_1[i] = new Pixel[nombrePixelEnLargeur_];				// initialisation du nouveau tableau a la taille largeur ideale
	}


	for (int i = 0; i <  nombrePixelEnHauteur_; i++)				
	{

		for (int j = 0; j < nombrePixelEnLargeur_; j++)
		{

			tableau_1[i][j] = pixels_[i][j];							// copie tous les contenus pixels_ dans le nouveau tableau

		}


	}


	for (int i = 0; i < nombrePixelEnHauteur_; i++)
	{
		delete[] pixels_[i];
		pixels_[i] = nullptr;
	}
	
	pixels_ = tableau_1;												//  pointer pixels_  vers le nouveau tableau

	nombrePixelEnHauteur_ = somme;										 // réinitialisation de la taille en largeur 
																		//a  somme= 2* l'ancienne taille hauteur

}

unsigned int Image::obtenirNombrePixelHauteur() const 
{

	return  nombrePixelEnHauteur_;
}


unsigned int Image::obtenirNombrePixelLargeur() const 
{

	return  nombrePixelEnLargeur_;
}


string Image::obtenirNomImage() const
{
	return nomImage_;
}


void Image:: modifierNomImage(const string & nomImage) 
{

	nomImage_=nomImage;

}



void Image::afficherImage() const
{
	cout <<"affichage de l'image : "<< nomImage_<< endl;
	for (int i = 0; i < nombrePixelEnHauteur_; i++)
	{

		for (int j = 0; j < nombrePixelEnLargeur_; j++) {

			pixels_[i][j].afficherPixel();

		}

		cout << endl;

	}


}



bool Image::ajouterPixel(Pixel & pixel, unsigned int positionLargeur, unsigned int positionHauteur)
{
		if ((positionLargeur < nombrePixelEnLargeur_) && (positionHauteur < nombrePixelEnHauteur_))
			{
				pixels_[positionHauteur][positionLargeur] = pixel;

				return true;
			}
		
		return  false;
}


Pixel Image::obtenirPixel(unsigned int positionHauteur, unsigned int positionLargeur) const
{

	return pixels_[positionHauteur][positionLargeur];      
}


void Image:: augmenterTeintePixel(unsigned int positionLargeur, unsigned int positionHauteur, int  increment, char couleur)
{
	if (couleur =='R')
	{

		pixels_[positionHauteur][positionLargeur].modifierTeinteRouge(increment);


	}

	else
	{
		if (couleur == 'B')
		{

			pixels_[positionHauteur][positionLargeur].modifierTeinteBleu(increment);
		}
		else
		{
			if (couleur == 'G')
			{

				pixels_[positionHauteur][positionLargeur].modifierTeinteVert(increment);

			}
				
		}
			
	}
}








