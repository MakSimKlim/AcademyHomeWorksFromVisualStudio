//// Задание #6
// 
// ДЗ №35 Климов (действия над строками6)
//
//Пользователь вводит строку. Определить количество букв, 
//количество цифр и количество остальных 
//символов, присутствующих в строке.
// 
//Рекомендации.Для проверки, что символ является
//числом, не обязательно сравнивать его со всеми 10 - ю
//цифрами, достаточно сравнить код символа с диапазоном
//кодов цифр.Код символа 0–48, 1–49, 2–50…9–57.


#include <iostream>
#include <time.h>
#include <Windows.h>
#include <iomanip>
#include <cstring>
#include <string>

using namespace std;

void NumberCharacters(string& str)
{
    int countNum = 0, temp, countLetter = 0, countSimbol = 0;

    for (int i = 0; i < str.length(); i++)
    {
        temp = (int)(str[i]);

        if (temp >= 48 && temp < 58)// сравнение по коду таблицы ASCII
        {
            countNum++;//подсчет цифр
        }
        if (temp >= 65 && temp < 91)// сравнение по коду таблицы ASCII
        {
            countLetter++;//подсчет букв
        }
        if (temp >= 97 && temp < 123)// сравнение по коду таблицы ASCII
        {
            countLetter++;//подсчет букв
        }
        if (temp >= 32 && temp < 48)// сравнение по коду таблицы ASCII
        {
            countSimbol++;//подсчет символов
        }
        if (temp >= 58 && temp < 65)// сравнение по коду таблицы ASCII
        {
            countSimbol++;//подсчет символов
        }
        if (temp >= 91 && temp < 97)// сравнение по коду таблицы ASCII
        {
            countSimbol++;//подсчет символов
        }
        if (temp >= 123 && temp <= 126)// сравнение по коду таблицы ASCII
        {
            countSimbol++;//подсчет символов
        }
    }
    cout << "Количество цифр в строке: " << countNum << endl;
    cout << "Количество букв в строке: " << countLetter << endl;
    cout << "Количество символов в строке: " << countSimbol << endl;
}

int main()
{
    setlocale(LC_ALL, "Rus");

    srand(time(NULL));

    cout << "\n **********************************************************************************" << endl;
    cout << " *                Программа подсчета различных символов в строке V1.1             *" << endl;
    cout << " **********************************************************************************" << endl;

    const int size = 20;
    char str[size];


    cout << "Введите строку:" << "\n";
    cin.get(str, size);//метод get - 1 аргумент массив пользователя, 2- размерность   
    
    string str2 = str;

    NumberCharacters(str2);

    return 0;
}
