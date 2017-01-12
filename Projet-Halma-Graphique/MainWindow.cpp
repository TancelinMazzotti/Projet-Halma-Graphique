#include "MainWindow.h"

MainWindow::MainWindow()
{
	largeur_window = 720; // 720
	hauteur_window = 480; // 480

	window = new sf::RenderWindow(sf::VideoMode(largeur_window, hauteur_window), "Halma-Game - Graphic Mods");

	menu_principal = new Menu(window, largeur_window, hauteur_window);
}

void MainWindow::run()
{
	while (window->isOpen())
	{
		/*sf::Event event;
		while (window->pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window->close();
		}*/
		window->clear();

		menu_principal->afficher_ecran_menu();

		window->display();
		Sleep(10);
	}
}


MainWindow::~MainWindow()
{
}
