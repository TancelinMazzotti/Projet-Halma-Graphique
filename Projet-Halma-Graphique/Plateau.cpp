#include "Plateau.h"



Plateau::Plateau()
{
	for (int i = 0; i < TAILLE_PLATEAU; i++)
	{
		for (int j = 0; j < TAILLE_PLATEAU; j++)
		{
			tableau_plateau[i][j] = new CasePlateau;
		}
	}
}

void Plateau::chargement_plateau()
{
}


Plateau::~Plateau()
{
}
