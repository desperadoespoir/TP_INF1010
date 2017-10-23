/**************************************************
* Titre: Travail pratique #2
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

/*
TODO : Veuillez répondre aux question ici

1)  le constructeur par copie sert a creer un objet a l'initialisant au valeurs des attributs d'un autre objet exitant
		l'operateur= par contre ecrase les atributs d'un objet deja crée en par ceux d'un autre objet.


2)  le constructeur par copie est tres important  lorsque l'on veut créer 
	une copie d'un objet qui a beaucoup d'attributs.


3)   l'opérateur = recopie l'élément et le détruit de l'espoir mémoire 
Tandis que le constructeur de copie construit un nouvel élément de même
type recopié exactement et ce en gardant l'élément copié dans l'espace mémoire.

*/

int main()
{


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

	Image *image_1=new Image("image rouge", 3, 3);
	

	//4- Ajouter à l'image créées à l'étape 3 les pixels rouges
	image_1->ajouterPixel(rouge_1, 0, 0);
	image_1->ajouterPixel(rouge_2, 0, 1);
	image_1->ajouterPixel(rouge_3, 0, 2);
	image_1->ajouterPixel(rouge_4, 1, 0);
	image_1->ajouterPixel(rouge_5, 1, 1);
	image_1->ajouterPixel(rouge_6, 1, 2);
	image_1->ajouterPixel(rouge_7, 2, 0);
	image_1->ajouterPixel(rouge_8, 2, 1);
	image_1->ajouterPixel(rouge_9, 2, 2);
	//5- Creez une deuxième image de taille 3*3 
	Image* image_2=new Image("image Verte ", 3, 3);
	//6- Ajouter à l'image créées à l'étape 3 les pixels verts
	
	image_2->ajouterPixel(vert_1, 0, 0);
	image_2->ajouterPixel(vert_2, 0, 1);
	image_2->ajouterPixel(vert_3, 0, 2);
	image_2->ajouterPixel(vert_4, 1, 0);
	image_2->ajouterPixel(vert_5, 1, 1);
	image_2->ajouterPixel(vert_6, 1, 2);
	image_2->ajouterPixel(vert_7, 2, 0);
	image_2->ajouterPixel(vert_8, 2, 1);
	image_2->ajouterPixel(vert_9, 2, 2);
	//7- Creez un groupe d'image avec une capacite de 3
	
	GroupImage groupImage;
	//8- Ajoutez les deux images crées precédament au groupe
	//groupImage.ajouterImage(image_1);
	//groupImage.ajouterImage(image_2);

	groupImage += (image_1);
	groupImage += (image_2);


	//9- Augmentez la teinte bleu du Pixel (1,1) de l'image 0 de 50 unités
	groupImage.obtenirImage(0)->augmenterTeintePixel(1,1,50,'B');
	//10- Diminuer la teinte rouge du Pixel (1, 1) de l'image 0 de 255 unités
	groupImage.obtenirImage(0)->augmenterTeintePixel(1, 1, -255, 'R');

	//11- Augmentez la teinte bleu du Pixel (2, 1) de l'image 1 de 100 unités  
	groupImage.obtenirImage(1)->augmenterTeintePixel(2, 1, 100, 'B');

	//12- Afficher le groupe d'image
	cout << groupImage<< endl;
	//13- Supprimer la premiere image du groupe d'image
	groupImage-=image_1;
	//14- Afficher le groupe d'image
	cout << groupImage << endl;
	
	return 0;
}