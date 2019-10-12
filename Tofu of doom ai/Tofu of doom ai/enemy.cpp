#include "enemy.h"

Enemy::Enemy()
{
	setUpContent();
}

void Enemy::update()
{
}

void Enemy::setUpContent()
{
	enemy.setFillColor(sf::Color::Red);
	enemy.setSize(sf::Vector2f(100, 50));
	enemy.setOutlineColor(sf::Color::Red);
	enemy.setOutlineThickness(5);
	enemy.setPosition(10, 20);
}

void Enemy::render(sf::RenderWindow & t_window)
{
	t_window.draw(enemy);
}
