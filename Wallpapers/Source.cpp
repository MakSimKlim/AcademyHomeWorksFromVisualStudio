// 07_04_23 (������ ����)
//
//�������� ��������� ��������� �����
//� ���������� ������ ����������� ���-�� ������� � ����� ��������� �������
//������������ ������: ��������, �������, ����� �����

//��������������� ���

#include <iostream>
#include <Windows.h>

using namespace std;

//��������
class Apartment
{
public:
    //������������ ������ ��� ����� ���������� ������
    int countRoom;
    int* rooms = new int[countRoom];

    //����������� 
    Apartment(int apartCount)
    {
        countRoom = apartCount;
    };

    //������� 
    class Room
    {
    public:
        double width, length, height;

        //�����������, ����� ������ ������ �����-�� ����������
        //� � ����� ��������� �������� �������� �������
        //����������� ������ �� ����������
        Room(double c_width, double c_height, double c_length)
        {
            width = c_width;
            length = c_length;
            height = c_height;
        };

        //����� 
        double getSquare()
        {
            return ((width + length) * 2 * height);
        }

        //����������� ������ ��� �������� ���������� ��������, ����� �� 
        //����������� ������? ��� ���� �������� �� �����
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
            cout << "������� ������ �������: " << "\n";
            cin >> roomWidth;
            room[i].width = roomWidth;
            cout << "������� ����� �������: " << "\n";
            cin >> roomLenght;
            room[i].length = roomLenght;
            cout << "������� ������ �������: " << "\n";
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

    //����������� ��� ������ �����
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

      
