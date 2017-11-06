#include "Roi.h"


Roi::Roi():Piece()
{

	couleur_ = "blanc";

}
Roi::Roi(string id, string couleur, int positionX, int positionY):Piece(id, couleur, positionX, positionY)
{
	

}

bool Roi:: estMouvementValide(int toX, int toY) 
{
	 int a = 8 ;

	if (Piece::estMouvementValide(toX, toY)==true)
	{

		if ((toX == this->positionX_+1 && toY == this->positionY_ )|| (toY == this->positionY_+1 && toX == this->positionX_) || (toX == this->positionX_ - 1 && toY == this->positionY_) || (toY == positionY_-1 && toX == this->positionX_))
			

			return true;

	}


	return false;

}
void Roi:: deplacer(int toX, int toY) 
{

	if(this->estMouvementValide(toX,toY)==true)
	{


			cout << "Deplacement du Roi de la position (" << this->positionX_ << "," << this->positionY_ << ") a la position (" << toX << "," << toY << ")" << endl;

		this->modifierPositionX(toX);
		this->modifierPositionX(toY);
	}

	else
		cout << "Deplacement du Roi non autorise" << endl;

}
