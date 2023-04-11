//Задание #1
//
//ДЗ #6 Климов (Пиццерия).
//
// Написать программу, реализующую процедуры заказа и
//расчета его суммы в мини — пиццерии.В меню пиццерии
//предусмотрено 4 вида пиццы и три вида напитков.
//Пользователю выводится меню(вначале пиццы, потом
//напитки), содержащее код и название.Пользователь вводит
//код желаемого продукта, после чего вводит количество единиц
//данного продукта.
//  В пиццерии предусмотрены два вида скидок :
//■■если общая сумма заказа более 1500р, то размер скидки со -
//ставляет 20 % от суммы заказа;
//■■каждая пятая пицца — в подарок;
//■■для напитков с ценой более 50р, если количество в зака -
//зе более трех, то скидка 15 % (только на напитки, а не на
//весь заказ).
//Вывести пользователю «чек» для оплаты в виде : название —
//количество — цена.Итого к оплате.

#include <iostream>

using namespace std;

int main()
{

    setlocale(LC_ALL, "Rus");

    int pizzaId = 0, drinkId = 0, countPizza = 0, countDrink = 0;


    float pizzaFourCheez = 500, pizzaBekon = 400, pizzaPepperoni = 300, pizzaMargarita = 200;

    float orangeJuce = 100, limeJuse = 200, tea = 50;

    float sumOrder = 0, sumPizza = 0, sumDrink = 0;

    cout << "**********Пиццерия 'У Макса'*********" << endl;

    cout << "=====================================" << endl;
    cout << "\nВыберите пиццу (укажите номер): " << endl;
    cout << "1 - Четыре сыра - 500" << endl;
    cout << "2 - Бекон - 400" << endl;
    cout << "3 - Пепперони - 300" << endl;
    cout << "4 - Маргарита - 200" << endl << endl;
    cin >> pizzaId;

    cout << "\nВведите количество заказанных пицц: " << endl << endl;
    cin >> countPizza;

    cout << "\nВыберите напиток (укажите номер): " << endl;
    cout << "1 - Апельсиновый сок - 100" << endl;
    cout << "2 - Лаймовый сок - 200" << endl;
    cout << "3 - Чай (ассортимент) - 50" << endl << endl;
    cin >> drinkId;

    cout << "\nВведите количество напитков: " << endl << endl;
    cin >> countDrink;

    cout << "\n************** Чек для оплаты ***********" << endl;
    cout << "Ваш заказ:" << endl;
    switch (pizzaId)
    {
    case 1:
        cout << "Пицца: " << "Четыре сыра - " << pizzaFourCheez << " руб/шт " << " = " << countPizza << " шт" << endl;
        break;
    case 2:
        cout << "Пицца: " << "Бекон - " << pizzaBekon << " руб/шт " << " = " << countPizza << " шт" << endl;
        break; 
    case 3:
        cout << "Пицца: " << "Пепперони - " << pizzaPepperoni << " руб/шт " << " = " << countPizza << " шт" << endl;
        break;
    case 4:
        cout << "Пицца: " << "Маргарита - " << pizzaMargarita << " руб/шт " << " = " << countPizza << " шт" << endl;
        break;
    default:
        cout << "\nНекорректный ввод данных" << endl << endl;
        break;
    }
    switch (drinkId)
    {
    case 1:
        cout << "Напиток: " << "Апельсиновый сок - " << orangeJuce << " руб/шт " << " = " << countDrink << " шт" << endl;
        break;
    case 2:
        cout << "Напиток: " << "Лаймовый сок - " << limeJuse << " руб/шт " << " = " << countDrink << " шт" << endl;
        break;
    case 3:
        cout << "Напиток: " << "Чай (ассортимент) - " << tea << " руб/шт " << " = " << countDrink << " шт" << endl;
        break;
    default:
        cout << "\nНекорректный ввод данных" << endl << endl;
        break;
    }

    cout << "\n---------------------------------------" << endl;

    switch (pizzaId)
    {
    case 1:
        if (countPizza > 4)
        {
            sumPizza = pizzaFourCheez * (countPizza - (countPizza / 5));
            cout << "\nАКЦИЯ!!!Каждая 5 пицца в подарок" << endl;
        }
        else
        {
            sumPizza = pizzaFourCheez * countPizza;
        }
        break;
    case 2:
        if (countPizza > 4)
        {
            sumPizza = pizzaBekon * (countPizza - (countPizza / 5));
            cout << "\nАКЦИЯ!!!Каждая 5 пицца в подарок" << endl;
        }
        else
        {
            sumPizza = pizzaBekon * countPizza;
        }
        break;
    case 3:
        if (countPizza > 4)
        {
            sumPizza = pizzaPepperoni * (countPizza - (countPizza / 5));
            cout << "\nАКЦИЯ!!!Каждая 5 пицца в подарок" << endl;
        }
        else
        {
            sumPizza = pizzaPepperoni * countPizza;
        }
        break;
    case 4:
        if (countPizza > 4)
        {
            sumPizza = pizzaMargarita * (countPizza - (countPizza / 5));
            cout << "\nАКЦИЯ!!!Каждая 5 пицца в подарок" << endl;
        }
        else
        {
            sumPizza = pizzaMargarita * countPizza;
        }
        break;
    default:
        cout << "\nТакой пиццы у нас нет" << endl << endl;
        break;
    }

     switch (drinkId)
     {
     case 1:
         if (countDrink > 3)
         {
             sumDrink = orangeJuce * countDrink * 0.85;
             cout << "Скидка на напитки составляет 15%" << endl;
         }
         else
         {
             sumDrink = orangeJuce * countDrink;
         }         
         break;
     case 2:
         if (countDrink > 3)
         {
             sumDrink = limeJuse * countDrink * 0.85;
             cout << "Скидка на напитки составляет 15%" << endl;
         }
         else
         {
             sumDrink = limeJuse * countDrink;
         }        
         break;
     case 3:
         sumDrink = tea * countDrink;
         break;
     default:
         cout << "Такого напитка у нас нет" << endl;
         break;
     }
          
    sumOrder = sumPizza + sumDrink;
     
     if (sumOrder >= 1500)
     {
         cout << "Дополнительная скидка на весь заказ 20%" << endl;
         cout << "\nИтого к оплате: " << sumOrder * 0.8 << " руб" << endl << endl;
     }
     else
     {
         cout << "\nИтого к оплате: " << sumOrder << " руб" << endl << endl;
     } 


     system("pause");

     return 0;

}
