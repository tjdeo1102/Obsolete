#include <SFML/graphics.hpp>
#include <SFML/system.hpp>
#include <SFML/window.hpp>

class Cursor
{
private:
	bool ShowCrosshair{ false };
	sf::Texture MenuCursorImage;
	sf::Texture MenuCursorClickImage;
	sf::Texture CrosshairImage;
	sf::RectangleShape cursor{ sf::Vector2f(32.0f, 32.0f) };

public:
	sf::Vector2i Pos;

	friend class Game;
	
	Cursor();

	void Update();
};