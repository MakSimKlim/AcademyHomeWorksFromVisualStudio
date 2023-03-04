// Задание #2
// 
// ДЗ №28 Климов (рекурсия быки и коровы)
//
// Написать игру «Быки и коровы». Программа
//«загадывает» четырёхзначное число и играющий должен
//угадать его.После ввода пользователем числа программа
//сообщает, сколько цифр числа угадано(быки) и сколько
//цифр угадано и стоит на нужном месте(коровы).После
//отгадывания числа на экран необходимо вывести коли -
//чество сделанных пользователем попыток.В программе
//необходимо использовать рекурсию.

#include <iostream>
#include <time.h>
#include <string>

using namespace std;

int ArrRandomise(int arr[], const int size,int value)       // рекурсивная функция заполнения массива рандомными значениями
{
    if (value >= size)
    {
        return arr[size];
    }
    arr[value] = 0 + rand() % (9 - 0);
    cout << arr[value];
    ArrRandomise(arr, size, value + 1);
}

//int ArrRandomise(int arr[], const int size)         // простая функция заполнения массива рандомными значениями
//{
//    for (int i = 0; i < size; i++)
//    {
//        arr[i] = 0 + rand() % (9 - 0);             // заполняем массив рандомайзером
//        cout << arr[i];                            // Вывод массива для проверки
//    }
//    cout << "\n";
//    
//    return arr[size];
//}

int TranslateNumberInMassiv(int number, const int size, int arrNumber[])// функция преобразование введенного пользователем числа в массив
{
    //cout << "Введенное число в виде массива: " << "\n";
    for (int i = 0; i < size; i++)               // преобразование введенного пользователем числа в массив
    {
        arrNumber[i] = number % 10;              // запись числа в зеркальном виде начиная с последней цифры
        number = number / 10;
        //cout << arrNumber[i];
    }
    //cout << "\n";
                                                //массив обмена местами зеркальных цифр
    for (int j = 0; j < size / 2; j++)
    {
        int tmp;
        tmp = arrNumber[j];                     // обмен местами первого и последнего, второго и предпоследнего элемента
        arrNumber[j] = arrNumber[size - 1 - j];
        arrNumber[size - 1 - j] = tmp;
    }
    //cout << "\n";

    for (int k = 0; k < size; k++)             //вывод массива числа введенного пользователем
    {
        arrNumber[k];
        //cout << arrNumber[k] << " ";
    }
    //cout << "\n";
    return arrNumber[size];
}

int BullSearch(int arr[], int size, int arrkey[]) // функция линейного поиска кол-ва "быков"
{
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (arr[i] == arrkey[j])
            {
                sum += 1;                         // количество быков
                break;
            }
        }
    }
    return sum;
}

int CowSearch(int arr[], int size, int arrkey[]) // функция линейного поиска кол-ва "коров"
{
    int sum2 = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if ((arrkey[j] == arr[i]) && (i == j))
            {
                sum2 += 1;                         // количество коров
            }
        }
    }
    return sum2;
}


int main()
{
    setlocale(LC_ALL, "Rus");
    srand(time(NULL));

    cout << "\n **********************************************************************" << endl;
    cout << " *              Игра 'Bulls & Cows (Быки и коровы)'v1.0               *" << endl;
    cout << " **********************************************************************" << endl;
    cout << "Правила игры:" << "\n";
    cout << R"(Программа «загадывает» четырёхзначное число.Вам
необходимо угадать его.После ввода числа программа
сообщает, сколько цифр числа угадано (быки) и сколько
цифр угадано и стоит на нужном месте (коровы).Необходимо
отгадать число за минимальное кол-во попыток.)" << "\n";
    cout << "\n";

    const int arrSize = 4;
    int value = 0;
    int compNumber = 0;
    int arrCompNumber[arrSize];
    int userNumber = 0;
    int arrUserNumber[arrSize];
    int searchKey = 0;
    int bulls = 0;
    int cows = 0;
    int sumAttemps = 0;

    ArrRandomise(arrCompNumber, arrSize, value);                         // функция создания рандомного массива
    
    cout << "\n";
    cout << "Загадано число: ****" << "\n";
    cout << "\n";
    cout << "Отгадайте задуманное компьютером четырёхзначное число!" << "\n";
    cout << "\n";

    compNumber = arrCompNumber[0] * 1000 + arrCompNumber[1] * 100 + arrCompNumber[2] * 10 + arrCompNumber[3];

    cout << "Введите четырёхзначное число: " << "\n";
    
    while (userNumber != compNumber)
    {
        cin >> userNumber;

        TranslateNumberInMassiv(userNumber, arrSize, arrUserNumber); // функция преобразование введенного пользователем числа в массив

        bulls = BullSearch(arrCompNumber, arrSize, arrUserNumber);   // функция линейного поиска кол-ва "быков"
        cout << "количество 'быков' равно: " << bulls << "\n";

        cows = CowSearch(arrCompNumber, arrSize, arrUserNumber); // функция линейного поиска кол-ва "коров"
        cout << "количество 'коров' равно: " << cows << "\n";
        
        sumAttemps += 1; // сумма попыток
    }

    cout << "\n";
    cout << "Поздравляем! Вы отгадали задуманное число: " << compNumber;
    cout << "Ответ найден за " << sumAttemps << " попыток!" << "\n";

    return 0;
}