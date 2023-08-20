// Водоем
//РазработатьклассReservoir(водоем).Классдолженобяза-тельноиметьполе«название».Классдолженсодержать: 
//конструкторпоумолчанию, конструкторспараметрами,
//принеобходимостиреализоватьдеструкториконструктор копирования.
//Добавить методы для :
//1. Определенияприблизительногообъема(ширина * длина * максимальная глубина);
//2. Определения площади водной поверхности;
//3. Методдляпроверкиотносятсяливодоемыкодному
//типу(море - море; бассейн - пруд);
//4. Длясравненияплощадиводнойповерхностиводоемов
//одного типа;
//5. Для копирования объектов;
//6. Остальныеметодынаусмотрениеразработчика(методы setи get).
//Написатьинтерфейсдляработысклассом.Реализовать
//динамическиймассивобъектовклассасвозможностью
//добавления, удаленияобъектовизмассива.Реализовать
//возможностьзаписиинформацииобобъектахмассива
//в текстовый файл, бинарный файл.
//Используйте explicitконструкториконстантныефункции - члены(например, дляотображенияданныховодоёмеит.д.)


#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Reservoir {
public:
    // Конструктор по умолчанию
    explicit Reservoir() : name(""), width(0), length(0), maxDepth(0) {}

    // Конструктор с параметрами
    explicit Reservoir(const string& name, double width, double length, double maxDepth)
        : name(name), width(width), length(length), maxDepth(maxDepth) {}

    // Конструктор копирования
    Reservoir(const Reservoir& other)
        : name(other.name), width(other.width), length(other.length), maxDepth(other.maxDepth) {}

    // Метод для расчета объема водоема
    double calculateVolume() const {
        return width * length * maxDepth;
    }

    // Метод для расчета площади поверхности водоема
    double calculateSurfaceArea() const {
        return width * length;
    }

    // Метод для проверки, относятся ли два водоема к одному типу
    bool isSameType(const Reservoir& other) const {
        return name == other.name;
    }

    // Перегрузка оператора < для сравнения площади поверхности водоемов
    bool operator<(const Reservoir& other) const {
        return calculateSurfaceArea() < other.calculateSurfaceArea();
    }

    // Метод для создания копии объекта водоема
    Reservoir copy() const {
        return Reservoir(name, width, length, maxDepth);
    }

    // Геттер для получения названия водоема
    const string& getName() const {
        return name;
    }

    // Геттеры для получения характеристик водоема
    double getWidth() const {
        return width;
    }

    double getLength() const {
        return length;
    }

    double getMaxDepth() const {
        return maxDepth;
    }

    // Константная функция-член для вывода информации о водоеме
    void displayInfo() const {
        cout << "Водоем: " << name << endl;
        cout << "Ширина: " << width << " метров" << endl;
        cout << "Длина: " << length << " метров" << endl;
        cout << "Максимальная глубина: " << maxDepth << " метров" << endl;
        cout << "Объем: " << calculateVolume() << " кубических метров" << endl;
        cout << "Площадь поверхности: " << calculateSurfaceArea() << " квадратных метров" << endl;
    }

    // Метод для записи информации о водоеме в файл
    void writeToFile(const string& filename) const {
        ofstream outFile(filename);
        if (outFile.is_open()) {
            outFile << name << endl;
            outFile << width << " " << length << " " << maxDepth << endl;
            outFile.close();
            cout << "Данные записаны в файл " << filename << endl;
        }
        else {
            cout << "Ошибка открытия файла " << filename << " для записи" << endl;
        }
    }

    // Метод для чтения информации о водоеме из файла
    void readFromFile(const string& filename) {
        ifstream inFile(filename);
        if (inFile.is_open()) {
            inFile >> name >> width >> length >> maxDepth;
            inFile.close();
            cout << "Данные считаны из файла " << filename << endl;
        }
        else {
            cout << "Ошибка открытия файла " << filename << " для чтения." << endl;
        }
    }

private:
    string name;
    double width, length, maxDepth;
};

int main() 
{
    setlocale(LC_ALL, "Rus");
    // Создание массива объектов водоемов
    const int reservoirCount = 3;
    Reservoir reservoirs[reservoirCount] = {
        Reservoir("Море", 1000, 2000, 50),
        Reservoir("Озеро", 500, 800, 20),
        Reservoir("Пруд", 50, 50, 5)
    };

    // Отображение информации о каждом водоеме
    for (int i = 0; i < reservoirCount; ++i) {
        reservoirs[i].displayInfo();
        std::cout << std::endl;
    }

    // Запись данных о каждом водоеме в файл
    for (int i = 0; i < reservoirCount; ++i) {
        std::string filename = reservoirs[i].getName() + ".txt";
        reservoirs[i].writeToFile(filename);
    }

    // Чтение данных о каждом водоеме из файла
    for (int i = 0; i < reservoirCount; ++i) {
        std::string filename = reservoirs[i].getName() + ".txt";
        reservoirs[i].readFromFile(filename);
    }

    return 0;
}
