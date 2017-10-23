/**************************************************
* Titre: Travail pratique #2
* Date: Septembre 2017
* Auteur:
Gnaga Dogbeda Georges   1870143
Mehdi Haddoud  1851658
**************************************************/

#ifndef PIXEL_H
#define PIXEL_H
#include<iostream>



class Pixel
{
public:
	Pixel();
	~Pixel();

	Pixel(unsigned int tauxRouge,unsigned int tauxVert, unsigned int tauxBleu);

	void modifierTeinteRouge( int incrementRouge);
	void modifierTeinteVert( int incrementVert);
	void modifierTeinteBleu(int incrementBleu);

	unsigned int obtenirTauxRouge() const;
	unsigned int obtenirTauxVert() const;
	unsigned int obtenirTauxBleu() const;
		
	
     //  Remplacer cette méthode par char retournerCouleur() const;
	void afficherPixel() const;
	char obtenirCouleur() const;
	friend std::ostream& operator<<(std::ostream & out, const Pixel& pixel);
	bool operator==(Pixel& pixel);
	bool operator==(const char& caractere);
	friend bool operator==(const char& caractere, const Pixel& pixel);


	// Ajouter les opérateurs

private:
	unsigned int tauxRouge_ ;
	unsigned int tauxVert_;
	unsigned int tauxBleu_;
};

#endif