//
// Created by Gabriel Bernard
//

#ifndef TP3_PIXEL_COULEUR_H
#define TP3_PIXEL_COULEUR_H

#include "Pixel.h"

enum Couleur { R=0, G=1, B=2 };  // R = 0, G = 1, B = 2
const int LONGUEUR_TABLEAU = 3;  // donnee_[3]

class PixelCouleur :
	public Pixel
{
public:
	PixelCouleur();
	PixelCouleur(const unchar& r, const unchar& g, const unchar& b);
	virtual ~PixelCouleur();

	 void modifierTeinteRouge(unchar d);
	 void modifierTeinteVert(unchar d);
	 void modifierTeinteBleue(unchar d);

    // Accesseur
    virtual unchar retournerR() const;
    virtual unchar retournerG() const;
    virtual unchar retournerB() const;
	virtual  unchar* convertirPixelCouleur() const;
	virtual bool convertirPixelBN() const;
	virtual unchar convertirPixelGris() const;
	virtual Pixel* retournerCopieProfonde(const Pixel& pixel) const ;
	virtual void  mettreEnNegatif();

private:
	unsigned int somme() const;

	unchar donnee_[LONGUEUR_TABLEAU];
};

#endif // TP3_PIXEL_COULEUR_H