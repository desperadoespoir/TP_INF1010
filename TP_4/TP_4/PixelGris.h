//
// Created by Gabriel Bernard
//

#ifndef TP3_PIXEL_GRIS_H
#define TP3_PIXEL_GRIS_H

#include "Pixel.h"

class PixelGris :
	public Pixel
{
public:
	PixelGris();
	PixelGris(unsigned int);
	virtual ~PixelGris();

	 virtual bool convertirPixelBN() const;
	 virtual  unchar* convertirPixelCouleur() const;
	 virtual unchar convertirPixelGris() const ;

	  virtual unsigned int obtenirDonnee() const;
	  virtual void mettreEnNegatif();
	  virtual unchar retournerR()const;
	  virtual unchar retournerG()const ;
	  virtual unchar retournerB() const;
	  virtual Pixel* retournerCopieProfonde(const Pixel& pixel) const;

private:
	unchar donnee_;
};

#endif // TP3_PIXEL_GRIS_H