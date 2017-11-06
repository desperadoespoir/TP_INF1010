/**************************************************
* Titre: Travail pratique #3
* Date: Septembre 2017
* Auteur:
Gnaga Dogbeda Georges   1870143
Mehdi Haddoud  1851658
**************************************************/


// Si plateforme windows
#ifdef _WIN32 
    #include <Windows.h>
    #define PAUSE system("PAUSE")
// S'il s'agit d'une plateforme UNIX
#else
    #include <unistd.h>
    #define PAUSE sleep(0)
#endif

#include <iostream>
#include <string>
#include "Pixel.h"
#include "PixelCouleur.h"
#include "PixelBN.h"
#include "PixelGris.h"
#include "GroupeImage.h"

using namespace std;

int main() {

	/* reponses  aux questions */
	/*

	1) cela est logique parce que la classe PixelCouleur contient
		des informations supplementaires que la classe Pixel comme sa couleur, le tableau unchar .

	
	2)- oui cela est possible mais  c'est l'operateur == de pixel qui est appellé 
	meme si l'objet contenu est de type PixelCouleur  parce que le compilateur considere l'objet comme
	un Pixel il faudra faire un polymorphisme pour y remedier;  donc on aura une comparaison de type pour les pixels
	 (couleur == couleur )  et return true 
		
		b= true

		affichage : 1

	3)-  le static cast  sert à convertir un  type d'objet en un autre type de la meme famille que lui 
		il permet d'utiliser les methodes des  classe derivés de pixels sans  qu'elles ne soient forcement virtuelles.
	
	*/

	// Chemin vers les images
    string cheminLoad = "./Ensemble d'images/Originale/";
	// Nom des 6 images dans un tableau de string
    string image[6] = {"Breaking-Bad.bmp", "Couleur.bmp", "Fall.bmp", "RM.bmp", "SolarEclipse.bmp", "WiC.bmp"};

	Image image_1(cheminLoad+image[0], Couleurs);
	Image image_2(cheminLoad+image[1], Couleurs);
	Image image_3(cheminLoad+image[2], Couleurs);
	Image image_4(cheminLoad+image[3], Couleurs);
	Image image_5(cheminLoad+image[4], Couleurs);
	Image image_6(cheminLoad+image[5], Couleurs);

	

	// Creer un groupe d'image
	



	cout << "**************************************************" << endl;
	cout << "Creation du groupe d'image" << endl;
	cout << "**************************************************" << endl << endl;


	// Ajouter toutes les images au groupe en tant qu'image couleurs

	GroupeImage group;
	group += &image_1;
	group += &image_2;
	group += &image_3;
	group += &image_4;
	group += &image_5;
	group += &image_6;

	// Afficher le contenu du groupe d'image
	cout << group << endl;
	// Convertir toutes les images en couleurs
	group.toutMettreEnCouleur();
	cout << endl;

	// Enregistrer toutes les images convertie
	/*for (int i = 0; i < group.obtenirNombreImages(); i++)
	{
		group.obtenirImage(i)->sauvegarderImage("./Ensemble d'images/Couleurs/" + group.obtenirImage(i)->obtenirTypeEnString() +group.obtenirImage(i)->obtenirNomImage());
	}*/

	group.grouptoutEnregistre();

	cout << endl;

	// Convertir toutes les images en Nuance de Gris
	group.toutMettreEnGris();

	// Enregistrer toutes les images grises
	
	cout << endl;
	group.grouptoutEnregistre();

	/*for (int i = 0; i < group.obtenirNombreImages(); i++)
	{
		group.obtenirImage(i)->sauvegarderImage(group.obtenirImage(i)->obtenirNomImage());
	}
	*/
	cout << endl;

	// Convertir toutes les images en Noir et Blanc
	group.toutMettreEnNB();

	cout << endl;

	// Enretisgrer toutes les images

	group.grouptoutEnregistre();

	/*
	for (int i = 0; i < group.obtenirNombreImages(); i++)
	{
		group.obtenirImage(i)->sauvegarderImage(group.obtenirImage(i)->obtenirNomImage());
	}
	*/

	// Permet d'afficher le contenu de la console
    PAUSE;

	// Fin du programme
    return 0;
}