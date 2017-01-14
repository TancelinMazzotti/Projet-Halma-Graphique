#include "Plateau.h"

Plateau::Plateau(sf::RenderWindow * window_cible)
{
	window = window_cible;
	redimentionne();
	for (int i = 0; i < TAILLE_PLATEAU; i++)
	{
		for (int j = 0; j < TAILLE_PLATEAU; j++)
		{
			tableau_plateau[j][i] = new CasePlateau(window);
			tableau_plateau[j][i]->setPosition(j, i);
			tableau_plateau[j][i]->redimentionne(position[0], position[1], taille_case_px);
		}
	}
}

void Plateau::redimentionne()
{
	taille_px = 80 * window->getSize().y / 100;
	position[0] = window->getSize().x / 2 - taille_px / 2;
	position[1] = 10 * window->getSize().y / 100;
	taille_case_px = taille_px / 10;

}

void Plateau::chargement_plateau()
{
}

void Plateau::draw()
{
	for (int i = 0; i < TAILLE_PLATEAU; i++)
	{
		for (int j = 0; j < TAILLE_PLATEAU; j++)
		{
			tableau_plateau[j][i]->draw();
		}
	}
}


Plateau::~Plateau()
{
}
