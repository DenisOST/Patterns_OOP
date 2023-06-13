#pragma once
#include <iostream>
#include <stdio.h>
#include <string>
#include "Emulation.h"

using namespace std;

class TasksCategory
{
public:
	virtual void ChoiceCategory() = 0;
};

class MathCategory:public TasksCategory
{
public:
	virtual void ChoiceCategory()
	{
		cout << "It's Math!\n";
	}
};

class RusCategory :public TasksCategory
{
public:
	virtual void ChoiceCategory()
	{
		cout << "It's Rus!\n";
	}
};

class BioCategory :public TasksCategory
{
public:
	virtual void ChoiceCategory()
	{
		cout << "It's Biology!\n";
	}
};