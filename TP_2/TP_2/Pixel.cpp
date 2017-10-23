/**************************************************
* Titre: Travail pratique #2
* Date: Septembre 2017
* Auteur:
Gnaga Dogbeda Georges   1870143
Mehdi Haddoud  1851658
**************************************************/


#include "Pixel.h"
#include <iostream>
#include "Const.h"

using namespace std;

Pixel::Pixel() : tauxRouge_(0),tauxVert_(0),tauxBleu_(0)
{
}


Pixel::~Pixel()
{
}

Pixel::Pixel(unsigned int tauxRouge, unsigned int tauxVert, unsigned int tauxBleu) :
	tauxRouge_(tauxRouge), tauxVert_(tauxVert), tauxBleu_(tauxBleu)
{
}


unsigned int Pixel::obtenirTauxRouge() const {
	return tauxRouge_;
}

unsigned int Pixel::obtenirTauxVert() const {
	return tauxVert_;
}

unsigned int Pixel::obtenirTauxBleu() const {
	return tauxBleu_;
}

void Pixel::modifierTeinteRouge(int incrementRouge) {
	if (incrementRouge < 0) {
		if (abs(incrementRouge) >= tauxRouge_) {
		    tauxRouge_ = MIN_CONCENTRATION_COULEUR;
		}
		else {
		    tauxRouge_ -= incrementRouge;
		}
	}
	else {
		unsigned int temp = tauxRouge_ + incrementRouge;
		if (temp >= MAX_CONCENTRATION_COULEUR) {
		    tauxRouge_ = MAX_CONCENTRATION_COULEUR;
		}
		else {
		    tauxRouge_ = temp;
		}
	}
}

void Pixel::modifierTeinteVert( int incrementVert) {
	if (incrementVert < 0) {
		if (abs(incrementVert) >= tauxVert_) {
		    tauxVert_ = MIN_CONCENTRATION_COULEUR;
		}
		else {
		    tauxVert_ -= incrementVert;
		}
	}
	else {
		unsigned int temp = tauxVert_ + incrementVert;
		if (temp >= MAX_CONCENTRATION_COULEUR) {
		    tauxVert_ = MAX_CONCENTRATION_COULEUR;
		}
		else {
		    tauxVert_ = temp;
		}
	}
}

void Pixel::modifierTeinteBleu( int incrementBleu) {
	if (incrementBleu < 0) {
		if (abs(incrementBleu) >= tauxBleu_) {
		    tauxBleu_ = MIN_CONCENTRATION_COULEUR;
		}
		else {
		    tauxBleu_ -= incrementBleu;
		}
	}
	else {
		unsigned int temp = tauxBleu_ + incrementBleu;
		if (temp >= MAX_CONCENTRATION_COULEUR) {
		    tauxBleu_ = MAX_CONCENTRATION_COULEUR;
		}
		else {
		    tauxBleu_ = temp;
		}
	}
}




void Pixel::afficherPixel() const
{
	if (tauxVert_ == 0 && tauxBleu_ == 0 &&  tauxRouge_ !=0) {
		cout << 'R';

	}
	else if (tauxRouge_ == 0 && tauxBleu_ == 0 && tauxVert_ != 0) {
		cout << 'G';

	}
	else if (tauxRouge_ == 0 && tauxVert_ == 0 && tauxBleu_ != 0) {
		cout << 'B';

	}
	
	else {
		cout << 'Q';
	}
}


char Pixel::obtenirCouleur()  const
{

	if (tauxVert_ == 0 && tauxBleu_ == 0 && tauxRouge_ != 0) {
		return 'R';

	}
	else if (tauxRouge_ == 0 && tauxBleu_ == 0 && tauxVert_ != 0) {
		return 'G';

	}
	else if (tauxRouge_ == 0 && tauxVert_ == 0 && tauxBleu_ != 0) {
		return 'B';

	}
	
	else {
		return 'Q';
	}
}


std::ostream& operator<<(std::ostream & out, const Pixel& pixel) 
{
	if (pixel.obtenirTauxVert() == 0 && pixel.obtenirTauxBleu() == 0 && pixel.obtenirTauxRouge() != 0) {
		out << 'R';

	}
	else if (pixel.obtenirTauxRouge() == 0 && pixel.obtenirTauxBleu() == 0 && pixel.obtenirTauxVert() != 0) {
		out << 'G';

	}
	else if (pixel.obtenirTauxRouge() == 0 && pixel.obtenirTauxVert() == 0 && pixel.obtenirTauxBleu() != 0) {
		out << 'B';

	}
	
	
	else {
		out << 'Q';
	}

	return out;

}


bool Pixel::operator==(Pixel& pixel) 
{
	if (tauxBleu_ == pixel.tauxBleu_ && tauxRouge_ == pixel.tauxRouge_ && tauxVert_ == pixel.tauxVert_)
		return true;

	return false;

}


bool Pixel:: operator==(const char& caractere) 
{
	if (this->obtenirCouleur() == caractere)
		return true;

	return false;
	
}

bool operator==(const char& caractere, const Pixel& pixel) 
{
	if (caractere == pixel.obtenirCouleur())
		return true;
	return false;
}
