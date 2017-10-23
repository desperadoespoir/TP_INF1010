
/**************************************************
* Titre: Travail pratique #1 
* Date: 24 Septembre 2017
* Auteur:
Gnaga Dogbeda Georges   1870143
Mehdi Haddoud  1851658
**************************************************/
#ifndef PIXEL_H
#define PIXEL_H

using namespace std;


#include <iostream>
#include <string>


class Pixel
{
public:
	Pixel(); 
	~Pixel();

	Pixel(unsigned int tauxRouge,unsigned int tauxVert, unsigned int tauxBleu);


	unsigned int obtenirTeinteRouge()const ;
	unsigned int obtenirTeinteVert() const ;
	unsigned int obtenirTeinteBleu() const ;

	void modifierTeinteRouge( int incrementRouge);
	void modifierTeinteVert( int incrementVert);
	void modifierTeinteBleu(int incrementBleu);
		
	void afficherPixel() const;

private:
	unsigned int tauxRouge_ ;
	unsigned int tauxVert_;
	unsigned int tauxBleu_;
};

#endif