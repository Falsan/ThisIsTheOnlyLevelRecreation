#pragma once

#include <iostream>;
#include <string>;
#include <SFML\Graphics.hpp>;
#include<SFML\Window.hpp>;
#include <SFML\System.hpp>;
#include <utility>;
#include <memory>;

#include "GameState.h";


class Game
{
public:
	Game();
	~Game();

	bool runGame();

	void tick();

	void draw();

	bool isRunning;

	void init();

	void handleInput();

	sf::RenderWindow window;
private:

	bool logPrinted;
	std::vector<std::string> debugList;

	int gameState;

	int height;
	int width;

	sf::RenderWindow* gameWindow;
	//sf::VideoMode defaultVideoMode(int, int);
	std::string windowName;

};
