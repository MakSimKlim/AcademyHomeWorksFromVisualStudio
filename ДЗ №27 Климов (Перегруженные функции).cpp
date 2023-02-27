// Задание #1
// 
// ДЗ №27 Климов (Перегруженные функции)
//
//Написать перегруженные функции (int, double,
//char) для выполнения следующих задач :
//■■ Инициализация квадратной матрицы;
//■■ Вывод матрицы на экран;
//■■ Определение максимального и минимального элемента
//на главной диагонали матрицы;
//■■ Сортировка элементов по возрастанию отдельно для
//каждой строки матрицы.


#include <iostream>
#include <time.h>
#include <cmath>

using namespace std;
 

int ArrMatrixActionsOverload(int matrix[100][100], int size)      //перегруженная функция int
{
    for (int i = 0; i < size; i++)                                //инициализация квадратной матрицы
    {
        for (int j = 0; j < size; j++)
        {
            matrix[i][j] = 0 + rand() % (10 - 0);                 //рандомайзер для заполнения массива
            cout << matrix[i][j] << " ";                          //вывод матрицы на экран
        }
        cout << "\n";
    }
    cout << "\n";
    int max = matrix[0][0];                                       //поиск макс элемента на главной диагонали
    int min = matrix[0][0];                                       //поиск мин элемента на главной диагонали

    for (int k = 0; k < size; k++)
    {
        for (int l = 0; l < size; l++)
        {
            if (k=l)
            {
                if (matrix[k][l]>max)
                {
                    max = matrix[k][l];
                }
                else if (matrix[k][l] < min)
                {
                    min = matrix[k][l];
                }
            }
        }
    }
    cout << "Максимальный элемент на главной диагонали равен:" << max << "\n";
    cout << "Минимальный элемент на главной диагонали равен:" << min << "\n";

                                                                  // сортировка массива методом выбора
        int index_min = 0;                                        // переменная для минимального значения
        int temp;                                                 // переменная - буфер, нужная при сортировке массива
        
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)                        // сортируем массив методом выбора
            {
                index_min = j;                                    // за минимальный берем первый из неотсортированных в строке

                for (int k = j + 1; k < size; k++)                // начинаем проверять с последующего за ним элемента все оставшиеся
                {
                    if (matrix[i][k] < matrix[i][index_min])      // если какой-то из них меньше...
                    {
                        index_min = k;                            //... то запоминаем его номер
                    }
                }
                if (index_min != j)                               // если в ходе проверки индекс минимального элемента поменялся
                {
                    temp = matrix[i][j];                          // то меняем местами элементы
                    matrix[i][j] = matrix[i][index_min];
                    matrix[i][index_min] = temp;
                }
            }
        }
                                                                  // Вывод отсортированного массива
        cout << "Массив отсортированный методом выбора построчно: " << "\n\n";
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
            {
                cout << matrix[i][j] << " ";
            }
            cout << "\n";
        }
        cout << "\n";

    return matrix[100][100];
}

double ArrMatrixActionsOverload(double matrix[100][100], int size)         //перегруженная функция double
{
    for (int i = 0; i < size; i++)                                         //инициализация квадратной матрицы
    {
        for (int j = 0; j < size; j++)
        {
            matrix[i][j] = (double)rand() / (double)RAND_MAX * (2 - 1) + 1;//рандомайзер с плавающей запятой
            cout << matrix[i][j] << " ";                                   //вывод матрицы на экран
        }
        cout << "\n";
    }
    cout << "\n";
    double max = matrix[0][0];                                             //поиск макс элемента на главной диагонали
    double min = matrix[0][0];                                             //поиск мин элемента на главной диагонали

    for (int k = 0; k < size; k++)
    {
        for (int l = 0; l < size; l++)
        {
            if (k = l)
            {
                if (matrix[k][l] > max)
                {
                    max = matrix[k][l];
                }
                else if (matrix[k][l] < min)
                {
                    min = matrix[k][l];
                }
            }
        }
    }
    cout << "Максимальный элемент на главной диагонали равен:" << max << "\n";
    cout << "Минимальный элемент на главной диагонали равен:" << min << "\n";

                                                              // сортировка массива методом выбора
    int index_min = 0;                                     // переменная для минимального значения
    double temp;                                              // переменная - буфер, нужная при сортировке массива

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)                        // сортируем массив методом выбора
        {
            index_min = j;                                    // за минимальный берем первый из неотсортированных в строке

            for (int k = j + 1; k < size; k++)                // начинаем проверять с последующего за ним элемента все оставшиеся
            {
                if (matrix[i][k] < matrix[i][index_min])      // если какой-то из них меньше...
                {
                    index_min = k;                            //... то запоминаем его номер
                }
            }
            if (index_min != j)                               // если в ходе проверки индекс минимального элемента поменялся
            {
                temp = matrix[i][j];                          // то меняем местами элементы
                matrix[i][j] = matrix[i][index_min];
                matrix[i][index_min] = temp;
            }
        }
    }
                                                             // Вывод отсортированного массива
    cout << "Массив отсортированный методом выбора построчно: " << "\n\n";
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\n";

    return matrix[100][100];
}

char ArrMatrixActionsOverload(char matrix[100][100], int size)           //перегруженная функция float
{
    for (int i = 0; i < size; i++)                                       //инициализация квадратной матрицы
    {
        for (int j = 0; j < size; j++)
        {
            matrix[i][j] = char(rand() % 26 + 0x61);                     //рандомайзер символов
            cout << matrix[i][j] << " ";                                 //вывод матрицы на экран
        }
        cout << "\n";
    }
    cout << "\n";
    char max = matrix[0][0];                                             //поиск макс элемента на главной диагонали
    char min = matrix[0][0];                                             //поиск мин элемента на главной диагонали

    for (int k = 0; k < size; k++)
    {
        for (int l = 0; l < size; l++)
        {
            if (k = l)
            {
                if (matrix[k][l] > max)
                {
                    max = matrix[k][l];
                }
                else if (matrix[k][l] < min)
                {
                    min = matrix[k][l];
                }
            }
        }
    }
    cout << "Максимальный элемент на главной диагонали равен:" << max << "\n";
    cout << "Минимальный элемент на главной диагонали равен:" << min << "\n";

                                                            // сортировка массива методом выбора
    int index_min = 0;                                     // переменная для минимального значения
    char temp;                                              // переменная - буфер, нужная при сортировке массива

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)                        // сортируем массив методом выбора
        {
            index_min = j;                                    // за минимальный берем первый из неотсортированных в строке

            for (int k = j + 1; k < size; k++)                // начинаем проверять с последующего за ним элемента все оставшиеся
            {
                if (matrix[i][k] < matrix[i][index_min])      // если какой-то из них меньше...
                {
                    index_min = k;                            //... то запоминаем его номер
                }
            }
            if (index_min != j)                               // если в ходе проверки индекс минимального элемента поменялся
            {
                temp = matrix[i][j];                          // то меняем местами элементы
                matrix[i][j] = matrix[i][index_min];
                matrix[i][index_min] = temp;
            }
        }
    }
                                                              // Вывод отсортированного массива
    cout << "Массив отсортированный методом выбора построчно: " << "\n\n";
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\n";

    return matrix[100][100];
}

int main()
{
    setlocale(LC_ALL, "Rus");
    srand(time(NULL));

    cout << "\n ***********************************************************************" << endl;
    cout << " *               Программа перегруженных функций v1.0                  *" << endl;
    cout << " ***********************************************************************" << endl;

    int arrSize = 1;
    int idData = 0;

    cout << "Введите размер многомерного массива до 100: " << "\n";
    cin >> arrSize;

    cout << "Введите тип данных массива" << "\n";
    cout << "1 - int" << "\n";
    cout << "2 - double" << "\n";
    cout << "3 - char" << "\n";
    cin >> idData;

    while (idData < 1 || idData > 3)
    {
        cout << "Неверный выбор типа данных, попробуйте ещё раз";
        cin >> idData;
    }
    switch (idData)
    {
    case 1:
    {
        int arrMatrix[100][100];
        ArrMatrixActionsOverload(arrMatrix, arrSize);
        break;
    }
    case 2:
    {
        double arrMatrix[100][100];
        ArrMatrixActionsOverload(arrMatrix, arrSize);
        break;
    }
    case 3:
    {
        char arrMatrix[100][100];
        ArrMatrixActionsOverload(arrMatrix, arrSize);
        break;
    }
    }

    cout << "\n";

    system("pause");

    return 0;
}
