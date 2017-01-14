#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

#include "Enumeration.h"
#include "Bouton.h"


class Menu
{
private:

	Choix choix_menu;
	sf::RenderWindow * window;

	sf::SoundBuffer buffer_sound;
	sf::Sound sound;

	// Texture
	sf::Texture texture_background_menu;
	sf::Texture texture_cadre_bouton_on;
	sf::Texture texture_cadre_bouton_off;

	// Police
	sf::Font font_menu;

	// Element graphique
	sf::Sprite background_menu;
	sf::Text text_titre;
	Bouton * bouton_nouvelle_partie;
	Bouton * bouton_charger_partie;
	Bouton * bouton_regle_partie;
	Bouton * bouton_quitter_partie;

public:
	Menu(sf::RenderWindow * window_cible);
	Choix afficher_ecran_menu();
	void Evenement();
	~Menu();
};

