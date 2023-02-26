// Задание #1
// 
// ДЗ №25 Климов (функция линейного поиск ключа в массиве)
//
//Написать функцию, реализующую алгоритм
//линейного поиска заданного ключа в одномерном массиве.


#include <iostream>
#include <time.h>

using namespace std;

int LinearSearch(int array[], int size, int key)//нач знач, массив, размер знач
{
    for (int i = 0; i < size; i++)
    {
        if (array[i] == key)
        {
            return i;
        }
    }
}

int main()
{
    setlocale(LC_ALL, "Rus");
    srand(time(NULL));

    cout << "\n **********************************************************************" << endl;
    cout << " *Программа линейного поиска заданного ключа в одномерном массиве v1.0*" << endl;
    cout << " **********************************************************************" << endl;

    const int arraySize = 20;
    int a[arraySize], searchKey, element;

    for (int x = 0; x < arraySize; x++)
    {
        a[x] = 1 + rand() % (10 - 1);
        cout << a[x] << " ";
    }

    cout << "\nВведите ключ: ";
    cin >> searchKey;

    element = LinearSearch(a, arraySize, searchKey);

    if (element != arraySize)
    {
        cout << "Элемент найден: " << element + 1 << "\n";
            
    }
    else
    {
        cout << "\n Значение не найдено";
    }

    return 0;

}
