#pragma once

#include "Pion.h"
#include <SFML/Graphics.hpp>

class CasePlateau
{
private:
	Pion * pion_case;

	sf::RenderWindow * window;

	sf::Texture texture_case;
	sf::Sprite sprite_case;

	int position[2];
	int coordonnee[2];
	

public:
	CasePlateau(sf::RenderWindow * window_cible);
	void redimentionne(int x,int y, int taille);
	void setPosition(int x, int y);
	void setCamp(int num_camp);
	void setPionCase(Pion * pion);
	void draw();
	~CasePlateau();
};