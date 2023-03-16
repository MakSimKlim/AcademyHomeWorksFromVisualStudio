//// Задание #5
// 
// ДЗ №35 Климов (действия над строками5)
//
//Пользователь вводит строку символов и искомый символ, 
//посчитать сколько раз он встречается 
//в строке.


#include <iostream>
#include <time.h>
#include <Windows.h>
#include <iomanip>
#include <cstring>
#include <string>

using namespace std;

void CountChar(string& str, char simbol, int j)//функция которая считает количество заданных символов в строке.
{
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == simbol)
        {
            j++;
        }
    }
    cout << "Символ " << simbol << " встречается " << j << " раз " << "\n";
}


int main()
{
    setlocale(LC_ALL, "Rus");

    srand(time(NULL));

    cout << "\n **********************************************************************************" << endl;
    cout << " *      Программа подсчета введенных пользователем символов в строке V1.1         *" << endl;
    cout << " **********************************************************************************" << endl;

    const int size = 20;
    char str[size];
    int num = 0;
    char simbol;
    int sum = 0;

    cout << "Введите строку:" << "\n";
    cin.get(str, size);//метод get - 1 аргумент массив пользователя, 2- размерность   

    cout << "Введите символ:" << "\n";
    cin >> simbol;

    string str2 = str;

    CountChar(str2, simbol, sum);

    return 0;
}
