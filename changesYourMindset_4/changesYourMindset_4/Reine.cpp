#include "Reine.h"


Reine::Reine():Piece()
{

	
}


Reine::Reine(const string& id, const string& couleur, int positionX, int positionY) : Piece(id, couleur, positionX, positionY)
{

}
Reine::Reine(const Pion& pion) :Piece(pion.obtenirId(), pion.obtenirCouleur(), pion.obtenirPositionX(), pion.obtenirPositionY())
{
	//pion.estPositionInitiale_ = true;
}


Reine :: ~Reine() 
{
	

}
bool Reine::estMouvementValide(int toX, int toY)
{
	if ((toX == toY) || ((toY - this->positionY_) == (this->positionX_ - toY)) || ((toX - this->positionX_) == (this->positionY_ - toY))|| (toY - this->positionY_) <= 1 && (toX == this->positionX_) && toY > this->positionY_)
	{
		return true;
	}

	 return false;

}

bool Reine::deplacer(int toX, int toY) 
{

	if (this->estMouvementValide(toX, toY) == true)
	{
		this->positionX_=toX;
		this->positionY_=toY;
		cout << " deplacement de la piece reussie" << endl;

		return true;
	}
	cout << "mouvement non valide" << endl;


	return false;
}
ostream& Reine::afficher(ostream& stream) const 
{

	stream << " Reine" << this->obtenirCouleur() << " d'id " << this->obtenirId() << " : " << endl;
	stream << "Position (" << this->obtenirPositionX() << ", " << this->obtenirPositionY() << ")" << endl;
	return stream;
 }











