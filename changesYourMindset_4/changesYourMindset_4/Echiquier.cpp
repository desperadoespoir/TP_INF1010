#include "Echiquier.h"
#include <time.h>

std::ostream & operator<<(std::ostream & out, const Echiquier & echiquier)
{
	out << "------------INFORMATION PIECES BLANCHES------------" << endl;
	out << "Il y a " << echiquier.vecteurPiecesBlanches_.size()<< " Pieces blanches" << endl;
	
	for (int i = 0; i < echiquier.vecteurPiecesBlanches_.size(); i++)
	{
		echiquier.vecteurPiecesBlanches_[i]->afficher(out);

	}


	out << endl;
	out << "------------INFORMATION PIECES NOIRES--------------" << endl;
	out << "Il y a " << echiquier.vecteurPiecesNoires_.size() << " Pieces noires" << endl;
	for (int i = 0; i < echiquier.vecteurPiecesNoires_.size(); i++)
	{
		echiquier.vecteurPiecesNoires_[i]->afficher(out);

	}

	return out;

}

// Constructeur par defaut
Echiquier::Echiquier() 
{


}

// Destructeur
Echiquier::~Echiquier()
{
	for (int i = 0; i < vecteurPiecesBlanches_.size(); i++) {
		delete vecteurPiecesBlanches_[i];
	}

	for (int i = 0; i < vecteurPiecesNoires_.size(); i++) {
		delete vecteurPiecesNoires_[i];
	}
	
}

// Methodes publiques

bool Echiquier::deplacerPiece(const string& id, int toX, int toY) 
{
	for (int i = 0; i < vecteurPiecesBlanches_.size(); i++)
	{
		if (vecteurPiecesBlanches_[i]->obtenirId() == id)
		{
			vecteurPiecesBlanches_[i]->deplacer(toX, toY);
			return true;
		}


	}

	for (int i = 0; i < vecteurPiecesNoires_.size(); i++)
	{
		if (vecteurPiecesNoires_[i]->obtenirId() == id)
		{
			vecteurPiecesNoires_[i]->deplacer(toX, toY);
			return true;
		}


	}
	return false;
}


Echiquier& Echiquier::operator+=(Piece* piece) 
{
	
	
		if (piece->obtenirType() == typeid(Pion).name())
		{


			Pion*pion = dynamic_cast<Pion*> (piece);

			if (pion->obtenirCouleur() == "Noir")
				vecteurPiecesNoires_.push_back(pion);


			else
		        {
		        	if (pion->obtenirCouleur() == "Blanc")
		        		vecteurPiecesBlanches_.push_back(pion);	
		        }

		}


		else
		
		{

			if (piece->obtenirType() == typeid(Fou).name())
			{


				Fou* fou = dynamic_cast<Fou*> (piece);

				if (fou->obtenirCouleur() == "Noir")
					vecteurPiecesNoires_.push_back(fou);


				else
				{
					if (fou->obtenirCouleur() == "Blanc")
						vecteurPiecesBlanches_.push_back(fou);
				}

			}



			else
			{

				if (piece->obtenirType() == typeid(Tour).name())
				{


					Tour* tour = dynamic_cast<Tour*> (piece);

					if (tour->obtenirCouleur() == "Noir")
						vecteurPiecesNoires_.push_back(tour);


					else
					{
						if (tour->obtenirCouleur() == "Blanc")
							vecteurPiecesBlanches_.push_back(tour);
					}

				
				}


				else
					{


							if (piece->obtenirType() == typeid(Reine).name())
							{
						
						
								Reine* reine = dynamic_cast<Reine*> (piece);
						
								if (reine->obtenirCouleur() == "Noir")
									vecteurPiecesNoires_.push_back(reine);
						
						
								else
								{
									if (reine->obtenirCouleur() == "Blanc")
										vecteurPiecesBlanches_.push_back(reine);
								}
						
						
							}
						
							else 
							
							{


								if (piece->obtenirType() == typeid(Roi).name())
								{


									Roi* roi = dynamic_cast<Roi*> (piece);

									if (roi->obtenirCouleur() == "Noir")
										vecteurPiecesNoires_.push_back(roi);


									else
									{
										if (roi->obtenirCouleur() == "Blanc")
											vecteurPiecesBlanches_.push_back(roi);
									}


								}



							}

					}


			}


		}
		

	

	return *this;
}


Echiquier& Echiquier:: operator-=(const string& id) 
{
	for (int i = 0; i < vecteurPiecesBlanches_.size(); i++)
	{
		if (vecteurPiecesBlanches_[i]->obtenirId() == id)
		{
			vecteurPiecesBlanches_[i] = vecteurPiecesBlanches_[vecteurPiecesBlanches_.size() - 1];
			vecteurPiecesBlanches_.pop_back();
			
		}


	}

	for (int i = 0; i < vecteurPiecesNoires_.size(); i++)
	{
		if (vecteurPiecesNoires_[i]->obtenirId() == id)
		{
			vecteurPiecesNoires_[i] = vecteurPiecesNoires_[vecteurPiecesNoires_.size() - 1];
			vecteurPiecesNoires_.pop_back();
		}
	}
	return *this;

}


bool Echiquier::promouvoir(const string& id) 
{
	
	int a = 3;
	int nombre_aleatoire;
	srand(time(NULL));  // initialisation de rand
	nombre_aleatoire = rand()%a ;
		//printf("%d ", nombre_aleatoire);
	int i; 
	for ( i= 0; i < vecteurPiecesBlanches_.size(); i++)
	{
		if (vecteurPiecesBlanches_[i]->obtenirId() == id)
		{
			if (vecteurPiecesBlanches_[i]->obtenirType() == typeid(Pion).name())
			{
				if (nombre_aleatoire == 0) 
				{
					
						Pion*pion = dynamic_cast<Pion*> (vecteurPiecesBlanches_[i]);

						Reine reine(*pion);
						cout << "promotion Reussie " << endl;
						return true;

					
				}

				else 
				{
				
					if (nombre_aleatoire ==1 ) 
					{
						Pion*pion = dynamic_cast<Pion*> (vecteurPiecesBlanches_[i]);
						Tour tour(*pion);
						cout << "promotion Reussie " << endl;
						return true;
					
					
					}
				

					else
					{
						if (nombre_aleatoire == 2)
						{

							Pion*pion = dynamic_cast<Pion*> (vecteurPiecesBlanches_[i]);
							Fou fou(*pion);
							
							cout << "promotion Reussie " << endl;
							return true;
						}

						

					
					}
				
				
				
				}
				
			}

			
			

		}

		else {

			if(i == (vecteurPiecesBlanches_.size()-1))
			{
			
				cout << "promotion impossible " << endl;

				return false;
			}
			
		}

	}
			


	

	for (int i = 0; i < vecteurPiecesNoires_.size(); i++)
	{
		if (vecteurPiecesNoires_[i]->obtenirId() == id)
		{
			if (vecteurPiecesNoires_[i]->obtenirType() == typeid(Pion).name())
			{
				if (nombre_aleatoire == 0)
				{

					Pion*pion = dynamic_cast<Pion*> (vecteurPiecesNoires_[i]);

					Reine reine(*pion);
					cout << "promotion Reussie " << endl;
					return true;

				}

				else
				{

					if (nombre_aleatoire == 1)
					{
						Pion*pion = dynamic_cast<Pion*> (vecteurPiecesNoires_[i]);
						Tour tour(*pion);
						cout << "promotion Reussie " << endl;
						return true;


					}


					else
					{
						if (nombre_aleatoire == 2)
						{

							Pion*pion = dynamic_cast<Pion*> (vecteurPiecesNoires_[i]);
							Fou fou(*pion);
							cout << "promotion Reussie " << endl;
							return true;

						}

						

					}



				}
				
			}

			else {

				if (i == (vecteurPiecesBlanches_.size() - 1))
				{

					cout << "promotion impossible " << endl;

					return false;
				}

			}

		}
	}




	
	

}



