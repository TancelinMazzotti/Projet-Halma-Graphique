#pragma once

#include "Enumeration.h"
#include "CasePlateau.h"

class Plateau
{
private:

	sf::RenderWindow * window;

	CasePlateau * tableau_plateau[TAILLE_PLATEAU][TAILLE_PLATEAU];
	int taille_px;
	int taille_case_px;
	int position[2];

public:
	Plateau(sf::RenderWindow * window_cible);
	void redimentionne();
	void chargement_plateau();
	void draw();
	~Plateau();
};

