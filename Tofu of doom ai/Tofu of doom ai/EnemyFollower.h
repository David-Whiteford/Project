#pragma once
#pragma once
#include <SFML/Graphics.hpp>
#include"Player.h"
class EnemyFollower
{

public:
	EnemyFollower();
	sf::RectangleShape m_enemyFollower;

	void update(Player const& playerCharacter);
	void setUpContent();
	void render(sf::RenderWindow& t_window);
	void move(sf::RectangleShape t_playerCharacter);


private:

	sf::Vector2f newDirection;
};

