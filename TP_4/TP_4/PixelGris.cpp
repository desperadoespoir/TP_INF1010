//
// Created by Gabriel Bernard
//

#include "PixelGris.h"

PixelGris::PixelGris() : Pixel() {}

PixelGris::PixelGris(unsigned int donnee) : Pixel(){
    if(donnee < VALEUR_MAX_PIXEL) {
        donnee_ = donnee;
    } else {
        donnee_ = VALEUR_MAX_PIXEL;
    }
}

PixelGris::~PixelGris() {}

unchar PixelGris::convertirPixelGris() const 
{
	return donnee_;

 }


unchar* PixelGris::convertirPixelCouleur() const {
	unchar *ret = new unchar[3];
	ret[0] = ret[1] = ret[2] = donnee_;
	return ret;
}

bool PixelGris::convertirPixelBN() const {
	return donnee_ > 127;
}

unsigned int PixelGris::obtenirDonnee() const {
	return donnee_;
}

void PixelGris::mettreEnNegatif()
{
	donnee_ = (255- donnee_);

}
unchar PixelGris::retournerR() const
{
	unchar rouge = donnee_;
	return rouge ;

}
unchar PixelGris:: retournerG() const
{
	unchar vert = donnee_;
	return vert;

}
 unchar PixelGris:: retournerB()const
{
	 unchar bleu = donnee_;
	 return bleu;
}
 Pixel* PixelGris::retournerCopieProfonde(const Pixel& pixel) const
 {

	 Pixel* pixel1 = new PixelGris(pixel.convertirPixelGris());



	 return pixel1;
 }