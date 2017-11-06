
#ifndef Pile_H
#define Pile_H

#include <vector>
#include <iostream>
using namespace std;

template<typename T,typename S>
class Pile {

	public:

		Pile();
		~Pile();
		bool empiler(const T & element, const S & element_2);
		bool depiler();
		bool  estVide();
		bool  estPleine();
		T & obtenirSommet();

		int obtenirTaille();
		


	private:

	int	capacite_;
	int nonbreElements_;
	T*elements_[6];
	S*elements_2_[6];
	
};



template<typename T,typename S>
  Pile<T,S>::Pile()
{
	  capacite_ = 6;

	 nonbreElements_ = 0;
	
	
	for (int i = 0; i < capacite_; i++)
	{
		elements_[i] = nullptr;
		elements_2_[i] = nullptr;
	}


	for (int i = 0; i < capacite_; i++)
	{
		elements_[i] = new T;
		elements_2_[i] = new S;
	}

}

 template < typename T, typename S>
 Pile<T, S>::~Pile()
{
	for (int i = 0; i < capacite_; i++)
	{
		delete[] elements_[i];
		delete[] elements_2_[i];
	}
}


 template < typename T, typename S>
 
 bool Pile<T, S>::empiler(const T &  element, const S & element_2)
{
	//for (int i = 0; i < capacite_; i++) {

		if (estPleine() == false && (nonbreElements_<=6))
		
		{
			(*elements_[nonbreElements_]) = element;
			(*elements_2_[nonbreElements_])= element_2;
			
			cout << "tache  ajoutee sur la  pile :" << *elements_[nonbreElements_] << " d'une duree de " << *elements_2_[nonbreElements_] << endl;
			nonbreElements_++;
			return true;
		}
		
		else {
			cout << "la pile est pleine !" << endl;

			return false;
		}

}


 template < typename T, typename S>

 bool Pile<T, S>:: depiler()
{

		 for(int i =( obtenirTaille() - 1); i>=0 ; i--){

				 cout << "depillage de la tache : " << *elements_[i] << " d'une duree de " << *elements_2_[i] << endl;

				 delete	elements_[i];
				 delete elements_2_[i];

				 elements_[i] = nullptr;
				 elements_2_[i] = nullptr;
				 nonbreElements_--;
			 

			 }

				
			 cout << "la pile est vide !" << endl;

			 return true;
		 
	 }
	
	

 
 template < typename T, typename S>

bool  Pile<T, S>::estVide()
{
	
	if (nonbreElements_ == 0)
		return true;

	return false;

}

template < typename T, typename S>
bool Pile<T, S>:: estPleine()
{

	if (nonbreElements_ == capacite_)
		return true;

	return false;
}

template < typename T, typename S>
T & Pile<T, S>::obtenirSommet()
{

	return elements_[capacite_ - 1];

}

template < typename T, typename S>
int Pile<T, S>::obtenirTaille()
{

	
	return nonbreElements_;
}

#endif



















/*

template < typename T,typename S >
class Pile
{
public:
	Pile();

	bool empiler(const T &element, const S &element2);
	bool estPleine();
	bool depiler();
	bool estVide();
	T& obtenirSommet();
	int obtenirTaille();

private:
	T* cases_[14];
	S* case_[14];
	int capacite_;
	int nombreElements_;
};

template < typename T, typename S>
Pile<T,S>::Pile()
{	
	
	capacite_ = 6;
	nombreElements_ = 0;
}


template < typename T, typename S >
bool Pile<T,S>::empiler(const T &element, const S &element2)
{
	if (nombreElements_ < capacite_)
	{

		cases_[nombreElements_] = new T(element);
		case_[nombreElements_] = new S(element2);
			cout << "Tache ajoutee sur la pile: " << *cases_[nombreElements_] << " d'une duree de " << *case_[nombreElements_] << endl;
			nombreElements_++;
		return true;
	}
	
	else {
		estPleine();
		return false;
	}
}

template < typename T, typename S>
bool Pile<T,S>::estPleine()
{
	if (nombreElements_>= capacite_) {
		cout << " La pile est pleine!" << endl;
			return true;
	}
	else {
		return false;
	}
}

template < typename T, typename S>
bool Pile<T, S>::estVide()
{
	if (nombreElements_ == 0) {
		cout << "La pile est vide!" << endl;
		return true;
	}
	else {
		return false;
	}

}
template < typename T, typename S>
bool Pile<T,S>::depiler()
{
	if (nombreElements_ > 0)
	{
		cases_[obtenirTaille()] = cases_[obtenirTaille() + 1];
		case_[obtenirTaille()] = case_[obtenirTaille() + 1];
		nombreElements_--;
		cout << "Depilage de la tache " << *cases_[obtenirTaille()] << " d'une duree de " << *case_[obtenirTaille()] << endl;
		return true;
	}
	else {
		estVide();
		return false;
	}
}
template < typename T, typename S>
T& Pile<T, S>::obtenirSommet()
{
	return *cases_[nombreElements_-1];
}

template < typename T, typename S>
int Pile<T, S>::obtenirTaille()
{
	return nombreElements_;
}

#endif  */