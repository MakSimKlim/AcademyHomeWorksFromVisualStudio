//Задача №1
//
// ДЗ №38 Климов (многомерные динамические массивы)
//
//Написать функцию, добавляющую столбец 
//двухмерному массиву в указанную позицию.


#include <iostream>
#include <time.h>
#include "windows.h"
#include <iomanip>

using namespace std;

//Передача в функцию многомерного динамического массива

int** ArrDinamicRandomise(unsigned int dim1, unsigned int dim2) // функция многомерного динамического массива
                                                                //unsigned - целое без знака, от 0 и выше, отрицательных значений нет
{
	int** ptrary = new int* [dim1];
	for (int i = 0; i < dim1; i++)
	{
		ptrary[i] = new int[dim2];
	}
	return ptrary;
}

void ArrDinamicDestroyer(int** ary, unsigned int dim1) //высвобождение памяти путем удаления массива
{
	for (int i = 0; i < dim1; i++) 
	{
		delete[] ary[i];
	}
	delete[] ary;
}


int main()
{
	setlocale(LC_ALL, "Rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));


	cout << "\n ***********************************************************************" << endl;
	cout << " *              Программа добавления столбца в двумерный массив        *" << endl;
	cout << " ***********************************************************************" << endl;
	
	
    unsigned int DIM1 = 0;
	unsigned int DIM2 = 0;
	int** matrix;

	cout << "Введите количество строк и столбцов многомерного массив: " << "\n";
	cin >> DIM1 >> DIM2;

	cout << "\n";

	// создание массива
	matrix = ArrDinamicRandomise(DIM1, DIM2);

	// использование
	for (int i = 0; i < DIM1; i++) {
		for (int j = 0; j < DIM2; j++) {
			matrix[i][j] = 0 + rand() % (10 - 0);;
			cout << setw(4) << matrix[i][j]<<" ";
			
		}
		cout << "\n";
	}

	// уничтожение
	ArrDinamicDestroyer(matrix, DIM1);

	return 0;
}