#pragma once

#include <SFML/Graphics.hpp>

#include "Enumeration.h"
#include "DonneesPartie.h"
#include "Bouton.h"


class FenetreJeu
{
private:
	sf::RenderWindow * window;
	DonneesPartie * variable_partie;

public:
	FenetreJeu(sf::RenderWindow * window_cible);
	void nouvelle_partie(int nombre_joueur);
	void charger_partie();
	~FenetreJeu();
};

