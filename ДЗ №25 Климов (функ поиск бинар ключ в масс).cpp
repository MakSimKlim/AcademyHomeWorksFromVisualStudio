// Задание #2
// 
// ДЗ №25 Климов (функ поиск бинар ключ в масс)
//
//Написать функцию, реализующую алгоритм
//бинарного поиска заданного ключа в одномерном массиве.


#include <iostream>
#include <time.h>

using namespace std;

int ArrRandomise(int arr[], const int size)    // функция заполнения массива рандомными значениями
{
    for (int i = 0; i < size; i++)             
    {                                          
        arr[i] = 1 + rand() % (10 - 1);        // заполняем массив рандомайзером
        cout << arr[i] << " ";                 // Вывод неотсортированного массива
    }
    cout << "\n";

    return arr[size];
}

int SortMassChoiseMethod(int arr[], const int size)    // функция сортировки массива методом выбора
{
    int index_min = 0;                         // переменная для минимального значения
    int temp;                                  // переменная - буфер, нужная при сортировке массива
    for (int i = 0; i < size - 1; i++)         // сортируем массив методом выбора
    {
        index_min = i;                         // за минимальный берем первый из неотсортированных
        for (int j = i + 1; j < size; j++)     // начинаем проверять с последующего за ним элемента все оставшиеся
        {
            if (arr[j] < arr[index_min])       // если какой-то из них меньше...
            {
                index_min = j;                 //... то запоминаем его номер
            }

        }
        if (index_min != i)                    // если в ходе проверки индекс минимального элемента поменялся
        {
            temp = arr[i];                     // то меняем местами элементы
            arr[i] = arr[index_min];
            arr[index_min] = temp;
        }
    }
   // Вывод отсортированного массива
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return arr[size];
}

int BinarySearch(int arr[],const int size, int elem)  // функция бинарного поиска
{
    int notSearch = -1;
    int key = 0;
    int start = 0, end = size - 1;       // задаем начало и конец массива для поиска
    int middle = 0;

    while (start < end)
    {
        middle = (start + end) / 2;

        if (elem == arr[middle])
        {
            key = middle;
            break;
        }
        if (elem < arr[middle])
        {
            end = middle - 1;
        }
        else
        {
            start = middle + 1;
        }


    }
    if (middle + 1 > end || middle - 1 < start)
    {
        cout << "Элемент не найден!";
    }
    else
    {
        cout << "Элемент найден! Порядковый номер в массиве №" << key+1;
            
    }

    return elem;
}

int main()
{
    setlocale(LC_ALL, "Rus");
    srand(time(NULL));

    cout << "\n **********************************************************************" << endl;
    cout << " *Программа бинарного поиска заданного ключа в одномерном массиве v1.0*" << endl;
    cout << " **********************************************************************" << endl;


    const int arrSize = 10;
    int arr[arrSize];

    ArrRandomise(arr, arrSize);                // функция создания рандомного массива

    SortMassChoiseMethod(arr, arrSize);        // функция сортировки массива методом выбора

    int searchElem = 0;

    cout << "Введите число для поиска ключа в массиве" << "\n";
    cin >> searchElem;

    BinarySearch(arr, arrSize, searchElem);  // функция бинарного поиска
                                               // не работает без предварительной сортировки

    cout << "\n";
    return 0;
}