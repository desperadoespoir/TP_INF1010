
/**************************************************
* Titre: Travail pratique #4 - Main.cpp
* Date:
* Auteur:
**************************************************/

#include "Piece.h"
#include "Roi.h"
#include "Tour.h"
#include "Pion.h"
#include "Echiquier.h"

#include <string.h>
#include <iostream>

using namespace std;
//  revoir promouvoir;  et la construction de reine ;
int main()
{
	//1-  Creez les huit pions blancs avec les coordonnées (i,1) i : 0-->7 et les id A2-->H2
	Pion* p0=new Pion("A2", "Blanc", 0, 1);
	Pion* p1=new Pion("B2", "Blanc", 1, 1);
	Pion* p2=new Pion("C2", "Blanc", 2, 1);
	Pion* p3=new Pion("D2", "Blanc", 3, 1);
	Pion* p4=new Pion("E2", "Blanc", 4, 1);
	Pion* p5=new Pion("F2", "Blanc", 5, 1);
	Pion* p6=new Pion("G2", "Blanc", 6, 1);
	Pion* p7=new Pion("H2", "Blanc", 7, 1);
	
	//2-Creez les huit pions noirs avec les coordonnées (i,6) i : 0-->7 et les id A7-->H7
	Pion* p_0=new Pion("A7", "Noir", 0, 1);
	Pion* p_1=new Pion("B7", "Noir", 1, 1);
	Pion* p_2=new Pion("C7", "Noir", 2, 1);
	Pion* p_3=new Pion("D7", "Noir", 3, 1);
	Pion* p_4=new Pion("E7", "Noir", 4, 1);
	Pion* p_5=new Pion("F7", "Noir", 5, 1);
	Pion* p_6=new Pion("G7", "Noir", 6, 1);
	Pion* p_7=new Pion("H7", "Noir", 7, 1);



	//3-  Creez les deux tours blanches d'id "A1" et "H1" dans les positions respectives (0,0) et (7,0)
	Tour* tour1=new Tour("A1", "Blanc", 0, 0);
	Tour* tour2=new Tour("H1", "Blanc", 7, 0);

	//4-  Creez les deux tours noires  d'id "A8" et "H8" dans les positions respectives (0,7) et (7,7)
	
	Tour* tour_1=new Tour("A8", "Noir", 0, 7);
	Tour* tour_2=new Tour("H8", "Noir", 7, 7);

	//5-  Creez les Fous blanc et noirs
	
	Fou* fou1 = new Fou("F1", "Blanc", 2, 0);
	Fou* fou2 = new Fou("F2", "Blanc", 5, 0);
	
	Fou* fou_1=new Fou("F_1", "Noir", 2, 7);
	Fou* fou_2=new Fou("F_2", "Noir", 5, 7);


	//6-  Creez les deux reines E1 et E8	
	Reine* reine_1=new Reine("E1","Blanc",3,0);
	Reine *reine_2=new Reine("E8","Noir",3,7);

	
	
	
	//7-  Creez les deux rois D1 et D8
	Roi *roi_1=new Roi("D1","Blanc",4,0) ;
	Roi *roi_2=new Roi("D8","Noir",4,7)	 ;

	

	// 8- Creez un echiquier 
	Echiquier unEchiquier;

	cout << "----------AJOUT DES PIECES----------" << endl;
	//9- Ajoutez toutes les pièces précidament définies à l'echiquier	

	unEchiquier += p0;
	unEchiquier += p1;
	unEchiquier += p2;
	unEchiquier+=p3;
	unEchiquier+=p4;
	unEchiquier+=p5;
	unEchiquier+=p6;
	unEchiquier+=p7;

	unEchiquier+= p_0 ;
	unEchiquier+= p_1 ;
	unEchiquier+= p_2 ;
	unEchiquier+= p_3 ;
	unEchiquier+= p_4 ;
	unEchiquier+= p_5 ;
	unEchiquier+= p_6 ;
	unEchiquier+= p_7 ;

	unEchiquier += tour1;
	unEchiquier += tour2;



	unEchiquier +=tour_1 ;
	unEchiquier +=tour_2 ;

	unEchiquier += fou1;
	unEchiquier += fou2;
	unEchiquier += fou_1;
	unEchiquier += fou_2;
	

	unEchiquier += reine_1;
	unEchiquier += reine_2;

	unEchiquier += roi_1;
	unEchiquier += roi_2;


	cout << "----------TEST DES DEPLACEMENTS------------" << endl;
	//10-  Deplacer la piece d'id A2 à la position (0,2)  --Deplacement de Pion
	
	
	unEchiquier.deplacerPiece("A2",0, 2);
	   
		
	//11-  Deplacer le piece d'id H7 à la position (7,4)  --Deplacement du Pion
	unEchiquier.deplacerPiece("H7", 7,4);



	//12-  Deplacer la piece d'id A2 à la position (0,4)  --Deplacement du Pion
	unEchiquier.deplacerPiece("A2", 0, 4);

	//13-  Deplacer la piece d'id H8 à la position (7,6)  --Deplacement de la Tour
	unEchiquier.deplacerPiece("H8", 7, 6);

	//14-  Deplacer la piece d'id H8 à la position (7,6)  --Deplacement de la Tour
	unEchiquier.deplacerPiece("H8", 7, 6);

	//15-  Enlever la piece d'id A2 
	unEchiquier -="A2";

	cout << "----------TEST DES PROMOTIONS------------" << endl;
	
	//16- Promouvoir la piece d'id F6.
	unEchiquier.promouvoir("F6");

		//17- Promouvoir la piece d'id B2.	
		unEchiquier.promouvoir("B2");


	//18- Affichage de l'Echiquier
		cout << unEchiquier;
	//Si vous avez besoin de lancer avec un arret a la fin, faites ctrl+F5;

	return 0;
}

