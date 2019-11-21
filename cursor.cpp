#include "cursor.h"

Cursor::Cursor()
	:Pos{ sf::Mouse::getPosition() }
{
	MenuCursorImage.loadFromFile("C:/Users/Daewook/Desktop/Obsolete/CursorImage.png");
	MenuCursorClickImage.loadFromFile("C:/Users/Daewook/Desktop/Obsolete/CursorClickImage.png");
	CrosshairImage.loadFromFile("C:/Users/Daewook/Desktop/Obsolete/CrosshairImage.png");
	cursor.setTexture(&MenuCursorImage);
}

void Cursor::Update()
{
	Pos = sf::Mouse::getPosition();
	cursor.setPosition(static_cast<float>(Pos.x), static_cast<float>(Pos.y));
	if (ShowCrosshair)
	{
		cursor.setTexture(&CrosshairImage);
	}
	else if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
	{
		cursor.setTexture(&MenuCursorClickImage);
	}
	else
	{
		cursor.setTexture(&MenuCursorImage);
	}
}