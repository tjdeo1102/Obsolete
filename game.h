#include <SFML/graphics.hpp>
#include <SFML/system.hpp>
#include <SFML/window.hpp>
#include <iostream>
#include "cursor.h"

class Game
{
private:
	sf::RenderWindow window;
	sf::Event evnt;
	sf::Clock time;
	Cursor mouse;
public:
	Game();
	~Game();
	void Run();
	void Update();
	void HandleEvents();
	void Draw();
};
