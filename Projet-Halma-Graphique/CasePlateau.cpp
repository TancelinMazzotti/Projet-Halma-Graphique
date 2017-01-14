#include "CasePlateau.h"



CasePlateau::CasePlateau()
{
	pion_case = NULL;
	texture_case.loadFromFile("images/plateau/background_case.jpg");
	sprite_case.setTexture(texture_case);
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


CasePlateau::~CasePlateau()
{
}
