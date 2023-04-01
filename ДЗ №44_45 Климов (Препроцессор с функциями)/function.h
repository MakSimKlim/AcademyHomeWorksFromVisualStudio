#pragma once
#ifdef INTEGER //�������� ���������� �� ���������, ������������ �� ��� ������
#define writeArray writeArrayINTEGER
#define showArray showArrayINTEGER
#define minArrayElement minArrayElementINTEGER
#define maxArrayElement maxArrayElementINTEGER
#define sortArrayElementMax sortArrayElementMaxINTEGER
#define sortArrayElementMin sortArrayElementMinINTEGER
#define reductArray reductArrayINTEGER
#endif
#ifdef DOUBLE//�������� ���������� �� ���������, ������������ �� ��� ������
#define writeArray writeArrayDOUBLE
#define showArray showArrayDOUBLE
#define minArrayElement minArrayElementDOUBLE
#define maxArrayElement maxArrayElementDOUBLE
#define sortArrayElementMax sortArrayElementMaxDOUBLE
#define sortArrayElementMin sortArrayElementMinDOUBLE
#define reductArray reductArrayDOUBLE
#endif
#ifdef CHAR//�������� ���������� �� ���������, ������������ �� ��� ������
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
#include <stdlib.h>//��� ������������

using namespace std;

//��������� ������� � �������������� �����������
void writeArrayINTEGER(int* arr, int size);//�������� ������� ��� ���������� ������� ���������� ����������
void showArrayINTEGER(int* arr, int size);//�������� ������� ��� ������ � ������� ������� � ���������� ����������
void minArrayElementINTEGER(int* arr, int size);// �������� ������� ��� ������ ������������ ��������
void maxArrayElementINTEGER(int* arr, int size);// �������� ������� ��� ������ ������������� ��������
void sortArrayElementMaxINTEGER(int* arr, int size);// �������� ������� ��� ���������� �� ������������� ��������
void sortArrayElementMinINTEGER(int* arr, int size);// �������� ������� ��� ���������� �� ������������ ��������
void reductArrayINTEGER(int* arr, int size);// �������� ������� ��� �������������� �������� �������.

//��������� ������� � ����������� � ��������� �������
void writeArrayDOUBLE(double* arr, int size);//�������� ������� ��� ���������� ������� ���������� ����������
void showArrayDOUBLE(double* arr, int size);//�������� ������� ��� ������ � ������� ������� � ���������� ����������
void minArrayElementDOUBLE(double* arr, int size);// �������� ������� ��� ������ ������������ ��������
void maxArrayElementDOUBLE(double* arr, int size);// �������� ������� ��� ������ ������������� ��������
void sortArrayElementMaxDOUBLE(double* arr, int size);// �������� ������� ��� ���������� �� ������������� ��������
void sortArrayElementMinDOUBLE(double* arr, int size);// �������� ������� ��� ���������� �� ������������ ��������
void reductArrayDOUBLE(double* arr, int size);// �������� ������� ��� �������������� �������� �������.

//��������� ������� �� ���������� �����������
void writeArrayCHAR(char* arr, int size);//�������� ������� ��� ���������� ������� ���������� ����������
void showArrayCHAR(char* arr, int size);//�������� ������� ��� ������ � ������� ������� � ���������� ����������
void minArrayElementCHAR(char* arr, int size);// �������� ������� ��� ������ ������������ ��������
void maxArrayElementCHAR(char* arr, int size);// �������� ������� ��� ������ ������������� ��������
void sortArrayElementMaxCHAR(char* arr, int size);// �������� ������� ��� ���������� �� ������������� ��������
void sortArrayElementMinCHAR(char* arr, int size);// �������� ������� ��� ���������� �� ������������ ��������
void reductArrayCHAR(char* arr, int size);// �������� ������� ��� �������������� �������� �������.
