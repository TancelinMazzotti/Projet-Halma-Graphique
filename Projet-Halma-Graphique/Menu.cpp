#include "Menu.h"

Menu::Menu(sf::RenderWindow * window_cible)
{
	choix_menu = menu;
	// Recuperation de la fenetre cible
	window = window_cible;

	// Chargement des textures
	texture_background_menu.loadFromFile("images/background_menu/background.jpg");
	texture_cadre_bouton_on.loadFromFile("images/cadre_bouton/button_on.png");
	texture_cadre_bouton_off.loadFromFile("images/cadre_bouton/button_off.png");
	font_menu.loadFromFile("police/nuku1.ttf");

	background_menu.setTexture(texture_background_menu);
	float facteur_x, facteur_y;
	facteur_x = (float)window->getSize().x / (float)texture_background_menu.getSize().x;
	facteur_y = (float)window->getSize().y / (float)texture_background_menu.getSize().y;
	background_menu.setScale(facteur_x, facteur_y);
	

	text_titre.setFont(font_menu);
	text_titre.setString("Halma  -  Game");
	text_titre.setCharacterSize(96);
	text_titre.setPosition(window->getSize().x / 2 - text_titre.getGlobalBounds().width / 2, 0);

	bouton_nouvelle_partie = new Bouton(window);
	bouton_nouvelle_partie->setTexture(texture_cadre_bouton_on,texture_cadre_bouton_off);
	bouton_nouvelle_partie->setFont(font_menu);
	bouton_nouvelle_partie->setText("Creer",24);
	bouton_nouvelle_partie->setPosition(50, 35);

	bouton_charger_partie = new Bouton(window);
	bouton_charger_partie->setTexture(texture_cadre_bouton_on, texture_cadre_bouton_off);
	bouton_charger_partie->setFont(font_menu);
	bouton_charger_partie->setText("Charger", 24);
	bouton_charger_partie->setPosition(50, 50);

	bouton_regle_partie = new Bouton(window);
	bouton_regle_partie->setTexture(texture_cadre_bouton_on, texture_cadre_bouton_off);
	bouton_regle_partie->setFont(font_menu);
	bouton_regle_partie->setText("Regle", 24);
	bouton_regle_partie->setPosition(50, 65);

	bouton_quitter_partie = new Bouton(window);
	bouton_quitter_partie->setTexture(texture_cadre_bouton_on, texture_cadre_bouton_off);
	bouton_quitter_partie->setFont(font_menu);
	bouton_quitter_partie->setText("Quitter", 24);
	bouton_quitter_partie->setPosition(50, 85);

}

Choix Menu::afficher_ecran_menu()
{
	Choix choix_final;

	window->draw(background_menu);
	window->draw(text_titre);

	bouton_nouvelle_partie->draw();
	bouton_charger_partie->draw();
	bouton_regle_partie->draw();
	bouton_quitter_partie->draw();
	Evenement();

	choix_final = choix_menu;
	choix_menu = menu;

	return choix_final;

}

void Menu::Evenement()
{
	sf::Event event;
	while (window->pollEvent(event))
	{
		if (event.type == sf::Event::Closed)
			window->close();

		else if (event.type == sf::Event::MouseMoved)
		{
			// Souris sur Nouvelle partie
			if (bouton_nouvelle_partie->estDansLeBouton(event.mouseMove.x, event.mouseMove.y))
				bouton_nouvelle_partie->setActiveTexture(true);
			else
				bouton_nouvelle_partie->setActiveTexture(false);

			// Souris sur Charger partie
			if (bouton_charger_partie->estDansLeBouton(event.mouseMove.x, event.mouseMove.y))
				bouton_charger_partie->setActiveTexture(true);
			else
				bouton_charger_partie->setActiveTexture(false);

			// Souris sur Regle partie
			if (bouton_regle_partie->estDansLeBouton(event.mouseMove.x, event.mouseMove.y))
				bouton_regle_partie->setActiveTexture(true);
			else
				bouton_regle_partie->setActiveTexture(false);

			// Souris sur Quitter partie
			if (bouton_quitter_partie->estDansLeBouton(event.mouseMove.x, event.mouseMove.y))
				bouton_quitter_partie->setActiveTexture(true);
			else
				bouton_quitter_partie->setActiveTexture(false);
		}

		else if (event.type == sf::Event::MouseButtonPressed)
		{
			if (bouton_nouvelle_partie->estDansLeBouton(event.mouseButton.x, event.mouseButton.y))
				choix_menu = creer;

			else if (bouton_charger_partie->estDansLeBouton(event.mouseButton.x, event.mouseButton.y))
				choix_menu = charger;

			else if (bouton_regle_partie->estDansLeBouton(event.mouseButton.x, event.mouseButton.y))
				choix_menu = regle;

			else if (bouton_quitter_partie->estDansLeBouton(event.mouseButton.x, event.mouseButton.y))
				window->close();
		}
	}
}


Menu::~Menu()
{
}
