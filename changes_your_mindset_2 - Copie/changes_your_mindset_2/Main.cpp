/**************************************************
 * Main.cpp
 * Date: 5 février 2017
**************************************************/

#include "Specialite.h"
#include "Medecin.h"
#include "Infirmier.h"
#include "Personnel.h"
#include "Hopital.h"
#include <string>
#include <iostream>

using namespace std;
/**
TODO: Répondre au questions
1. Quelle est l’utilité de l’opérateur = et du constructeur par copie ?
   A COMPLETER...
2. Dans quel cas est-il absolument nécessaire de les implémenter ?
   A COMPLETER...
3. Qu’est-ce qui différencie l’opérateur = du constructeur par copie ?
   A COMPLETER...
**/

 
int main()
{
	// C'est a vous de voir si vous devez allouer dynamiquement ou non les elements

	//1-  Creez 11 objets du type Infirmier � l'aide du constructeur par param�tre avec des valeurs de votre choix
	// A COMPLETER...
	
	Infirmier * john;
	Infirmier * tremblay;
	Infirmier *  sylvie;
	Infirmier * amelie;
	Infirmier * maxime;
	Infirmier * laflamme;
	Infirmier * julie;
	Infirmier * eric;
	Infirmier * roger;
	Infirmier * linda;
	Infirmier * latour;
	//Infirmier * emilie;
	
	
	john = new Infirmier("john", "doe", 10); 
	tremblay=new Infirmier("tremblay", "giles", 2);
	sylvie= new Infirmier ("sylvie", "labe", 3);
	amelie=new Infirmier  ("Amelie", "labelle", 4);
	maxime=new Infirmier("maxime", "lamontagne", 5);
	laflamme=  new Infirmier ("laflamme", "john", 6);
	julie=  new Infirmier ("julie", "lamoureux",7);
	eric= new Infirmier("eric", "langlais", 8);
	roger= new Infirmier ("roger", "lamarre", 9);
	linda= new Infirmier("linda", "laplante", 10);
	latour= new Infirmier("latour", "hug",11 );
	//emilie= new Infirmier("emilie", "lessatrd", 12);

	//2-  Creez deux objets du type Personnel � l'aide du constructeur par d�faut
	// A COMPLETER...

	Personnel* p1;
	Personnel *p2;


	//3 - Creez deux objects de type Hopital qui vont prendre chacun en parametre le nom de l'hopital et le personnel assigné
	// Hopital Sacré-Coeur de Montréal
	// Hôpital Jean-Talon
	// A COMPLETER...

	Hopital Sacre_Coeur_de_Montreal("Sacré Coeurde Montréal", p1);
	Hopital Jean_Talon(" Hôpital Jean-Talon", p2);



	//4-  Ajoutez les 6 objets du type Infimier � au personnel de l'Hôpital Sacré-Coeur de Montréal
	// A COMPLETER...

	Sacre_Coeur_de_Montreal.obtenirPersonnel().ajouterInfirmier(john);

	Sacre_Coeur_de_Montreal.obtenirPersonnel().ajouterInfirmier(tremblay);

	Sacre_Coeur_de_Montreal.obtenirPersonnel().ajouterInfirmier(sylvie);
	
	Sacre_Coeur_de_Montreal.obtenirPersonnel().ajouterInfirmier(amelie);

	Sacre_Coeur_de_Montreal.obtenirPersonnel().ajouterInfirmier(maxime);

	Sacre_Coeur_de_Montreal.obtenirPersonnel().ajouterInfirmier(laflamme);


	//5-  Ajoutez les 5 objets qui restent du type Infimier � au personnel de l'Hôpital Jean-Talon
	// A COMPLETER...
	
	Jean_Talon.obtenirPersonnel().ajouterInfirmier(julie);

	Jean_Talon.obtenirPersonnel().ajouterInfirmier(eric);

	Jean_Talon.obtenirPersonnel().ajouterInfirmier(roger);

	Jean_Talon.obtenirPersonnel().ajouterInfirmier(linda);

	Jean_Talon.obtenirPersonnel().ajouterInfirmier(latour);

	//Jean_Talon.obtenirPersonnel().ajouterInfirmier();
	
	//6-  Creez 7 objets du type Specialite � l'aide du constructeur par param�tre avec des valeurs de votre choix
	// Specialites : Chirurgie, Demartologie, Gastrologie, Sport, Podologie, Pediatrie, Psychiatrie
	// A COMPLETER...

	Specialite * Chirurgie;
	Specialite * Demartologie;
	Specialite * Gastrologie;
	Specialite * Sport;
	Specialite * Podologie;
	Specialite * Pediatrie;
	Specialite * Psychiatrie;


	//7- Creez 5 autres objets du type Medecin � l'aide du constructeur par param�tre avec des valeurs de votre choix
	//  Franc : en Chirurgie
	// Dr. Sherlock : en Demartologie
	// Dr. Holmes : en Gastrologie
	// Dr. Jean : en Podologie
	// Dr. Jules : en Pediatrie
	// A COMPLETER...





	Medecin* Franc;
	Medecin* Sherlock;
	Medecin* Holmes;
	Medecin* Jean;
	Medecin* Julie;

	
Franc= new	Medecin ("franc", 5, Chirurgie);
Sherlock= new Medecin ("sherlock", 9, Demartologie);
Holmes= new Medecin ("holmes", 14, Gastrologie);
 Jean = new Medecin ("jean", 15, Podologie);
Julie = new	Medecin	("jules", 8, Pediatrie);

	//8- Ajoutez les medecins : parmis le personnel de l'hopital Sacré-Coeur : 
	// Dr. Franc, Dr. Sherlock, Dr. Holmes, Dr. Jean, Dr. Jules

Sacre_Coeur_de_Montreal.obtenirPersonnel().ajouterMedecin(Franc);

Sacre_Coeur_de_Montreal.obtenirPersonnel().ajouterMedecin(Sherlock);

Sacre_Coeur_de_Montreal.obtenirPersonnel().ajouterMedecin(Holmes);

Sacre_Coeur_de_Montreal.obtenirPersonnel().ajouterMedecin(Jean);

Sacre_Coeur_de_Montreal.obtenirPersonnel().ajouterMedecin(Julie);



	//9- Creez 2 autres objets du type Medecin � l'aide du constructeur par param�tre avec des valeurs de votre choix
	// Dr. Kyle : en Sport
	// Dr. House : en Psychiatrie
	// A COMPLETER...

	Medecin * Kyle;
	Medecin * House;

	Kyle = new Medecin("Kyle", 21, Sport);
	House = new Medecin("House",25, Psychiatrie);

	
	//10- Creer un autre medecin Sherlock en utilisant l'opérateur = et en utilisant le medecin existante Sherlock.
	// Le horaire du deuxieme Sherlock devrai ensuite etre modifie pour une valeur differnte du premier Sherlock
	// A COMPLETER...

	Medecin* Sherlock;
	Sherlock = new Medecin("sherlock", 20, Demartologie);
	
	Sherlock = Sherlock;
	// Creer un autre medecin Holmes en utilisant le constructeur de copie et en utilisant le medecin existante Holmes.
	// L'horaire du deuxieme Holmes devrai ensuite etre modifie pour une valeur differnte du premier Holmes
	// A COMPLETER...

	//Medecin* Holmes;
	//Holmes = new Medecin ("Holmes", 45,Gastrologie );

	//Holmes (Holmes);
	
	//11- Ajoutez les medecins : parmis le personnel de l'hopital Jean Talen : 
	// Dr. Sherlock , Dr. Holmes , Dr. Kyle, Dr. House
	// Dr. Sherlock et Dr. Holmes sont les deux objets crée à partir de l'opératteur =
	// A COMPLETER...

	
	//12- Retirer le medecin Jean et deux infirmiers de l'hopital Sacré-Coeur et ajouter les
	// a l'hopital Jean-talon

	//13- Faites afficher l'hopital Sacré-Coeur puis Jean-Talon
	// A COMPLETER...
	Sacre_Coeur_de_Montreal.obtenirPersonnel().afficherMedecins();
	Sacre_Coeur_de_Montreal.obtenirPersonnel().afficherInfirmiers();
	

	return 0;
}