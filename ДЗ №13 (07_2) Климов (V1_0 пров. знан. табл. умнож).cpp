// Задание #1
// 
// ДЗ №13 Климов (проверка знания таблицы умножения)
//
//Написать программу, которая проверяет поль-
//зователя на знание таблицы умножения.Программа вы -
//водит на экран два числа, пользователь должен ввести их
//произведение.Разработать несколько уровней сложности
//(отличаются сложностью и количеством вопросов).Вы -
//вести пользователю оценку его знаний.

#include <iostream>
#include <time.h>//библиотека для рандомайзера
#include <windows.h>//библиотека для ограничения времени выполнения задачи

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	
    // Установить начальную точку генерирования последовательности
	 // использовать функцию time(NULL)
	srand(time(NULL));

	int result = 0, answer = 0, countRepeat = 10, countGoodAnswer = 0, levelId = 0, blockNumber = 0;
    int number1 = 0, number2 = 0, timeTest = 5;

	cout << "\n ***********************************************************" << endl;
	cout << " *     Программа проверки знания таблицы умножения V1.0     *" << endl;
	cout << " ************************************************************" << endl;


    cout << "\nВыберите уровень сложности: \n";
    cout << R"(1 - суперлегкий (таблица умножения для одного, 
выбранного пользователем, блока без ограничений))"<<"\n";
    cout << R"(2 - легкий (таблица умножения для одного, 
выбранного рандомно, блока без ограничений))"<<"\n";
    cout << "3 - средний (таблица умножения всех блоков без ограничений)\n";
    cout << "4 - тяжелый (таблица умножения всех блоков с ограничением по времени)\n";
    cout << "5 - выход \n";
    cin >> levelId;
   
    while (levelId < 1 || levelId > 5)
    {
        cout << "\nВведено некорректное значение. Выберете ещё раз: \n";
        cin >> levelId;
    }

    switch (levelId)
    {
    case 1:
    {
        cout << "\nВыбран 'суперлёгкий' уровень!\n";
        cout << "\nВам нужно ответить на " << countRepeat << " вопросов.\n";
        cout << "\nВыберите блок цифр от 1 до 10: \n";
        cin >> blockNumber;

        while (countRepeat != 0)
        {
           
            number1 = 1 + rand() % 10;
            cout << countRepeat << "). Ответьте на вопрос. Каким будет результат умножения?: \n" << blockNumber << " x " << number1 << ": ";
            cin >> answer;

            result = blockNumber * number1;

            if (result == answer)
            {
                countGoodAnswer += 1;
                cout << "Вы ответили верно. \n\n";
            }
            else
            {
                cout << "К сожелению ответ неправильный. Увы и ах =( \n\n";
            }

            countRepeat--;
        }
        break;
    }
    case 2:
    {
        cout << "\nВыбран 'лёгкий' уровень!\n";
        cout << "\nВам нужно ответить на " << countRepeat << " вопросов.\n";

        blockNumber = 1 + rand() % 10;

        while (countRepeat != 0)
        {

            number1 = 1 + rand() % 10;
            cout << countRepeat << "). Ответьте на вопрос. Каким будет результат умножения?: \n" << blockNumber << " x " << number1 << ": ";
            cin >> answer;

            result = blockNumber * number1;

            if (result == answer)
            {
                countGoodAnswer += 1;
                cout << "Вы ответили верно. \n\n";
            }
            else
            {
                cout << "К сожелению ответ неправильный. Увы и ах =( \n\n";
            }

            countRepeat--;
        }
        break;
    }
    
    case 3:
    {
        cout << "\nВыбран 'средний' уровень!\n";
        cout << "\nВам нужно ответить на " << countRepeat << " вопросов.\n";

        while (countRepeat != 0)
        {
            number1 = 1 + rand() % 10;
            number2 = 1 + rand() % 10;
            cout << countRepeat << "). Ответьте на вопрос. Каким будет результат умножения?: \n" << number1 << " x " << number2 << ": ";
            cin >> answer;

            result = number1 * number2;

            if (result == answer)
            {
                countGoodAnswer += 1;
                cout << "Вы ответили верно. \n\n";
            }
            else
            {
                cout << "К сожелению ответ неправильный. Увы и ах =( \n\n";
            }

            countRepeat--;
        }       
        break;
    }
    case 4:
    {
        cout << "\nВыбран 'тяжёлый' уровень!\n";
        cout << "\nВам нужно ответить на " << countRepeat << " вопросов, на каждый не более " << timeTest << " секунд\n";
        cout << "При превышении времени ответа любой ответ засчитывается как неправильный\n\n";


        while (countRepeat != 0)
        {
            number1 = 1 + rand() % 10;
            number2 = 1 + rand() % 10;
            cout << countRepeat << "). Ответьте на вопрос. Каким будет результат умножения?: \n" << number1 << " x " << number2 << ": ";
            
            time_t start, end;//ограничение по времени на ввод ответа
            time(&start);
           
            cin >> answer;

            time(&end);
            double seconds = difftime(end, start);
            
            cout << "Время потраченное на ответ: " << seconds<<" сек.\n";
           
            if (seconds > timeTest)
            {
                answer = 0;
                cout << "\nПревышено время для ответа на вопрос, ответ не засчитан!\n";
            }


            result = number1 * number2;

            if (result == answer)
            {
                countGoodAnswer += 1;
                cout << "Вы ответили верно. \n\n";
            }
            else
            {
                cout << "К сожелению ответ неправильный. Увы и ах =( \n\n";
            }

            countRepeat--;
        }
        break;
    }
    default:
        exit(0);
        break;
    }

    cout << "============================================================\n";
    
    Sleep(2000);

    cout << "Оценка уровня знаний выполняется по следующим критериям:\n";
    cout << "Один неправильный ответ - Отличо\n";
    cout << "Два неправильных ответа - Хорошо\n";
    cout << "Больше двух неправильных ответа - Плохо\n\n";
    
    cout << "Ознакомьтесь с критериями оценки знаний!\n";
    
    Sleep(6000);

    cout << "\nИтого правильных ответов: " << countGoodAnswer << " из 10\n";

    Sleep(2000);

    if (countGoodAnswer >= 9)
    {
        cout << "\nРЕЗУЛЬТАТ ТЕСТА: Отлично! Вы знаток!\n";
    }
    else if (countGoodAnswer >= 8 && countGoodAnswer < 9)
    {
        cout << "\nРЕЗУЛЬТАТ ТЕСТА: Хорошо! Можно повторить таблицу умножения!\n";
    }
    else if (countGoodAnswer <= 7)
    {
        cout << "\nРЕЗУЛЬТАТ ТЕСТА: Плохо! Вы двоечник и лентяй! Идите и учите таблицу!\n\n";
    }

	system("pause");

	return 0;
}
