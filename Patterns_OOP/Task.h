#pragma once
#include <iostream>
#include <stdio.h>
#include <string>
#include "TasksCategory.h"

using namespace std;

class Task
{
protected:
	TasksCategory* Category;
	string Question = "";
	string Answer = "";

public:
	virtual void GetTask() = 0;
	
	void SetQuestionAndAnswer(string question, string answer)
	{
		Question = question;
		Answer = answer;
	}

	int GetQuestionAndAnswer()
	{
		cout << Question << endl;
		cout << "Введите ответ: ";
		string answer;
		if (Emulation::RandomAnswer() == 1)
		{
			Answer = answer;
			cout << Answer << endl;	
		}			
		else		
		{
			cout << "Не знаю!" << endl;
			Answer = "Не знаю!";
		}


		if (Answer == answer)
			return 1;
		return 0;
	}
};

class Math : public Task
{
public:
	Math()
	{
		Category = new MathCategory();
	}

	virtual void GetTask()
	{
		Category->ChoiceCategory();
	}
};

class Rus : public Task
{
public:
	Rus()
	{
		Category = new RusCategory();
	}

	virtual void GetTask()
	{
		Category->ChoiceCategory();
	}
};

class Bio : public Task
{
public:
	Bio()
	{
		Category = new BioCategory();
	}

	virtual void GetTask()
	{
		Category->ChoiceCategory();
	}
};
