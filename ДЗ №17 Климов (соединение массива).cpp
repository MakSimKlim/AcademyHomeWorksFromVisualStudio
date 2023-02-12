// Задание #2
// 
// ДЗ №17 Климов (соединение массива)
//
//Напишите программу, которая выполняет поэлементную
//сумму двух массивов и результат заносит в третий массив.
//Элементы массивов можно сгенерировать в произвольном
//диапазоне.

#include <iostream>
#include <time.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));

	int arrayFirst[50], arraySecond[50], arraySum[50];
	int N = 0, a = 0, b = 0;

	cout << "\n ****************************************************" << endl;
	cout << " *    Программа соединения двух массивов в один     *" << endl;
	cout << " ****************************************************" << endl;

	cout << "Задайте размер массивов до 50: " << "\n";
	cin >> N;
	cout << "Необходимо ввести значения для рандомного заполнения массива." << "\n";
	cout << "Введите начальное значения для рандомайзера: " << "\n";
	cin >> a;
	cout << "Введите конечное значения для рандомайзера: " << "\n";
	cin >> b;
	
	cout << "Первый массив: " << "\n";
	for (int i = 0; i < N; i++)
	{
		arrayFirst[i] = a + rand() % (b - a);
		cout << arrayFirst[i] << " ";
	}
	cout << "\n";
	cout << "Второй массив: " << "\n";
	for (int j = 0; j < N; j++)
	{
		arraySecond[j] = a + rand() % (b - a);
		cout << arraySecond[j] << " ";
	}
	cout << "\n";
	cout << "Третий массив (из сумм элементов 1 и 2 массивов): " << "\n";
	for (int k = 0; k < N; k++)
	{
		arraySum[k] = arrayFirst[k] + arraySecond[k];
		cout << arraySum[k] << " ";
	}
	cout << "\n";

	system("pause");

	return 0;
}
