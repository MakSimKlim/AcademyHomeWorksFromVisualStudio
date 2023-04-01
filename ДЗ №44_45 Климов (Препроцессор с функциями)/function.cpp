#pragma
#include <iostream>
#include "function.h"// заголовочный файл
#include <string>
#include <stdlib.h>//для рандомайзера

using namespace std;

//===  целочисленные значения =======================================================================

//функция для заполнения массива случайными зна­чениями
void writeArrayINTEGER(int* arr, int size)//обязательна передача массива по ссылке в эту функцию
{
    srand(time(NULL));

    for (int i = 0; i < size; i++)
    {
        arr[i] = 1 + rand() % (10 - 1);
    }
}

//функция для вывода значений массива на консоль
void showArrayINTEGER(int* arr, int size)//обязательна передача массива по ссылке в эту функцию
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// функция для поиска минимального элемента
void minArrayElementINTEGER(int* arr, int size)
{
    int min = arr[0];

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << "Минимальное значение в массиве: " << min << "\n";
}

// функция для поиска максимального элемента
void maxArrayElementINTEGER(int* arr, int size)
{
    int max = arr[0];

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << "Максимальное значение в массиве: " << max << "\n";
}

// функция для сортировки от максимального элемента
void sortArrayElementMaxINTEGER(int* arr, int size)
{
    int tmp = 0;

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }

    cout << "Отсортированный массив: " << "\n";

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}

// функция для сортировки от минимального  элемента
void sortArrayElementMinINTEGER(int* arr, int size)
{
    int tmp = 0;

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }

    cout << "Отсортированный массив: " << "\n";

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}

// функция для редактирования значения массива.
void reductArrayINTEGER(int* arr, int size)
{
    int element  = 0, number = 0;

    cout << "Введите номер элемента массива для замены значение на выбранное: ";

    cin >> element;

    cout << "Введите значение на которое хотите заменить элемент массива: ";

    cin >> number;
    
    cout << "Массив с измененным элементом: ";

    for (int i = 0; i < size; i++)
    {
        if (i != element)
        {
           cout << arr[i] << " ";
        }
        else
        {
            arr[i] = number;
            cout << arr[i] << " ";
        }
    }

    cout << endl;
}

//===  значения с плавающей запятой  ================================================================

//функция для заполнения массива случайными зна­чениями
void writeArrayDOUBLE(double* arr, int size)//обязательна передача массива по ссылке в эту функцию
{
    srand(time(NULL));

    for (int i = 0; i < size; i++)
    {
        arr[i] = (double)rand() / (double)RAND_MAX * (10 - 1) + 1;
    }
}

//функция для вывода значений массива на консоль
void showArrayDOUBLE(double* arr, int size)//обязательна передача массива по ссылке в эту функцию
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// функция для поиска минимального элемента
void minArrayElementDOUBLE(double* arr, int size)
{
    double min = arr[0];

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << "Минимальное значение в массиве: " << min << "\n";
}

// функция для поиска максимального элемента
void maxArrayElementDOUBLE(double* arr, int size)
{
    double max = arr[0];

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << "Максимальное значение в массиве: " << max << "\n";
}

// функция для сортировки от максимального элемента
void sortArrayElementMaxDOUBLE(double* arr, int size)
{
    double tmp = 0;

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }

    cout << "Отсортированный массив: " << "\n";

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}

// функция для сортировки от минимального  элемента
void sortArrayElementMinDOUBLE(double* arr, int size)
{
    double tmp = 0;

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }

    cout << "Отсортированный массив: " << "\n";

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}

// функция для редактирования значения массива.
void reductArrayDOUBLE(double* arr, int size)
{
    int element = 0;
    double number = 0;

    cout << "Введите номер элемента массива для замены значение на выбранное: ";

    cin >> element;

    cout << "Введите значение на которое хотите заменить элемент массива: ";

    cin >> number;

    cout << "Массив с измененным элементом: ";

    for (int i = 0; i < size; i++)
    {
        if (i != element)
        {
            cout << arr[i] << " ";
        }
        else
        {
            arr[i] = number;
            cout << arr[i] << " ";
        }
    }

    cout << endl;
}

//===  строковые значения  ==========================================================================

//функция для заполнения массива случайными зна­чениями
void writeArrayCHAR(char* arr, int size)//обязательна передача массива по ссылке в эту функцию
{
    srand(time(NULL));

    for (int i = 0; i < size; i++)
    {
        arr[i] = char('a' + rand() % 26);
    }
}

//функция для вывода значений массива на консоль
void showArrayCHAR(char* arr, int size)//обязательна передача массива по ссылке в эту функцию
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// функция для поиска минимального элемента
void minArrayElementCHAR(char* arr, int size)
{
    char min = arr[0];

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << "Минимальное значение в массиве: " << min << "\n";
}

// функция для поиска максимального элемента
void maxArrayElementCHAR(char* arr, int size)
{
    char max = arr[0];

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << "Максимальное значение в массиве: " << max << "\n";
}

// функция для сортировки от максимального элемента
void sortArrayElementMaxCHAR(char* arr, int size)
{
    char tmp = 0;

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }

    cout << "Отсортированный массив: " << "\n";

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}

// функция для сортировки от минимального  элемента
void sortArrayElementMinCHAR(char* arr, int size)
{
    char tmp = 0;

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }

    cout << "Отсортированный массив: " << "\n";

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}

// функция для редактирования значения массива.
void reductArrayCHAR(char* arr, int size)
{
    int element = 0;
    char number = 0;

    cout << "Введите номер элемента массива для замены значения на выбранное: ";

    cin >> element;

    cout << "Введите значение на которое хотите заменить элемент массива: ";

    cin >> number;

    cout << "Массив с измененным элементом: ";

    for (int i = 0; i < size; i++)
    {
        if (i != element)
        {
            cout << arr[i] << " ";
        }
        else
        {
            arr[i] = number;
            cout << arr[i] << " ";
        }
    }

    cout << endl;
}


