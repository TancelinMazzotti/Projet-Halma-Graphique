#pragma once

#include "Pion.h"
#include <SFML/Graphics.hpp>

class CasePlateau
{
private:
	Pion pions_case;

	sf::Texture * texture_case;
	sf::Sprite  * sprite_case;

	int position[2];
	int taille;
	int coordonnee[4];

public:
	CasePlateau();
	~CasePlateau();
};