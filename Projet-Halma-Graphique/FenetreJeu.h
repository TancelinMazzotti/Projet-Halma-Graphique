#pragma once

#include <SFML/Graphics.hpp>

#include "Enumeration.h"
#include "DonneesPartie.h"
#include "Plateau.h"


class FenetreJeu
{
private:
	sf::RenderWindow * window;
	Plateau * plateau_jeu;

public:
	FenetreJeu(sf::RenderWindow * window_cible);
	void nouvelle_partie(int nombre_joueur);
	void charger_partie();
	~FenetreJeu();
};

