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
		cout << "����������� ����\n";
        return 0;
	}
};

class Razvlechenie :public TypesOfGames
{
public:
	virtual int DisplayTypeOfGame()
	{
		cout << "��������������� ����\n";
        return 1;
	}
};
