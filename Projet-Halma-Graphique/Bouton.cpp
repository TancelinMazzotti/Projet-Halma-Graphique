#include "Bouton.h"

Bouton::Bouton(sf::RenderWindow * window)
{
	m_window = window;
	coord_x_bouton = 0;
	coord_y_bouton = 0;
}

void Bouton::setPosition(int x, int y)
{
	coord_x_bouton = x * m_window->getSize().x / 100;
	coord_y_bouton = y * m_window->getSize().y / 100;

	m_sprite.setPosition(coord_x_bouton - m_texture_off.getSize().x / 2, coord_y_bouton - m_texture_off.getSize().y / 2);
	m_text.setPosition(coord_x_bouton - m_text.getGlobalBounds().width / 2, coord_y_bouton - m_text.getGlobalBounds().height / 2);
}

bool Bouton::estDansLeBouton(int x, int y)
{
	if (m_sprite.getPosition().x < x && x < m_sprite.getPosition().x + m_sprite.getGlobalBounds().width)
	{
		if(m_sprite.getPosition().y < y && y < m_sprite.getPosition().y + m_sprite.getGlobalBounds().height)
			return true;
	}
	return false;
}

void Bouton::draw()
{
	m_window->draw(m_sprite);
	m_window->draw(m_text);
}

void Bouton::setTexture(sf::Texture texture_on, sf::Texture texture_off)
{
	m_texture_on = texture_on;
	m_texture_off = texture_off;
	m_sprite.setTexture(m_texture_off);
}

void Bouton::setActiveTexture(bool activation)
{
	if (activation)
		m_sprite.setTexture(m_texture_on);
	else
		m_sprite.setTexture(m_texture_off);
}

void Bouton::setFont(sf::Font font)
{
	m_font = font;
	m_text.setFont(m_font);
}

void Bouton::setText(char * text, int taille_police)
{
	m_text.setString(text);
	m_text.setCharacterSize(taille_police);
}

Bouton::~Bouton()
{
}
