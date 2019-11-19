#include <SFML/graphics.hpp>
#include <SFML/system.hpp>
#include <SFML/window.hpp>
#include <iostream>

class Game
{
private:
	sf::RenderWindow window;
	sf::RectangleShape Cursor;
	sf::RectangleShape MenuQuit;
	sf::Texture CursorTexture;
	sf::Texture MenuQuitTexture;
	sf::Texture MenuQuitPressedTexture;
	sf::Vector2i MousePos;
	sf::Vector2i Res;
	sf::Event evnt;
	sf::Clock time;
public:
	Game();
	~Game();
	void Run();
	void Update();
	void HandleEvents();
	void Draw();
};
