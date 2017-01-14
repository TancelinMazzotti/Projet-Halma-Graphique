#include "FenetreJeu.h"


FenetreJeu::FenetreJeu(sf::RenderWindow * window_cible)
{
	window = window_cible;
	plateau_jeu = new Plateau(window);

	texture_background.loadFromFile("images/background_menu/background.jpg");
	sprite_background.setTexture(texture_background);
	float facteur_x, facteur_y;
	facteur_x = (float)window->getSize().x / (float)texture_background.getSize().x;
	facteur_y = (float)window->getSize().y / (float)texture_background.getSize().y;
	sprite_background.setScale(facteur_x, facteur_y);
	//variable_partie = new DonneesPartie;
	//variable_partie->reinitialiser();
}

void FenetreJeu::run()
{
	window->draw(sprite_background);
	plateau_jeu->draw();
}

void FenetreJeu::nouvelle_partie(int nombre_joueur)
{
	//variable_partie->reinitialiser();
	// generation du terrain

}
void FenetreJeu::charger_partie()
{
	//variable_partie->reinitialiser();
	//variable_partie->charger();
}

FenetreJeu::~FenetreJeu()
{
}
