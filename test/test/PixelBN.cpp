/**************************************************
* Titre: Travail pratique #3
* Date: Septembre 2017
* Auteur:
Gnaga Dogbeda Georges   1870143
Mehdi Haddoud  1851658
**************************************************/


#include "PixelBN.h"

// Constructeur par defaut
PixelBN::PixelBN(): Pixel(TypePixel::NoireBlanc)
{
    // Todo
	donnee_ = false;  // pixel noir 
}

// Constructeur par parametres
PixelBN::PixelBN(bool p) : Pixel(TypePixel::NoireBlanc)
{
    // Todo
	donnee_ = p;
}

// Destructeur
PixelBN::~PixelBN()
{

}
// Accesseur

bool PixelBN::obtenirDonnee() const {
    // Todo
    return donnee_;
}



// Fonctions de conversion							
unchar* PixelBN::convertirPixelCouleur() const	//  verifie la valeur bool de donne_  et initialise le tableau
												//  "pointeur" à 0 ou 255 si donne_ est a true ou false;
{
	unchar * pointeur = new unchar[3];   
	if (donnee_ == true)
	{
		pointeur[0] = 255;
		pointeur[1] = 255;
		pointeur[2] = 255;
	}
	else
	{
		pointeur[0] = 0;
		pointeur[1] = 0;
		pointeur[2] = 0;

	}
	
	return pointeur;
}

unchar PixelBN::convertirPixelGris() const			
{
	unchar  valeur = 0;

	return valeur;
}


// Surcharge de l'operateur ==
bool PixelBN :: operator==(const PixelBN& pixel) const
{
	if ((type_ == pixel.type_) && (donnee_ == pixel.donnee_))
		return true;
	return false;
}
