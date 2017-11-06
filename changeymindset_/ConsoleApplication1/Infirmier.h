


#ifndef INFIRMIER_H
#define INFIRMIER_H


#include <string>
using namespace std;

class Infirmier
{
    
     public:
	        Infirmier();
	        
	        Infirmier(string nom, string prenom, int nbreChambres);
	        ~Infirmier();
	        
	        string getNom() const;
	        
	        void setNom(string nom);
	         
	        string  getPrenom() const;
	        void setPrenom(string prenom);
	        
	        int getNbreChambres()const;
	        void setNbreChambres(int nbreChambres);

    private:

	        string nom_;
	        string prenom_;
	        int nbreChambres_;
};

#endif 
