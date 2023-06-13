#pragma once
#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include "Child.h"

using namespace std;

class Group
{
	string Name = "";
	vector <Child*> child;	// Статическое делегирование, т.к. дети в группе не изменяются

public:
	Group()
	{
		Name = "";
	}
	
	Group(string name)
	{
		Name = name;
	}

	void AddChild(Child* addchild)
	{
		child.push_back(addchild);
	}

	Child* GetChildForIndex(int index)
	{
		if (index < child.size())
		{
			return child[index];
		}
		return NULL;
	}

	int GetCountChilds()
	{
		return child.size();
	}

	void DisplayNameOfGroup()
	{
		if (Name != "")
			cout << Name << endl;
		else
			cout << "У группы не задали имя!" << endl;
	}

	void DeleteChild(string surname)
	{
		for (int i = 0; i < child.size(); i++)
		{
			if (child[i]->GetSurname() == surname)
			{
				cout << "Ребёнок удалён из группы!";
				break;
			}
			else
				cout << "Ребёнка с такой фамилией нет в группе!";
		}
	}
};

