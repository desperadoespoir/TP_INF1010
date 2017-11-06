
#ifndef PAUSE
    #ifdef _WIN32
        #include <Windows.h>
        #define PAUSE system("PAUSE")
    #else
        #include <unistd.h>
        #define PAUSE sleep(0)
    #endif
#endif /* PAUSE */

#include <iostream>
#include <string>

#include "GroupeImage.h"
#include "PixelCouleur.h"
#include "PixelBN.h"
#include "PixelGris.h"

using namespace std;

int main() {


	/*reponses aux questions*/

	/*
	1)- oui on peut reserver une espace mémoire de type Pixel et
	y associer tout objet de ses classes derivées mais par contre 
	on ne peut pas créer un objet de type Pixel puisque la cette derniere est abastraite
	
	2)- la sortie b=0  donc false,
	puisque comme les classes derivées n'ont pas d'operateur== ,
	les objets p1 et p2 utilisent les  methodes appropriées  puisqu'elles sont virtuelles dans leurs classes 
	donc on effectue une comparaison qui donne false
	
	3)- oui    p1 appelle la bonne methode qui dans ce cas est
	la methode obtenirR() de PixelCouleur etant donné qu'elle est 
	virtuelle dans la classe pixelCouleur.  
	
	*/
 
// Chemin vers les images
    string cheminLoad = "./Ensemble d'images/Originale/";
    // Nom des 6 images dans un tableau de string
    string image[6] = {"Breaking-Bad.bmp", "Couleur.bmp", "Fall.bmp", "RM.bmp", "SolarEclipse.bmp", "WiC.bmp"};

	Image image_1(cheminLoad + image[0], Couleurs);
	Image image_2(cheminLoad + image[1], Couleurs);
	Image image_3(cheminLoad + image[2], Couleurs);
	Image image_4(cheminLoad + image[3], Couleurs);
	Image image_5(cheminLoad + image[4], Couleurs);
	Image image_6(cheminLoad + image[5], Couleurs);

    // Creer un groupe d'image nomme groupeImage1
    cout << "**************************************************" << endl;
    cout << "Creation du groupe d'image" << endl;
    cout << "**************************************************" << endl << endl;

	GroupeImage  groupeImage1;
    // Creation un groupe d'image nomme groupeImage1


    // Ajouter les 3 premieres images contenue dans le tableau de string
    // image au groupeImage1, en couleur
	groupeImage1 += &image_1;
	groupeImage1 += &image_2;
	groupeImage1 += &image_3;

    // Creer un deuxieme groupe image identique au groupeImage precedent
    // en utilisant le constructeur par copie ou l'operateur egal (votre choix).
    // Nomme ce groupe groupeImage2

	GroupeImage groupeImage2;

	groupeImage2 = groupeImage1;
	
    // Afficher le contenu de groupeImage1

	cout << groupeImage1 << endl;
    // Afficher le contenu de groupeImage2

	cout << groupeImage2 << endl;

    // Ajouter toutes les images du tableau de string image au groupeImage2, en couleur

	groupeImage2 += &image_1;
	groupeImage2 += &image_2;
	groupeImage2 += &image_3;
	groupeImage2 += &image_4;
	groupeImage2 += &image_5;
	groupeImage2 += &image_6;

    // Tentez de convertir toutes les images d'un des groupes en Couleur

	groupeImage2.toutMettreEnCouleur();


    // Mettre toutes les images du groupeImage1 en negatif

	 groupeImage1.ToutMettreEnNegatif();
    // Enregistrer toutes les images du groupeImage2

	groupeImage2.toutEnregistrer();
    // Convertir toutes les images du groupeImage2 en gris

	groupeImage2.toutMettreEnGris();
    // Enregistrer toutes les images du groupeImage2
	groupeImage2.toutEnregistrer();

    // Convertir toutes les images du groupeImage2 en Noir et Blanc

	groupeImage2.toutMettreEnNB();

    // Enretisgrer toutes les images
	groupeImage2.toutEnregistrer();
	groupeImage1.toutEnregistrer();


    // N'oubliez pas de desallouer la memoire si necessaire


    // Permet d'afficher le contenu de la console
    PAUSE;

    // Fin du programme
    return 0;
}