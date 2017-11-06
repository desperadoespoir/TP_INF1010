/**************************************************
* Titre: Travail pratique #2
* Date: Septembre 2017
* Auteur:
Gnaga Dogbeda Georges   1870143
Mehdi Haddoud  1851658
**************************************************/
#ifndef IMAGE_H
#define IMAGE_H
#include "Pixel.h"

#include<iostream>

using namespace std;

class Image
{
public:
	Image();
	~Image();

	Image(const string& nomImage,unsigned int nombrePixelHauteur, unsigned int nombrePixelLargeur);

	// SI c'est nécessaire ajouter un constructeur par copie

	void doublerTailleEnLargeur();
	void doublerTailleEnHauteur();

	unsigned int obtenirNombrePixelHauteur() const;
	unsigned int obtenirNombrePixelLargeur() const;
	string obtenirNomImage() const;

	
	void modifierNomImage(const string & nomImage);

	// Methode à ignorer pour le TP2
	void afficherImage() const;

	bool ajouterPixel(Pixel & pixel,unsigned int positionLargeur, unsigned int positionHauteur);
	Pixel obtenirPixel(unsigned int positionHauteur, unsigned int positionLargeur) const ;
	void augmenterTeintePixel(unsigned int positionLargeur, unsigned int positionHauteur, int  increment, char couleur);

    // Ajouter les opérateurs
	Image(const Image& image);
	Image& operator=(const Image& image);
	friend std::ostream& operator<<(std::ostream& out, const Image& image);
	bool operator==(const Image& image);    // faire image 1== image 2
	bool operator==(const string& nom);     //  faire nomImage == nom
	friend bool operator==(const string& nom , const Image& image);    // faire  nom == nomImage


private :
	string nomImage_;
	unsigned int nombrePixelEnHauteur_;
	unsigned int nombrePixelEnLargeur_;
	Pixel** pixels_;

};

#endif