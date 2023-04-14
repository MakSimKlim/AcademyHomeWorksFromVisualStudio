// 07_04_23 (Классы ОБОИ)
//
//Написать программу стоимость обоев
//в результате выдать необходимое кол-во рулонов и общую стоимость закупки
//использовать классы: квартира, комната, рулон обоев

//вспомогательный СРР

#include <iostream>
#include <Windows.h>

using namespace std;

//квартира
class Apartment
{
public:
    //динамический массив для ввода количества комнат
    int countRoom;
    int* rooms = new int[countRoom];

    //конструктор 
    Apartment(int apartCount)
    {
        countRoom = apartCount;
    };

    //комната 
    class Room
    {
    public:
        double width, length, height;

        //конструктор, здесь нельзя делать какие-то вычисления
        //т к здесь объявляем свойства присущие объекту
        //конструктор ничего не возвращает
        Room(double c_width, double c_height, double c_length)
        {
            width = c_width;
            length = c_length;
            height = c_height;
        };

        //метод 
        double getSquare()
        {
            return ((width + length) * 2 * height);
        }

        //конструктор пустой для создания нескольких объектов, чтобы не 
        //перегружать память? без него работать не будет
        Room()
        {

        }

    private:

    };

    double *createRooms(double roomWidth, double roomLenght, double roomHeight, double result)
    {
        int inputCountRoom = countRoom;
        Room* room = new Room[inputCountRoom];
        double* rooms = new double[countRoom];
        for (int i = 0; i < inputCountRoom; i++)
        {
            cout << "Введите ширину комнаты: " << "\n";
            cin >> roomWidth;
            room[i].width = roomWidth;
            cout << "Введите длину комнаты: " << "\n";
            cin >> roomLenght;
            room[i].length = roomLenght;
            cout << "Введите высоту комнаты: " << "\n";
            cin >> roomHeight;
            room[i].height = roomHeight;

            rooms[i] = room[i].getSquare();
        }
       return rooms;
    }
};

class Wallpaper
{
public:

    //конструктор для рулона обоев
    Wallpaper(double setWidth, double setLength, double setPrice, string setName)
    {
        rollWidth = setWidth;
        rollLength = setLength;
        rollPrice = setPrice;
        rollName = setName;
    }

private:
    double rollWidth, rollLength, rollPrice;
    string rollName;



};

      
