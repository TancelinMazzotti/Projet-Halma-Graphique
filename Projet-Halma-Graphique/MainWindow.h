#pragma once
#include <Windows.h>
#include <SFML/Graphics.hpp>

#include "Menu.h"

class MainWindow
{
private:
	int largeur_window;
	int hauteur_window;
	sf::RenderWindow * window;

	Menu * menu_principal;

public:
	MainWindow();
	void run();
	void menu();
	~MainWindow();
};

