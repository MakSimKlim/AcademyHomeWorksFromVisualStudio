// Задание #2
// 
// ДЗ №30 Климов (сумма эл-тов массивов указатели)
//
//Даны два массива, упорядоченных по возрастанию:
//А[n] и B[m].Сформируйте массив C[n + m], состоящий из элементов массивов А и В, упорядоченный
//по возрастанию.Используйте синтаксис указателей.

#include <iostream>
#include <time.h>
#include <string>

using namespace std;

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

int main()
{
    setlocale(LC_ALL, "Rus");
    srand(time(NULL));

    cout << "\n **********************************************************************" << endl;
    cout << " *   Программа суммирования значений 2х массивов через указатели      *" << endl;
    cout << " **********************************************************************" << endl;
    
    //создаем первый массив
    const int arrSize1 = 10;
    int arr1[arrSize1];

    for (int i = 0; i < arrSize1; i++)
    {
        arr1[i] = 1 + rand() % (10 - 1);
    }
    cout << "\n";
    //сортируем и выводим первый массив по возрастанию
    cout << "Первый отсортированный по возрастанию рандомный массив: " << endl;
    SortMassChoiseMethod(arr1, arrSize1);

    //создаем второй массив
    const int arrSize2 = 5;
    int arr2[arrSize2];

    for (int j = 0; j < arrSize2; j++)
    {
        arr2[j] = 1 + rand() % (10 - 1);
    }
    cout << "\n";
    //сортируем и выводим второй массив по возрастанию
    cout << "Второй отсортированный по возрастанию рандомный массив: " << endl;
    SortMassChoiseMethod(arr2, arrSize2);
    
    //Создаем третий массив. Размерность - SIZE1+SIZE2.

    int arr3[arrSize1 + arrSize2];

    // Сначала занесем в массив все цифры.
    //Создадим указатели на первые элементы массивов arr1 и arr2.
    int* par1 = &arr1[0];
    int* par2 = &arr2[0];
    int j = 0;
    int arrSize3 = arrSize1 + arrSize2;

    for (int i = 0; i < (arrSize3); i++) {
        if (i < arrSize1) 
        {
            arr3[i] = *(par1 + i);
        }
        else if (i >= arrSize1) 
        {
            arr3[i] = *(par2 + j);
            j++;
        }

    }
    cout << "\n";
    //сортируем и выводим третий массив по возрастанию
    cout << "Третий отсортированный по возрастанию массив из элементов первых двух: " << endl;
    SortMassChoiseMethod(arr3, arrSize3);

    return 0;
}
