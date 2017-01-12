#pragma once
#include <Windows.h>
#include <SFML/Graphics.hpp>

#include "Enumeration.h"
#include "Menu.h"

class MainWindow
{
private:
	int largeur_window;
	int hauteur_window;
	sf::RenderWindow * window;

	Menu * menu_principal;

	Choix position_navigation;

public:
	MainWindow();
	void run();
	~MainWindow();
};

