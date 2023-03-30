//Задача №3
//
// ДЗ №39 Климов (многомерные динамические массивы)
//
//Дана матрица порядка M×N(Mстрок, Nстолб-цов). Необходимо заполнить ее значениями и написать 
//функцию, осуществляющую циклический сдвиг строк
//и / или столбцов массива указанное количество раз и в указанную сторону.


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

void AddShift(unsigned int sizeLines, unsigned int sizeColumns)//функция сдвига динамического многомерного массива
//b - величина сдвига, direction - значение направления сдвига
{
	int amount = 0;//величина сдвига
	int direction = 0;//значение, соответствующее направллению сдвига
	int** dinamicMatrix;
	int tab = 4;//табуляция между символами при выводе массива

	cout << "Укажите кол-во сдвигов элементов" << "\n";
	cin >> amount;
	cout << "\n";

	cout << "Укажите направление сдвига элементов" << "\n";
	cout << "1 - вправо" << "\n";
	cout << "2 - влево " << "\n";
	cout << "3 - вниз" << "\n";
	cout << "4 - вверх" << "\n";
	cin >> direction;
	cout << "\n";

	cout << "Массив с учетом введенных параметров: " << "\n\n";

	//==================================================================================================================		

	if (direction == 1)
	{
		for (int k = 0; k < sizeLines; k++)//цикл для строк
		{
			for (int h = 0; h < amount; h++)//цикл для кол-ва сдвига вправо, т.к. внутренний
				//цикл сдвигает на 1 значение и всегда заполняется только вправо
			{
				int tmp;//временная переменная, временное хранилище, 
				//чтобы сохранить последний элемент
				tmp = dinamicMatrix[k][sizeColumns - 1];//запись последнего элемента в хранилище

				for (int l = sizeLines - 1 - 1; l >= 0; l--)
				{
					dinamicMatrix[k][l + 1] = dinamicMatrix[k][l];
				}
				dinamicMatrix[k][0] = tmp;
			}
		}
		
	}
	//==================================================================================================================		
	
	else if (direction == 2)
	{
		for (int k = 0; k < sizeLines; k++)//цикл для строк
		{
			for (int h = 0; h < sizeColumns - amount; h++)//цикл для кол-ва сдвига влево, т.к. внутренний
				//цикл сдвигает на 1 значение и всегда заполняется только вправо
				//чтобы сдвинут влево, нужно на самом деле сдвинуть вправо на величину a-b
			{
				int tmp;//временная переменная, временное хранилище, 
				//чтобы сохранить последний элемент
				tmp = dinamicMatrix[k][sizeColumns - 1];//запись последнего элемента в хранилище

				for (int l = sizeColumns - 2; l >= 0; l--)
				{
					dinamicMatrix[k][l + 1] = dinamicMatrix[k][l];
				}
				dinamicMatrix[k][0] = tmp;
			}
		}
	}
	//==================================================================================================================		

	else if (direction == 3)
	{
		for (int h = 0; h < amount; h++)
		{
			for (int k = sizeLines - 1; k > 0; k--)//цикл для строк
			{
				for (int l = 0; l < sizeColumns; l++)
				{
					int tmp;
					tmp = dinamicMatrix[k][l];
					dinamicMatrix[k][l] = dinamicMatrix[k - 1][l];
					dinamicMatrix[k - 1][l] = tmp;
				}
			}
		}
	}

	//==================================================================================================================		

	else if (direction == 4)
	{
		for (int h = 0; h < sizeLines - amount; h++)//цикл для строк сдвиг на число указанное пользователем
		{
			for (int k = sizeLines - 1; k > 0; k--)//цикл для строк сдвиг на 1
			{
				for (int l = 0; l < sizeColumns; l++)
				{
					int tmp;
					tmp = dinamicMatrix[k][l];
					dinamicMatrix[k][l] = dinamicMatrix[k - 1][l];
					dinamicMatrix[k - 1][l] = tmp;
				}

			}
		}
	}
	//==================================================================================================================		
	//вывод измененного массива на экран
	for (int i = 0; i < sizeLines; i++)
	{
		for (int j = 0; j < sizeColumns; j++)
		{
			cout << setw(tab) << dinamicMatrix[i][j] << " ";//setw(tab) - табуляция между символами при выводе массива
		}
		cout << "\n";
	}
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
	int** matrix;//динамический многомерный массив
	int tab = 4;//табуляция между символами при выводе массива

	cout << "Введите количество строк и столбцов многомерного массив: " << "\n";
	cin >> lines >> columns;

	cout << "\n";

	// создание массива
	matrix = ArrDinamicGenerator(lines, columns);

	// вывод начального массива
	for (int i = 0; i < lines; i++) 
	{
		for (int j = 0; j < columns; j++) 
		{
			matrix[i][j] = 0 + rand() % (10 - 0);
			cout << setw(tab) << matrix[i][j]<<" ";//setw() - настройка ширины столбца
		}
		cout << "\n";
	}

	AddShift(lines, columns);//функция смещения массива

	// очищение памяти
	ArrDinamicDestroyer(matrix, lines);

	return 0;
}
