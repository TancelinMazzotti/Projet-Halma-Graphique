#pragma once

#include <SFML/Graphics.hpp>
#include <iostream>

#include "Enumeration.h"
#include "DonneesPartie.h"
#include "Plateau.h"


class FenetreJeu
{
private:
	sf::RenderWindow * window;

	sf::Texture texture_background;
	sf::Sprite sprite_background;
	Plateau * plateau_jeu;

public:
	FenetreJeu(sf::RenderWindow * window_cible);
	void run();
	void nouvelle_partie(int nombre_joueur);
	void charger_partie();
	~FenetreJeu();
};

