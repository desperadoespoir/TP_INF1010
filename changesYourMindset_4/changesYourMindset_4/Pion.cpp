
/********************************************
* Titre: Travail pratique #4 - Pion.cpp
* Date:
* Auteur:
*******************************************/

#include "Pion.h"


Pion::Pion():Piece("defaultId","blanc",0,0),estPositionInitiale_(true){
}


Pion::Pion(const string& id, const string& couleur, int positionX, int positionY) : Piece(id, couleur, positionX, positionY) {
	estPositionInitiale_ = true;
}

Pion::~Pion() {
}


bool Pion::obtenirEstPositionInitiale() const{
	return estPositionInitiale_;
}

void Pion::setEstPositionInitiale(bool estPositionInitiale) {
	estPositionInitiale_ = estPositionInitiale;
}


bool Pion::estMouvementValide(int toX, int toY) {
	if (Piece::estMouvementValide(toX, toY) == true)
	{
		if (this->obtenirCouleur() == "Blanc") {
			if (this->obtenirEstPositionInitiale() == true) {
				if (((toY - this->obtenirPositionY()) <= 2) && (toX == this->obtenirPositionX()))/*&& (toY > this->obtenirPositionY())*/{

					return true;
				}
			}
			else
			{
				if ((toY - this->obtenirPositionY()) <= 1 && (toX == this->obtenirPositionX())
					&& toY > this->obtenirPositionY()) {

					return true;
				}
			}
		}

	//}
	if (this->obtenirCouleur() == "Noir") {
		if (this->obtenirEstPositionInitiale() == true) {
			if (((toY - this->obtenirPositionY()) <= 2) && (toX == this->obtenirPositionX()) && (toY < this->obtenirPositionY())) {

				return true;
			}
		}
		else
		{
			if (((toY - this->obtenirPositionY()) <= 1) && (toX == this->obtenirPositionX())
				&& (toY < this->obtenirPositionY()))
			{
				return true;

			}


			else {
				return false;



			}
		}
	}
}


	
	
}

bool Pion::deplacer(int toX, int toY) {
	if (this->estMouvementValide(toX, toY)==true) {
		
		this->modifierPositionX(toX);
		this->modifierPositionX(toY);
		estPositionInitiale_ = false;	
		cout << " deplacement de la piece reussie" << endl;

		return true;
	}
	cout << "mouvement non valide" << endl;

	return false;
}



