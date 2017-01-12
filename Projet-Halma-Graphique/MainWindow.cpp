#include "MainWindow.h"

MainWindow::MainWindow()
{
	largeur_window = 720;
	hauteur_window = 480;

	window = new sf::RenderWindow(sf::VideoMode(largeur_window, hauteur_window), "Halma-Game - Graphic Mods");

	menu_principal = new Menu(window, largeur_window, hauteur_window);

	position_navigation = menu;
}

void MainWindow::run()
{
	while (window->isOpen())
	{
		window->clear();

		if(position_navigation == menu || (position_navigation == creer || position_navigation == regle))
			position_navigation = menu_principal->afficher_ecran_menu();

		else
		{
			// si 2 joueur ou 4 joueur -> creation
			// si charger -> chargement

			// Lancement du jeu
		}

		window->display();
		Sleep(10);
	}
}


MainWindow::~MainWindow()
{
}
