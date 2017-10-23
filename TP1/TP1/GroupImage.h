/**************************************************
* Titre: Travail pratique #1
* Date: Septembre 2017
* Auteur:
Gnaga Dogbeda Georges   1870143
Mehdi Haddoud  1851658
**************************************************/
#ifndef GROUPIMAGE_H
#define GROUPIMAGE_H
#include "Image.h"

using namespace std;


class GroupImage
{
public:
	GroupImage();
	~GroupImage();

	GroupImage( const string &type, unsigned int capaciteImages);

	void modifierType(const string &type);
	string obtenirType() const;
	Image& obtenirImage(unsigned int indiceImage) const;  //  ajout de (&) autorisé par le chargé de laboratoire.

	unsigned int obtenirNombreImages() const;

	void ajouterImage(const Image &image);

	void afficherImages() const;
	

	void doublerTailleImageEnLargeur(unsigned int indiceImage);

	void doublerTailleImageEnHauteur(unsigned int indiceImage);
	

private:

	string type_;
	unsigned int nombreImages_;
	unsigned int capaciteImages_;
	Image* images_;

};

#endif