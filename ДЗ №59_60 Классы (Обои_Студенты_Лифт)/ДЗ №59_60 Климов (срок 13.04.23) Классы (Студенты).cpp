// ДЗ №59_60 Климов (срок 13.04.23) Классы 03
//
//Написать программу «Группа студентов». 
// 
//Программа получает следующие данные :
//▷список студентов группы,
//▷список предметов для группы,
//▷таблицу оценок студентов группы по  всем предметам.
// 
//Данные вводятся из соответствующих файлов. Имена файлов запрашивает программа.
// 
//Программа выводитследующие данные :
//▷таблицу оценок студентов по предметам,
//▷средние оценки студентов,
//▷средние оценки по предметам,
//▷средний балл группы,
//▷максимальные и минимальные оценки по предметам с указанием студентов.
// 
//Разработать и использовать в программе классы :
//«Группа», «Студент», «Предмет».
//Атрибуты группы : название, список студентов, список предметов.
//Атрибуты студента : имя, список оценок.
//Атрибуты предмета : название.
#include <iostream>
#include <fstream>
#include <string>
#include <Windows.h>

using namespace std;

class Group
{
public:
    Group() // конструктор по умолчанию, нужен всегда
    {}

    Group(string nameGroup1, string listStudent1, string listSubjects1) // конструктор
    {
        nameGroup = nameGroup1;
        listStudent = listStudent1;
        listSubjects = listSubjects1;
    }

    void writeToFile(ofstream& output) // метод записи в файл
    {
        output << "Название группы: " << nameGroup << endl;
        output << "Список студентов: " << listStudent << endl;
        output << "Список предметов: " << listSubjects << endl;
    }

private:
    string nameGroup;
    string listStudent;
    string listSubjects;
};

class Student
{
public:
    Student(string nameStudent1, string listMark1)
    {
        nameStudent = nameStudent1;
        listMark = listMark1;
    }

    void writeToFile(ofstream& output) // метод записи в файл
    {
        output << "Имя студента: " << nameStudent << endl;
        output << "Список оценок: " << listMark << endl;
    }

private:
    string nameStudent;
    string listMark;
};

class Subject
{
public:
    Subject(string nameSubject1)
    {
        nameSubject = nameSubject1;
    }

    void writeToFile(ofstream& output) // метод записи в файл
    {
        output << "Название предмета: " << nameSubject << endl;
    }

private:
    string nameSubject;
};

int main()
{
    setlocale(LC_ALL, "Rus");
    SetConsoleCP(1251); // устанавливаем кодировку Windows-1251
    SetConsoleOutputCP(1251);

    ofstream output("Данные о группах студентов.txt");
    if (!output)
    {
        cerr << "Файл не создан" << endl;
        return 1;
    }

    // Создаем объекты классов
    Group group("Группа 155", "Иванов, Петров", "Математика, Программирование");
    Student student1("Иванов", "5, 4, 5");
    Subject subject1("Математика");
    Subject subject2("Программирование");
    Student student2("Петров", "4, 4, 3");

    // Записываем данные в файл
    group.writeToFile(output);

    student1.writeToFile(output);
    subject1.writeToFile(output);
    subject2.writeToFile(output);

    student2.writeToFile(output);
    subject1.writeToFile(output);
    subject2.writeToFile(output);

    output.close();
    return 0;
}