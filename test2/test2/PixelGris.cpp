#include "PixelGris.h"
// Constructeur par defaut
PixelGris::PixelGris() :Pixel(TypePixel::NuanceDeGris)
{
	donnee_ = 0;
}

// Constructeur par parametre
PixelGris::PixelGris(unsigned int donnee) :Pixel(TypePixel::NuanceDeGris)
{
	donnee_ = donnee;
}

// Destructeur
PixelGris::~PixelGris()
{

}

// Accesseur
unsigned int PixelGris::obtenirDonnee() const {   
    // Todo
    return donnee_;
}


// Fonctions de conversion
bool PixelGris:: convertirPixelBN() const
{ 
	if (donnee_ > 127)
		return true;
	else 
		if (donnee_ <= 127)
		return false;

}
unchar* PixelGris::convertirPixelCouleur() const    //  retourne un pointeur unchar* 
													//  sur le tableau " pointeur" comportant les valeurs 
													//  RGB équivalentes donnant un PixelCouleur.													 
{
	unchar * pointeur=new unchar[3];
	pointeur[0] = donnee_;
	pointeur[1] = donnee_;
    pointeur[2] = donnee_;



  return pointeur;

}


// Surcharge de l'operateur ==
bool PixelGris:: operator==(const PixelGris& pixel) const
{
	if ((type_ == pixel.type_) && (donnee_ == pixel.donnee_))
		return true;
	return false;

}