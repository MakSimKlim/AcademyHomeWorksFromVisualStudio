
#include <iostream>
#include <time.h>
#include "windows.h"
#include <iomanip>

using namespace std;

//Передача в функцию многомерного динамического массива

int** ArrDinamicGenerator(unsigned int sizeLines, unsigned int sizeColumns) // функция многомерного динамического массива
                                                                //unsigned - целое без знака, от 0 и выше, отрицательных значений нет
{
	int** dinamicArr = new int* [sizeLines];
	for (int i = 0; i < sizeLines; i++)
	{
		dinamicArr[i] = new int[sizeColumns];
	}
	return dinamicArr;
}



void ArrDinamicDestroyer(int** dinamicArr, unsigned int sizeLines) //высвобождение памяти путем удаления массива
{
	for (int i = 0; i < sizeLines; i++)
	{
		delete[] dinamicArr[i];
	}
	delete[] dinamicArr;
}


int main()
{
	setlocale(LC_ALL, "Rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));


	cout << "\n ***********************************************************************" << endl;
	cout << " *    Программа передачи в функцию многомерного динамического массива  *" << endl;
	cout << " ***********************************************************************" << endl;
	
	
    unsigned int lines = 0;
	unsigned int columns = 0;
	int** matrix;

	cout << "Введите количество строк и столбцов многомерного массив: " << "\n";
	cin >> lines >> columns;

	cout << "\n";

	// создание массива
	matrix = ArrDinamicGenerator(lines, columns);

	// использование массива
	for (int i = 0; i < lines; i++) {
		for (int j = 0; j < columns; j++) {
			matrix[i][j] = 0 + rand() % (10 - 0);
			cout << setw(4) << matrix[i][j]<<" ";//setw(8) - настройка ширины столбца
		}
		cout << "\n";
	}

	// уничтожение
	ArrDinamicDestroyer(matrix, lines);

	return 0;
}
