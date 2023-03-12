// Задание #3
// 
// ДЗ №33 Климов (массивы и указатели 5)
//
//
//Используя два указателя на массивы целых
//чисел, скопировать один массив в другой так, чтобы во
//втором массиве элементы находились в обратном порядке.
//Использовать в программе арифметику указателей
//для продвижения по массиву, а также оператор разыменования.

#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    srand(time(NULL));

    cout << "\n **********************************************************************" << endl;
    cout << " *           Программа действий с массивами через указатели V3.1      *" << endl;
    cout << " **********************************************************************" << endl;

    const int size = 11;
    int arr1[size];
    int arr2[size];
    int* ptrArr1 = arr1;
    int* ptrArr2 = arr2;
    int temp;
    int* start = &arr1[0];
    int* end = &arr1[size - 1];


    cout << "Первый массив: " << "\n";
    for (int i = 0; i < size; i++)
    {
        arr1[i] = 1 + rand() % (10 - 1);
        cout << arr1[i] << " ";
    }
    cout << "\n\n";

    while (start != end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
    cout << "\n";

    cout << "Второй массив: " << "\n";
    for (int i = 0; i < size; i++)
    {
        ptrArr2 = ptrArr1;
        cout << *ptrArr2 << " ";
        ptrArr1++;
        ptrArr2++;
    }
    cout << "\n\n";

    system("PAUSE");

    return 0;
}