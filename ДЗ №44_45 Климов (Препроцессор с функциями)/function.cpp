#pragma
#include <iostream>
#include "function.h"// ������������ ����
#include <string>
#include <stdlib.h>//��� ������������

using namespace std;

//===  ������������� �������� =======================================================================

//������� ��� ���������� ������� ���������� ����������
void writeArrayINTEGER(int* arr, int size)//����������� �������� ������� �� ������ � ��� �������
{
    srand(time(NULL));

    for (int i = 0; i < size; i++)
    {
        arr[i] = 1 + rand() % (10 - 1);
    }
}

//������� ��� ������ �������� ������� �� �������
void showArrayINTEGER(int* arr, int size)//����������� �������� ������� �� ������ � ��� �������
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// ������� ��� ������ ������������ ��������
void minArrayElementINTEGER(int* arr, int size)
{
    int min = arr[0];

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << "����������� �������� � �������: " << min << "\n";
}

// ������� ��� ������ ������������� ��������
void maxArrayElementINTEGER(int* arr, int size)
{
    int max = arr[0];

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << "������������ �������� � �������: " << max << "\n";
}

// ������� ��� ���������� �� ������������� ��������
void sortArrayElementMaxINTEGER(int* arr, int size)
{
    int tmp = 0;

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }

    cout << "��������������� ������: " << "\n";

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}

// ������� ��� ���������� �� ������������  ��������
void sortArrayElementMinINTEGER(int* arr, int size)
{
    int tmp = 0;

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }

    cout << "��������������� ������: " << "\n";

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}

// ������� ��� �������������� �������� �������.
void reductArrayINTEGER(int* arr, int size)
{
    int element  = 0, number = 0;

    cout << "������� ����� �������� ������� ��� ������ �������� �� ���������: ";

    cin >> element;

    cout << "������� �������� �� ������� ������ �������� ������� �������: ";

    cin >> number;
    
    cout << "������ � ���������� ���������: ";

    for (int i = 0; i < size; i++)
    {
        if (i != element)
        {
           cout << arr[i] << " ";
        }
        else
        {
            arr[i] = number;
            cout << arr[i] << " ";
        }
    }

    cout << endl;
}

//===  �������� � ��������� �������  ================================================================

//������� ��� ���������� ������� ���������� ����������
void writeArrayDOUBLE(double* arr, int size)//����������� �������� ������� �� ������ � ��� �������
{
    srand(time(NULL));

    for (int i = 0; i < size; i++)
    {
        arr[i] = (double)rand() / (double)RAND_MAX * (10 - 1) + 1;
    }
}

//������� ��� ������ �������� ������� �� �������
void showArrayDOUBLE(double* arr, int size)//����������� �������� ������� �� ������ � ��� �������
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// ������� ��� ������ ������������ ��������
void minArrayElementDOUBLE(double* arr, int size)
{
    double min = arr[0];

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << "����������� �������� � �������: " << min << "\n";
}

// ������� ��� ������ ������������� ��������
void maxArrayElementDOUBLE(double* arr, int size)
{
    double max = arr[0];

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << "������������ �������� � �������: " << max << "\n";
}

// ������� ��� ���������� �� ������������� ��������
void sortArrayElementMaxDOUBLE(double* arr, int size)
{
    double tmp = 0;

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }

    cout << "��������������� ������: " << "\n";

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}

// ������� ��� ���������� �� ������������  ��������
void sortArrayElementMinDOUBLE(double* arr, int size)
{
    double tmp = 0;

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }

    cout << "��������������� ������: " << "\n";

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}

// ������� ��� �������������� �������� �������.
void reductArrayDOUBLE(double* arr, int size)
{
    int element = 0;
    double number = 0;

    cout << "������� ����� �������� ������� ��� ������ �������� �� ���������: ";

    cin >> element;

    cout << "������� �������� �� ������� ������ �������� ������� �������: ";

    cin >> number;

    cout << "������ � ���������� ���������: ";

    for (int i = 0; i < size; i++)
    {
        if (i != element)
        {
            cout << arr[i] << " ";
        }
        else
        {
            arr[i] = number;
            cout << arr[i] << " ";
        }
    }

    cout << endl;
}

//===  ��������� ��������  ==========================================================================

//������� ��� ���������� ������� ���������� ����������
void writeArrayCHAR(char* arr, int size)//����������� �������� ������� �� ������ � ��� �������
{
    srand(time(NULL));

    for (int i = 0; i < size; i++)
    {
        arr[i] = char('a' + rand() % 26);
    }
}

//������� ��� ������ �������� ������� �� �������
void showArrayCHAR(char* arr, int size)//����������� �������� ������� �� ������ � ��� �������
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// ������� ��� ������ ������������ ��������
void minArrayElementCHAR(char* arr, int size)
{
    char min = arr[0];

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << "����������� �������� � �������: " << min << "\n";
}

// ������� ��� ������ ������������� ��������
void maxArrayElementCHAR(char* arr, int size)
{
    char max = arr[0];

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << "������������ �������� � �������: " << max << "\n";
}

// ������� ��� ���������� �� ������������� ��������
void sortArrayElementMaxCHAR(char* arr, int size)
{
    char tmp = 0;

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }

    cout << "��������������� ������: " << "\n";

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}

// ������� ��� ���������� �� ������������  ��������
void sortArrayElementMinCHAR(char* arr, int size)
{
    char tmp = 0;

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }

    cout << "��������������� ������: " << "\n";

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}

// ������� ��� �������������� �������� �������.
void reductArrayCHAR(char* arr, int size)
{
    int element = 0;
    char number = 0;

    cout << "������� ����� �������� ������� ��� ������ �������� �� ���������: ";

    cin >> element;

    cout << "������� �������� �� ������� ������ �������� ������� �������: ";

    cin >> number;

    cout << "������ � ���������� ���������: ";

    for (int i = 0; i < size; i++)
    {
        if (i != element)
        {
            cout << arr[i] << " ";
        }
        else
        {
            arr[i] = number;
            cout << arr[i] << " ";
        }
    }

    cout << endl;
}


