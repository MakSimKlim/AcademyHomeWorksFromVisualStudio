//Задание №2
//
// ДЗ №43 Климов (структура Автомобиль)
//
//
//Реализовать структуру «Автомобиль» (длина, 
//клиренс(высота посадки), объем двигателя, мощность
//двигателя, диаметр колес, цвет, тип коробки передач).
//Создайте функции для задания значений, отображения
//значений, поиска значений.

#include <iostream>
#include <Windows.h>

using namespace std;

struct Automobile
{
	string name{ NULL };             // название автомобиля
	int length =0;              // длина автомобиля
	int clearance =0;           // клиренс
	int engineDisplacement =0;  // объем двигателя
	int enginePower =0;         // мощность двигателя
	int wheelDiameter =0;       // диаметр колес
	string color{ NULL };            // цвет автомобиля
	string gearboxType{ NULL };      // тип коробки передач
} automobiles[100];

void DisplayAutomobileInfo(int k)
{
	for (int i = 1; i <= k; i++)
	{
		cout << "название автомобиля: " << automobiles[i].name << "\n";
		cout << "длина автомобиля: " << automobiles[i].length << "\n";
		cout << "клиренс: " << automobiles[i].clearance << "\n";
		cout << "объем двигателя: " << automobiles[i].engineDisplacement << "\n";
		cout << "мощность двигателя: " << automobiles[i].enginePower << "\n";
		cout << "диаметр колес: " << automobiles[i].wheelDiameter << "\n";
		cout << "цвет автомобиля: " << automobiles[i].color << "\n";
		cout << "тип коробки передач: " << automobiles[i].gearboxType << "\n";
	}
}

void SearchValue (int k, string name)
{
	int count = 0;
	for (int i = 1; i <= k; i++)
	{
		if (automobiles[i].name == name)
		{
			count++;
			DisplayAutomobileInfo(i);
			cout << "\n";
		}
	}
	if (count == 0)
	{
		cout << "Ничего не найдено.\n\n";
	}
}

void addAutomobileInfo(int k)       // функция задания параметров автомобиля
{
	cout << "Введите данные об автомобиле: \n\n";
	cout << "название автомобиля: ";
	cin >> automobiles[k].name;
	cout << "длина автомобиля: ";
	cin >> automobiles[k].length;
	cout << "клиренс: ";
	cin >> automobiles[k].clearance;
	cout << "объем двигателя: ";
	cin >> automobiles[k].engineDisplacement;
	cout << "мощность двигателя: ";
	cin >> automobiles[k].enginePower;
	cout << "диаметр колес: ";
	cin >> automobiles[k].wheelDiameter;
	cout << "цвет автомобиля: ";
	cin >> automobiles[k].color;
	cout << "тип коробки передач: ";
	cin >> automobiles[k].gearboxType;
	cout << "\n";
}


int main()
{
	setlocale(LC_ALL, "Rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int choiceId = 0;
	int k = 0;
	int name = 0;
	string nameAutomobile{ NULL };

	while (choiceId != 4)
	{
		system("cls");

		cout << "\n ***********************************************************************" << endl;
		cout << " *                        Программа структура Автомобиль               *" << endl;
		cout << " ***********************************************************************" << endl;

		cout << "- 1 - Добавить запись.\n";
		cout << "- 2 - Вывести весь список.\n";
		cout << "- 3 - Поиск по названию.\n";
		cout << "- 4 - Выход.\n";

		cin >> choiceId;
		system("cls");

		switch (choiceId)
		{
		case(1):
			k++;
			addAutomobileInfo(k);
			break;

		case(2):
			DisplayAutomobileInfo(k);
			system("pause");
			break;

		case(3):
			cout << "Введите название автомобиля: ";
			cin >> nameAutomobile;
			cout << "\n";
			SearchValue(k, nameAutomobile);
			system("pause");
			break;

		default:
			break;
		}
	}


	system("pause");

	return 0;
}