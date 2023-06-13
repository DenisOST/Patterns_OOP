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

	// ������� ����� ������ ������
	virtual void Education()
	{
		cout << "�������� �����!" << endl;
		cout << endl;
		// ���� ������ ���� �����
		for (int i = 0; i < groups.size(); i++)
		{
			cout << "������: ";
			groups[i]->DisplayNameOfGroup();
			// ���� ������ ���� ����� � ������
			for (int j = 0; j < groups[i]->GetCountChilds(); j++)
			{
				cout << endl << "=============================================" << endl;
				groups[i]->GetChildForIndex(j)->OutputFIO();

				// ���� ������ ���� ������� ��� �������
				for (int k = 0; k < tasks.size(); k++)
				{
					groups[i]->GetChildForIndex(j)->SetTask(tasks[k]);
					groups[i]->GetChildForIndex(j)->PrintCategoryTask();
					groups[i]->GetChildForIndex(j)->TestingChild();
				}
			}
		}

		cout << endl;
		cout << "���� ���������, ���� ��������!" << endl;
		cout << endl;

		// ���� ������ ���� �����
		for (int i = 0; i < groups.size(); i++)
		{
			cout << "������: ";
			groups[i]->DisplayNameOfGroup();
			// ���� ������ ���� ����� � ������
			for (int j = 0; j < groups[i]->GetCountChilds(); j++)
			{
				cout << endl << "=============================================" << endl;
				groups[i]->GetChildForIndex(j)->OutputFIO();

				// ���� ������ ���� ������� ��� �������
				for (int k = 0; k < games.size(); k++)
				{
					groups[i]->GetChildForIndex(j)->SetGame(games[k]);
					groups[i]->GetChildForIndex(j)->PlayTheGame();
				}
			}
		}

		cout << "���� ��������� ������� �����, ���� �����������!" << endl;
	}
};