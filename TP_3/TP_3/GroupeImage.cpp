
/**************************************************
* Titre: Travail pratique #3
* Date: Septembre 2017
* Auteur:
Gnaga Dogbeda Georges   1870143
Mehdi Haddoud  1851658
**************************************************/

#include <iostream>
#include "GroupeImage.h"


using namespace std;

GroupeImage::GroupeImage() {};

GroupeImage::~GroupeImage() {};


// Fonction qui ajoute une image au vecteur si elle n'est pas presente
bool GroupeImage::ajouterImage(Image* image) {
    for (unsigned int i = 0; i <  images_.size(); i++)
    {
        if (image->obtenirNomImage() == *(images_[i]))
        {
            cout << image->obtenirNomImage() << " n'a pas ete ajoute" << std::endl;
            return false;
        }
    }
    images_.push_back(image);
    std::cout << image->obtenirNomImage() << " a bien ete ajoute" << std::endl;
    return true;
}

// Fonction qui retire une image au vecteur si elle est presente
bool GroupeImage::retirerImage(const std::string& nom) {
    for (unsigned int i = 0; i < images_.size(); i++)
    {
        if (*(images_[i]) == nom)
        {
            images_[i] = images_.back();
            images_.pop_back();
            cout << nom << " a bien ete retire" << endl;
            return true;
        }
    }
    return false;
}

// Fonction qui permet de retourner une des images du vecteur
Image* GroupeImage::obtenirImage(unsigned int indiceImage) const {
	return images_[indiceImage];
}

unsigned int GroupeImage::obtenirNombreImages() const 
{
	return images_.size();
}

GroupeImage* GroupeImage::grouptoutEnregistre() {

	for (int i = 0; i < images_.size(); i++)
	{
		
		string chemin= "./Ensemble d'images/" + images_[i]->obtenirTypeEnString() + "/im"+ to_string(i) + images_[i]->obtenirNomImage();

			images_[i]->sauvegarderImage(chemin);
			cout <<" sauvegarde de "+ chemin << endl;

	}

	return this;
}

// Surcharge de l'operateur += qui ajoute une image au vecteur
GroupeImage& GroupeImage::operator+=(Image* image)
{
    ajouterImage(image);
    return *this;
}

// Surcharge de l'operateur -= qui reture une image au vecteur
GroupeImage& GroupeImage::operator-=(Image* image)
{
    retirerImage(image->obtenirNomImage());
    return *this;
}

// Surcharge de l'operateur de flux de sortie
ostream& operator<<(ostream& os, const GroupeImage& groupeImage)
{
    os << endl;
    os << "**************************************************" << endl;
    os << "Affichage des images du groupe :  " << endl;
    os << "**************************************************" << endl << endl;
    
    for  (unsigned int j= 0; j < groupeImage.images_.size(); j++) {
        os << *groupeImage.images_[j] << "--------------------------------------------------" << endl;
    }
    
    os << endl;

    return os;
}


Image* GroupeImage::operator[](const unsigned int& indice) const 
{

	return obtenirImage(indice);    // retourne l'image a cet indice


}

GroupeImage* GroupeImage::  toutMettreEnNB()
{
	for (int i = 0; i < obtenirNombreImages(); i++)
	{
		images_[i]->convertirNB();

	}

	return this;
}
GroupeImage* GroupeImage::toutMettreEnGris()
{
	for (int i = 0; i < obtenirNombreImages(); i++)
	{
		images_[i]->convertirGris();

	}
	return this;

}
GroupeImage* GroupeImage:: toutMettreEnCouleur()
{
	for (int i = 0; i < obtenirNombreImages(); i++)
	{
		images_[i]->convertirCouleur();

	}
	return this;
}
