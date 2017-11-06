/**************************************************
* Titre: Travail pratique #2
* Date: Septembre 2017
* Auteur:
Gnaga Dogbeda Georges   1870143
Mehdi Haddoud  1851658
**************************************************/

#include "GroupImage.h"
#include<vector>
using namespace std;

GroupImage::GroupImage()
{
	
}

GroupImage::~GroupImage() {
	

}



void GroupImage::modifierType(const string & type) {
	type_ = type;
}

string GroupImage::obtenirType() const{
	return type_;
}



void GroupImage::ajouterImage( Image* image) 
{
	bool imageExiste = false;
	for (int i = 0; i < images_.size(); i++)			//  on verifie si l'objet image à ajouter 
														//existe deja dans le vecteur d'images_
	{
		if ((*images_[i])==(*image))    
		{
			imageExiste = true;

		}
	}
	
	if (imageExiste == false)
	{
		images_.push_back(image);
		cout << "image :" << image->obtenirNomImage() << " a bien ete ajoute" << endl;
	}
		else
		{
			cout << "impossible d'ajouter cet image" << endl;

	}
}

void GroupImage::retirerImage(const string& nom)						
{

	bool imageExiste = false;
														//  on verifie si l'objet image à retirer 
	for (int i = 0; i < images_.size(); i++)			//existe  dans le vecteur d'images_
	{
		if ((*images_[i]) == nom)
		{
			
			images_[i] = images_[(images_.size() - 1)];
			images_.pop_back();
			imageExiste = true;

		}
	}

	if (imageExiste == false)
	{
		cout << "impossible de retirer cet image" << endl;
	}
	else
	{
		cout << "image :" << nom << " a bien ete retire" << endl;


	}
}						


void GroupImage::afficherImages(ostream& os) const {

	os << "*********************************************" << endl;
	os << "Affichage des images du groupe :  ";
	os << obtenirType().c_str() << endl;
	os << "*********************************************"<< endl;
	
	for (unsigned int i = 0; i <images_.size(); i++) {

		os << *images_[i];   // affichage des Pixels de l'image
		os << "---------------------------------------------" << endl;

	}
	os << endl;
}

Image* GroupImage::obtenirImage(unsigned int indiceImage) const {
	return images_[indiceImage];
}


GroupImage&  GroupImage::operator+=(Image* image) 
{
	ajouterImage(image);
	return *this;

}

GroupImage&  GroupImage::operator-=(Image* image)
{
	retirerImage(image->obtenirNomImage());
	return *this ;

}

std::ostream& operator<<(std::ostream& out, GroupImage& groupImage) 
{
	groupImage.afficherImages(out);

	
	
	return out;

 }


 