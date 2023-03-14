// Задание #2
// 
// ДЗ №34 Климов (действия над строками 2)
//
//
// Написать функцию, которая удаляет из строки 
//все вхождения в нее заданного символа.

#include <iostream>
#include <time.h>
#include <Windows.h>
#include <iomanip>
#include <cstring>
#include <string>

using namespace std;

void DelAllChar(string& str, char simbol)//функция удаления всех вхождений выбранного элемента simbol из строки
{
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == simbol)
        {
            str.erase(i, 1);//erase очищает один элемент, отсчет от i, если он равен выбранному символу
        }
    }
}
int main()
{
    setlocale(LC_ALL, "Rus");

    srand(time(NULL));

    cout << "\n **********************************************************************************" << endl;
    cout << " * Программа которая удаляет из строки все вхождения в нее заданного символа V1.1 *" << endl;
    cout << " **********************************************************************************" << endl;
    
    const int size = 20;
    char str[size];
    char simbol;

    cout << "Введите строку:" << "\n";
    cin.get(str, size);//метод get - 1 аргумент массив пользователя, 2- размерность    

    cout << "Введите символ для удаления из строки: "; cin >> simbol; cout << endl;

    string str1 = str;


    DelAllChar(str1, simbol);
    
    
    
    
    cout << "Строка без удаленных элементов: " << str1 << "\n";

    return 0;
}
