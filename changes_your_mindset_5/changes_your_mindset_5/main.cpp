//#include <iostream>
#include <string>
#include "Pile.h"

using namespace std;

int main()
{
    string taches[7] = {"MENAGE", "ETUDE", "EPICERIE", "SPORT", "BENEVOLAT", "LECTURE", "AUTRE"};
    double durees[7] = {1.2, 3.5, 0.8, 2.5, 1.8, 0.75, 10};
    // Creer une pile de type "paires STL de (string, double)"
	Pile<string,double> pile;
	

    cout << "Empilage des taches..." << endl;
    // Ajouter les 7 paires correspondant aux tâches et durées ci-haut sur la pile.
    // Vous pouvez ici utiliser une boucle for standard de i = 0 à 7
	for (int i = 0; i < 7; i++)

	{
		//if (pile.estPleine() == false) {
			pile.empiler(taches[i], durees[i]);
			//cout << "tache  ajoutee sur la  pile :" << taches[i] << " d'une duree de " << durees[i] << endl;
		//}
	}
    // Le programme doit afficher: "Tache ajoutee sur la pile: [nom de la tâche] d'une duree de [durée]"
    //                         ou: "La pile est pleine!"
    //                         selon le succès ou non de l'ajout.

	cout << endl;

    cout << "Depilage des taches..." << endl;
    // Retirer les 7 paires de (tâche,durée) de la pile, ***en assumant que vous ne connaissez pas le nombre d'éléments dans la pile***
    // (utilisez le booléen retourné par la fonction depiler())
	//if(pile.estVide()==false)
	
	
		pile.depiler();
	
	
	// Le programme doit afficher: "Depilage de la tache: [nom de la tâche] d'une duree de [durée]"
    //                         ou: "La pile est vide!"
    //                         selon le cas.


    system("pause");

	return 0;
}