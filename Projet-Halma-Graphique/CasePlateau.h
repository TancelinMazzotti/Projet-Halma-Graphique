#pragma once

#include "Pion.h"
#include <SFML/Graphics.hpp>

class CasePlateau
{
private:
	Pion * pion_case;

	sf::Texture texture_case;
	sf::Sprite sprite_case;

	int position[2];
	int coordonnee[4];
	

public:
	CasePlateau();
	void setCamp(int num_camp);
	void setPionCase(Pion * pion);
	~CasePlateau();
};