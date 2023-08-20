// House
//
//Создайте программу, имитирующую многоквартирный дом.
//Необходимо иметь классы Человек, Квартира, Дом.
//Класс Квартира содержит динамический массив объектов класса Человек.
//Класс Дом содержит массив объектов класса Квартира.Каждый из классов содержит
//переменные - члены и функции - члены, которые необходимы для предметной области класса.
//Обращаем ваше внимание, что память под строковые значения
//выделяется динамически.Не забывайте обеспечить
//классы различными конструкторами(конструктор
//копирования обязателен), деструкторами


#include <iostream>
#include <string>

using namespace std;

    class Person {
    public:
        Person(const string& name, int age) : name(new string(name)), age(age) {}

        // Конструктор копирования
        Person(const Person& other) : name(new string(*other.name)), age(other.age) {}

        // Деструктор
        ~Person() {
            delete name;
        }

        void display() const {
            cout << "Имя: " << *name << ", Возраст: " << age << endl;
        }

    private:
        string* name;
        int age;
    };

    class Apartment {
    public:
        Apartment(int number, int maxOccupants) : number(number), maxOccupants(maxOccupants), occupantsCount(0) {
            occupants = new Person * [maxOccupants];
        }

        // Конструктор копирования
        Apartment(const Apartment& other) : number(other.number), maxOccupants(other.maxOccupants), occupantsCount(other.occupantsCount) {
            occupants = new Person * [maxOccupants];
            for (int i = 0; i < occupantsCount; ++i) {
                occupants[i] = new Person(*other.occupants[i]);
            }
        }

        void addPerson(const Person& person) {
            if (occupantsCount < maxOccupants) {
                occupants[occupantsCount] = new Person(person);
                occupantsCount++;
            }
        }

        void display() const {
            cout << "Номер кватиры: " << number << endl;
            for (int i = 0; i < occupantsCount; ++i) {
                occupants[i]->display();
            }
        }

        // Деструктор
        ~Apartment() {
            for (int i = 0; i < occupantsCount; ++i) {
                delete occupants[i];
            }
            delete[] occupants;
        }

    private:
        int number;
        int maxOccupants;
        int occupantsCount;
        Person** occupants;
    };

    class House {
    public:
        House(const string& address, int maxApartments) : address(new string(address)), maxApartments(maxApartments), apartmentsCount(0) {
            apartments = new Apartment * [maxApartments];
        }

        // Конструктор копирования
        House(const House& other) : address(new string(*other.address)), maxApartments(other.maxApartments), apartmentsCount(other.apartmentsCount) {
            apartments = new Apartment * [maxApartments];
            for (int i = 0; i < apartmentsCount; ++i) {
                apartments[i] = new Apartment(*other.apartments[i]);
            }
        }

        void addApartment(const Apartment& apartment) {
            if (apartmentsCount < maxApartments) {
                apartments[apartmentsCount] = new Apartment(apartment);
                apartmentsCount++;
            }
        }

        void display() const {
            cout << "Домашний адрес: " << *address << endl;
            for (int i = 0; i < apartmentsCount; ++i) {
                apartments[i]->display();
            }
        }

        // Деструктор
        ~House() {
            for (int i = 0; i < apartmentsCount; ++i) {
                delete apartments[i];
            }
            delete[] apartments;
            delete address;
        }

    private:
        string* address;
        int maxApartments;
        int apartmentsCount;
        Apartment** apartments;
    };


int main() 
{
    setlocale(LC_ALL, "Rus");
    Person person1("Мария", 25);
    Person person2("Евгений", 30);

    Apartment apartment1(101, 2);
    apartment1.addPerson(person1);
    apartment1.addPerson(person2);

    House house("ул. Ленина, 35", 1);
    house.addApartment(apartment1);

    House houseCopy = house; // Вызов конструктора копирования

    house.display();
    cout << "-------------------" << endl;
    houseCopy.display();

    return 0;
}


