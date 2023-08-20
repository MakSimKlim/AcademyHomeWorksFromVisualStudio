// ДЗ №67_68 Классы (срок 27.04.23) (Человек)
//
// Создать класс Человек.
// Поля:
//■ идентификационный номер;
//■ фамилия;
//■ имя;
//■ отчество(для фамилии, имени и отчества память выделять динамически!);
//■ дата рождения(рекомендуется создать дополнительный класс Дата(день, месяц, год);
// Функции - члены:
//■ конструктор с  параметрами идентификационный номер, фамилия, имя, отчество, дата рождения.
//  В конструкторе использовать список инициализаторов полей класса;
//■ конструктор по умолчанию.В конструкторе использовать делегирование конструктора;
//■ конструктор копирования;
//■ деструктор;
//■ функцию - член для подсчета созданных экземпляров класса «Человек»;
//■ сеттеры / геттеры для соответствующих полей класса;
//■ вывод на экран информации о человеке
//
//

#include <iostream>
#include <cstring>

using namespace std;

class Date {
public:
    Date(int day, int month, int year)
        : day(day), month(month), year(year) {}

    void print() const {
        std::cout << day << "." << month << "." << year;
    }

private:
    int day, month, year;
};

class Person {
public:
    // Конструктор с параметрами
    Person(int id, const char* lastName, const char* firstName, const char* middleName, const Date& birthDate)
        : id(id), birthDate(birthDate) {
        this->lastName = new char[strlen(lastName) + 1];
        strcpy_s(this->lastName, strlen(lastName) + 1, lastName);

        this->firstName = new char[strlen(firstName) + 1];
        strcpy_s(this->firstName, strlen(firstName) + 1, firstName);

        this->middleName = new char[strlen(middleName) + 1];
        strcpy_s(this->middleName, strlen(middleName) + 1, middleName);

        personCount++; // Увеличение счетчика
    }

    // Конструктор по умолчанию
    Person() : Person(0, "", "", "", Date(0, 0, 0)) {}

    // Конструктор копирования
    Person(const Person& other)
        : id(other.id), birthDate(other.birthDate) {
        lastName = new char[strlen(other.lastName) + 1];
        strcpy_s(lastName, strlen(other.lastName) + 1, other.lastName);

        firstName = new char[strlen(other.firstName) + 1];
        strcpy_s(firstName, strlen(other.firstName) + 1, other.firstName);

        middleName = new char[strlen(other.middleName) + 1];
        strcpy_s(middleName, strlen(other.middleName) + 1, other.middleName);

        personCount++; // Увеличение счетчика
    }

    // Деструктор
    ~Person() {
        delete[] lastName;
        delete[] firstName;
        delete[] middleName;
        personCount--; // Уменьшение счетчика
    }

    // Функция-член для подсчета созданных экземпляров класса
    static int getPersonCount() {
        return personCount;
    }

    // Геттеры/сеттеры для полей
    void setLastName(const char* lastName) {
        delete[] this->lastName;
        this->lastName = new char[strlen(lastName) + 1];
        strcpy_s(this->lastName, strlen(lastName) + 1, lastName);
    }

    const char* getLastName() const {
        return lastName;
    }

    void setFirstName(const char* firstName) {
        delete[] this->firstName;
        this->firstName = new char[strlen(firstName) + 1];
        strcpy_s(this->firstName, strlen(firstName) + 1, firstName);
    }

    const char* getFirstName() const {
        return firstName;
    }

    void setMiddleName(const char* middleName) {
        delete[] this->middleName;
        this->middleName = new char[strlen(middleName) + 1];
        strcpy_s(this->middleName, strlen(middleName) + 1, middleName);
    }

    const char* getMiddleName() const {
        return middleName;
    }

    void setBirthDate(const Date& birthDate) {
        this->birthDate = birthDate;
    }

    const Date& getBirthDate() const {
        return birthDate;
    }

    // Вывод на экран информации о человеке
    void print() const {
        cout << "ID: " << id << endl;
        cout << "Фамилия: " << lastName << endl;
        cout << "Имя: " << firstName << endl;
        cout << "Отчество: " << middleName << endl;
        cout << "Дата рождения: ";
        birthDate.print();
        cout << endl;
    }

private:
    int id;
    char* lastName;
    char* firstName;
    char* middleName;
    Date birthDate;

    static int personCount; // Статическая переменная для подсчета созданных экземпляров
};

int Person::personCount = 0; // Инициализация статической переменной

int main() 
{
    setlocale(LC_ALL, "Rus");
    Date birthDate(1, 8, 1990);

    Person person1(1, "Иванов", "Петр", "Александрович", birthDate);
    person1.print();

    Person person2(person1);
    person2.setFirstName("Андрей");
    person2.print();

    cout << "Счетчик количества человек: " << Person::getPersonCount() << endl;

    return 0;
}