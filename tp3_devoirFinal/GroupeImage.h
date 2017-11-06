/**************************************************
* Titre: Travail pratique #3
* Date: Septembre 2017
* Auteur:
Gnaga Dogbeda Georges   1870143
Mehdi Haddoud  1851658
**************************************************/

#ifndef TP3_GROUPEIMAGE_H
#define TP3_GROUPEIMAGE_H

#include <vector>
#include <string>

#include "Image.h"

class GroupeImage {
public:
    // Constructeur par defaut
    GroupeImage();
    ~GroupeImage();  
	GroupeImage* toutMettreEnNB();
	GroupeImage* toutMettreEnGris();
	GroupeImage* toutMettreEnCouleur();

    // Accesseur
    Image* obtenirImage(unsigned int indiceImage) const;
    unsigned int obtenirNombreImages() const;

    // Mutateurs
    bool ajouterImage(Image* image);
    bool retirerImage(const std::string& nom);

    // Surcharge d'operateurs
    GroupeImage& operator+=(Image* image);
    GroupeImage& operator-=(Image* image);
    
    friend std::ostream& operator<<(std::ostream& os, const GroupeImage& image);
    
    Image* operator[](const unsigned int& indice) const;
	GroupeImage *grouptoutEnregistre();
private:
    // Vecteur de pointeurs d'images
    std::vector<Image*> images_;
};


#endif //TP3_GROUPEIMAGE_H
