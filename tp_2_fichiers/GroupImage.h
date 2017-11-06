/**************************************************
* Titre: Travail pratique #2
* Date: Septembre 2017
* Auteur:
Gnaga Dogbeda Georges   1870143
Mehdi Haddoud  1851658
**************************************************/

#ifndef GROUPIMAGE_H
#define GROUPIMAGE_H
#include "Image.h"
#include<vector>
#include<iostream>
#include <string>

using namespace std;


class GroupImage
{
public:
	GroupImage(); 
	~GroupImage(); 

	void modifierType(const string &type);
	string obtenirType() const;

	// Modifier cette méthode par Image* obtenirImage(unsigned int indiceImage) const; //  fait
	Image* obtenirImage(unsigned int indiceImage) const;

	// Méthode à modifier avec void ajouterImage(Image* &image);			// fait
	
	void ajouterImage( Image* image);								
	//  ajouter la methode pour retirer une image en donnant			// fait
	//son nom en paramètre
	
	void retirerImage(const string& nom);							
	
// Méthode à modifier avec void afficherImages(ostream& os)		// fait
	
	void afficherImages(ostream& os) const;
	
	
	
    // Ajouter les opérateurs 
	GroupImage& operator+=(Image* image);   // ajout de l'operator+=  et l'operator-=
											//avec en parametre un pointeur d'image puisque le vecteur 
											//images_ prend des pointeurs;
	GroupImage& operator-=(Image* image);
	friend std::ostream& operator<<(std::ostream& out, GroupImage& groupImage);   // surcharge de l'operator<<

private:

	string type_;
	vector <Image*> images_;

};

#endif