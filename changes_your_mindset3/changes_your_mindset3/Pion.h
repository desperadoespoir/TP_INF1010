

#pragma once 
#ifndef PION_H
#define PION_H


#include<string>
#include "Piece.h"
class Pion :public Piece
{

	public:


	
		Pion();
		Pion(string id, string couleur, int positionX, int positionY);
		~Pion();
		bool estMouvementValide(int toX, int toY);
		void deplacer(int toX, int toY);
		void modifierPositionInitiale();
	private:

	bool estPositionInitiale_;


	};
#endif







