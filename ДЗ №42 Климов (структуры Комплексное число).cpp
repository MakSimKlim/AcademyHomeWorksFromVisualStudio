// Задание #1
// 
// ДЗ №42 Климов (структуры Комплексное число)
//
//Создайте структуру, описывающую комплексное число.
//Реализуйте арифметические операции с комплексными числами : сумму, разность, умножение, деление.
// 
// ТЕОРИЯ о комплексных числах:
//комплексное число – это двумерное число, состоящее из действительной и мнимой частей. 
//Оно имеет вид z = a + bi, где a и b – действительные числа,  i – так называемая мнимая единица. 
//Число a называется действительной частью (Re) комплексного числа z , 
//число b называется мнимой частью (Im) комплексного числа z.
//a + bi это ЕДИНОЕ  ЧИСЛО, а не сложение. 
//Действительную и мнимую части комплексного числа, в принципе, можно переставить местами:  z = bi + a,
//или переставить мнимую единицу: z = a + ib – от этого комплексное число не изменится. 
//Но стандартно комплексное число принято записывать именно в таком порядке:  z = a + bi.
//Действительные числа – это частный случай комплексных чисел (это комплексные числа с нулевой мнимой частью).
//Они располагаются строго на действительной оси Re (ось x в алгебре)
//Мнимые числа – это частный случай комплексных чисел (это комплексные числа с нулевой действительной частью). 
//Они располагаются строго на мнимой оси Im (ось у в алгебре)
//Важное правило при расчётах в комплексных числах: i^2 = -1 !!!!

#include <iostream>
#include <time.h> // для Rand
#include <cmath> // для double pow
#include <stdio.h>
#include <math.h>

using namespace std;

struct ComplexNumber // complex number - структура комплексного числа
{
	double realPart;//real part - действительная часть комплексного числа
	double imaginaryPart;//imaginary part - мнимая часть комплексного числа
};

int main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));

	ComplexNumber part1;
	part1.realPart = -10 + rand() % (10 - (-10));        //рандомное значение действительной части комплексного числа
	part1.imaginaryPart = -10 + rand() % (10 - (-10));   //рандомное значение действительной части комплексного числа
    //part1.realPart = -7;                               //фиксированное  значение действительной части комплексного числа
    //part1.imaginaryPart = -12;                         //фиксированное значение действительной части комплексного числа

	ComplexNumber part2;
	part2.realPart = -10 + rand() % (10 - (-10));        //рандомное значение действительной части комплексного числа
	part2.imaginaryPart = -10 + rand() % (10 - (-10));   //рандомное значение действительной части комплексного числа
    //part2.realPart = -12;                              //фиксированное значение действительной части комплексного числа
    //part2.imaginaryPart = 7;                           //фиксированное значение действительной части комплексного числа

    double pOneReal = part1.realPart;      //a
    double pOneImag = part1.imaginaryPart; //b
    double pTwoReal = part2.realPart;      //c
    double pTwoImag = part2.imaginaryPart; //d

    if (pOneImag >= 0)
      {
       cout << "Комплексное число №1: z = " << pOneReal << "+" << pOneImag << "i" << "\n";
      }
    else
      {
       cout << "Комплексное число №1: z = " << pOneReal << pOneImag << "i" << "\n";
      }

    if (pTwoImag >= 0)
      {
       cout << "Комплексное число №2: k = " << pTwoReal << "+" << pTwoImag << "i" << "\n";
      }
    else
    {
       cout << "Комплексное число №2: k = " << pTwoReal << pTwoImag << "i" << "\n";
    }

    if ((pOneImag + pTwoImag) >= 0)
    {
        cout << "сумма комплексных чисел равна: s = " << pOneReal + pTwoReal << "+" << pOneImag + pTwoImag << "i" << "\n";
    }
    else
    {
        cout << "сумма комплексных чисел равна: s = " << pOneReal + pTwoReal << pOneImag + pTwoImag << "i" << "\n";
    }

    if ((pOneImag - pTwoImag) >= 0)
    {
        cout << "разность комплексных чисел равна: r = " << pOneReal - pTwoReal << "-" << pOneImag - pTwoImag << "i" << "\n";
    }
    else
    {
        cout << "разность комплексных чисел равна: r = " << pOneReal - pTwoReal <<  pOneImag - pTwoImag << "i" << "\n";
    }


    if ((pTwoReal * pOneImag + pOneReal * pTwoImag) >= 0)
    {
        cout << "произведение комплексных чисел равно: p = " << pOneReal * pTwoReal - pOneImag * pTwoImag << "+" << pTwoReal * pOneImag + pOneReal * pTwoImag << "i" << "\n";
    }
    else
    {
        cout << "произведение комплексных чисел равно: p = " << pOneReal * pTwoReal - pOneImag * pTwoImag <<  pTwoReal * pOneImag + pOneReal * pTwoImag << "i" << "\n";
    }


    if ((pOneImag * pTwoReal - pOneReal * pTwoImag) / (powl(pTwoReal, 2) + powl(pTwoImag, 2)) >= 0)
    {
        cout << "частное комплексных чисел равно: d = " << (pOneReal * pTwoReal + pOneImag * pTwoImag) / ((powl(pTwoReal, 2)) + (powl(pTwoImag, 2))) << "+" << (pOneImag * pTwoReal - pOneReal * pTwoImag) / (powl(pTwoReal, 2) + powl(pTwoImag, 2)) << "i" << "\n";
    }
    else
    {
        cout << "частное комплексных чисел равно: d = " << (pOneReal * pTwoReal + pOneImag * pTwoImag) / ((powl(pTwoReal, 2)) + (powl(pTwoImag, 2))) <<  (pOneImag * pTwoReal - pOneReal * pTwoImag) / (powl(pTwoReal, 2) + powl(pTwoImag, 2)) << "i" << "\n";
    }

	system("pause");

	return 0;
}

