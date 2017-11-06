#include"Tour.h"
#include "Piece.h"

Tour::Tour() :Piece()
{

	


}
Tour::Tour(string id, string couleur, int positionX, int positionY) :Piece(id,  couleur,  positionX,  positionY)
{


}
bool Tour::estMouvementValide(int toX, int toY) 
{
	 int a = 8;

	if(Piece::estMouvementValide(toX, toY)==true)
	{

		if (( toX <a && toY == this->positionY_) || (toY <a && toX == this->positionX_))

			return true;
	

	}


	return false;

}
void Tour::deplacer(int toX, int toY)
{

	if (this->estMouvementValide(toX, toY) == true) {

		
		cout << "Deplacement de la tour de la position (" << this->positionX_ << "," << this->positionY_ << ")  a la position (" << toX<<"," << toY<<")"<<endl;

		this->modifierPositionX(toX);
		this->modifierPositionX(toY);
	}

	else
		cout << "Deplacement de la Tour non autorise" << endl;

}
