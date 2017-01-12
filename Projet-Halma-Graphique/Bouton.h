#pragma once
#include <SFML\Graphics.hpp>

class Bouton
{
private:
	sf::RenderWindow * m_window;
	sf::Font m_font;
	sf::Text m_text;
	sf::Texture m_texture_on;
	sf::Texture m_texture_off;
	sf::Sprite m_sprite;

	int coord_x_bouton;
	int coord_y_bouton;

public:
	Bouton(sf::RenderWindow * window);
	void setPosition(int x, int y);
	bool estDansLeBouton(int x, int y);
	void draw();

	void setTexture(sf::Texture texture_on, sf::Texture texture_off);
	void setActiveTexture(bool activation);
	void setFont(sf::Font font);
	void setText(char * text, int taille_police);
	~Bouton();
};

