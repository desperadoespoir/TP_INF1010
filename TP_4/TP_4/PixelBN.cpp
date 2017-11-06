//
// Created by Gabriel Bernard
//

#include "PixelBN.h"


PixelBN::PixelBN() : Pixel() {
	donnee_ = false;
}

PixelBN::PixelBN(bool p) : Pixel() {
	donnee_ = p;
}

PixelBN::~PixelBN() {}

bool PixelBN::convertirPixelBN() const {

	return donnee_;
}


unchar* PixelBN::convertirPixelCouleur() const {
    unchar valeur = (unchar)VALEUR_MIN_PIXEL;
    if(donnee_) {
        valeur = (unchar)VALEUR_MAX_PIXEL;
    }

	unchar* ret = new unchar[3];
	ret[0] = ret[1] = ret[2] = valeur;

	return ret;
}

unchar PixelBN::convertirPixelGris() const {
	return donnee_ ? VALEUR_MAX_PIXEL : VALEUR_MIN_PIXEL;
}

bool PixelBN::obtenirDonnee() const {
	return donnee_;
}

void PixelBN::mettreEnNegatif()
{
	donnee_ = (!donnee_);

}
unchar PixelBN::retournerR() const
{
	unchar rouge;
	if(donnee_)
		 rouge = 255;
	else
		 rouge = 0;

	return rouge;

}
unchar PixelBN::retournerG() const
{
	unchar vert;
	if (donnee_)
		vert = 255;
	else
		vert = 0;

	return vert;


}
unchar PixelBN::retournerB() const
{
	unchar bleu;
	if (donnee_)
		bleu = 255;
	else
		bleu = 0;

	return bleu;
}

Pixel* PixelBN::retournerCopieProfonde(const Pixel& pixel) const
{
	Pixel* pixel1 = new PixelBN(pixel.convertirPixelBN());

	return pixel1;
}
