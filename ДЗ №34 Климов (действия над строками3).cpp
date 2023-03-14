// Задание #3
// 
// ДЗ №34 Климов (действия над строками3)
//
//
// Написать функцию, которая вставляет в строку 
//в указанную позицию заданный символ.

#include <iostream>
#include <time.h>
#include <Windows.h>
#include <iomanip>
#include <cstring>
#include <string>

using namespace std;

void InsertChar(string& str, int num, char simbol)//функция которая вставляет в строку в указанную позицию заданный символ.
{
    str.insert(num, 1, simbol);
}
int main()
{
    setlocale(LC_ALL, "Rus");

    srand(time(NULL));

    cout << "\n **********************************************************************************" << endl;
    cout << " * Программа которая вставляет в строку в указанную позицию заданный символ V1.1  *" << endl;
    cout << " **********************************************************************************" << endl;

    const int size = 20;
    char str[size];
    int num = 0;
    char simbol;

    cout << "Введите строку:" << "\n";
    cin.get(str, size);//метод get - 1 аргумент массив пользователя, 2- размерность    

    cout << "Введите номер позиции куда необходимо вставить символ: "; cin >> num;
    cout << "Введите символ для добовления в строку: "; cin >> simbol; cout << endl;


    string str1 = str;


    InsertChar(str1, num, simbol);




    cout << "Строка без удаленных элементов: " << str1 << "\n";

    return 0;
}
