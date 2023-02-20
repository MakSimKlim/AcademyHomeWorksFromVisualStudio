// Задание #1
// 
// ДЗ №23 Климов
//
//Написать функцию, которая принимает два
//параметра: основание степени и показатель степени, и
//вычисляет степень числа на основе полученных данных.

#include <iostream>
#include <time.h>
#include <cmath>                                    //библиотека для pow

using namespace std;

int Degree(int number, int degree)                  //функция возведения числа в степень
{
	int res = pow(number, degree);
	return res;
}



int main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));


	cout << "\n ********************************************************************" << endl;
	cout << " *         Программа расчета степени числа через функцию v1.0       *" << endl;
	cout << " ********************************************************************" << endl;
	
	int numberBas = 0, numberDeg = 0 , resultat = 0;

	cout << "Введите число основания: " << "\n";
	cin >> numberBas;
	cout << "\n";

	cout << "Введите число степени: " << "\n";
	cin >> numberDeg;
	cout << "\n";

	resultat = Degree(numberBas, numberDeg);
	cout << "Ответ: " << resultat<<"\n\n";


	cout << "Проверка работоспособности написанной функции:" << "\n\n";

	cout << "Введите другое число основания: " << "\n";
	cin >> numberBas;
	cout << "\n";

	cout << "Введите другое число степени: " << "\n";
	cin >> numberDeg;
	cout << "\n";

	resultat = Degree(numberBas, numberDeg);
	cout << "Ответ: " << resultat << "\n\n";

	cout << "Функция работает!!!" << "\n\n";

	system("pause");

	return 0;
}
