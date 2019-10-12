#pragma once
#pragma once
#include <SFML/Graphics.hpp>
class Player
{

public:
	Player();
	sf::RectangleShape m_player;


	void update();
	void setUpContent();
	void render(sf::RenderWindow& t_window);
	sf::RectangleShpe getPlayer();


private:

};
