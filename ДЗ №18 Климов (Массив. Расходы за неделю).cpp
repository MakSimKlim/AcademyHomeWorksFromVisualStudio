// Задание #3
// 
// ДЗ №18 Климов (Массив. Расходы за неделю)
//
//Пользователь вводит данные о своих расходах в долла-
//рах за неделю(каждый день).Написать программу, которая
//вычисляет :
//■■ среднюю(за неделю) потраченную сумму;++
//■■ общую сумму, потраченную пользователем за неделю;++
//■■ количество дней и их названия(например, «вторник»),
//когда сумма расхода(в день) превысила 100 долларов.

#include <iostream>
#include <time.h>
#include <string>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	
	int SpendingMon = 0;//траты в понедельник
	int SpendingTue = 0;//траты в вторник
	int SpendingWed = 0;//траты в среду
	int SpendingThu = 0;//траты в четверг
	int SpendingFri = 0;//траты в пятницу
	int SpendingSat = 0;//траты в субботу
	int SpendingSun = 0;//траты в воскресенье
	int containSum = 0;//контейнер суммирования
	int averageSpending = 0;//средняя трата за неделю
	int containDays = 0;//контейнер суммирования
	int array[7];//массив с тратами за неделю
	string nameDay[7] = { "понедельник","вторник" ,"среда" ,"четверг" ,"пятница" ,"суббота" ,"воскресенье" };//массив с названием дней недели

	cout << "\n ****************************************************" << endl;
	cout << " *     Программа анализа денежных расходов V1.0     *" << endl;
	cout << " ****************************************************" << endl;
	
	cout << "Введите расходы по дням недели: "<<"\n\n";
	
	cout << "Понедельник: "; 
	cin >> SpendingMon;
	array[0] = SpendingMon;
	cout << "\n";
	
	cout << "Вторник: "; 
	cin >> SpendingTue;
	array[1] = SpendingTue;
	cout << "\n";
	
	cout << "Среда: "; 
	cin >> SpendingWed;
	array[2]= SpendingWed;
	cout << "\n";

	cout << "Четверг: "; 
	cin >> SpendingThu;
	array[3] = SpendingThu;
	cout << "\n";
	
	cout << "Пятница: "; 
	cin >> SpendingFri;
	array[4] = SpendingFri;
	cout << "\n";

	cout << "Суббота: "; 
	cin >> SpendingSat;
	array[5] = SpendingSat;
	cout << "\n";

	cout << "Воскресенье: "; 
	cin >> SpendingSun;
	array[6] = SpendingSun;
	cout << "\n";

	cout << "Средняя за неделю потраченная сумма: " << "\n";
	for (int i = 0; i < 7; i++)
	{
		containSum = containSum + array[i];
	}
	averageSpending = containSum / 7;
	cout << averageSpending << "\n";
	
	cout << "Общая сумма, потраченная пользователем за неделю: " << "\n";
	cout << containSum << "\n";
	
	cout << "Количество дней и их названия, когда сумма расхода(в день) превысила 100: " << "\n";
	for (int j = 0; j < 7; j++)
	{
		if (array[j]>100) containDays += 1;

		if (array[j] > 100) cout<< nameDay[j] << "\n";
		
	}
	cout << "итого: " << containDays << " дн. " << "\n";

	cout << "\n";

	system("pause");

	return 0;
}
