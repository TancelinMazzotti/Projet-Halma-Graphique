#include "MainWindow.h"

MainWindow::MainWindow()
{
	largeur_window = 720;
	hauteur_window = 480;
	//sf::VideoMode::
	//window = new sf::RenderWindow(sf::VideoMode(largeur_window, hauteur_window), "Halma-Game - Graphic Mods", sf::Style::Fullscreen);
	window = new sf::RenderWindow(sf::VideoMode(sf::VideoMode::getDesktopMode().width, sf::VideoMode::getDesktopMode().height), "Halma-Game - Graphic Mods", sf::Style::Fullscreen);


	menu_principal = new Menu(window);
	menu_nouvelle_partie = new MenuNouvellePartie(window);
	fenetre_jeu = new FenetreJeu(window);

	position_navigation = menu;

	variable_partie = new DonneesPartie;
}

void MainWindow::run()
{
	while (window->isOpen())
	{
		window->clear();
		switch (position_navigation)
		{
		case menu:
			position_navigation = menu_principal->afficher_ecran_menu();
			break;

		case creer:
			position_navigation = menu_nouvelle_partie->afficher_ecran_menu();
			if (position_navigation == retour)
				position_navigation = menu;
			break;

		case deuxjoueur:
			position_navigation = partie_en_cours;
			fenetre_jeu->nouvelle_partie(2);
			break;

		case quatrejoueur:
			position_navigation = partie_en_cours;
			fenetre_jeu->nouvelle_partie(4);
			break;

		case charger:
			position_navigation = partie_en_cours;
			fenetre_jeu->charger_partie();
			break;

		case partie_en_cours:
			fenetre_jeu->run();
			break;

		default:
			break;
		}
		
		Evenement();

		window->display();
		Sleep(10);
	}
}

void MainWindow::Evenement()
{
	sf::Event event;
	while (window->pollEvent(event))
	{
		if (event.type == sf::Event::Closed)
			window->close();
	}
}


MainWindow::~MainWindow()
{
}
