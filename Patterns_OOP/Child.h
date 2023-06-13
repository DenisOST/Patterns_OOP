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
	Task* CurrentTask;
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

	void OutputFIO()
	{
		cout << endl << Surname << " " << Name << " " << Patronymic << endl;
	}
};

