/**************************************************
* Titre: Travail pratique #1
* Date: Septembre 2017
* Auteur:
Gnaga Dogbeda Georges   1870143
Mehdi Haddoud  1851658
**************************************************/
#include "GroupImage.h"
using namespace std;


GroupImage::GroupImage() 
{
	
	
		nombreImages_ = 0;
	     type_ = " unknow ";

}


GroupImage::~GroupImage() 
{
	delete[] images_;
	images_ = nullptr;
	nombreImages_ = 0;
	capaciteImages_ = 0;
}

GroupImage::GroupImage(const string &type, unsigned int capaciteImages)
{
	
	type_ = type;
	capaciteImages_ = capaciteImages;
	nombreImages_ = 0;
	images_ = new Image[capaciteImages];

	

}

void GroupImage::modifierType(const string &type)
{

	type_ = type;
}

string GroupImage::obtenirType() const
{
	return type_;

}

Image& GroupImage::obtenirImage(unsigned int indiceImage) const   // ajout de (&) autorisé par le chargé de laboratoire.
{
	return images_[indiceImage];   

}

unsigned int GroupImage:: obtenirNombreImages() const
{

	return nombreImages_;
}

void GroupImage::ajouterImage(const Image &image) 
{
	if (nombreImages_ < capaciteImages_)
	{
		images_[nombreImages_++] = image;
		
	}
	else
	{
		cout << "capacite insuffisante" << endl;
	}



}


void GroupImage::afficherImages() const 
{
	cout << "---------*****----------------*****------------" << endl;

	for (int i = 0; i < nombreImages_;i++)
	{

		images_[i].afficherImage();
		
	cout << "---------*****----------------*****------------" << endl;


	}

}


void GroupImage::doublerTailleImageEnLargeur(unsigned int indiceImage)
{

	images_[indiceImage].doublerTailleEnLargeur();
}


void GroupImage::doublerTailleImageEnHauteur(unsigned int indiceImage) 
{
	images_[indiceImage].doublerTailleEnHauteur();

}
