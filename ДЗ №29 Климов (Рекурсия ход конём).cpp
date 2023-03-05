//// Задание #1
//// 
//// ДЗ №29 Климов (Рекурсия ход конём)
////
//// Дана шахматная доска размером 8×8 и шахмат-
////ный конь.Программа должна запросить у пользователя
////координаты клетки поля и поставить туда коня.Задача
////программы найти и вывести путь коня, при котором он
////обойдет все клетки доски, становясь в каждую клетку
////только один раз. (Так как процесс отыскания пути для
////    разных начальных клеток может затянуться, то реко -
////    мендуется сначала опробовать задачу на поле размером
////    6×6).В программе необходимо использовать рекурсию
//
//#include <iostream>
//#include <time.h>
//#include <string>
//
//using namespace std;
//
////char CoordPossibleMove(string arr[][b], const int size, char a, char b, int number)       ...// рекурсивная функция координат возможных ходов для каждой клетки
////{
////    if (number > 8)
////    {
////        return arr[size][size];
////    }
////
////
////
////    cout << arr[a][b] = ;
////
////
////    CoordPossibleMove(arr, size, a, b, number + 1);
////}
//
//void CoordPossibleMove1(char a, int b)
//{
//    if (a <= 'h' && a >= 'a' && b <= 8 && b >= 1)
//    {
//         cout << a << b<<" ";
//         
//    }
//}
//void CoordPossibleMove2(char a, int b) 
//{
//    
//    CoordPossibleMove1(a - 2, b - 1); 
//    CoordPossibleMove1(a - 2, b + 1); 
//    CoordPossibleMove1(a - 1, b - 2);
//    CoordPossibleMove1(a - 1, b + 2);
//    CoordPossibleMove1(a + 1, b - 2);
//    CoordPossibleMove1(a + 1, b + 2);
//    CoordPossibleMove1(a + 2, b - 1);
//    CoordPossibleMove1(a + 2, b + 1);
//    cout << "\n";
//    
//}
//int main()
//{
//    setlocale(LC_ALL, "Rus");
//    srand(time(NULL));
//
//    cout << "\n **********************************************************************" << endl;
//    cout << " * Программа расчета хода конем на шахматной доске (с рекурсией) v1.0 *" << endl;
//    cout << " **********************************************************************" << endl;
//   
//    //char x = 'a';
//    //int y = 1;
//    ////int numberMoves = 2;
//    ////const int sizeArr = 8;
//    ////string array[sizeArr][sizeArr];
//    //cout << "Введите координаты по горизонтали (от a до h) и по вертикали (от 1 до 8) через Enter: " << "\n";
//    //cin >> x >> y;
//
//    //CoordPossibleMove(array, sizeArr, x, y, numberMoves);                         // рекурсивная функция координат возможных ходов для каждой клетки
//
//    for (int y = 1;  y <= 8;  y++)
//    {
//        for (char x = 'a'; x <= 'h'; x++)
//        {
//            CoordPossibleMove2(x, y);
//        }
//    }
//
//
//
//
//
//    return 0;
//}
#include <fstream>
#include <iostream>

bool possible(const int, const int, const int);
void rec(const int, const int);

const int size = 15;
int arr[size][size] = { 0 }, Row, Column;

int main() {
    std::ifstream ifs("input.txt");
    std::ofstream ofs("output.txt");
    //
    std::cin >> Row >> Column;

    if ((Row + Column) < 5) { //т.к. ход конем не сделать.
        std::cout << 0;
        return 0;
    }
    arr[0][0] = 1;
    //
    rec(0, 0);
    //
    std::cout << arr[Row - 1][Column - 1];
    //
    ifs.close();
    ofs.close();
    return 0;
}

bool possible(const int course, const int cur_i, const int cur_j) {
    // не выйдем ли мы за границы, если пойдем из клетки (i, j) ходом course.
    switch (course) { // course - 1 из 4 видов ходов (из рисунка по ссылке).
    case 1:
        return ((cur_i > 0) && (cur_j < Column - 2));
        break;
    case 2:
        return ((cur_i < Row - 1) && (cur_j < Column - 2));
        break;
    case 3:
        return ((cur_i < Row - 2) && (cur_j < Column - 1));
        break;
    case 4:
        return ((cur_i < Row - 2) && (cur_j > 0));
        break;
    default:
        return 0;
    }
}

void rec(const int i, const int j) {
    if ((i == Row - 1) && (j == Column - 1)) // если на последней клетке - 
        return;                              // дальше ходить не нужно.

    if (possible(1, i, j)) {
        arr[i - 1][j + 2] += arr[i][j];
        rec(i - 1, j + 2);
    }
    if (possible(2, i, j)) {
        arr[i + 1][j + 2] += arr[i][j];
        rec(i + 1, j + 2);
    }
    if (possible(3, i, j)) {
        arr[i + 2][j + 1] += arr[i][j];
        rec(i + 2, j + 1);
    }
    if (possible(4, i, j)) {
        arr[i + 2][j - 1] += arr[i][j];
        rec(i + 2, j - 1);
    }
    arr[i][j] = 0;

    return;
}