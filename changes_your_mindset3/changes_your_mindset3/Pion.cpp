#include "Pion.h"




Pion::Pion() :Piece()
{


}
Pion::Pion(string id, string couleur, int positionX, int positionY) : Piece(id, couleur, positionX, positionY), estPositionInitiale_(true)
{


}
Pion::~Pion() 
{


}
void Pion::modifierPositionInitiale() {

	estPositionInitiale_ = false;
}

bool Pion::estMouvementValide(int toX, int toY)
{
	const int a = 8;

	
	

		if (this->couleur_ == "blanc")
		{

			if (this->estPositionInitiale_==true)
			if (Piece::estMouvementValide(toX, toY))
			{

				if (toY > this->positionY_ && toY <= this->positionY_ + 2 && toX == this->positionX_)
					return true;
			}

			if (this->estPositionInitiale_ == false)
				if (toY = this->positionY_ + 1 && toX == this->positionX_)
					return true;

		}


		if (this->couleur_ =="noir" )
		{

			if (this->estPositionInitiale_ == true)
				if (Piece::estMouvementValide(toX, toY))
				{

					if (toY < this->positionY_ && toY >= this->positionY_ - 2 && toX == this->positionX_)
						return true;
				}

			if (this->estPositionInitiale_ == false)
				if (toY = this->positionY_ - 1 && toX == this->positionX_)
					return true;

		}


	return false;



	
}
void Pion::deplacer(int toX, int toY) 
{

	if (this->estMouvementValide(toX, toY) == true) {


		cout << "Deplacement du Pion de la position (" << this->positionX_ << "," << this->positionY_ << ") a la position (" << toX << "," << toY << ")" << endl;

		this->modifierPositionX(toX);
		this->modifierPositionX(toY);
		this->modifierPositionInitiale();
	}

	else
		cout << "Deplacement du Pion non autorise" << endl;

}













