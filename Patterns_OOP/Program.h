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

	virtual void Education()
	{
		for (int i = 0; i < groups.size(); i++)
		{
			for (int j = 0; j < groups[i]->GetCountChilds(); j++)
			{
				for (int k = 0; k < tasks.size(); k++)
				{
					groups[i]->GetChildForIndex(j)->OutputFIO();
					groups[i]->GetChildForIndex(j)->SetTask(tasks[k]);
					groups[i]->GetChildForIndex(j)->PrintCategoryTask();
					groups[i]->GetChildForIndex(j)->TestingChild();
				}
			}
		}
	}
};