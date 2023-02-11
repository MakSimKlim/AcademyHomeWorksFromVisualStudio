//Задание №4
// 
// ДЗ №16 (08_02) Климов (задачи с одномерн массив)
//
//В одномерном массиве, состоящем из N вещественных
//чисел вычислить :
//■■ Сумму отрицательных элементов.++
//■■ Произведение элементов, находящихся между min и max ++
//элементами.
//■■ Произведение элементов с четными номерами. ++
//■■ Сумму элементов, находящихся между первым и послед - ++
//ним отрицательными элементами.

#include <iostream>
#include <time.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));

	int arrSize = 1;//начальный размер массива
	int array[100];//ограичение массива
	int summContain = 0, summContain2 = 0, proizvContain1 = 1, proizvContain2 = 1;//"контейнеры для суммы и произведения"
	int max = 0, min = 0;//переменная для максимума и минимума
	int maxIndex = 0, minIndex = 0;
	int first = 0, last = 0;//первый и последний отрицательные элементы

	cout << "\n ******************************************************************" << "\n";
	cout << " *           Программа задач с одномерным массивом V1.0           *" << "\n";
	cout << " ******************************************************************" << "\n\n";

	cout << "Задайте размер одномерного массива: \n";
	cin >> arrSize;

	for (int i = 0; i < arrSize; i++)//заполнение массива
	{
		array[i] = -10 + rand() % 30;
		cout << array[i] << " ";
		if (array[i] < 0) summContain += array[i];//подсчет суммы отрицательных значений
		if (array[i] % 2 == 0) proizvContain1 *= array[i];//подсчет произведения четных значений
	}

	max = array[0];
	min = array[0];

	for (int j = 0; j < arrSize; j++)
	{
		if (max <= array[j]) max = array[j], maxIndex = j;//поиск максимума в массиве и его место в массиве
		if (min >= array[j]) min = array[j], minIndex = j;//поиск минимума в массиве и его место в массиве

	}
	for (int k = 0; k < arrSize; k++)
	{
		if (array[k] < 0)
		{
			first = k;
			break;//поиск первого отрицательного элемента
		}
	}


	for (int l = arrSize - 1; l >= 0; l--)
	{
		if (array[l] < 0)
		{
			last = l;
			break;//поиск последнего отрицательного элемента
		}
	}

	for (int m = first + 1; m < last; m++)
	{
		summContain2 += array[m];//сумма между 1 и последним отрицательными элементами
	}


	cout << "\n";
	cout << "Сумма отрицательных элементов равна: " << summContain << "\n\n";
	cout << "MAX значение = " << max << ", MIN значение = " << min << "\n\n";
	cout << "элемент с MAX значением № " << maxIndex << " , элемент с MIN значением № " << minIndex << "\n\n";
	cout << "Произведение элементов с четными номерами: " << proizvContain1 << "\n\n";
	cout << "Сумма элементов между первым и последним отриц. элементами: " << summContain2 << "\n\n";


	if (maxIndex < minIndex) swap(maxIndex, minIndex);//функция смены местами значений индексов для расчета цикла

	for (int k = minIndex + 1; k < maxIndex; k++)
	{
		proizvContain2 *= array[k];
	}

	cout << "\n";
	cout << "Произведение элементов между MIN и MAX элементами равно: " << proizvContain2 << "\n\n";

	cout << "\n";

	system("pause");
	return 0;
}

