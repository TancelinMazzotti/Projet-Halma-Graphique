#include "Pion.h"



Pion::Pion()
{
}

void Pion::setCamp(int num_camp)
{
	switch (num_camp)
	{
	case 1:
		// camp J1 rouge
		sprite_pion->setColor(sf::Color(255, 0, 0));
		break;
	case 2:
		// camp J2 bleu
		sprite_pion->setColor(sf::Color(0, 0, 255));
		break;
	case 3:
		// camp J3 vert
		sprite_pion->setColor(sf::Color(0, 255, 0));
		break;
	case 4:
		// camp J4 jaune
		sprite_pion->setColor(sf::Color(255, 255, 0));
		break;
	default:
		break;
	}
}


Pion::~Pion()
{
}
