////Задача №1, 2
////
//// ДЗ №38 Климов (многомерные динамические массивы)
////
////Задание 1. Написать функцию, добавляющую столбец двухмерному массиву в указанную позицию.
////
////Задание 2. Написать функцию, удаляющую столбец двухмерного массива по указанному номеру.


#include <iostream>
#include <ctime>
using namespace std;

void DynamicArrayTwo(int**& originalArr, int& sizeRow, int& sizeCol); // Функция распределения динамической памяти двумерного массива
void DeletingTwoDimensionalArray(int**& originalArr, int& sizeRow, int& sizeCol); // Функция удаления двумерного динамического массива
void FillingTwoDimensionalArrayRandomNumbers(int**& originalArr, int& sizeRow, int& sizeCol); // Функция заполнения двумерного массива случайными числами
void OutTwoDimensionalArray(int**& originalArr, int& sizeRow, int& sizeCol); //Функция вывода двумерного массива
void AddColumn(int**& originalArr, int**& arrAddColumn, int& sizeRow, int& sizeColAdd, int& position); // функция, добавляющая столбец двухмерному массиву в указанную позицию.
void DelColumn(int**& originalArr, int**& arrDelColumn, int& sizeRow, int& sizeCol, int& position); // функция, удаляющая столбец двухмерному массиву в указанную позицию.

int main()
{
    setlocale(LC_ALL, "Rus");
    srand(time(0));
    int sizeRow = 5;
    int sizeCol = 5;
    int sizeColAdd = sizeCol + 1;
    int sizeColDel = sizeCol - 1;
    int positionInsert = 0;
    int positionDelete = 0;
    int shift, side;
    int** originalArr;
    int** arrAddColumn;
    int** arrDelColumn;
    //int** arrTransposeTemp;
    DynamicArrayTwo(originalArr, sizeRow, sizeCol);
    DynamicArrayTwo(arrAddColumn, sizeRow, sizeColAdd);
    DynamicArrayTwo(arrDelColumn, sizeRow, sizeColDel);

    FillingTwoDimensionalArrayRandomNumbers(originalArr, sizeRow, sizeCol);

    cout << endl << endl;
    cout << "Изначальный массив: " << endl << endl;

    OutTwoDimensionalArray(originalArr, sizeRow, sizeCol);

    //----------------------------------------------------------------------  Задание 1

    cout << endl << endl;
    cout << "Введите Позицию для вставки столбца: "; cin >> positionInsert; cout << endl;
    AddColumn(originalArr, arrAddColumn, sizeRow, sizeColAdd, positionInsert);

    cout << "Массив с добовлением столбца в указанную позицию: " << endl << endl;
    OutTwoDimensionalArray(arrAddColumn, sizeRow, sizeColAdd);

    ////---------------------------------------------------------------------- Задание 2

    cout << endl << endl;
    cout << "Введите Позицию для Удаления столбца: "; cin >> positionDelete; cout << endl;
    DelColumn(originalArr, arrDelColumn, sizeRow, sizeCol, positionDelete);

    cout << "Массив с добовлением столбца в указанную позицию: " << endl << endl;
    OutTwoDimensionalArray(arrDelColumn, sizeRow, sizeColDel);


    cout << endl << endl;
    system("pause>null");
}

// Функция распределения динамической памяти двумерного массива
void DynamicArrayTwo(int**& originalArr, int& sizeRow, int& sizeCol)
{
    originalArr = new int* [sizeRow];
    for (int i = 0; i < sizeRow; i++) {
        originalArr[i] = new int[sizeCol];
    }
}

// Функция удаления двумерного динамического массива
void DeletingTwoDimensionalArray(int**& originalArr, int& sizeRow, int& sizeCol)
{
    for (int i = 0; i < sizeRow; i++) {
        delete[] originalArr[i];
    }
}

// Функция заполнения двумерного массива случайными числами
void FillingTwoDimensionalArrayRandomNumbers(int**& originalArr, int& sizeRow, int& sizeCol)
{
    for (int i = 0; i < sizeRow; i++)
    {
        for (int j = 0; j < sizeCol; j++)
        {
            originalArr[i][j] = rand() % 50 - 25;
        }
    }
}

//Функция вывода двумерного массива
void OutTwoDimensionalArray(int**& originalArr, int& sizeRow, int& sizeCol)
{
    for (int i = 0; i < sizeRow; i++)
    {
        for (int j = 0; j < sizeCol; j++)
        {
            cout.width(7);
            cout << originalArr[i][j];
        }
        cout << endl;
    }
}

// функция, добавляющая столбец двухмерному массиву в указанную позицию.
void AddColumn(int**& originalArr, int**& arrAddColumn, int& sizeRow, int& sizeColAdd, int& position)
{
    if (position - 1 != 0)
    {
        for (int i = 0; i < sizeRow; i++)
        {
            for (int j = 0; j < position - 1; j++)
            {
                arrAddColumn[i][j] = originalArr[i][j];
            }
        }
    }

    for (int i = 0; i < sizeRow; i++)
    {
        for (int j = position - 1; j < sizeColAdd; j++)
        {
            if (j == position - 1)
            {
                arrAddColumn[i][j] = rand() % 50 - 25;
            }
            else
            {
                arrAddColumn[i][j] = originalArr[i][j - 1];
            }
        }
    }
}

// функция, удаляющая столбец двухмерному массиву в указанную позицию.
void DelColumn(int**& originalArr, int**& arrDelColumn, int& sizeRow, int& sizeCol, int& position)
{
    if (position - 1 != 0)
    {
        for (int i = 0; i < sizeRow; i++)
        {
            for (int j = 0; j < position - 1; j++)
            {
                arrDelColumn[i][j] = originalArr[i][j];
            }
        }
    }

    for (int i = 0; i < sizeRow; i++)
    {
        for (int j = position - 1; j < sizeCol; j++)
        {
            if (j != position - 1)
            {
                arrDelColumn[i][j - 1] = originalArr[i][j];
            }
        }
    }
}

