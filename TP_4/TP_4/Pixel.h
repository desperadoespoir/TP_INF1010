//
// Created by Gabriel Bernard
//

#ifndef TP3_PIXEL_H
#define TP3_PIXEL_H

typedef unsigned char unchar;

#define VALEUR_MAX_PIXEL 255
#define VALEUR_MIN_PIXEL 0

#include <iostream>
#include "TypePixel.h"

class Pixel
{
public:
    Pixel();
	virtual ~Pixel();

    // Test valeur Pixel
    unsigned int testPixel(const unsigned int& valeur) const;
    unchar testPixel(const unchar& valeur) const;

    // Rendre virtuelles pures et modifier en accordance
    // partout où necessaire (elles sont implémentées ici seulement 
    // pour que le code compile, mais doivent etre modifiee)
   virtual  unchar retournerR()const =0 ; 
   virtual unchar retournerG() const =0;
   virtual unchar retournerB() const =0;
  // virtual unsigned int obtenirDonnee() const=0;

  virtual bool operator==(const Pixel& pixel) const;
  virtual  unchar* convertirPixelCouleur() const=0;

  virtual void mettreEnNegatif() =0;
  virtual Pixel* retournerCopieProfonde(const Pixel& pixel) const = 0;
  virtual bool convertirPixelBN()const =0 ;
  virtual unchar convertirPixelGris() const =0;
//  virtual  unchar* convertirPixelCouleur() const=0;

protected:
	
};

#endif // PIXEL_H