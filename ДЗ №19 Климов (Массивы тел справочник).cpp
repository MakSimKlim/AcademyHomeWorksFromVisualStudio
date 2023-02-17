//Задание #1
// 
// ДЗ №19 Климов (Массивы тел справочник)
//
//Написать программу «справочник». Создать два одномерных
//массива.Один массив хранит номера мобильных телефонов,
//второй — домашние телефонные номера.
//Реализовать меню для пользователя :
//■■ Отсортировать по номерам мобильных
//■■ Отсортировать по домашним номерам телефонов;
//■■ Вывести пользовательский данные;
//■■ Выход.
// 
//


#include <iostream>
#include <time.h>
#include <string>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));

	int long long arrMobTel[10];
	int long long arrHomeTel[10];
	string arrName[10] = { "Олег","Женя К","Алёна","Али","Эдик","Влад","Макс","Женя Ш","Данил","Руслан" };
	int numberMob = 11;
	int numberHome = 7;
	int actionID = 0;


	cout << "\n ****************************************************" << endl;
	cout << " *          Программа тефонный справочник v1.0      *" << endl;
	cout << " ****************************************************" << endl;

	cout << "Телефонный справочник:" << "\n";
	cout << "     = Мобильный тел =     = Домашний тел =    = Имя =" << "\n\n";

	for (int i = 0; i < 10; i++)
	{
		arrMobTel[i] = 89000000000 + rand() % (89999999999 - 89000000000);
		arrHomeTel[i] = 1000000 + rand() % (9999999 - 1000000);
		cout << "\t" << arrMobTel[i] << "\t\t";
		cout << arrHomeTel[i] << "\t\t";
		cout << arrName[i] << " \n";

	}

	cout << "выберите действие" << "\n";
	cout << "1 - Отсортировать по номерам мобильных" << "\n";
	cout << "2 - Отсортировать по домашним номерам телефонов" << "\n";
	cout << "3 - Выход" << "\n";
	cin >> actionID;

	while (actionID < 1 || actionID > 4)
	{
		cout << "Ошибка ввода. Попробуйте ещё раз" << "\n";
		cin >> actionID;
	}

	switch (actionID)
	{
	case 1:
	
		cout << "сортировка по возрастанию мобильных номеров" << "\n\n";
		for (int j = 0; j < 9; j++)
		{
			while (arrMobTel[j] > arrMobTel[j + 1])//сортировка всех массивов по этому условию
			{
				swap(arrMobTel[j], arrMobTel[j + 1]);
				swap(arrHomeTel[j], arrHomeTel[j + 1]);
				swap(arrName[j], arrName[j + 1]);
				j--;
			}

		}
		//выводим отсортированный массив
		for (int y = 0; y < 10; y++)
		{

			cout << "\t" << arrMobTel[y] << "\t\t";
			cout << arrHomeTel[y] << "\t\t";
			cout << arrName[y] << " \n";

		}
		cout << '\n';
		break;
	
	case 2:
	
		cout << "сортировка по возрастанию домашних номеров" << "\n\n";

		for (int j = 0; j < 9; j++)
		{
			while (arrHomeTel[j] > arrHomeTel[j + 1])//сортировка всех массивов по этому условию
			{
				swap(arrMobTel[j], arrMobTel[j + 1]);
				swap(arrHomeTel[j], arrHomeTel[j + 1]);
				swap(arrName[j], arrName[j + 1]);
				j--;
			}

		}
		//выводим отсортированный массив
		for (int y = 0; y < 10; y++)
		{

			cout << "\t" << arrMobTel[y] << "\t\t";
			cout << arrHomeTel[y] << "\t\t";
			cout << arrName[y] << " \n";

		}
		cout << '\n';
		break;

	default:
		exit(0);

	}




	system("pause");

	return 0;

}
