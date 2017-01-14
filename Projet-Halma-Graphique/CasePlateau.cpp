#include "CasePlateau.h"



CasePlateau::CasePlateau(sf::RenderWindow * window_cible)
{
	window = window_cible;
	pion_case = NULL;
	texture_case.loadFromFile("images/plateau/background_case.jpg");
	sprite_case.setTexture(texture_case);
	
}

void CasePlateau::redimentionne(int x, int y, int taille)
{
	coordonnee[0] = x + position[0] * taille;
	coordonnee[1] = y + position[1] * taille;
	sprite_case.setPosition(coordonnee[0], coordonnee[1]);
	float facteur_x, facteur_y;
	facteur_x = (float)taille / (float)texture_case.getSize().x;
	facteur_y = (float)taille / (float)texture_case.getSize().y;
	sprite_case.setScale(facteur_x, facteur_y);
}

void CasePlateau::setPosition(int x, int y)
{
	position[0] = x;
	position[1] = y;
}

void CasePlateau::setCamp(int num_camp)
{
	switch (num_camp)
	{
	case 1:
		// camp J1 rouge
		sprite_case.setColor(sf::Color(255, 0, 0));
		break;
	case 2:
		// camp J2 bleu
		sprite_case.setColor(sf::Color(0, 0, 255));
		break;
	case 3:
		// camp J3 vert
		sprite_case.setColor(sf::Color(0, 255, 0));
		break;
	case 4:
		// camp J4 jaune
		sprite_case.setColor(sf::Color(255, 255, 0));
		break;
	default:
		break;
	}
}

void CasePlateau::setPionCase(Pion * pion)
{
	pion_case = pion;
}

void CasePlateau::draw()
{
	window->draw(sprite_case);
}


CasePlateau::~CasePlateau()
{
}
