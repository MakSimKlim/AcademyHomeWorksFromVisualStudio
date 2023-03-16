//// Задание #4
// 
// ДЗ №35 Климов (действия на строками 4)
//
//Написать программу, которая заменяет все
//символы точки «.» в строке, введенной пользователем,
//


#include <iostream>
#include <time.h>
#include <Windows.h>
#include <iomanip>
#include <cstring>
#include <string>

using namespace std;


void ReplaceChar(string& str, char simbol, char simbol2)//функция которая вставляет в строку в указанную позицию заданный символ.
{
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == simbol)
        {
            str[i] = simbol2;
        }
    }
}


int main()
{
    setlocale(LC_ALL, "Rus");

    srand(time(NULL));

    cout << "\n **********************************************************************************" << endl;
    cout << " *             Программа которая заменяет все символы точки «.» в строке,         *" << endl;
    cout << " *        введенной пользователем на символы восклицательного знака «!». V1.1     *" << endl;
    cout << " **********************************************************************************" << endl;

    const int size = 20;
    char str[size];
    int num = 0;
    char simbol = '.';
    char simbol2= '!';


    cout << "Введите строку:" << "\n";
    cin.get(str, size);//метод get - 1 аргумент массив пользователя, 2- размерность    



    string str2 = str;


    ReplaceChar(str2, simbol, simbol2);//функция которая вставляет в строку в указанную позицию заданный символ.


    cout << "Строка с замененными символами: " << str2 << "\n";


    return 0;
}
