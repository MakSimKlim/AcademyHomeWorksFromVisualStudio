//Задание #2 
//
//ДЗ №12 Климов (кассовый аппарат)
//
//Написать имитацию кассового аппарата для
//магазина, торгующего новогодними товарами.Кассир
//должен выбрать товар из списка, ввести его количество,
//затем выбрать следующий товар.По завершению ввода
//вывести на экран всю сумму покупки.Предусмотреть
//наличие скидки.В списке товаров должно быть не меньше
//4 - х товаров, должна отображаться их цена.Предусмотреть
//неправильно вводимые данные.
//■■ Реализовать возможность обслуживания нескольких
//клиентов подряд;
//■■Хранение общей выручки магазина;
//■■Ограничить количество товара в магазине.

#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");

	cout << "*******************************************************\n";
	cout << "*           программа: Новогодняя касса v1.0           *\n";
	cout << "*******************************************************\n";

	int goodsId = 0;//номер товара
	int priceCar = 400, priceDoll = 600, priceToy = 100, priceTincel = 10;//цены на товары
	int quantity = 0;//количество покупаемого товара
	int restGoodsCar = 40, restGoodsDoll = 10, restGoodsToy = 150, restGoodsTincel = 500;//остатки товаров на складе
	int sumCar = 0, sumDoll = 0, sumToy = 0, sumTincel = 0;//стоимости каждой из покупок с учетом количества
	int revenue = 0;//выручка магазина
	int totalSum = 0;//общая сумма покупки
	int countСlient = 0;//количество клиентов подряд
	int yesNo = 0;//переменная да/нет

	cout << "Введите количество клиентов на кассе: \n";
	cin >> countСlient;
	
	while (countСlient<=0)
	{
		cout << "Введено некорректное количество клиентов. Попробуйте ещё раз!\n";
		cin >> countСlient;
		
	}
	
	while (countСlient > 0)
	{
		cout << "\nЕсть ли товары для оплаты?\n";
		cout << "да - 1\n";
		cout << "нет - любое значение\n";
		cin >> yesNo;
		while (yesNo == 1)
		{

			// Список из 4 х товаров (условие задачи)
			cout << "\nВыбрать номер товара из прайса: \n";
			cout << "__________________________________________________________________________\n";
			cout << "| №п/п |     Наименование     |  Цена  |  остаток товара в магазине, шт  |\n";
			cout << "--------------------------------------------------------------------------\n";
			cout << "|   1  | Игрушечная машинка   |  400р  |    " << restGoodsCar << "                           |" << "\n";
			cout << "|   2  | Кукла                |  600р  |    " << restGoodsDoll << "                           |" << "\n";
			cout << "|   3  | Ёлочная игрушка      |  100р  |    " << restGoodsToy << "                          |" << "\n";
			cout << "|   4  | Новогодняя мишура    |   10р  |    " << restGoodsTincel << "                          |" << "\n";
			cout << "--------------------------------------------------------------------------\n";



			cin >> goodsId;
			while (goodsId > 4 || goodsId < 1)
			{
				cout << "Неправильный ввод данных. Попробуйте ещё раз: \n";
				cin >> goodsId;
			}



			switch (goodsId)
			{
			case 1:
			{
				cout << "Выберите количество товара: \n";
				cin >> quantity;
				while (quantity > restGoodsCar || quantity < 0)
				{
					cout << "Выбрано некорректное количество товара. Попробуйте ещё раз \n";
					cin >> quantity;

				}
				
					sumCar = priceCar * quantity;//сумма покупки с машинками
					totalSum += sumCar;//стоимость покупки
					restGoodsCar -= quantity;//остатки товара после покупки
					//containSum += sumCar;//выручка магазина
					
					if (restGoodsCar==0)
					{
						cout << "\nТовар 'Игрушечная машинка' закончился\n";
					}
				

				break;

			}
			case 2:
			{
				cout << "Выберите количество товара: \n";
				cin >> quantity;
				while (quantity > restGoodsDoll || quantity < 0)
				{
					cout << "Выбрано некорректное количество товара. Попробуйте ещё раз \n";
					cin >> quantity;

				}

				sumDoll = priceDoll * quantity;//сумма покупки с машинками
				totalSum += sumDoll;//стоимость покупки
				restGoodsDoll -= quantity;//остатки товара после покупки
				//containSum += sumDoll;//выручка магазина

				if (restGoodsDoll == 0)
				{
					cout << "\nТовар 'Кукла' закончился\n";
				}


				break;

			}
			case 3:
			{
				cout << "Выберите количество товара: \n";
				cin >> quantity;
				while (quantity > restGoodsToy || quantity < 0)
				{
					cout << "Выбрано некорректное количество товара. Попробуйте ещё раз \n";
					cin >> quantity;

				}

				sumToy = priceToy * quantity;//сумма покупки с машинками
				totalSum += sumToy;//стоимость покупки
				restGoodsToy -= quantity;//остатки товара после покупки
				//containSum += sumToy;//выручка магазина

				if (restGoodsToy == 0)
				{
					cout << "\nТовар 'Ёлочная игрушка' закончился\n";
				}


				break;

			}
			case 4:
			{
				cout << "Выберите количество товара: \n";
				cin >> quantity;
				while (quantity > restGoodsTincel || quantity < 0)
				{
					cout << "Выбрано некорректное количество товара. Попробуйте ещё раз \n";
					cin >> quantity;

				}

				sumTincel = priceTincel * quantity;//сумма покупки с машинками
				totalSum += sumTincel;//стоимость покупки
				restGoodsTincel -= quantity;//остатки товара после покупки
				//containSum += sumTincel;//выручка магазина

				if (restGoodsTincel == 0)
				{
					cout << "\nТовар 'Новогодняя мишура' закончился\n";
				}


				break;

			}
			default:
				cout << "Такого товара нет в списке.\n";
				break;
			}
			cout << "\nЕсть ли товары для оплаты?\n";
			cout << "да - 1\n";
			cout << "нет - любое значение\n";
			cin >> yesNo;

			
		}

		//переход к следующему клиенту
		if (countСlient > 1)
		{
			if (totalSum > 1000 && totalSum < 2000)//скидка 5%
			{
				totalSum *= 0.95;
				revenue += totalSum;
				cout << "\nСумма покупки клиента со скидкой 5%  составила: " << totalSum << " руб.\n";
			}
			else if (totalSum > 2000)//скидка 10%
			{
				totalSum *= 0.9;
				revenue += totalSum;
				cout << "\nСумма покупки клиента со скидкой 10%  составила: " << totalSum << " руб.\n";
			}
			else
			{
				revenue += totalSum;
				cout << "\nСумма покупки клиента составила: " << totalSum << " руб.\n";
			}
			cout << "\nПереход к следующему клиенту: \n";
			countСlient--;
			totalSum -= totalSum;
			

		}
		else
		{
			if (totalSum > 1000 && totalSum < 2000)//скидка 5%
			{
				totalSum *= 0.95;
				revenue += totalSum;
				cout << "\nСумма покупки клиента со скидкой 5%  составила: " << totalSum << " руб.\n";
			}
			else if (totalSum > 2000)//скидка 10%
			{
				totalSum *= 0.9;
				revenue += totalSum;
				cout << "\nСумма покупки клиента со скидкой 10%  составила: " << totalSum << " руб.\n";
			}
			else
			{
				revenue += totalSum;
				cout << "\nСумма покупки клиента составила: " << totalSum << " руб.\n";
			}

			cout << "\nВыручка магазина составила: " << revenue << " руб.\n";
			countСlient--;
		}

		

	}
	cout << "\nВсе клиенты оформили свои покупки. Касса закрывается.\n\n";
	system("pause");

	return 0;

}
