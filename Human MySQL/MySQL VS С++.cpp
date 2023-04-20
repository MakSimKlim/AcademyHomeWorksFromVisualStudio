// MySQL VS С++.
//
//
#include <iostream>
#include <Windows.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <mysql.h>

using namespace std;


int main()
{

    setlocale(LC_ALL, "Rus");

    //соединение с базой данный MySQL и вывод оттуда данных
    cout << "Вывод значений базы данных человек: " << "\n";

    MYSQL* conn;
    MYSQL_RES* res;
    MYSQL_ROW row;

    int i = 0;

    // Получаем дескриптор соединения
    conn = mysql_init(NULL);
    if (conn == NULL)
    {
        // Если дескриптор не получен – выводим сообщение об ошибке
        fprintf(stderr, "Ошибка: MySQL дескриптор не создан\n");
        //exit(1); //Если используется оконное приложение
    }
    // Подключаемся к серверу
    if (!mysql_real_connect(conn, "localhost", "root", "", "human", NULL, NULL, 0))
    {
        // Если нет возможности установить соединение с сервером
        // базы данных выводим сообщение об ошибке
        fprintf(stderr, "Ошибка: Нет соединения с базой данных %s\n", mysql_error(conn));
    }
    else
    {
        // Если соединение успешно установлено выводим фразу - "успешно!"
        fprintf(stdout, "Соединение с базой MySQL успешно!\n");
    }
    mysql_set_character_set(conn, "cp1251");//для отображения Кириллицы
    //Смотрим изменилась ли кодировка на нужную, по умалчанию идёт latin1
    cout << "кодировка: " << mysql_character_set_name(conn) << endl;

    mysql_query(conn, "SELECT idhuman, age, surname, name, secondname FROM cataloghyman"); //Делаем запрос nameMark к таблице по имени catalogwallpaper =)

    if (res = mysql_store_result(conn)) {
        while (row = mysql_fetch_row(res)) {
            for (i = 0; i < mysql_num_fields(res); i++) {
                cout << row[i] << "\n"; //Выводим все что есть в базе через цикл
            }
            cout << "\n";
        }
        
    }
    else fprintf(stderr, "%s\n", mysql_error(conn));

    // Закрываем соединение с сервером базы данных
    mysql_close(conn);
}
