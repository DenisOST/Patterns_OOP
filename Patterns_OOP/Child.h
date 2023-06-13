#pragma once
#include <iostream>
#include <stdio.h>
#include <string>
#include "Task.h"

using namespace std;

class IChild
{
public:
	virtual void TestingChild() = 0;
};

class Child : public IChild
{
	string Surname = "";
	string Name = "";
	string Patronymic = "";
	Task* CurrentTask;			// Это динамическое Делегирование, поэтому сюда можно подставлять разные типы заданий для ребенка
	IGames* CurrentGame;
	int Scores = 0;

public:
	Child()
	{
		CurrentTask = NULL;
	}

	Child(string surname, string name, string patronymic)
	{
		Surname = surname;
		Name = name;
		Patronymic = patronymic;
		CurrentTask = NULL;
	}

	string GetSurname()
	{
		return Surname;
	}

	string GetName()
	{
		return Name;
	}

	string GetPatronymic()
	{
		return Patronymic;
	}

	int GetScores()
	{
		return Scores;
	}

	void PrintCategoryTask()
	{
		CurrentTask->GetTask();
	}

	virtual void TestingChild()
	{
		if (CurrentTask->GetQuestionAndAnswer() == 1)
		{
			cout << "Ответ правильный!" << endl;
		}
		else
		{
			cout << "Ответ неправильный!" << endl;
		}
	}

	void SetChild(string surname, string name, string patronymic)
	{
		Surname = surname;
		Name = name;
		Patronymic = patronymic;
	}

	void SetTask(Task *task)
	{
		CurrentTask = task;
	}

	void SetGame(Games* game)
	{
		CurrentGame = game;
	}

	void PlayTheGame()
	{
		// Прокси
		//==================================
		if(CurrentGame == NULL)
		{
			CurrentGame = new GamesProxy();
			CurrentGame->PlayInGame();
			CurrentGame = NULL;
		}
		//==================================
		else
			CurrentGame->PlayInGame();
	}

	virtual void OutputFIO()
	{
		cout << endl << Surname << " " << Name << " " << Patronymic << endl;
	}
};

