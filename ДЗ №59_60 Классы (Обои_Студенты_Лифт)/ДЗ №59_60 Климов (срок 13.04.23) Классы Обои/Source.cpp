//вспомогательный —––

#include <iostream>
#include <Windows.h>

using namespace std;

//квартира
class Apartment
{
public:
    //динамический массив дл€ ввода количества комнат
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

        //конструктор, здесь нельз€ делать какие-то вычислени€
        //т к здесь объ€вл€ем свойства присущие объекту
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

        //конструктор пустой дл€ создани€ нескольких объектов, чтобы не 
        //перегружать пам€ть? без него работать не будет
        Room()
        {

        }

    private:

    };

    double* createRooms(double roomWidth, double roomLenght, double roomHeight, double result)
    {
        int inputCountRoom = countRoom;
        Room* room = new Room[inputCountRoom];
        double* rooms = new double[countRoom];
        for (int i = 0; i < inputCountRoom; i++)
        {
            cout << "¬ведите ширину комнаты: " << "\n";
            cin >> roomWidth;
            room[i].width = roomWidth;
            cout << "¬ведите длину комнаты: " << "\n";
            cin >> roomLenght;
            room[i].length = roomLenght;
            cout << "¬ведите высоту комнаты: " << "\n";
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

    //конструктор дл€ рулона обоев
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