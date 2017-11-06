
/**************************************************
* Titre: Travail pratique #3
* Date: Septembre 2017
* Auteur:
Gnaga Dogbeda Georges   1870143
Mehdi Haddoud  1851658
**************************************************/

#include "PixelCouleur.h"

// Constructeur par defaut
PixelCouleur::PixelCouleur() : Pixel(TypePixel::Couleur)
{ /* TODO */
	donnee_[Couleur::R] = 0 ;
	donnee_[Couleur::G] = 0;
	donnee_[Couleur::B] = 0;
}

// Constructeur par parametre
PixelCouleur::~PixelCouleur() 
{

}

PixelCouleur::PixelCouleur(const unchar& r, const unchar& g, const unchar& b): Pixel(TypePixel::Couleur)
{ /* TODO */
	donnee_[Couleur::R] = r;
	donnee_[Couleur::G] = g;
	donnee_[Couleur::B] = b;
}


// Accesseurs
unchar PixelCouleur::retournerR() const {
    // Todo

    return donnee_[Couleur::R];
}

unchar PixelCouleur::retournerG() const {
    // Todo
	return donnee_[Couleur::G];
}

unchar PixelCouleur::retournerB() const {
    // Todo
	return donnee_[Couleur::B];
}

void PixelCouleur::modifierTeinteRouge(unchar d)
{
	donnee_[Couleur::R] = d;
}
void PixelCouleur:: modifierTeinteVert(unchar d)
{
	donnee_[Couleur::G] = d;

}
void PixelCouleur:: modifierTeinteBleue(unchar d)
{
	donnee_[Couleur::B] = d;

}


bool  PixelCouleur::convertirPixelBN() const
{
	// calcul  de la moyenne 

	unchar moyenne = (donnee_[Couleur::R] + donnee_[Couleur::G] + donnee_[Couleur::B]) / 3;
	if (moyenne > 127)
		return true;
	else
		if (moyenne <= 127)
	return false;

}
unchar PixelCouleur::convertirPixelGris() const    // calcul et retourne la moyenne des elements du tableaux
{ 

	unchar moyenne = (donnee_[Couleur::B] + donnee_[Couleur::G] + donnee_[Couleur::R]) / 3;
	return moyenne;

}

// Surcharge de l'operateur ==
bool PixelCouleur:: operator==(const PixelCouleur& pixel) const
{
	if ((type_ == pixel.getType()) && (pixel.donnee_[Couleur::R] == donnee_[Couleur::R]) && (pixel.donnee_[Couleur::B] == donnee_[Couleur::B]) && (pixel.donnee_[Couleur::G] == donnee_[Couleur::G]))
		return true;
	return false;
}