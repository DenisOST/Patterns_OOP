#pragma once
#include "Games.h"

class GamesProxy : public IGames
{
private:
	Games* prox;

	void TimeInformation()
	{
		cout << "Ребёнок справился за " << Emulation::GetRandomInt(4, 12) << " попыток!" << endl;
	}

public:

	virtual void PlayInGame()
	{
		prox->PlayInGame();
		TimeInformation();
	}

	GamesProxy()
	{
		prox = new Games(new Razvitie());
	}

};

