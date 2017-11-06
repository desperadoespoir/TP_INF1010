/********************************************
 * Titre: Travail pratique #1 - Medecin.cpp
 * Date: 10 janvier 2017
 * Auteur:
 *******************************************/

#include"Medecin.h"



Medecin::Medecin() {
	nom_ = "unknow";
	horaires_ = 0;
	specialite_ = nullptr;
}

Medecin::Medecin(string nom, int horaires, Specialite* uneSpecialite) {
	nom_ = nom;
	horaires_ = horaires;
	specialite_ = new Specialite  ;
	specialite_ = uneSpecialite;
}


// Methodes d'acces
string Medecin::obtenirNom() {
	return nom_;
}
int Medecin::obtenirHoraires() {
	return horaires_;
}
Specialite Medecin::obtenirSpecialite() {
	
	return *specialite_;

}

// Methodes de modification
void Medecin::modifierNom(string nom) {
	nom_ = nom;
}
void Medecin::modifierHoraires(int horaires) {
	horaires_= horaires;
}

void Medecin::modifierSpecialite(Specialite* specialite){
	specialite_ = nullptr;
	specialite_ = new Specialite;
	specialite_ = specialite;
   
}























