// Задание №2
// 
// ДЗ №13 Климов (ромбик) Вложенные циклы
//
//Вывести на экран ромб из звездочек.
//
//функционал программы расширен до двух фигур: ромб и квадрат, квадрат с заполнением и без

#include <iostream>

using namespace std;

int main()
{

    setlocale(LC_ALL, "Rus");

    cout << "\n ****************************************************" << endl;
    cout << " *        Программа отрисовки фигур V2.0            *" << endl;
    cout << " ****************************************************" << endl;


    int length = 0, width = 0;//размеры для фигур
    //int i = 0, j = 0;//i - строки, j - символы в строке
    int center = 0;//центр для фигуры "ромб", в ромбе высота и ширина равны
    int figureId = 0;//выбор фигур
    int fullEmpty = 0;//фигура с заполнением или без
    char symbol = 0;//выбор символов для отрисовки


    cout << "\nВыберите фигуру для отрисовки: \n";
    cout << "1 - ромб\n";
    cout << "2 - прямоугольник\n";
    cin >> figureId;

    while (figureId < 1 || figureId>2)
    {
        cout << "Некорректный ввод. Попробуйте ещё раз: \n";
        cin >> figureId;
    }


    if (figureId == 1)
    {
        cout << "Укажите высоту фигуры: \n";
        cin >> length;
        while (length < 0)
        {
            cout << "Некорректный ввод. Попробуйте ещё раз: \n";
            cout << "Укажите высоту фигуры: \n";
            cin >> length;
        }
    }
    else
    {
        cout << "Укажите высоту фигуры: \n";
        cin >> length;
        cout << "Укажите длину фигуры: \n";
        cin >> width;
        while (length < 0 || width < 0)
        {
            cout << "Некорректный ввод. Попробуйте ещё раз: \n";
            cout << "Укажите высоту фигуры: \n";
            cin >> length;
            cout << "Укажите длину фигуры: \n";
            cin >> width;
        }
    }

    cout << "Выберите символ для отрисовки фигур: ";
    cin >> symbol;

    switch (figureId)
    {
    case 1:
    {
        center = length / 2;

        for (int i = 0; i < length; i++)
        {
            for (int j = 0; j < length; j++)
            {
                if (i <= center)
                {
                    //верхняя половина ромба
                    (j >= center - i && j <= center + i)? cout << symbol: cout << " ";//тернарный оператор для оптимизации кода
                }
                else
                {
                    //нижняя половина ромба
                    (j >= center + i - length + 1 && j <= center - i + length - 1)? cout << symbol: cout << " ";//тернарный оператор для оптимизации кода
                }

            }
            cout << "\n";
        }

        break;
    }
    case 2:
    {
        cout << "\nПрямоугольник полностью заполенный или пустой внутри: \n";
        cout << "1 - заполненный\n";
        cout << "2 - пустой внутри\n";
        cin >> fullEmpty;

        while (fullEmpty < 1 || fullEmpty > 2)
        {
            cout << "Некорректный ввод. Попробуйте ещё раз: \n";
            cin >> fullEmpty;
        }

        for (int i = 0; i < length; i++)
        {
            if (i == 0 || i == length - 1)//первая и последняя строчка закрашивются полностью
            {
                for (int j = 0; j < width; j++)
                {
                    cout << symbol;
                }
            }
            else
            {
                cout << symbol;//отрисовка первого символа в строке
                for (int j = 1; j < width - 1; j++)//отрисовка символов в строке от второго до предпоследнего
                {
                    if (fullEmpty == 1)//проверка условия на заполнение внутренней части
                    {
                        fullEmpty == 1 ? cout << symbol : cout << symbol;//тернарный оператор для оптимизации кода
                    }
                    else
                    {
                        fullEmpty == 1 ? cout << symbol : cout << " ";//тернарный оператор для оптимизации кода
                    }
                   
                }
                cout << symbol;
            }
            cout << "\n";
        }
        cout << "\n";
        break;
    }

    }

    system("pause");

    return 0;
    
}
