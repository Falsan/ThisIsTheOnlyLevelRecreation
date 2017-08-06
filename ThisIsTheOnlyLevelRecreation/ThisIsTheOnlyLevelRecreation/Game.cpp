#include "Game.h"

Game::Game()
{
	isRunning = true;
	height = 800;
	width = 600;
	windowName = "PlatoonAIDemo";
	gameState = play;

}

Game::~Game()
{

}

//main game loop
bool Game::runGame()
{
	//defaultVideoMode(height, width);
	//gameWindow = new sf::RenderWindow(sf::VideoMode(height, width), windowName);

	sf::Thread drawThread(&Game::draw, this);
	sf::Thread inputThread(&Game::handleInput, this);


	sf::Event event;
	init();

	window.setActive(false);
	drawThread.launch();
	inputThread.launch();

	while (isRunning == true)
	{
		while (window.isOpen())
		{
			tick();


			window.pollEvent(event);

			if (event.type == sf::Event::Closed)
			{
				isRunning = false;
				window.close();
			}
		}
	}

	if (isRunning == false)
	{
		return false;
	}

	std::cout << "Issue has occured, reopening game";
	return true;
}

//used for initialisation
void Game::init()
{
	window.create(sf::VideoMode(800, 600), "Platoon AI Demo");

}

//this is the main loop for processing AI decisions
void Game::tick()
{

	if (gameState == play)
	{


	}
	else
	{

	}

}

//this thread handles drawing and rendering
void Game::draw()
{
	while (window.isOpen())
	{
		window.display();
		window.clear();
	}
}


//mostly this thread is used for debug purposes to allow the display
//of debug in the console window
void Game::handleInput()
{
	while (window.isOpen())
	{
		
	}

}
