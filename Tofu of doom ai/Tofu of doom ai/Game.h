#pragma once

#include "ScreenSize.h"
#include <SFML/Graphics.hpp>
#include "enemy.h"
class Game
{
public:

	Game();
	Enemy m_enemy;

	void run();
	void processEvents();
	void update(double dt);
	void processGameEvents(sf::Event& event);
	void render();
private:
	sf::RenderWindow m_window;
};
