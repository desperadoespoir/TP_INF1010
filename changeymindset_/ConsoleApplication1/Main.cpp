/**************************************************
 * Titre: Travail pratique #1 - Main.cpp
 * Date: 10 janvier 2017
 * Auteur:
**************************************************/

#include "Specialite.h"
#include "Medecin.h"
#include "Infirmier.h"
#include "Personnel.h"

#include <string>
#include <iostream>

using namespace std;

int main()
{
        //C'est a vous de voir si vous devez allouer dynamiquement ou non les elements
	

	//1-  Creez un objet du type Infirmier � l'aide du constructeur par d�faut
	  
	Infirmier Doe;

	//2-  Modifiez le nom, le prenom et le nbChambre de cet objet � l'aide des m�thodes de modification

	Doe.setNom("doee") ;
	Doe.setPrenom("john");
	Doe.setNbreChambres(10);


	//3-  Creez 11 autres objets du type Infirmier � l'aide du constructeur par param�tre avec des valeurs de votre choix
	//
	Infirmier Tremblay("Tremblay", "gilles", 2);
	Infirmier Labe("Labe", "Sylvie ",3 );
	Infirmier Lamontagne("Lamontagne", "Maxime ",5 );
	Infirmier Laflamme("Laflamme", "jonhn ",6 );
	Infirmier Lamoureux ("Julie", "j ",7 );
	Infirmier Langlais("langlais", "eric ",8 );
	Infirmier Lamare("Lamare", "roger ",9 );
	Infirmier Laplante("linda", "laplante ",11 );
	Infirmier Latour("Latour", "hug ", 11);
	Infirmier lessard("lessard", "emilie ",12 );
	Infirmier didier ("un", " champion", 8);
	Infirmier labelle("amelie", "Labelle", 4);
	//



	//4-  Creez un objet du type Personnel � l'aide du constructeur par d�faut

	Personnel* perso[12];
	for (int i = 0; i < 12; i++)
		perso[i]=new Personnel;
	
	
	//5-  Ajoutez les 12 objets du type Infimier � tableauInfirmiers de ce dernier
	(*perso[0]).ajouterInfirmier(Tremblay);
	(*perso[1]).ajouterInfirmier(Labe);
	(*perso[2]).ajouterInfirmier(Lamontagne);
	(*perso[3]).ajouterInfirmier(Laflamme);
	(*perso[4]).ajouterInfirmier(Lamoureux);
	(*perso[5]).ajouterInfirmier(Langlais);
	(*perso[6]).ajouterInfirmier(Lamare);
	(*perso[7]).ajouterInfirmier(Laplante);
	(*perso[8]).ajouterInfirmier(Latour);
	(*perso[9]).ajouterInfirmier(lessard);
	(*perso[10]).ajouterInfirmier(didier);
	(*perso[11]).ajouterInfirmier(labelle);

	


	//
	//6-  Creez un objet du type Specialite � l'aide du constructeur par d�faut
	Specialite s;

	//7-  Modifiez le domaine et le niveau de cet objet � l'aide des m�thodes de modification

	s.setDomaine("chirurgie");
	s.setNiveau(15);

	//cout << s.getDomaine() << endl;
	//8-  Creez 5 autres objets du type Specialite � l'aide du constructeur par param�tre avec des valeurs de votre choix

	Specialite *chi=new Specialite("chirurgie", 15);
	Specialite *der =new Specialite ("dermato",10 );
	Specialite *gastro=new Specialite("gastronomie",11 );
	Specialite* sport= new Specialite("sport", 7);
	Specialite* podo=new Specialite("podologie", 8);
	//

	//9-  Creez un objet du type Medecin � l'aide du constructeur par d�faut

	Medecin m;

	//10- Modifiez le nom, les horaires et la specialite de ce dernier
	m.modifierNom("georges");
	m.modifierHoraires(12);
	m.modifierSpecialite(sport);
	//11- Creez 5 autres objets du type Medecin � l'aide du constructeur par param�tre avec des valeurs de votre choix

	
	Medecin House("house", 10, podo);
	Medecin sherlock("sher", 5, der);
	Medecin Homles("homles", 6, gastro);
	Medecin kyle("kyle", 7, sport);
	Medecin jean("jean", 8, chi);
	////12- Expliquez la relation entre les deux objets Medecin et Specialite. Justifiez votre r�ponse

	
	//13- Ajoutez les 6 objets du type Medecin � tableauMedecins de l'objet Personnel d�j� cr��
	
     (*perso[0]).ajouterMedecin(House);
	
    (*perso[1]).ajouterMedecin(sherlock);
    (*perso[2]).ajouterMedecin(Homles);
    (*perso[3]).ajouterMedecin(kyle);
    (*perso[4]).ajouterMedecin(jean);

	
	//14- Affichez la liste des medecins
	cout << "Nom                      " << "horaires                     " << "Domaine Specialite                      " << "Niveau Specialite " << endl;

     for (int i = 0; i < 5; i++)
        (*perso[i]).afficherMedecins();
	

	

	//15- Affichez la liste des infirmiers

	 cout << "                                       liste Infirmiers        " << endl;
	 cout << endl;
	 cout << "nom                      " << "prenom                     " << "nbreChambres_                        " << endl;
	 cout << endl;

	 for (int i = 0; i < 12; i++)
		 (*perso[i]).afficherInfirmiers();

}
