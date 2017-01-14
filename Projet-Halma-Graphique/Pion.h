#pragma once

#include <SFML/Graphics.hpp>

class Pion
{
private:

	sf::Texture * texture_pion;
	sf::Sprite * sprite_pion;

public:
	Pion();
	~Pion();
};

