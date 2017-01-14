#pragma once

#include <SFML/Graphics.hpp>

#include "Enumeration.h"
#include "Bouton.h"


class MenuNouvellePartie
{
private:
	Choix choix_menu;

	sf::RenderWindow * window;

	sf::Texture texture_background_menu;
	sf::Texture texture_cadre_bouton_on;
	sf::Texture texture_cadre_bouton_off;
	sf::Font font;

	sf::Sprite background_menu;
	sf::Text text_titre;
	Bouton * bouton_2_joueur;
	Bouton * bouton_4_joueur;
	Bouton * bouton_retour;
	Bouton * bouton_quitter;
public:
	MenuNouvellePartie(sf::RenderWindow * main_window);
	Choix afficher_ecran_menu();
	void Evenement();
	~MenuNouvellePartie();
};

