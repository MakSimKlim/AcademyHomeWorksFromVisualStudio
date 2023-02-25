// Задание #4
//   
// ДЗ №24 Климов (функция игральная карта)
//
//Написать функцию, выводящую на экран
//переданную ей игральную карту

#include <iostream>
#include <string>

using namespace std;

string ChoicePlayingCard(int rank, int suit)
{
	string arrRank[9] = { "6 ","7 ","8 ","9 ","10 ","J ","Q ","K ","A " };
	string arrSuit[4] = { "червы", "бубны", "пики", "трефы" };
	string arrR = arrRank[rank];
	string arrS = arrSuit[suit];
	string playCard = arrR + arrS;
	cout <<"Выбранная карта: " << arrR << arrS << "\n";

	return playCard;
}

int main()
{
	setlocale(LC_ALL, "Rus");

	cout << "\n ********************************************************************************" << endl;
	cout << " *              Программа вывода на экран выбранной игральной карты v1.0        *" << endl;
	cout << " ********************************************************************************" << endl;

	int rankCard = 0, suitCard = 0;
	string playingCard;

	cout << R"(введите ранг игральной карты:
          0 - 6,
          1 - 7,
          2 - 8,
          3 - 9,
          4 - 10,
          5 - J,
          6 - Q,
          7 - K,
          8 - A
		)" << "\n";
	cin >> rankCard;

	cout << R"(введите масть игральной карты:
          0 - червы,
          1 - бубны,
          2 - пики,
          3 - трефы
        )" << "\n";
	cin >> suitCard;
	cout << "\n";

	playingCard = ChoicePlayingCard(rankCard, suitCard);

	system("pause");

	return 0;

}