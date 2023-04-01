#pragma once
#ifdef INTEGER //ïðîâåðêà îïðåäåëåíà ëè êîíñòàíòà, óêàçû­âàþùàÿ íà òèï äàííûõ
#define writeArray writeArrayINTEGER
#define showArray showArrayINTEGER
#define minArrayElement minArrayElementINTEGER
#define maxArrayElement maxArrayElementINTEGER
#define sortArrayElementMax sortArrayElementMaxINTEGER
#define sortArrayElementMin sortArrayElementMinINTEGER
#define reductArray reductArrayINTEGER
#endif
#ifdef DOUBLE//ïðîâåðêà îïðåäåëåíà ëè êîíñòàíòà, óêàçû­âàþùàÿ íà òèï äàííûõ
#define writeArray writeArrayDOUBLE
#define showArray showArrayDOUBLE
#define minArrayElement minArrayElementDOUBLE
#define maxArrayElement maxArrayElementDOUBLE
#define sortArrayElementMax sortArrayElementMaxDOUBLE
#define sortArrayElementMin sortArrayElementMinDOUBLE
#define reductArray reductArrayDOUBLE
#endif
#ifdef CHAR//ïðîâåðêà îïðåäåëåíà ëè êîíñòàíòà, óêàçû­âàþùàÿ íà òèï äàííûõ
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
#include <stdlib.h>//äëÿ ðàíäîìàéçåðà

using namespace std;
setlocale(LC_ALL, "Rus");

//ïðîòîòèïû ôóíêöèé ñ öåëî÷èñëåííûìè ïåðåìåííûìè
void writeArrayINTEGER(int* arr, int size);//ïðîòîòèï ôóíêöèè äëÿ çàïîëíåíèÿ ìàññèâà ñëó÷àéíûìè çíà­÷åíèÿìè
void showArrayINTEGER(int* arr, int size);//ïðîòîòèï ôóíêöèè äëÿ âûâîäà â êîíñîëü ìàññèâà ñ ñëó÷àéíûìè çíà­÷åíèÿìè
void minArrayElementINTEGER(int* arr, int size);// ïðîòîòèï ôóíêöèè äëÿ ïîèñêà ìèíèìàëüíîãî ýëåìåíòà
void maxArrayElementINTEGER(int* arr, int size);// ïðîòîòèï ôóíêöèè äëÿ ïîèñêà ìàêñèìàëüíîãî ýëåìåíòà
void sortArrayElementMaxINTEGER(int* arr, int size);// ïðîòîòèï ôóíêöèè äëÿ ñîðòèðîâêè îò ìàêñèìàëüíîãî ýëåìåíòà
void sortArrayElementMinINTEGER(int* arr, int size);// ïðîòîòèï ôóíêöèè äëÿ ñîðòèðîâêè îò ìèíèìàëüíîãî ýëåìåíòà
void reductArrayINTEGER(int* arr, int size);// ïðîòîòèï ôóíêöèè äëÿ ðåäàêòèðîâàíèÿ çíà÷åíèÿ ìàññèâà.

//ïðîòîòèïû ôóíêöèé ñ ïåðåìåííûìè ñ ïëàâàþùåé çàïÿòîé
void writeArrayDOUBLE(double* arr, int size);//ïðîòîòèï ôóíêöèè äëÿ çàïîëíåíèÿ ìàññèâà ñëó÷àéíûìè çíà­÷åíèÿìè
void showArrayDOUBLE(double* arr, int size);//ïðîòîòèï ôóíêöèè äëÿ âûâîäà â êîíñîëü ìàññèâà ñ ñëó÷àéíûìè çíà­÷åíèÿìè
void minArrayElementDOUBLE(double* arr, int size);// ïðîòîòèï ôóíêöèè äëÿ ïîèñêà ìèíèìàëüíîãî ýëåìåíòà
void maxArrayElementDOUBLE(double* arr, int size);// ïðîòîòèï ôóíêöèè äëÿ ïîèñêà ìàêñèìàëüíîãî ýëåìåíòà
void sortArrayElementMaxDOUBLE(double* arr, int size);// ïðîòîòèï ôóíêöèè äëÿ ñîðòèðîâêè îò ìàêñèìàëüíîãî ýëåìåíòà
void sortArrayElementMinDOUBLE(double* arr, int size);// ïðîòîòèï ôóíêöèè äëÿ ñîðòèðîâêè îò ìèíèìàëüíîãî ýëåìåíòà
void reductArrayDOUBLE(double* arr, int size);// ïðîòîòèï ôóíêöèè äëÿ ðåäàêòèðîâàíèÿ çíà÷åíèÿ ìàññèâà.

//ïðîòîòèïû ôóíêöèé ñî ñòðîêîâûìè ïåðåìåííûìè
void writeArrayCHAR(char* arr, int size);//ïðîòîòèï ôóíêöèè äëÿ çàïîëíåíèÿ ìàññèâà ñëó÷àéíûìè çíà­÷åíèÿìè
void showArrayCHAR(char* arr, int size);//ïðîòîòèï ôóíêöèè äëÿ âûâîäà â êîíñîëü ìàññèâà ñ ñëó÷àéíûìè çíà­÷åíèÿìè
void minArrayElementCHAR(char* arr, int size);// ïðîòîòèï ôóíêöèè äëÿ ïîèñêà ìèíèìàëüíîãî ýëåìåíòà
void maxArrayElementCHAR(char* arr, int size);// ïðîòîòèï ôóíêöèè äëÿ ïîèñêà ìàêñèìàëüíîãî ýëåìåíòà
void sortArrayElementMaxCHAR(char* arr, int size);// ïðîòîòèï ôóíêöèè äëÿ ñîðòèðîâêè îò ìàêñèìàëüíîãî ýëåìåíòà
void sortArrayElementMinCHAR(char* arr, int size);// ïðîòîòèï ôóíêöèè äëÿ ñîðòèðîâêè îò ìèíèìàëüíîãî ýëåìåíòà
void reductArrayCHAR(char* arr, int size);// ïðîòîòèï ôóíêöèè äëÿ ðåäàêòèðîâàíèÿ çíà÷åíèÿ ìàññèâà.
