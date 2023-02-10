//Задание №1
// 
//  ДЗ №15 (08_02) Климов (массив MIN_MAX)
//
//В одномерном массиве, заполненном случайными числами,
//определить минимальный и максимальный элементы

#include <iostream>
#include <time.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	
	int sizeMassive =1;//размер массива
	int array[20];//одномерный массив, ограниченного размера 
	int max = 0, min = 0;//переменная для максимума и минимума

	cout << "\n **************************************************************"<<"\n";
	cout << " *  Программа поиска MAX и MIN элементов в одномерном массиве  *"<<"\n";
	cout << " *      заполненном случайным образом числами от 0 до 100      *" << "\n";
	cout << " **************************************************************" << "\n\n";

	cout << "\tВведите размер одномерного массива от 1 до 20: "<<"\n";
	cout << "\t\t\t\t";
	cin >> sizeMassive;
	
	for (int i = 0; i < sizeMassive; i++)//заполнение массива
	{
		array[i] = 0 + rand() % 100;
		cout << array[i]<<" ";
	}
	cout << "\n";

	max = array[0];
	min = array[0];

	for (int j = 0; j < sizeMassive; j++)
	{
		if (array[j] > max) max = array[j];
		if (array[j] < min) min = array[j];
	}
	
	cout << "MAX = "<< max <<", MIN = " << min << "\n";

	system("pause");
	return 0;
}

