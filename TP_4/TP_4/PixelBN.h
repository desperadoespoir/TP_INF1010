//
// Created by Gabriel Bernard
//

#ifndef TP3_PIXELBN_H
#define TP3_PIXELBN_H

#include "Pixel.h"
#include "TypePixel.h"

class PixelBN: public Pixel
{
public:
	PixelBN();
	PixelBN(bool p);
	virtual ~PixelBN();

	virtual unchar* convertirPixelCouleur() const;
	virtual unchar convertirPixelGris() const;

	virtual bool obtenirDonnee() const;

	virtual void mettreEnNegatif();
	virtual bool convertirPixelBN() const;

	virtual  unchar retournerR() const;
	virtual unchar retournerG() const ;
	virtual unchar retournerB() const ;
	Pixel* retournerCopieProfonde(const Pixel& pixel) const;


private:
	bool donnee_;
};

#endif // TP3_PIXELBN_H