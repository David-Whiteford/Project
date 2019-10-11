#pragma once
#include <SFML/Graphics.hpp>
class Enemy
{

public:
	Enemy();
	sf::RectangleShape enemy;
	
	void update();
	void setUpContent();
	void render(sf::RenderWindow &  t_window);
	


private:

};
