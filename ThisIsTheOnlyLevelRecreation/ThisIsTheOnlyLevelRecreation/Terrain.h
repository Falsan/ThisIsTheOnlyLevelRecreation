#pragma once

#include<SFML\Graphics.hpp>

//this class is essentiall a square of land which will have certain properties
class Terrain
{
public:
	Terrain();
	~Terrain();

	bool getIsCover();
	void setIsCover(bool);
	bool getIsOccupied();
	void setIsOccupied(bool);
	bool getIsPassable();
	void setIsPassable(bool);
	bool getGoal();
	void setGoal(bool);
	bool getSpawn();
	void setSpawn(bool);

	void setTexture(sf::Texture);

	//void setUpTerrainSquare();

	sf::RectangleShape shape;

private:

	//sf::Vector2f m_radius;
	bool isSpawn;
	bool isOccupied;
	bool isCover;
	bool isPassable;
	sf::Texture texture;
	//int positionX;
	//int positionY;

};
