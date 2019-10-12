#include "Player.h"

Player::Player()
{
	setUpContent();
}

void Player::update()
{
}

void Player::setUpContent()
{
	

	m_player.setFillColor(sf::Color::Blue);
	m_player.setSize(sf::Vector2f(100, 50));
	m_player.setOutlineColor(sf::Color::Red);
	m_player.setOutlineThickness(5);
	m_player.setPosition(10, 200);
}

void Player::render(sf::RenderWindow& t_window)
{
	t_window.draw(m_player);
}

sf::RectangleShpe Player::getPlayer()
{
	return m_player;
}
