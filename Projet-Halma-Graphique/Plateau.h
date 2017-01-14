#pragma once

#include "Enumeration.h"
#include "CasePlateau.h"

class Plateau
{
private:
	CasePlateau * tableau_plateau[TAILLE_PLATEAU][TAILLE_PLATEAU];

public:
	Plateau();
	void chargement_plateau();
	~Plateau();
};

