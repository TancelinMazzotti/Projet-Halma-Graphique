#pragma once
#include <Windows.h>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

#include "Enumeration.h"
#include "DonneesPartie.h"
#include "Menu.h"
#include "MenuNouvellePartie.h"
#include "FenetreJeu.h"


class MainWindow
{
private:
	DonneesPartie * variable_partie;
	int largeur_window;
	int hauteur_window;
	sf::RenderWindow * window;

	Menu * menu_principal;
	MenuNouvellePartie * menu_nouvelle_partie;
	FenetreJeu * fenetre_jeu;

	Choix position_navigation;

public:
	MainWindow();
	void run();
	void Evenement();
	~MainWindow();
};

