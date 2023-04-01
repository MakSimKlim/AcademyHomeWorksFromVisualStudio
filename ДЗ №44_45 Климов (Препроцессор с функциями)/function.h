#pragma once
#ifdef INTEGER //проверка определена ли константа, указы­вающая на тип данных
#define writeArray writeArrayINTEGER
#define showArray showArrayINTEGER
#define minArrayElement minArrayElementINTEGER
#define maxArrayElement maxArrayElementINTEGER
#define sortArrayElementMax sortArrayElementMaxINTEGER
#define sortArrayElementMin sortArrayElementMinINTEGER
#define reductArray reductArrayINTEGER
#endif
#ifdef DOUBLE//проверка определена ли константа, указы­вающая на тип данных
#define writeArray writeArrayDOUBLE
#define showArray showArrayDOUBLE
#define minArrayElement minArrayElementDOUBLE
#define maxArrayElement maxArrayElementDOUBLE
#define sortArrayElementMax sortArrayElementMaxDOUBLE
#define sortArrayElementMin sortArrayElementMinDOUBLE
#define reductArray reductArrayDOUBLE
#endif
#ifdef CHAR//проверка определена ли константа, указы­вающая на тип данных
#define writeArray writeArrayCHAR
#define showArray showArrayCHAR
#define minArrayElement minArrayElementCHAR
#define maxArrayElement maxArrayElementCHAR
#define sortArrayElementMax sortArrayElementMaxCHAR
#define sortArrayElementMin sortArrayElementMinCHAR
#define reductArray reductArrayCHAR
#endif

#include <iostream>
#include <string>
#include <stdlib.h>//для рандомайзера

using namespace std;

//прототипы функций с целочисленными переменными
void writeArrayINTEGER(int* arr, int size);//прототип функции для заполнения массива случайными зна­чениями
void showArrayINTEGER(int* arr, int size);//прототип функции для вывода в консоль массива с случайными зна­чениями
void minArrayElementINTEGER(int* arr, int size);// прототип функции для поиска минимального элемента
void maxArrayElementINTEGER(int* arr, int size);// прототип функции для поиска максимального элемента
void sortArrayElementMaxINTEGER(int* arr, int size);// прототип функции для сортировки от максимального элемента
void sortArrayElementMinINTEGER(int* arr, int size);// прототип функции для сортировки от минимального элемента
void reductArrayINTEGER(int* arr, int size);// прототип функции для редактирования значения массива.

//прототипы функций с переменными с плавающей запятой
void writeArrayDOUBLE(double* arr, int size);//прототип функции для заполнения массива случайными зна­чениями
void showArrayDOUBLE(double* arr, int size);//прототип функции для вывода в консоль массива с случайными зна­чениями
void minArrayElementDOUBLE(double* arr, int size);// прототип функции для поиска минимального элемента
void maxArrayElementDOUBLE(double* arr, int size);// прототип функции для поиска максимального элемента
void sortArrayElementMaxDOUBLE(double* arr, int size);// прототип функции для сортировки от максимального элемента
void sortArrayElementMinDOUBLE(double* arr, int size);// прототип функции для сортировки от минимального элемента
void reductArrayDOUBLE(double* arr, int size);// прототип функции для редактирования значения массива.

//прототипы функций со строковыми переменными
void writeArrayCHAR(char* arr, int size);//прототип функции для заполнения массива случайными зна­чениями
void showArrayCHAR(char* arr, int size);//прототип функции для вывода в консоль массива с случайными зна­чениями
void minArrayElementCHAR(char* arr, int size);// прототип функции для поиска минимального элемента
void maxArrayElementCHAR(char* arr, int size);// прототип функции для поиска максимального элемента
void sortArrayElementMaxCHAR(char* arr, int size);// прототип функции для сортировки от максимального элемента
void sortArrayElementMinCHAR(char* arr, int size);// прототип функции для сортировки от минимального элемента
void reductArrayCHAR(char* arr, int size);// прототип функции для редактирования значения массива.
