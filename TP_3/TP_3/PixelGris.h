/**************************************************
* Titre: Travail pratique #3
* Date: Septembre 2017
* Auteur:
Gnaga Dogbeda Georges   1870143
Mehdi Haddoud  1851658
**************************************************/

#ifndef TP3_PIXEL_GRIS_H
#define TP3_PIXEL_GRIS_H

#include "Pixel.h"
#include "PixelCouleur.h"

class PixelGris :
	public Pixel
{
public:
    // Constructeur par defaut
	PixelGris();
    // Constructeur par parametre
	PixelGris(unsigned int);
    // Destructeur
	~PixelGris();

    // Fonctions de conversion
	bool convertirPixelBN() const;
	unchar* convertirPixelCouleur() const;

    // Accesseur
	unsigned int obtenirDonnee() const;

    // Surcharge de l'operateur ==
	bool operator==(const PixelGris& pixel) const;
    
private:
	unchar donnee_;
};

#endif // TP3_PIXEL_GRIS_H