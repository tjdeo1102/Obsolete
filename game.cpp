#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include "game.h"

Game::Game()
	:window{ sf::VideoMode::getDesktopMode(), "Obsolete", sf::Style::None},
	Cursor{ sf::Vector2f(32.0f, 32.0f) }, MenuQuit{ sf::Vector2f(128.0f,32.0f) }, evnt{}
{
	CursorTexture.loadFromFile("C:/Users/Daewook/Desktop/Obsolete/Cursor.png");
	Cursor.setTexture(&CursorTexture);
	MenuQuitTexture.loadFromFile("C:/Users/Daewook/Desktop/Obsolete/MenuQuit.png");
	MenuQuitPressedTexture.loadFromFile("C:/Users/Daewook/Desktop/Obsolete/MenuQuitPressed.png");
	MenuQuit.setTexture(&MenuQuitTexture);
}

Game::~Game()
{
}

void Game::Run()
{
	window.setMouseCursorVisible(false);
	while (window.isOpen())
	{
		HandleEvents();
		Update();
		Draw();
	}
}

void Game::Update()
{

}

void Game::HandleEvents()
{
	while (window.pollEvent(evnt))
	{
		if (evnt.type == sf::Event::Closed)
		{
			window.close();
		}
	}
}

void Game::Draw()
{
	window.clear();
	MousePos = sf::Mouse::getPosition();
	MenuQuit.setPosition(960.0f, 540.0f);
	Cursor.setPosition(static_cast<float>(MousePos.x), static_cast<float>(MousePos.y));
	if (MenuQuit.getGlobalBounds().contains(static_cast<float>(MousePos.x), static_cast<float>(MousePos.y)))
	{
		MenuQuit.setTexture(&MenuQuitPressedTexture);
		if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
		{
			window.close();
		}
	}
	else
	{
		MenuQuit.setTexture(&MenuQuitTexture);
	}
	window.draw(MenuQuit);
	window.draw(Cursor);
	window.display();
}