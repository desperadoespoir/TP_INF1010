/**************************************************
* Titre: Travail pratique #2
* Date: Septembre 2017
* Auteur:
Gnaga Dogbeda Georges   1870143
Mehdi Haddoud  1851658
**************************************************/
#include "Image.h"
#include <iostream>
#include "Const.h"

using namespace std;

Image::Image():nomImage_("Image Vide"),nombrePixelEnHauteur_(1),nombrePixelEnLargeur_(1)
{
	pixels_ = new Pixel*[1];
	pixels_[0] = new Pixel[1];
}


Image::~Image()
{
	
}

Image::Image(const string& nomImage,unsigned int nombrePixelHauteur, unsigned int nombrePixelLargeur) :nomImage_(nomImage),
	nombrePixelEnHauteur_(nombrePixelHauteur), nombrePixelEnLargeur_(nombrePixelLargeur)
{
	pixels_ = new Pixel*[nombrePixelEnHauteur_];
	for (unsigned int i = 0; i < nombrePixelEnHauteur_;i++) {
		pixels_[i] = new Pixel[nombrePixelEnLargeur_];
	}
}


void Image::modifierNomImage(const string & nomImage) {
	nomImage_ = nomImage;
}


unsigned int Image::obtenirNombrePixelHauteur() const {
	return nombrePixelEnHauteur_;
}


unsigned int Image::obtenirNombrePixelLargeur() const {
	return nombrePixelEnLargeur_;
}

string Image::obtenirNomImage() const{
	return nomImage_;
}

bool Image::ajouterPixel(Pixel & pixel, unsigned int positionLargeur, unsigned int positionHauteur) {
	if (positionLargeur >= nombrePixelEnLargeur_ || positionHauteur >= nombrePixelEnHauteur_) {
		return false;
	}
	else {
		pixels_[positionHauteur][positionLargeur] = pixel;
		return true;
	}
}




void Image::doublerTailleEnHauteur(){
	nombrePixelEnHauteur_ *= 2;

	Pixel** imageTemp = new Pixel*[nombrePixelEnHauteur_];
	for (unsigned int i = 0;i < nombrePixelEnHauteur_ / 2;i++) {
		imageTemp[i] = pixels_[i];
	}

	for (unsigned int i = nombrePixelEnHauteur_ / 2;i < nombrePixelEnHauteur_;i++) {
		imageTemp[i] = new Pixel[nombrePixelEnLargeur_];
	}	

	delete[] pixels_;
	pixels_ = imageTemp;
	imageTemp = nullptr;

}


void Image::doublerTailleEnLargeur() {
	nombrePixelEnLargeur_ *= 2;

	for (unsigned int i = 0; i < nombrePixelEnHauteur_; i++) {
		Pixel* colonneImage = new Pixel[nombrePixelEnLargeur_];
		for (unsigned int j = 0;j < nombrePixelEnLargeur_ / 2; j++) {
			colonneImage[j] = pixels_[i][j];
		}
		delete[] pixels_[i];
		pixels_[i] = colonneImage;

	}

	
}


void Image::afficherImage() const {

	cout << "Affichage de l'image :  " << obtenirNomImage().c_str()<< endl;
	
	for (unsigned int i = 0; i < nombrePixelEnHauteur_; i++) {
		cout << "    ";
			for (unsigned int j = 0; j < nombrePixelEnLargeur_;j++) {
					pixels_[i][j].afficherPixel();
		    }
		cout << endl;
	}
}

Pixel Image::obtenirPixel(unsigned int positionLargeur,unsigned int positionHauteur) const {
 
	return pixels_[positionHauteur][positionLargeur];

}

void Image::augmenterTeintePixel(unsigned int positionLargeur, unsigned int positionHauteur, int  increment, char couleur) {

	if (couleur == 'R') {
		pixels_[positionHauteur][positionLargeur].modifierTeinteRouge(increment);
	}
	if (couleur == 'G') {
		pixels_[positionHauteur][positionLargeur].modifierTeinteVert(increment);
	}
	if (couleur == 'B') {
		pixels_[positionHauteur][positionLargeur].modifierTeinteBleu(increment);
	}

}


Image::Image(const Image& image)
{

nomImage_ =image.nomImage_;
nombrePixelEnHauteur_ = image.nombrePixelEnHauteur_;
nombrePixelEnLargeur_ = image.nombrePixelEnLargeur_;
pixels_ = image.pixels_;
}


Image& Image:: operator=(const Image& image)    
{
	Pixel** tableaux;										// creation d'un tableau temporaire 
	nomImage_ = image.nomImage_;
	nombrePixelEnHauteur_ = image.nombrePixelEnHauteur_;
	nombrePixelEnLargeur_ = image.nombrePixelEnLargeur_;

	tableaux= new Pixel*[nombrePixelEnHauteur_];			//	 l'initialisation avec les dimenssion de l'image en parametre 

	for (unsigned int i = 0; i < nombrePixelEnHauteur_; i++) {
		tableaux[i] = new Pixel[nombrePixelEnLargeur_];
	}
	
	for (unsigned int i = 0; i < nombrePixelEnHauteur_; i++)  // copie des pixels de l'image en parametre 
																//dans le nouveau tableau
	{

		for (unsigned int j = 0; j < nombrePixelEnLargeur_; j++) 
		{
			tableaux[i][j] = image.pixels_[i][j];
		}
	}


	for (unsigned int i = 0; i < nombrePixelEnHauteur_; i++)  // supression des pixels  de l'image courant  
	{
		delete[] pixels_[i];
	}
	delete[] pixels_;								
												// on reinitialise l'attribut pixels_  de l'image courant a nullptr
												//pour ensuite le faire pointer vers le nouveau tableaux creé
	pixels_ = nullptr;

	pixels_ = tableaux;							


	return *this;
}


	std::ostream& operator<<(std::ostream& out, const Image& image)
	{
		
		out << "Affichage de l'image :  " << image.obtenirNomImage().c_str() << endl;

		for (unsigned int i = 0; i < image.nombrePixelEnHauteur_; i++) {
			out << "    ";
			for (unsigned int j = 0; j < image.nombrePixelEnLargeur_; j++) {
				out << image.pixels_[i][j];
			}
			out << endl;
		}
		return out;
	}


	bool Image:: operator==(const Image& image)    //  compare 2 images
	{
		bool verite = false;				
		
		// verifie si les noms et tailles des images sont egaux
		if (nomImage_ == image.nomImage_ && nombrePixelEnHauteur_ == image.nombrePixelEnHauteur_ && nombrePixelEnLargeur_ == image.nombrePixelEnLargeur_)
			verite = true;

		for (unsigned int i = 0; i < image.nombrePixelEnHauteur_; i++)
		{
			//  verifie si les pixels qui composent les 2 images sont identiques   
			

			for (unsigned int j = 0; j < image.nombrePixelEnLargeur_; j++)
			{
				if (pixels_[i][j] == image.pixels_[i][j])
				{
					verite = true;
				}
				else
				{
					verite = false;
					return verite;
				}
			}

			

		}
		return verite;
	}


bool Image::operator==(const string& nom)     // compare le nom de l'image courant avec un nom quelconque
{
	if (nomImage_ == nom)
		return true;
	return false;
	
}


bool operator==(const string& nom, const Image& image)     
{
	if (nom==image.nomImage_ )    
		return true;

		return false;



}
