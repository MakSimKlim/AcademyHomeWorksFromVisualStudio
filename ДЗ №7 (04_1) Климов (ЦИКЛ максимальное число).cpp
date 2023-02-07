// Задание #3
// 
// ДЗ №7 Климов (максимальное число)
// 
//Пользователь вводит с клавиатуры 7 целых чисел. Напишите
//программу, которая определяет максимальное из этих 7 чисел.


// ЦИКЛЫ ДЛЯ ЭТОГО ЗАДАНИЯ НЕ ПРИМЕНЯЛИСЬ, КОД НЕ ИЗМЕНИЛСЯ


#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");

    int number1 = 0, number2 = 0, number3 = 0, number4 = 0, number5 = 0, number6 = 0, number7 = 0;
       
    //определяем целочисленные переменные и инициализируем их (для семи чисел)

    cout << "\n----====Программа поиска максимального числа из введённых====----" << endl << endl;
    cout << "=================================================================" << endl << endl;
    cout << R"(*****************************************************************
*   После ввода чисел произойдет выбор максимального из них   * 
*****************************************************************)" << endl << endl;
    cout << "Введите семь чисел через 'Enter': \n";

    cin >> number1;
    cin >> number2;
    cin >> number3;
    cin >> number4;
    cin >> number5;
    cin >> number6;
    cin >> number7;


    if (number1 > number2 && number1 > number3 && number1 > number4 && number1 > number5 && number1 > number6 && number1 > number7)
    {
        cout << "Максимальное из введенных чисел: " << number1 << endl << endl;
    }
    else if (number2 > number1 && number2 > number3 && number2 > number4 && number2 > number5 && number2 > number6 && number2 > number7)
    {
        cout << "Максимальное из введенных чисел: " << number2 << endl << endl;
    }
    else if (number3 > number1 && number3 > number2 && number3 > number4 && number3 > number5 && number3 > number6 && number3 > number7)
    {
        cout << "Максимальное из введенных чисел: " << number3 << endl << endl;
    }
    else if (number4 > number1 && number4 > number2 && number4 > number3 && number4 > number5 && number4 > number6 && number4 > number7)
    {
        cout << "Максимальное из введенных чисел: " << number4 << endl << endl;
    }
    else if (number5 > number1 && number5 > number2 && number5 > number3 && number5 > number4 && number5 > number6 && number5 > number7)
    {
        cout << "Максимальное из введенных чисел: " << number5 << endl << endl;
    }
    else if (number6 > number1 && number6 > number2 && number6 > number3 && number6 > number4 && number6 > number5 && number6 > number7)
    {
        cout << "Максимальное из введенных чисел: " << number6 << endl << endl;
    }
    else
    {
        cout << "Максимальное из введенных чисел: " << number7 << endl << endl;
    }

    system("pause");

    return 0;
}
