// 07_04_23 (Классы ОБОИ)
//
//
//Написать программу «Стоимость обоев». Програм-ма запрашивает: 
//▷количество комнат в квартире, в которых плани - руется клеить обои,
//▷параметры каждой комнаты,
//▷параметры каждого вида обоев, которые планиру - ется использовать.
//В результате расчета программа выдает : необходимое
//количество рулонов каждого вида, общую стоимость
//закупки обоев.
//Разработать и использовать в программе классы :
//«Квартира», «Комната», «РулонОбоев».
//Атрибуты(поля) квартиры : список комнат.
//Атрибуты комнаты : название, размеры, клеить потолок
//или нет.Атрибуты рулона : название, размеры, цена

// Главный СPP

#include <iostream>
#include <Windows.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <mysql.h>

#include "Header.h"
#include "Source.cpp"

using namespace std;


int main()
{

    setlocale(LC_ALL, "Rus");

    cout << "***********************************************************" << "\n";
    cout << "*               Расчет обоев версия 1.0                   *" << "\n";
    cout << "***********************************************************" << "\n";

    //=================================================================================
    //соединение с базой данный MySQL и вывод оттуда данных
    cout<<"Вывод значений базы данных обоев: "<<"\n";

    MYSQL* conn;
    MYSQL_RES* res;
    MYSQL_ROW row;

    int i = 0;

    // Получаем дескриптор соединения
    conn = mysql_init(NULL);
    if (conn == NULL)
    {
        // Если дескриптор не получен – выводим сообщение об ошибке
        fprintf(stderr, "Error: can'tcreate MySQL-descriptor\n");
        //exit(1); //Если используется оконное приложение
    }
    // Подключаемся к серверу
    if (!mysql_real_connect(conn, "localhost", "root", "", "test", NULL, NULL, 0))
    {
        // Если нет возможности установить соединение с сервером
        // базы данных выводим сообщение об ошибке
        fprintf(stderr, "Error: can'tconnecttodatabase %s\n", mysql_error(conn));
    }
    else
    {
        // Если соединение успешно установлено выводим фразу - "Success!"
        fprintf(stdout, "Соединение с базой MySQL успешно!\n");
    }

    mysql_set_character_set(conn, "utf8");
    //Смотрим изменилась ли кодировка на нужную, по умалчанию идёт latin1
    cout << "кодировка: " << mysql_character_set_name(conn) << endl;

    mysql_query(conn, "SELECT idwallpaper, nameMark FROM catalogwallpaper"); //Делаем запрос nameMark к таблице по имени catalogwallpaper =)

    if (res = mysql_store_result(conn)) {
        while (row = mysql_fetch_row(res)) {
            for (i = 0; i < mysql_num_fields(res); i++) {
                cout << row[i] << "\n"; //Выводим все что есть в базе через цикл
            }
        }
    } 
    else fprintf(stderr, "%s\n", mysql_error(conn));

    // Закрываем соединение с сервером базы данных
    mysql_close(conn);

    //=================================================================================

    // основная программа

    int inputCountRoom = 0;
    double roomWidth = 0, roomLength = 0, roomHeight = 0, result = 0;

    double* res1 = new double[inputCountRoom];

    cout << "\nВведите количество комнат, в которых требуется сделать ремонт" << "\n";
    cin >> inputCountRoom;

    Apartment apartment(inputCountRoom);
    res1 = apartment.createRooms(roomWidth, roomLength, roomHeight, result);

    //cout << "Площадь стен комнат:" << "\n";
    for (int i = 0; i < inputCountRoom; i++)
    {
        cout << "Площадь стен комнаты №" << i + 1 << " равна " << res1[i] << " м2" << "\n";
    }

    //double paramsWallpaper[7][3] = {};

    //return EXIT_SUCCESS;

}
