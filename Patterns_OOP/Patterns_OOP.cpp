#include <iostream>
#include "Windows.h"
#include "Program.h"


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Child* Child1 = new Child("Герасимов", "Николай", "Анатольевич");
	Child* Child2 = new Child("Синицена", "Мария", "Викторовна");
	Child* Child3 = new Child("Сидоров", "Олег", "Львович");

	Group* Group1 = new Group("Начальная школа");

	Group1->AddChild(Child1);
	Group1->AddChild(Child2);
	Group1->AddChild(Child3);

	Task* Task1 = new Math();

	Task* Task2 = new Rus();

	Task* Task3 = new Bio();

	Task1->SetQuestionAndAnswer("2 + 2 = ?", "4");
	Task2->SetQuestionAndAnswer("Маш*на", "и");
	Task3->SetQuestionAndAnswer("Курица несёт ...", "яйца");

	Razvitie* razvitie = new Razvitie();
	Razvlechenie* razvlechenie = new Razvlechenie();

	Games* game1 = new Games(razvitie);
	Games* game2 = new Games(razvlechenie);


	Room* Room1 = new Room();

	Room1->AddGroup(Group1);
	Room1->AddTasks(Task1);
	Room1->AddTasks(Task2);
	Room1->AddTasks(Task3);

	Room1->AddGames(game1);
	Room1->AddGames(game2);

	Room1->Education();

	cout << "======================================================";
	Child childTestProxy("Иванов", "Иван", "Андреевич");
	childTestProxy.OutputFIO();
	childTestProxy.PlayTheGame();
}