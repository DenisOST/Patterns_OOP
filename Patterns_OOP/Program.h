#pragma once
#include "Group.h"

class IRoom
{
public:
	virtual void Education() = 0;
};

class Room : public IRoom
{
protected:
	vector <Group*> groups;
	vector <Task*> tasks;
	vector <Games*> games;


public:
	Room()
	{

	}

	void AddGroup(Group* group)
	{
		groups.push_back(group);
	}

	void AddTasks(Task* task)
	{
		tasks.push_back(task);
	}

	void AddGames(Games* game)
	{
		games.push_back(game);
	}

	// Главный метод работы модели
	virtual void Education()
	{
		cout << "Обучение детей!" << endl;
		cout << endl;
		// Цикл обхода всех групп
		for (int i = 0; i < groups.size(); i++)
		{
			cout << "Группа: ";
			groups[i]->DisplayNameOfGroup();
			// Цикл обхода всех детей в группе
			for (int j = 0; j < groups[i]->GetCountChilds(); j++)
			{
				cout << endl << "=============================================" << endl;
				groups[i]->GetChildForIndex(j)->OutputFIO();

				// Цикл обхода всех заданий для ребенка
				for (int k = 0; k < tasks.size(); k++)
				{
					groups[i]->GetChildForIndex(j)->SetTask(tasks[k]);
					groups[i]->GetChildForIndex(j)->PrintCategoryTask();
					groups[i]->GetChildForIndex(j)->TestingChild();
				}
			}
		}

		cout << endl;
		cout << "Дети поучились, пора поиграть!" << endl;
		cout << endl;

		// Цикл обхода всех групп
		for (int i = 0; i < groups.size(); i++)
		{
			cout << "Группа: ";
			groups[i]->DisplayNameOfGroup();
			// Цикл обхода всех детей в группе
			for (int j = 0; j < groups[i]->GetCountChilds(); j++)
			{
				cout << endl << "=============================================" << endl;
				groups[i]->GetChildForIndex(j)->OutputFIO();

				// Цикл обхода всех заданий для ребенка
				for (int k = 0; k < games.size(); k++)
				{
					groups[i]->GetChildForIndex(j)->SetGame(games[k]);
					groups[i]->GetChildForIndex(j)->PlayTheGame();
				}
			}
		}

		cout << "Дети выполнили дневную норму, пора заканчивать!" << endl;
	}
};