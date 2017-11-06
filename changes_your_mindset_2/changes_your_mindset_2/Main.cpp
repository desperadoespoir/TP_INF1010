/**************************************************
 * Main.cpp
 * Date: 5 février 2017
**************************************************/

/*#include "Specialite.h"
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

 /*
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
	Personnel* p1= nullptr;
	Personnel *p2=nullptr;


	//3 - Creez deux objects de type Hopital qui vont prendre chacun en parametre le nom de l'hopital et le personnel assigné
	// Hopital Sacré-Coeur de Montréal
	// Hôpital Jean-Talon
	// A COMPLETER...

	Hopital Sacre_Coeur_de_Montreal("Sacré Coeurde Montréal", p1);
	Hopital Jean_Talon(" Hôpital Jean-Talon", p2);

	cout << "1";

	//4-  Ajoutez les 6 objets du type Infimier � au personnel de l'Hôpital Sacré-Coeur de Montréal
	// A COMPLETER...

	Sacre_Coeur_de_Montreal.obtenirPersonnel().ajouterInfirmier(john);

	Sacre_Coeur_de_Montreal.obtenirPersonnel().ajouterInfirmier(tremblay);

	Sacre_Coeur_de_Montreal.obtenirPersonnel().ajouterInfirmier(sylvie);
	
	Sacre_Coeur_de_Montreal.obtenirPersonnel().ajouterInfirmier(amelie);

	Sacre_Coeur_de_Montreal.obtenirPersonnel().ajouterInfirmier(maxime);

	Sacre_Coeur_de_Montreal.obtenirPersonnel().ajouterInfirmier(laflamme);
	cout << "2";

	//5-  Ajoutez les 5 objets qui restent du type Infimier � au personnel de l'Hôpital Jean-Talon
	// A COMPLETER...
	
	Jean_Talon.obtenirPersonnel()+=julie;

	Jean_Talon.obtenirPersonnel()+=eric;

	Jean_Talon.obtenirPersonnel()+=roger;

	Jean_Talon.obtenirPersonnel()+=linda;

	Jean_Talon.obtenirPersonnel()+=latour;

	cout << "3";
	//Jean_Talon.obtenirPersonnel().ajouterInfirmier();
	
	//6-  Creez 7 objets du type Specialite � l'aide du constructeur par param�tre avec des valeurs de votre choix
	// Specialites : Chirurgie, Demartologie, Gastrologie, Sport, Podologie, Pediatrie, Psychiatrie
	// A COMPLETER...

	Specialite * Chirurgie= new Specialite("Chirurgie", 2);
	Specialite * Demartologie = new Specialite("Dermatologie", 7);
	Specialite * Gastrologie = new Specialite("Gastrologie", 9);
	Specialite * Sport= new Specialite("Sport", 78);
	Specialite * Podologie= new Specialite("Podologie", 10);
	Specialite * Pediatrie= new Specialite("Pediatrie", 14);
	Specialite * Psychiatrie =new Specialite("Psychiatrie", 25);

	cout << "4";
	//7- Creez 5 autres objets du type Medecin � l'aide du constructeur par param�tre avec des valeurs de votre choix
	//  Franc : en Chirurgie
	// Dr. Sherlock : en Demartologie
	// Dr. Holmes : en Gastrologie
	// Dr. Jean : en Podologie
	// Dr. Jules : en Pediatrie
	// A COMPLETER...






	
    Medecin * Franc = new Medecin("franc", 5, Chirurgie);
    Medecin * Sherlock= new Medecin ("sherlock", 9, Demartologie);
    Medecin * Holmes= new Medecin ("holmes", 14, Gastrologie);
    Medecin *  Jean = new Medecin ("jean", 15, Podologie);
    Medecin * Julie = new	Medecin	("jules", 8, Pediatrie);
	cout << "5";
	//8- Ajoutez les medecins : parmis le personnel de l'hopital Sacré-Coeur : 
	// Dr. Franc, Dr. Sherlock, Dr. Holmes, Dr. Jean, Dr. Jules

Sacre_Coeur_de_Montreal.obtenirPersonnel()+=Franc;

Sacre_Coeur_de_Montreal.obtenirPersonnel()+=Sherlock;

Sacre_Coeur_de_Montreal.obtenirPersonnel()+=Holmes;

Sacre_Coeur_de_Montreal.obtenirPersonnel()+=Jean;

Sacre_Coeur_de_Montreal.obtenirPersonnel()+=Julie;


cout << "6";
	//9- Creez 2 autres objets du type Medecin � l'aide du constructeur par param�tre avec des valeurs de votre choix
	// Dr. Kyle : en Sport
	// Dr. House : en Psychiatrie
	// A COMPLETER...


	Medecin *Kyle = new Medecin("Kyle", 21, Sport);
	Medecin *House = new Medecin("House",25, Psychiatrie);
	cout << "7";
	
	//10- Creer un autre medecin Sherlock en utilisant l'opérateur = et en utilisant le medecin existante Sherlock.
	// Le horaire du deuxieme Sherlock devrai ensuite etre modifie pour une valeur differnte du premier Sherlock
	// A COMPLETER...

	Medecin *Sherloc = Sherlock;
	(*Sherloc).modifierHoraires(45);
	
	cout << "8";
	// Creer un autre medecin Holmes en utilisant le constructeur de copie et en utilisant le medecin existante Holmes.
	// L'horaire du deuxieme Holmes devrai ensuite etre modifie pour une valeur differnte du premier Holmes
	// A COMPLETER...

	//Medecin Holme;
	//Holmes = new Medecin ("Holmes", 45,Gastrologie );

	Medecin *Holme(Holmes);
	Holme->modifierHoraires(78);

	cout << "8";
	//11- Ajoutez les medecins : parmis le personnel de l'hopital Jean Talen : 
	// Dr. Sherlock , Dr. Holmes , Dr. Kyle, Dr. House
	// Dr. Sherlock et Dr. Holmes sont les deux objets crée à partir de l'opératteur =
	// A COMPLETER...

	Jean_Talon.obtenirPersonnel() += Sherloc;
	Jean_Talon.obtenirPersonnel() += Holme;
	Jean_Talon.obtenirPersonnel() += Kyle;
	Jean_Talon.obtenirPersonnel() += House;

	cout << "9";
	
	//12- Retirer le medecin Jean et deux infirmiers de l'hopital Sacré-Coeur et ajouter les
	// a l'hopital Jean-talon


	Sacre_Coeur_de_Montreal.obtenirPersonnel() -= Jean;

	Sacre_Coeur_de_Montreal.obtenirPersonnel() -= john;

	Sacre_Coeur_de_Montreal.obtenirPersonnel() -= sylvie;
	cout << "10";
	Jean_Talon.obtenirPersonnel() += Jean;
	Jean_Talon.obtenirPersonnel() += john;
	Jean_Talon.obtenirPersonnel() += sylvie;
	cout << "11";
	//13- Faites afficher l'hopital Sacré-Coeur puis Jean-Talon
	// A COMPLETER...
	(*p1).information();
	(*p2).information();
	cout << "12";
	return 0;
}
*/

/**************************************************
* Main.cpp
* Date: Fevrier 2017
**************************************************/

#include <string>
#include <iostream>
#include "infirmier.h"
#include "Specialite.h"
#include "Personnel.h"
#include <vector>
#include "Medecin.h"
#include "Hopital.h"
using namespace std;

int main()
{




	// C'est a vous de voir si vous devez allouer dynamiquement ou non les elements

	//1-  Creez 11 objets du type Infirmier � l'aide du constructeur par param�tre avec des valeurs de votre choix
	Infirmier* infirmier1 = new Infirmier("Duke", "Nukem", 2);
	Infirmier* infirmier2 = new Infirmier("Doe", "John", 10);
	Infirmier* infirmier3 = new Infirmier("Labe", "Sylvie", 3);
	Infirmier* infirmier4 = new Infirmier("Labelle", "Amelie", 4);
	Infirmier* infirmier5 = new Infirmier("Lamontagne", "Maxime", 5);
	Infirmier* infirmier6 = new Infirmier("Laflamme", "John", 6);
	Infirmier* infirmier7 = new Infirmier("Lamoureux", "Julie", 7);
	Infirmier* infirmier8 = new Infirmier("Langlais", "Eric", 8);
	Infirmier* infirmier9 = new Infirmier("Lamarre", "Roger", 9);
	Infirmier* infirmier10 = new Infirmier("Laplante", "Linda", 10);
	Infirmier* infirmier11 = new Infirmier("Latour", "Hug", 3);


	//2-  Creez deux objets du type Personnel � l'aide du constructeur par d�faut
	Personnel personnel1;
	Personnel personnel2;

	//3 - Creez deux objects de type Hopital qui vont prendre chacun en parametre le nom de l'hopital et le personnel assigné
	//Hopital* hopital1 = new Hopital("Hopital Sacré-Coeur de Montréal", &personnel1);
	//Hopital* hopital2 = new Hopital("Jean-Talon", &personnel2);
	//
	Hopital hopital1("Hopital Sacré-Coeur de Montréal", &personnel1);
	Hopital hopital2("Jean-Talon", &personnel2);



	//4-  Ajoutez les 6 objets du type Infimier � au personnel de l'Hôpital Sacré-Coeur de Montréal
	personnel1 += infirmier1;
	personnel1 += infirmier2;
	personnel1 += infirmier3;
	personnel1 += infirmier4;
	personnel1 += infirmier5;
	personnel1 += infirmier6;


	//5-  Ajoutez les 5 objets qui restent du type Infimier � au personnel de l'Hôpital Jean-Talon
	personnel2 += infirmier7;
	personnel2 += infirmier8;
	personnel2 += infirmier9;
	personnel2 += infirmier10;
	personnel2 += infirmier11;


	//6-  Creez 7 objets du type Specialite � l'aide du constructeur par param�tre avec des valeurs de votre choix
	//Specialite Chirurgie, Demartologie, Gastrologie, Sport, Podologie, Pediatrie, Psychiatrie;

	Specialite* specialite1 = new Specialite("Chirurgie", 15);
	Specialite* specialite2 = new Specialite("Dermatoligie", 10);
	Specialite* specialite3 = new Specialite("Gastrologie", 11);
	Specialite* specialite4 = new Specialite("Sport", 7);
	Specialite* specialite5 = new Specialite("Podologie", 8);
	Specialite* specialite6 = new Specialite("Pediatrie", 9);
	Specialite* specialite7 = new Specialite("Psychiatrie", 45);

	//7- Creez 7 autres objets du type Medecin � l'aide du constructeur par param�tre avec des valeurs de votre choix
	Medecin* medecin1 = new Medecin("Franc", 10, specialite1);
	Medecin* medecin2 = new Medecin("Sherlock", 6, specialite2);
	Medecin* medecin3 = new Medecin("Holmes", 3, specialite3);
	Medecin* medecin4 = new Medecin("Kyle", 7, specialite4);
	Medecin* medecin5 = new Medecin("Jean", 8, specialite5);
	Medecin* medecin6 = new Medecin("Jules", 9, specialite6);
	Medecin* medecin7 = new Medecin("House", 10, specialite7);


	//8- Creer un autre medecin Sherlock en utilisant l'opérateur = et en utilisant le medecin existante Sherlock.
	// Le horaire du deuxieme Sherlock devrai ensuite etre modifie pour une valeur differnte du premier Sherlock

	Medecin medecin8 = *medecin2;
	medecin8.modifierHoraires(33);


	//9- Creer un autre medecin Holmes en utilisant le constructeur de copie et en utilisant le medecin existante Holmes.
	// Le horaire du deuxieme Holmes devrai ensuite etre modifie pour une valeur differnte du premier Holmes
	Medecin medecin9(*medecin3);
	medecin9.modifierHoraires(11);


	//10- Ajoutez les medecins : parmis le personnel de l'hopital Sacré-Coeur : 
	// Dr. Franc, Dr. Sherlock, Dr. Holmes, Dr. Jean, Dr. Jules
	// A COMPLETER...
	// Dr. Sherlock(2), Dr. Holmes(2), Dr. Kyle, Dr. House
	personnel2 += medecin1;
	personnel1 += medecin2;
	personnel1 += medecin3;
	personnel1 += medecin5;
	personnel1 += medecin6;
	personnel1 += &medecin8;
	personnel1 += &medecin9;
	personnel2 += medecin4;
	personnel1 += medecin7;





	//11- Retirer le medecin Jean et deux infirmiers de l'hopital Sacré-Coeur et ajouter les
	// a l'hopital Jean-talon
	personnel1-=(infirmier2);
	personnel1-=(infirmier4);
	personnel1-=(medecin5);

	cout << endl;

	cout << "============================" << hopital1 <<endl;

	
	personnel2.information();
	cout<< endl;
	cout <<hopital2<<endl;
	personnel1.information();
	


	return 0;

}

