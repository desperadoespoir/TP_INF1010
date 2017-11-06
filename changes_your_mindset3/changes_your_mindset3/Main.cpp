
/**************************************************
* Titre: Travail pratique #3 - Main.cpp
* Date:
* Auteur:
**************************************************/

#include"Echiquier.h"
//#include"Piece.h"
//#include"Tour.h"
int main()
{
	//1-  Creez un objet de type Roi à l'aide du constructeur par défaut.
	
	Roi roi_1;
	

	//2- Donnez l'id D1 au roi défini dans l'étape 1

	roi_1.modifierId("D1");
	//3-  Définissez la position (3,0) pour le roi défini dans l'étape 1
	
	roi_1.modifierPositionX(3);
	roi_1.modifierPositionY(0);
		//4-  Creez un objet de type Roi Noir à la position (3,7) ayant comme id D8.
	Roi roi_2("D8", "noir", 3, 7);

	//5-  Creez les huit pions blancs avec les coordonnées (i,1) i : 0-->7 et les id A2-->H2
	
	Pion p1("A2", "blanc", 0, 1);
	Pion p2("B2", "blanc", 1, 1);
	Pion p3("c2", "blanc", 2, 1);
	Pion p4("D2", "blanc", 3, 1);
	Pion p5("E2", "blanc", 4, 1);
	Pion p6("F2", "blanc", 5, 1);
	Pion p7("G2", "blanc", 6, 1);
	Pion p8("H2", "blanc", 7, 1);








	//6-  Creez les huit pions noirs avec les coordonnées (i,6) i : 0-->7 et les id A7-->H7
	

	Pion p_1("A7", "noir", 0, 6);
	Pion p_2("B7", "noir", 1, 6);
	Pion p_3("c7", "noir", 2, 6);
	Pion p_4("D7", "noir", 3, 6);
	Pion p_5("E7", "noir", 4, 6);
	Pion p_6("F7", "noir", 5, 6);
	Pion p_7("G7", "noir", 6, 6);
	Pion p_8("H7", "noir", 7, 6);

	//7-  Creez les deux tours blanches d'id "A1" et "H1" dans les positions respectives (0,0) et (7,0)
	
	Tour t1("A1", "blanc", 0, 0);
	Tour t2("H1", "blanc", 7, 0);
	//8-  Creez les deux tours noires  d'id "A8" et "H8" dans les positions respectives (0,7) et (7,7)
	
	Tour t_1("A8", "noir", 0, 7);
	Tour t_2("H8", "noir", 7, 7);

	//9-  Creez un Echiquier
	Echiquier echiquier;

	cout << "1";
	//10- Ajoutez toutes les pièces précidament définies à l'echiquier
	echiquier.ajouterRoi(roi_1, 0);
	echiquier.ajouterRoi(roi_2, 1);
	
	cout << "2";
	// ajout des pions blancs
	echiquier.ajouterPion(p1);
	echiquier.ajouterPion(p2);
	echiquier.ajouterPion(p3);
	echiquier.ajouterPion(p4);
	echiquier.ajouterPion(p5);
	echiquier.ajouterPion(p6);
	echiquier.ajouterPion(p7);
	echiquier.ajouterPion(p8);
	//ajouts des pions noirs
	cout << "3";
	echiquier.ajouterPion(p_1);
	echiquier.ajouterPion(p_2);
	echiquier.ajouterPion(p_3);
	echiquier.ajouterPion(p_4);
	echiquier.ajouterPion(p_5);
	echiquier.ajouterPion(p_6);
	echiquier.ajouterPion(p_7);
	echiquier.ajouterPion(p_8);
	cout << "4";

	// ajout des 2 tours noirs

	echiquier.ajouterTour(t1);
	echiquier.ajouterTour(t2);
	cout << "5";

	// ajout des 2 tours noirs

	echiquier.ajouterTour(t_1);
	echiquier.ajouterTour(t_2);
	cout << "6";

	//11-  Deplacer la piece d'id A2 à la position (0,2)  --Deplacement de Pion
	
	echiquier.deplacerPiece("A2", 0, 2);


	//12-  Deplacer le piece d'id H7 à la position (7,4)  --Deplacement du Pion
	
	echiquier.deplacerPiece("H7", 7, 4);


	//13-  Deplacer la piece d'id A2 à la position (0,4)  --Deplacement du Pion
	
	echiquier.deplacerPiece("A2", 0, 4);

	//14-  Deplacer la piece d'id H8 à la position (7,6)  --Deplacement de la Tour
	
	echiquier.deplacerPiece("H8", 7, 6);

	//15-  Deplacer la piece d'id H8 à la position (7,6)  --Deplacement de la Tour
	echiquier.deplacerPiece("H8", 7, 6);


	//16-  Enlever la piece d'id A2
	
	echiquier.enleverPion("A2");
	
	return 0;
}

