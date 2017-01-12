#pragma once

#include "Bouton.h"
#include "Enumeration.h"



class MenuNouvellePartie
{
private:
	Choix choix_menu;

	sf::RenderWindow * window;

	sf::Texture texture_cadre_bouton_on;
	sf::Texture texture_cadre_bouton_off;
	sf::Font font;

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

