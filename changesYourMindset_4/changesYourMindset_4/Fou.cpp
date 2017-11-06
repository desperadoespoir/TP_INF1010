#include "Fou.h"
Fou:: Fou()
{
}
Fou::Fou(const string& id, const string& couleur, int positionX, int positionY) : Piece(id, couleur, positionX, positionY)
{
	this->id_ = id;
	this->couleur_ = couleur;
	this->positionX_ = positionX;
	this->positionY_ = positionY;
}
Fou::Fou(const Pion& pion) :Piece(pion.obtenirId(),pion.obtenirCouleur(),pion.obtenirPositionX(),pion.obtenirPositionY())
{
	



}

// Destructeur

Fou ::~Fou() 
{

}

bool Fou:: estMouvementValide(int toX, int toY) const
{
	if (Piece::estMouvementValide(toX, toY) == true)
	{
		if ( (toX == toY) || ((toY - this->positionY_) == (this->positionX_ - toY)) || ((toX - this->positionX_) == (this->positionY_ - toY)) )
		{	
		   cout << "Deplacement du Fou de la position  ( "<< this->obtenirPositionX() << "," << this->obtenirPositionY() << " ) a la position (" << toX << "," << toY << ")" << endl;

		return true;
		}
		
			
	}
	return false;



}

bool Fou::deplacer(int toX, int toY)
{

	if (this->estMouvementValide(toX, toY) == true)
	{
		this->positionX_=toX;
		this->positionY_=toY;
		cout <<" deplacement de la piece reussie" << endl;
		return true;
	}
	cout << "mouvement non valide" << endl;

	return false;

}
ostream& Fou :: afficher(ostream& stream) const 
{

		stream << "Fou" << this->obtenirCouleur() << " d'id " << this->obtenirId() << " : " << endl;
		stream << "Position (" << this->obtenirPositionX() << ", " << this->obtenirPositionY() << ")" << endl;
		return stream;
	
	 
	
}

 
