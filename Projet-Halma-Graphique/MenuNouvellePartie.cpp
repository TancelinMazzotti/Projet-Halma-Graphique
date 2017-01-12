#include "MenuNouvellePartie.h"



MenuNouvellePartie::MenuNouvellePartie(sf::RenderWindow * main_window)
{
	window = main_window;

	choix_menu = creer;

	texture_cadre_bouton_on.loadFromFile("images/cadre_bouton/button_on.png");
	texture_cadre_bouton_off.loadFromFile("images/cadre_bouton/button_off.png");
	font.loadFromFile("police/nuku1.ttf");


	bouton_2_joueur = new Bouton(window);
	bouton_2_joueur->setTexture(texture_cadre_bouton_on, texture_cadre_bouton_off);
	bouton_2_joueur->setFont(font);
	bouton_2_joueur->setText("2 joueurs", 24);
	bouton_2_joueur->setPosition(35, 45);

	bouton_4_joueur = new Bouton(window);
	bouton_4_joueur->setTexture(texture_cadre_bouton_on, texture_cadre_bouton_off);
	bouton_4_joueur->setFont(font);
	bouton_4_joueur->setText("4 joueurs", 24);
	bouton_4_joueur->setPosition(65, 45);

	bouton_retour = new Bouton(window);
	bouton_retour->setTexture(texture_cadre_bouton_on, texture_cadre_bouton_off);
	bouton_retour->setFont(font);
	bouton_retour->setText("Retour", 24);
	bouton_retour->setPosition(35, 70);

	bouton_quitter = new Bouton(window);
	bouton_quitter->setTexture(texture_cadre_bouton_on, texture_cadre_bouton_off);
	bouton_quitter->setFont(font);
	bouton_quitter->setText("Quitter", 24);
	bouton_quitter->setPosition(65, 70);
	
}

Choix MenuNouvellePartie::afficher_ecran_menu()
{
	Choix choix_final;

	bouton_2_joueur->draw();
	bouton_4_joueur->draw();
	bouton_retour->draw();
	bouton_quitter->draw();

	Evenement();

	choix_final = choix_menu;
	choix_menu = creer;

	return choix_final;
	
}

void MenuNouvellePartie::Evenement()
{
	sf::Event event;
	while (window->pollEvent(event))
	{
		if (event.type == sf::Event::Closed)
			window->close();

		else if (event.type == sf::Event::MouseMoved)
		{
			// Souris sur Nouvelle partie
			if (bouton_2_joueur->estDansLeBouton(event.mouseMove.x, event.mouseMove.y))
				bouton_2_joueur->setActiveTexture(true);
			else
				bouton_2_joueur->setActiveTexture(false);

			if (bouton_4_joueur->estDansLeBouton(event.mouseMove.x, event.mouseMove.y))
				bouton_4_joueur->setActiveTexture(true);
			else
				bouton_4_joueur->setActiveTexture(false);

			if (bouton_retour->estDansLeBouton(event.mouseMove.x, event.mouseMove.y))
				bouton_retour->setActiveTexture(true);
			else
				bouton_retour->setActiveTexture(false);

			if (bouton_quitter->estDansLeBouton(event.mouseMove.x, event.mouseMove.y))
				bouton_quitter->setActiveTexture(true);
			else
				bouton_quitter->setActiveTexture(false);
		}

		else if (event.type == sf::Event::MouseButtonPressed)
		{
			if (bouton_2_joueur->estDansLeBouton(event.mouseButton.x, event.mouseButton.y))
				choix_menu = deuxjoueur;

			else if (bouton_4_joueur->estDansLeBouton(event.mouseButton.x, event.mouseButton.y))
				choix_menu = quatrejoueur;

			else if (bouton_retour->estDansLeBouton(event.mouseButton.x, event.mouseButton.y))
				choix_menu = retour;

			else if (bouton_quitter->estDansLeBouton(event.mouseButton.x, event.mouseButton.y))
				window->close();
		}

	}
}


MenuNouvellePartie::~MenuNouvellePartie()
{
}
