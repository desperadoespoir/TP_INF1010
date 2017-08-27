#include "Emission.h"
#include "Chaine.h"
#include <fstream>
#include <iostream>

// Constructeur
Emission::Emission (string titre,
                  string animateur,
                  string chaineName,
                  string chaineCodePostal,
                  string chaineAddress)
:Chaine(chaineName,chaineCodePostal,chaineAddress) {
    // Emission information
    this->titre = titre;
    this->animateur = animateur;
}

// Setters
void Emission::setTitre(string titre) {
    this->titre = titre;
}
void Emission::setAnimateur(string animateur) {
    this->animateur = animateur;
}


// Getters
string Emission::getTitre() {
    return this->titre;
}

string Emission::getAnimateur() {
    return this->animateur;
}

// Enregistrer l'Emission dans un fichier
void Emission::saveEmission (string fileName) {

    ofstream outfile (fileName.c_str(), std::ofstream::binary | std::fstream::app);
    // write to outfile
    outfile<<this->titre <<","
                   <<this->animateur <<","
                   <<getChaineName() << ","
                   <<getChaineCodePostal() << ","
                   <<getChaineAddress() <<"\n";

    outfile.close();
}

//  
void Emission::lireMot(string &chaine, int &i, string &line) {
	for (i = i + 1; i < line.length(); i++) {
		if (line[i] != ',') {
			chaine += line[i];
		}
		else {
			break;
		}
	}
}

// Trouver un Emission avec son nom dans la base de données DB
Emission* Emission::trouverEmission(string DB, string titre) {

	ifstream fichier(DB.c_str(), ios::in); // Ouvrir le fichier "DB.txt"
	Emission*tmp = NULL;

	if (fichier)
	{
		string line;
		// Lire les Emissions, un Emission par ligne dans la base de données (DB.txt)
		while (getline(fichier, line)) {
			string titreDB;
			// Récupérer le nom de l'Emission
			int i = -1;
			this->lireMot(titreDB, i, line);


			// Si l'Emission qu'on lit actuellement est celui qu'on cherche
			if (titreDB == titre) {

				// Récupérer le nom de l'animateur
				string animateurDB;
				this->lireMot(animateurDB, i, line);

				//  Récupérer le nom de l'éditeur
				string chaineNameDB;
				this->lireMot(chaineNameDB, i, line);

				// Récupérer le code postale de l'éditeur
				string chaineCodePostalDB;
				this->lireMot(chaineCodePostalDB, i, line);

				// Récupérer l'addresse de l'éditeur
				string chaineAddressDB;
				this->lireMot(chaineAddressDB, i, line);

				// Créer un objet de type Emission avec les informations récupérées
				Emission *a = new Emission(titreDB, animateurDB, chaineNameDB, chaineCodePostalDB, chaineAddressDB);
				// Fermer la base de données
				fichier.close();
				// Retourner l'Emission sélectionné
				return a;
			}
		}
		// Fermer la base de données
		fichier.close();
	}
	// Si l'Emission est innexistant, on retourne NULL
	return NULL;

}


// Afficher l'Emission
void Emission::afficher() {
    std::cout << "Titre : " << this->titre << std::endl;
    std::cout << "Animateur : " << this->animateur << std::endl;
    std::cout << "Chaine name : " << getChaineName() << std::endl;
    std::cout << "Chaine code postale : " << getChaineCodePostal() << std::endl;
    std::cout << "Chaine address : " << getChaineAddress() << std::endl;
}
