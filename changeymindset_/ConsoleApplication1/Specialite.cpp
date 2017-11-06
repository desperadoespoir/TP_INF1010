
#include "specialite.h"




Specialite::Specialite() {

 domaine_ = "unknow";
	niveau_ = 0;

}

Specialite::Specialite(string domaine, int niveau) {
	domaine_ = domaine;
	niveau_ = niveau;
}


Specialite::~Specialite() {

}

 string Specialite::getDomaine() const {

	 return domaine_;
}
 void Specialite::setDomaine(string domaine) {
	 domaine_ = domaine;
}
 int Specialite::getNiveau() const {
	 
	 return niveau_;
}

 void Specialite::setNiveau(int niveau) {
	 niveau_ = niveau;
}



















