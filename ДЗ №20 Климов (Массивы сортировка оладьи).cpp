// Задание #3
// 
// ДЗ №20 Климов (Массивы сортировка оладьи)
//
//Есть стопка оладий различного радиуса.Единственная
//операция, проводимая с ними — между любыми двумя суем
//лопатку и меняем порядок оладий над лопаткой на обратный.
//Необходимо за минимальное количество операций таких
//отсортировать снизу вверх по убыванию радиуса.

#include <iostream>
#include <time.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));


	cout << "\n ****************************************************" << endl;
	cout << " *          Программа сортировки оладий v1.0        *" << endl;
	cout << " ****************************************************" << endl;

        int pancakeArray[] = { 10,5,7,4,6,1,3,9,2,8 };
        int arSize = 10;
        int buff;
        int max;
        int maxArrayElement;

        cout << "Начальная стопка оладий: \n";
        //выводим исходный массив
        for (int i = 0; i < arSize; i++)
        {
            cout << pancakeArray[i] << " ";
        }
        //начинаем сортировку
        for (int j = arSize - 1; j >= 0; j--)
        {
            max = pancakeArray[j];
            maxArrayElement = j;
            //ищем макс эелемент
            for (int k = j; k >= 0; k--)
            {
                if (pancakeArray[k] > max)
                {
                    max = pancakeArray[k];
                    maxArrayElement = k;
                }
            }
            //переворачиваем часть массива, чтобы макс оказался сверху
            for (int l = 0; l <= maxArrayElement / 2; l++)
            {
                //является ли верхний эелемент максимальным
                if (maxArrayElement == 0)
                {
                    break;
                }
                buff = pancakeArray[l];
                pancakeArray[l] = pancakeArray[maxArrayElement - l];
                pancakeArray[maxArrayElement - l] = buff;
            }
            //переворачиваем опять, чтобы макс оказался внизу стопки
            for (int m = 0; m <= j / 2; m++)
            {
                buff = pancakeArray[m];
                pancakeArray[m] = pancakeArray[j - m];
                pancakeArray[j - m] = buff;
            }
        }

        cout << "\n" << "Конечный вид стопки оладий: \n";
        //выводим отсортированный массив
        for (int x = 0; x < arSize; x++)
        {
            cout << pancakeArray[x] << " ";
        }
    

	system("pause");

	return 0;
}
