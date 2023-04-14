// Задание №1
//
// ДЗ №57_58 Климов (срок 10.04.23) ООП_01.cpp 
//
// Тема: Введение в объектно-ориентированное программирование.
// Задание.
// Реализуйте класс Дробь.Необходимо хранить числитель
// и знаменатель в качестве переменных - членов.Реализуйте
// функции - члены для ввода данных в переменные - члены,
// для выполнения арифметических операций(сложение,
//	вычитание, умножение, деление, и т.д.).

#include <iostream>

using namespace std;

class Fraction             //класс Дробь
{
public:
	// свойства класса
	double numerator1 = 0;    // числитель 1
	double denomerator1 = 0;  // знаменатель 1
	double numerator2 = 0;    // числитель 2
	double denomerator2 = 0;  // знаменатель 2

	

	//методы класса
	void EnterFunction()
	{
		cout << "Введите 1 число 'ЧИСЛИТЕЛЬ': " << "\n";
		cin >> numerator1;
		cout << "\n";

		cout << "Введите 1 число 'ЗНАМЕНАТЕЛЬ': " << "\n";
		cin >> denomerator1;
		cout << "\n";

		cout << "Введите 2 число 'ЧИСЛИТЕЛЬ': " << "\n";
		cin >> numerator2;
		cout << "\n";

		cout << "Введите 2 число 'ЗНАМЕНАТЕЛЬ': " << "\n";
		cin >> denomerator2;
		cout << "\n";

		cout << "Полученная обыкновенная 1 дробь имеет вид: " << numerator1 << " / " << denomerator1 << "\n";
		cout << "Она же в виде десятичной дроби: " << numerator1 / denomerator1 << "\n";
		cout << "\n";

		cout << "Полученная обыкновенная 2 дробь имеет вид: " << numerator2 << " / " << denomerator2 << "\n";
		cout << "Она же в виде десятичной дроби: " << numerator2 / denomerator2 << "\n";
		cout << "\n";

	}

	void SumFraction()//функция суммы дробей (Sum)
	{
		double sum = 0;
		sum = (numerator1 * denomerator2 + denomerator1 * numerator2) / (denomerator1 * denomerator2);
		cout <<"Сумма дробей в виде десятичной дроби равна: " << sum << "\n";

		if ((numerator1 * denomerator2 + denomerator1 * numerator2) > (denomerator1 * denomerator2))
		{
			int del = floor((numerator1 * denomerator2 + denomerator1 * numerator2) / (denomerator1 * denomerator2));
			int ost = (numerator1 * denomerator2 + denomerator1 * numerator2) - (del * denomerator1 * denomerator2);
			cout << "Сумма дробей в виде обыкновенной дроби равна: " << del << "(" << ost <<"/"<< (denomerator1 * denomerator2) << ")\n";
		}
		else if ((numerator1 * denomerator2 + denomerator1 * numerator2) == (denomerator1 * denomerator2))
		{
			cout << "Сумма дробей в виде обыкновенной дроби равна: 1" << "\n";
		}
		else
		{
			cout << "Сумма дробей в виде обыкновенной дроби равна: " << (numerator1 * denomerator2 + denomerator1 * numerator2)<<"/" << (denomerator1 * denomerator2) << "\n";
		}
		cout << "\n";
	}

	void DiffFraction()//функция разности дробей (Difference)
	{
		double diff = 0;
		diff = (numerator1 * denomerator2 - denomerator1 * numerator2) / (denomerator1 * denomerator2);
		cout <<"Разность дробей в виде десятичной дроби равна: " << diff << "\n";

		if ((numerator1 * denomerator2 - denomerator1 * numerator2) > (denomerator1 * denomerator2))
		{
			int del = floor((numerator1 * denomerator2 - denomerator1 * numerator2) / (denomerator1 * denomerator2));
			int ost = (numerator1 * denomerator2 - denomerator1 * numerator2) - (del * denomerator1 * denomerator2);
			cout << "Разность дробей в виде обыкновенной дроби равна: " << del << "(" << ost << "/" << (denomerator1 * denomerator2) << ")\n";
		}
		else if ((numerator1 * denomerator2 - denomerator1 * numerator2) == (denomerator1 * denomerator2))
		{
			cout << "Разность дробей в виде обыкновенной дроби равна: 1" << "\n";
		}
		else
		{
			cout << "Разность дробей в виде обыкновенной дроби равна: " << (numerator1 * denomerator2 - denomerator1 * numerator2) << "/" << (denomerator1 * denomerator2) << "\n";
		}

		cout << "\n";
	}

	void ProdFraction()//функция произведения дробей (Product )
	{
		double prod = 0;
		prod = (numerator1 * numerator2) / (denomerator1 * denomerator2);
		cout << "Произведение дробей в виде десятичной дроби равно: " << prod << "\n";

		if ((numerator1 * numerator2) > (denomerator1 * denomerator2))
		{
			int del = floor((numerator1 * numerator2) / (denomerator1 * denomerator2));
			int ost = (numerator1 * numerator2) - (del * denomerator1 * denomerator2);
			cout << "Произведение дробей в виде обыкновенной дроби равна: " << del << "(" << ost << "/" << (denomerator1 * denomerator2) << ")\n";
		}
		else if ((numerator1 * numerator2) == (denomerator1 * denomerator2))
		{
			cout << "Произведение дробей в виде обыкновенной дроби равна: 1" << "\n";
		}
		else
		{
			cout << "Произведение дробей в виде обыкновенной дроби равна: " << (numerator1 * numerator2) << "/" << (denomerator1 * denomerator2) << "\n";
		}

		
		cout << "\n";
	}

	void QuotFraction()//функция частного дробей (Quotient  )
	{
		double quot = 0;
		quot = (numerator1 * denomerator2) / (denomerator1 * numerator2);
		cout << "Частное дробей в виде десятичной дроби равно: " << quot << "\n";

		if ((numerator1 * denomerator2) > (denomerator1 * numerator2))
		{
			int del = floor((numerator1 * denomerator2) / (denomerator1 * numerator2));
			int ost = (numerator1 * denomerator2) - (del * denomerator1 * numerator2);
			cout << "Частное дробей в виде обыкновенной дроби равна: " << del << "(" << ost << "/" << (denomerator1 * numerator2) << ")\n";
		}
		else if ((numerator1 * numerator2) == (denomerator1 * denomerator2))
		{
			cout << "Частное дробей в виде обыкновенной дроби равна: 1" << "\n";
		}
		else
		{
			cout << "Частное дробей в виде обыкновенной дроби равна: " << (numerator1 * denomerator2) << "/" << (denomerator1 * numerator2) << "\n";
		}

		
		cout << "\n";
	}



private:

};


int main()
{
	setlocale(LC_ALL, "Rus");

	cout << "**********************************************************************************************"<<"\n";
	cout << "*                      Программа выполнения действий над дробями в классах                   *" << "\n";
	cout << "**********************************************************************************************" << "\n";


	Fraction ObjFraction;          //объявляем объект класса один раз
	ObjFraction.EnterFunction();   //вызов метода функции
	ObjFraction.SumFraction();     //вызов метода функции
	ObjFraction.DiffFraction();    //вызов метода функции
	ObjFraction.ProdFraction();    //вызов метода функции
	ObjFraction.QuotFraction();     //вызов метода функции
	cout << "\n";

	system("pause");

	return 0;

}

