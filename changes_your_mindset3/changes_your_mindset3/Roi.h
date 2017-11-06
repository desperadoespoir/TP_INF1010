#pragma once
#ifndef ROI_H
#define ROI_H
#include<string>
#include "Piece.h"
using namespace std;


class Roi :public Piece
{
public:


	Roi();
	Roi(string id, string couleur, int positionX, int positionY);
	bool estMouvementValide(int toX, int toY);
	void deplacer(int toX, int toY);



};
#endif
