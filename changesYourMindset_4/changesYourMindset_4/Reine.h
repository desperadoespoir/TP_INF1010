#  pragma once
#ifndef REINE_H
#define REINE_H

#include "Piece.h"
#include "Pion.h"

using namespace std;
class Reine : public Piece
{

public:
	Reine();
	Reine(const string& id, const string& couleur, int positionX, int positionY);
	Reine(const Pion& pion);
	virtual ~Reine();
	bool estMouvementValide(int toX, int toY);
	virtual bool deplacer(int toX, int toY);
	virtual ostream&  afficher(ostream& stream) const;

};























#endif