#include "Piece.h"


Piece::Piece() : id_("id_defaut"), couleur_(" couleur"), positionX_(0), positionY_(0)
{



}
Piece::Piece(string id, string couleur, int positionX, int positionY) :id_(id), couleur_(couleur), positionX_(positionX), positionY_(positionY)
{


}


// destructeur
Piece::~Piece()
{


}

string Piece::obtenirId() const

{
	return id_;

}
void Piece:: modifierId(string id)
{
	id_ = id;
	
}

string Piece:: obtenirCouleur() const
{

	return couleur_;




}
void Piece::modifierCouleur(string couleur)
{

	couleur_ = couleur;


}

int Piece::obtenirPositionX() const
{
	return positionX_;



}
void Piece::modifierPositionX(int x) 
{

	positionX_ = x;

}

int Piece:: obtenirPositionY() const 
{
	return positionY_;

}
void Piece::modifierPositionY(int y) {

	positionY_ = y;



}

bool Piece:: estMouvementValide(int toX, int toY) 
{
	int a = 8;
	if ((toX!=positionX_||toY!=positionY_) && toX <a  && toY < a)
	//if (((toX > positionX_ && toY == positionY_) || (toY > positionY_ && toX == positionX_) || (toX > positionX_ && toY > positionY_)) && (toX <a  && toY < a))
		return true;

	cout << "Deplacement de la piece non autorise" << endl;
	return false;


}
