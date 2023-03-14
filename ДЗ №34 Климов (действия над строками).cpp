// Задание #1
// 
// ДЗ №34 Климов (действия над строками)
//
//
//Написать функцию, которая удаляет из строки 
//символ с заданным номером


#include <iostream>
#include <time.h>
#include <Windows.h>
#include <iomanip>
#include <cstring>
#include <string>

using namespace std;

void DelChar(string& str, int num)//функция удаления выбранного элемента num из строки
//num-- потомучто отсчет элементов начинается с 0, а нам нужен именно тот какой указываем
{
    num--;
    str.erase(str.begin() + num);//erase очищает выбранный элемент, отсчет от нулевого begin
}
int main()
{
    setlocale(LC_ALL, "Rus");

    srand(time(NULL));

    cout << "\n **********************************************************************" << endl;
    cout << " * Программа которая удаляет из строки символ с заданным номером V1.1 *" << endl;
    cout << " **********************************************************************" << endl;
   
    const int size = 20;
    char str[size];
    int num = 0;
    int findStr = 0;
    
    cout << "Введите строку:" << "\n";
    cin.get(str,size);//метод get - 1 аргумент массив пользователя, 2- размерность    
    cout << "Какой символ хотите удалить? Укажите его порядковый номер от 0 до " << size - 1 << ":" << "\n";
    cin >> num;
    
    string str1 = str;

    DelChar(str1, num);

    cout << "\n";

    cout << "Строка без удаленного элемента: " << str1 << "\n";

    return 0;
}
//===========================================================================================================
//#include <iostream>
//#include <time.h>
//#include <Windows.h>
//#include <iomanip>
//#include <cstring>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//    setlocale(LC_ALL, "Rus");
//
//    srand(time(NULL));
//
//    cout << "\n **********************************************************************" << endl;
//    cout << " * Программа которая удаляет из строки символ с заданным номером V1.2 *" << endl;
//    cout << " **********************************************************************" << endl;
//   
//    const int size = 20;
//    char str[size];
//    int num = 0;
//    int findStr = 0;
//
//    cout << "Введите строку:" << "\n";
//    cin.get(str,size);//метод get - 1 аргумент массив пользователя, 2- размерность    
//    cout << "Какой символ хотите удалить? Укажите его порядковый номер от 0 до " << size - 1 << ":" << "\n";
//    cin >> num;
//
//    string str1 = str;
//    str1.erase(num-1,1);
//
//    cout << "Результат после удаления из строки символа: " << str1 << "\n";
//    return 0;
//}