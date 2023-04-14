// 07_04_23 (Классы ОБОИ)
//
//Написать программу стоимость обоев
//в результате выдать необходимое кол-во рулонов и общую стоимость закупки
//использовать классы: квартира, комната, рулон обоев

// Главный СPP

#include <iostream>
#include <Windows.h>
#include <stdlib.h>

#include "mysql_connection.h"

#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/resultset.h>
#include <cppconn/statement.h>

#include "Header.h"
#include "Source.cpp"

using namespace std;

const string server = "tcp://127.0.0.1:3306";
const string username = "root";
const string password = "";

int main()
{

    setlocale(LC_ALL, "Rus");

    sql::Driver* driver;
    sql::Connection* con;
    sql::Statement* stmt;
    sql::ResultSet* res;

    try 
    {
        driver = get_driver_instance();
        //con = driver->connect("tcp://127.0.0.1:3306", "root", " ");
        con = driver->connect(server, username, password);

        con->setSchema("test");

        stmt = con->createStatement();
        res = stmt->executeQuery("select * from `catalogwallpaper`");

        while (res->next()) {
            cout << "\t... MySQL replies: ";
            /* Access column data by alias or column name */
            cout << res->getString("nameMark") << endl;
            cout << "\t... MySQL says it again: ";
            /* Access column data by numeric offset, 1 is the first column */
            cout << res->getString(1) << endl;
        }
        delete res;
        delete stmt;
        delete con;

    }
    catch (sql::SQLException& e) 
    {
        cout << "# ERR: SQLException in " << __FILE__;
        cout << "(" << __FUNCTION__ << ") on line " << __LINE__ << endl;
        cout << "# ERR: " << e.what();
        cout << " (MySQL error code: " << e.getErrorCode();
        cout << ", SQLState: " << e.getSQLState() << " )" << endl;
    
    cout << endl;
    }

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
    
    //return EXIT_SUCCESS;

}

