#pragma once

#include <SFML/Graphics.hpp>

class Pion
{
private:

	sf::Texture * texture_pion;
	sf::Sprite * sprite_pion;

	int num_joueur;
	int coordonnees[2];

public:
	Pion();
	void setCamp(int num_camp);
	~Pion();
};

