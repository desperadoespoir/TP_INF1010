/**************************************************
 * Titre: Travail pratique #1 - Main.cpp
 * Date: Septembre 2017
 * Auteur:
 Gnaga Dogbeda Georges   1870143
 Mehdi Haddoud  1851658
**************************************************/

#include "Pixel.h"
#include "Image.h"
#include "GroupImage.h"
#include <string>
#include <iostream>

using namespace std;

int main()
{

	/* reponse aux questions du sujet
	 
	 1)-  le lien  qui exciste entre la classe GroupImage et Image est une Agrégation 
	 parce que  les objets "Image" exciste en dehors de la classe GroupImage 
	 et si l'on detruit un objet groupImage les objets originaux  " Image " ne seront pas detruits 


	 2)-  le fait de mettre const devant une methode  empeche que les attributs solicités
	 dans l'utilisation de cette methode  soit modifié

	*/


	//1- Creez 9 pixels rouge  (255,0,0)	

	Pixel rouge_1(255, 0, 0); 
	Pixel rouge_2(255, 0, 0);
	Pixel rouge_3(255, 0, 0);
	Pixel rouge_4(255, 0, 0);
	Pixel rouge_5(255, 0, 0);
	Pixel rouge_6(255, 0, 0);
	Pixel rouge_7(255, 0, 0);
	Pixel rouge_8(255, 0, 0);
	Pixel rouge_9(255, 0, 0);


	//2-Creez 9 pixels verts (0,255,0)
	
	Pixel vert_1(0, 255, 0);
	Pixel vert_2(0, 255, 0);
	Pixel vert_3(0, 255, 0);
	Pixel vert_4(0, 255, 0);
	Pixel vert_5(0, 255, 0);
	Pixel vert_6(0, 255, 0);
	Pixel vert_7(0, 255, 0);
	Pixel vert_8(0, 255, 0);
	Pixel vert_9(0, 255, 0);

	//3- Creez une image de taille 3*3 
	
	Image image_1("image rouge", 3, 3);

	//4- Ajouter à l'image créée à l'étape 3 les pixels rouges
	image_1.ajouterPixel(rouge_1, 0, 0);
	image_1.ajouterPixel(rouge_2, 0, 1);
	image_1.ajouterPixel(rouge_3, 0, 2);
	image_1.ajouterPixel(rouge_4, 1, 0);
	image_1.ajouterPixel(rouge_5, 1, 1);
	image_1.ajouterPixel(rouge_6, 1, 2);
	image_1.ajouterPixel(rouge_7, 2, 0);
	image_1.ajouterPixel(rouge_8, 2, 1);
	image_1.ajouterPixel(rouge_9, 2, 2);
	
	//5- Creez une deuxième image de taille 3*3 
	
	Image image_2("image Verte ",3, 3);

	//6- Ajouter à l'image créées à l'étape 3 les pixels verts
	
	image_2.ajouterPixel(vert_1, 0, 0);
	image_2.ajouterPixel(vert_2, 0, 1);
	image_2.ajouterPixel(vert_3, 0, 2);
	image_2.ajouterPixel(vert_4, 1, 0);
	image_2.ajouterPixel(vert_5, 1, 1);
	image_2.ajouterPixel(vert_6, 1, 2);
	image_2.ajouterPixel(vert_7, 2, 0);
	image_2.ajouterPixel(vert_8, 2, 1);
	image_2.ajouterPixel(vert_9, 2, 2);

	//7- Creez un groupe d'image avec une capacite de 3
	
	GroupImage groupImage("goupe_1", 3);

	//8- Ajoutez les deux images crées precédament au groupe
	
	groupImage.ajouterImage(image_1);

	groupImage.ajouterImage(image_2);

	//9- Augmentez la teinte bleu du Pixel (1,1) de l'image 0 de 50 unités
	 
	groupImage.obtenirImage(0).augmenterTeintePixel(1, 1, 50,'B');
	
	//10- Diminuer la teinte rouge du Pixel (1, 1) de l'image 0 de 255 unités
	
    groupImage.obtenirImage(0).augmenterTeintePixel(1, 1,-255,'R');
	
	//11- Augmentez la teinte bleu du Pixel (2, 1) de l'image 1 de 100 unités  
	
	groupImage.obtenirImage(1).augmenterTeintePixel(2,1, 100, 'B');

	//12- Affichez les images de ce groupe
	
	groupImage.afficherImages();

	//13- Doublez la taille de la premiere image du groupe en largeur	
	
	groupImage.obtenirImage(0).doublerTailleEnLargeur();

	//14- Doublez la taille de la deuxieme image du groupe en hauteur
	
	groupImage.obtenirImage(1).doublerTailleEnHauteur();
	
	//15- Afficher cette image 
	
	//image_1.afficherImage();
	groupImage.obtenirImage(1).afficherImage();

		cout << endl;
		
	return 0;
}