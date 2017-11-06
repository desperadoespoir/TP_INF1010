#pragma once
#ifndef TOUR_H
#define TOUR_H
#include<string>
#include "Piece.h"
using namespace std;


class Tour :public Piece
{
public :


	Tour();
	Tour(string id, string couleur, int positionX, int positionY);
	bool estMouvementValide(int toX, int toY);
	void deplacer(int toX, int toY);



};
#endif