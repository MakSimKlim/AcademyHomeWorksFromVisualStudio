#pragma
#include <iostream>
#include "function.h"// çàãîëîâî÷íûé ôàéë
#include <string>
#include <stdlib.h>//äëÿ ðàíäîìàéçåðà

using namespace std;
setlocale(LC_ALL, "Rus");
SetConsoleCP(1251);
SetConsoleOutputCP(1251);

//===  öåëî÷èñëåííûå çíà÷åíèÿ =======================================================================

//ôóíêöèÿ äëÿ çàïîëíåíèÿ ìàññèâà ñëó÷àéíûìè çíà­÷åíèÿìè
void writeArrayINTEGER(int* arr, int size)//îáÿçàòåëüíà ïåðåäà÷à ìàññèâà ïî ññûëêå â ýòó ôóíêöèþ
{
    srand(time(NULL));

    for (int i = 0; i < size; i++)
    {
        arr[i] = 1 + rand() % (10 - 1);
    }
}

//ôóíêöèÿ äëÿ âûâîäà çíà÷åíèé ìàññèâà íà êîíñîëü
void showArrayINTEGER(int* arr, int size)//îáÿçàòåëüíà ïåðåäà÷à ìàññèâà ïî ññûëêå â ýòó ôóíêöèþ
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// ôóíêöèÿ äëÿ ïîèñêà ìèíèìàëüíîãî ýëåìåíòà
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
    cout << "Ìèíèìàëüíîå çíà÷åíèå â ìàññèâå: " << min << "\n";
}

// ôóíêöèÿ äëÿ ïîèñêà ìàêñèìàëüíîãî ýëåìåíòà
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
    cout << "Ìàêñèìàëüíîå çíà÷åíèå â ìàññèâå: " << max << "\n";
}

// ôóíêöèÿ äëÿ ñîðòèðîâêè îò ìàêñèìàëüíîãî ýëåìåíòà
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

    cout << "Îòñîðòèðîâàííûé ìàññèâ: " << "\n";

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}

// ôóíêöèÿ äëÿ ñîðòèðîâêè îò ìèíèìàëüíîãî  ýëåìåíòà
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

    cout << "Îòñîðòèðîâàííûé ìàññèâ: " << "\n";

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}

// ôóíêöèÿ äëÿ ðåäàêòèðîâàíèÿ çíà÷åíèÿ ìàññèâà.
void reductArrayINTEGER(int* arr, int size)
{
    int element  = 0, number = 0;

    cout << "Ââåäèòå íîìåð ýëåìåíòà ìàññèâà äëÿ çàìåíû çíà÷åíèå íà âûáðàííîå: ";

    cin >> element;

    cout << "Ââåäèòå çíà÷åíèå íà êîòîðîå õîòèòå çàìåíèòü ýëåìåíò ìàññèâà: ";

    cin >> number;
    
    cout << "Ìàññèâ ñ èçìåíåííûì ýëåìåíòîì: ";

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

//===  çíà÷åíèÿ ñ ïëàâàþùåé çàïÿòîé  ================================================================

//ôóíêöèÿ äëÿ çàïîëíåíèÿ ìàññèâà ñëó÷àéíûìè çíà­÷åíèÿìè
void writeArrayDOUBLE(double* arr, int size)//îáÿçàòåëüíà ïåðåäà÷à ìàññèâà ïî ññûëêå â ýòó ôóíêöèþ
{
    srand(time(NULL));

    for (int i = 0; i < size; i++)
    {
        arr[i] = (double)rand() / (double)RAND_MAX * (10 - 1) + 1;
    }
}

//ôóíêöèÿ äëÿ âûâîäà çíà÷åíèé ìàññèâà íà êîíñîëü
void showArrayDOUBLE(double* arr, int size)//îáÿçàòåëüíà ïåðåäà÷à ìàññèâà ïî ññûëêå â ýòó ôóíêöèþ
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// ôóíêöèÿ äëÿ ïîèñêà ìèíèìàëüíîãî ýëåìåíòà
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
    cout << "Ìèíèìàëüíîå çíà÷åíèå â ìàññèâå: " << min << "\n";
}

// ôóíêöèÿ äëÿ ïîèñêà ìàêñèìàëüíîãî ýëåìåíòà
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
    cout << "Ìàêñèìàëüíîå çíà÷åíèå â ìàññèâå: " << max << "\n";
}

// ôóíêöèÿ äëÿ ñîðòèðîâêè îò ìàêñèìàëüíîãî ýëåìåíòà
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

    cout << "Îòñîðòèðîâàííûé ìàññèâ: " << "\n";

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}

// ôóíêöèÿ äëÿ ñîðòèðîâêè îò ìèíèìàëüíîãî  ýëåìåíòà
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

    cout << "Îòñîðòèðîâàííûé ìàññèâ: " << "\n";

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}

// ôóíêöèÿ äëÿ ðåäàêòèðîâàíèÿ çíà÷åíèÿ ìàññèâà.
void reductArrayDOUBLE(double* arr, int size)
{
    int element = 0;
    double number = 0;

    cout << "Ââåäèòå íîìåð ýëåìåíòà ìàññèâà äëÿ çàìåíû çíà÷åíèå íà âûáðàííîå: ";

    cin >> element;

    cout << "Ââåäèòå çíà÷åíèå íà êîòîðîå õîòèòå çàìåíèòü ýëåìåíò ìàññèâà: ";

    cin >> number;

    cout << "Ìàññèâ ñ èçìåíåííûì ýëåìåíòîì: ";

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

//===  ñòðîêîâûå çíà÷åíèÿ  ==========================================================================

//ôóíêöèÿ äëÿ çàïîëíåíèÿ ìàññèâà ñëó÷àéíûìè çíà­÷åíèÿìè
void writeArrayCHAR(char* arr, int size)//îáÿçàòåëüíà ïåðåäà÷à ìàññèâà ïî ññûëêå â ýòó ôóíêöèþ
{
    srand(time(NULL));

    for (int i = 0; i < size; i++)
    {
        arr[i] = char('a' + rand() % 26);
    }
}

//ôóíêöèÿ äëÿ âûâîäà çíà÷åíèé ìàññèâà íà êîíñîëü
void showArrayCHAR(char* arr, int size)//îáÿçàòåëüíà ïåðåäà÷à ìàññèâà ïî ññûëêå â ýòó ôóíêöèþ
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// ôóíêöèÿ äëÿ ïîèñêà ìèíèìàëüíîãî ýëåìåíòà
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
    cout << "Ìèíèìàëüíîå çíà÷åíèå â ìàññèâå: " << min << "\n";
}

// ôóíêöèÿ äëÿ ïîèñêà ìàêñèìàëüíîãî ýëåìåíòà
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
    cout << "Ìàêñèìàëüíîå çíà÷åíèå â ìàññèâå: " << max << "\n";
}

// ôóíêöèÿ äëÿ ñîðòèðîâêè îò ìàêñèìàëüíîãî ýëåìåíòà
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

    cout << "Îòñîðòèðîâàííûé ìàññèâ: " << "\n";

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}

// ôóíêöèÿ äëÿ ñîðòèðîâêè îò ìèíèìàëüíîãî  ýëåìåíòà
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

    cout << "Îòñîðòèðîâàííûé ìàññèâ: " << "\n";

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}

// ôóíêöèÿ äëÿ ðåäàêòèðîâàíèÿ çíà÷åíèÿ ìàññèâà.
void reductArrayCHAR(char* arr, int size)
{
    int element = 0;
    char number = 0;

    cout << "Ââåäèòå íîìåð ýëåìåíòà ìàññèâà äëÿ çàìåíû çíà÷åíèÿ íà âûáðàííîå: ";

    cin >> element;

    cout << "Ââåäèòå çíà÷åíèå íà êîòîðîå õîòèòå çàìåíèòü ýëåìåíò ìàññèâà: ";

    cin >> number;

    cout << "Ìàññèâ ñ èçìåíåííûì ýëåìåíòîì: ";

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


