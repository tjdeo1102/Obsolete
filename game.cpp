#include "game.h"

Game::Game()
	:window{ sf::VideoMode::getDesktopMode(), "Obsolete", sf::Style::Fullscreen}, evnt{}
{
}

Game::~Game()
{
}

void Game::Run()
{
	window.setMouseCursorVisible(false);
	Update();

}

void Game::Update()
{
	while (window.isOpen())
	{
		HandleEvents();
		mouse.Update();
		Draw();
	}
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

	window.draw(mouse.cursor);
	window.display();
}