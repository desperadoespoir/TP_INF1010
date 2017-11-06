


#ifndef SPECIALITE_H
#define  SPECIALITE_H
 
# include <string>
using namespace std;


class Specialite {

	public:

		Specialite();
		Specialite(string domaine, int niveau);
		~Specialite();

		string getDomaine() const;
		void setDomaine(string domaine);
		int getNiveau() const ;
		void setNiveau(int niveau);
		
	private:

		string domaine_;
		int niveau_;


};

#endif









