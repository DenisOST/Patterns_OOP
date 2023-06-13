#pragma once
#include "Emulation.h"

class TypesOfGames
{
    public:
	virtual int DisplayTypeOfGame() = 0;
};

class Razvitie :public TypesOfGames
{
public:
	virtual int DisplayTypeOfGame()
	{
		cout << "Развивающая игра\n";
        return 0;
	}
};

class Razvlechenie :public TypesOfGames
{
public:
	virtual int DisplayTypeOfGame()
	{
		cout << "Развлекательная игра\n";
        return 1;
	}
};
