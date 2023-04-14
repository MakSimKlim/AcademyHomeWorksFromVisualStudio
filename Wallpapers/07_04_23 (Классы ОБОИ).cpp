// 07_04_23 (Классы ОБОИ)
//
//Написать программу стоимость обоев
//в результате выдать необходимое кол-во рулонов и общую стоимость закупки
//использовать классы: квартира, комната, рулон обоев

// Главный СPP

#include <iostream>
#include <Windows.h>
#include "Header.h"
#include "Source.cpp"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");

    cout << "Расчет обоев версия 1.0" << "\n";
    int inputCountRoom = 0;
    double roomWidth = 0, roomLength = 0, roomHeight = 0, result = 0;

    double* res = new double[inputCountRoom];

    cout << "Введите количество комнат, в которых требуется сделать ремонт" << "\n";
    cin >> inputCountRoom;

    Apartment apartment(inputCountRoom);
    res = apartment.createRooms(roomWidth, roomLength, roomHeight, result);

    //cout << "Площадь стен комнат:" << "\n";
    for (int i = 0; i < inputCountRoom; i++)
    {
       cout<<"Площадь стен комнаты №"<< i+1 <<" равна " << res[i] << " м2" << "\n";
    }

    //double paramsWallpaper[7][3] = {};

}

