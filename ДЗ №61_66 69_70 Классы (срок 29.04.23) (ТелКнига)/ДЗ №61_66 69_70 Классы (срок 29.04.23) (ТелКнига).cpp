// ДЗ №61_66 69_70 Классы (срок 29.04.23) (ТелКнига)
//
//
//    Создайте приложение "Телефонная книга".
// 
//    Необходимо хранить данные об абоненте 
//    (ФИО, домашнийтелефон, рабочийтелефон, мобильныйтелефон, дополнительная информация о контакте) 
//    внутри соответствующего класса.
// 
//    Наполните класс переменными - членами, функциями - членами, конструкторами, inline - функциями - членами,
//    используйте инициализаторы, реализуйте деструктор.
// 
//    Обязательно необходимо выделять динамически память под ФИО.
// 
//    Предоставьте пользователю возможность добавлять новых абонентов, удалять абонентов, искать абонентов по ФИО, 
//    показывать всех абонентов, сохранять информацию в файл и загружать из файла.
//
// https://metanit.com/cpp/tutorial/5.2.php


#include <iostream>
#include <fstream>     // для записи в/из файла
#include <string>      // для применения стринг
#include <Windows.h>   // для кодировки Windows-1251

using namespace std;

class PhoneBook
{
private:// модификатор доступа

    string lastName;                  // фамилия 
    string firstName;                 // имя
    string middleName;                // отчество
    long long int homeNumber;         // домашний телефон
    long long int workNumber;         // рабочий телефон
    long long int mobileNumber;       // мобильный телефон
    string moreInformation;           // дополнительная информация об абоненте

public:                               // модификатор доступа

    PhoneBook()                       //конструктор по умолчанию (нужен всегда) 
    { }                               // если вводит значение переменных сразу в объекте класса при его инициализации, то констр по умолчанию не нужен
                                      
                                      //конструктор класса инициализации данных об абоненте
    PhoneBook(string lastName1, string firstName1, string middleName1, long long int homeNumber1, long long int workNumber1, long long int mobileNumber1, string moreInformation1)  
    {
        lastName = lastName1;
        firstName = firstName1;
        middleName = middleName1;
        homeNumber = homeNumber1;
        workNumber = workNumber1;
        mobileNumber = mobileNumber1;
        moreInformation = moreInformation1;
    }

    void setSubscriberInformation()                         // метод Ввода данных об абоненте в консоль
    {
        cout << "Введите данные об абоненте: \n\n";
        cout << "Фамилия абонента:          ";
        cin >> lastName;
        cout << "Имя абонента:              ";
        cin >> firstName;
        cout << "Отчество абонента:         ";
        cin >> middleName;
        cout << "Домашний телефон:          ";
        cin >> homeNumber;
        cout << "Рабочий телефон:           ";
        cin >> workNumber;
        cout << "Мобильный телефон:         ";
        cin >> mobileNumber;
        cout << "Дополнительная информация: ";
        cin >> moreInformation;
        cout << "\n";
    }
    void getSubscriberInformation()                        // метод ВЫвода данных об абоненте в консоль
    {
        cout << "Фамилия абонента:          " << lastName << "\n";
        cout << "Имя абонента:              " << firstName << "\n";
        cout << "Отчество абонента:         " << middleName << "\n";
        cout << "Домашний телефон:          " << homeNumber << "\n";
        cout << "Рабочий телефон:           " << workNumber << "\n";
        cout << "Мобильный телефон:         " << mobileNumber << "\n";
        cout << "Дополнительная информация: " << moreInformation << "\n";
        cout << "\n";
    }

    bool searchSubscriberByLastName(string inputLastName) // метод поиска абонента по фамилии
    {
        if (lastName == inputLastName)                    // если фамилия совпадает с введённой
        {
          getSubscriberInformation();                     // то вызывается метод ВЫвода данных об абоненте в консоль
          cout << "\n";
          return true;
        }
        else
        {
          return false;
        }
    }

    //bool deleteSubscriberByLastName(string inputLastName) // метод затирания данных абонента по фамилии
    //{
    //    if (lastName == inputLastName) 
    //    {
    //        lastName = "";
    //        firstName = "";
    //        middleName = "";
    //        homeNumber = 0;
    //        workNumber = 0;
    //        mobileNumber = 0;
    //        moreInformation = "";
    //        return true;
    //    }
    //    return false;
    //}

    bool deleteSubscriberByLastName2(string inputLastName) // метод удаления абонента по фамилии с уменьшением общего числа абонентов
    {
        if (lastName == inputLastName)                     // если фамилия совпадает с введённой 
        {
            return true;                                   // то возвращается правда
        }
        return false;                                      // в противном случае возвращается ложь
    }

    bool editSubscriberByLastName(string inputLastName)   // метод для внесения изменений в информацию о существующем контакте
    {
        if (lastName == inputLastName)                    // если фамилия совпадает с введённой 
        {
            setSubscriberInformation();                   // то вызывается метод Ввода данных об абоненте в консоль
            cout << "\n";
            return true;
        }
        return false;

    }

    void saveToFile(const string& fileName)               // метод для записи в файл
    {
        ofstream fileOut(fileName, ios::app);             // открывается файл с добавлением контактов в конец файла без их перезаписи
        if (!fileOut)                                     // для этого используется режим ios::app
        {
            cout << "Ошибка открытия файла!" << "\n";
            return;
        }
        else
        {
            fileOut << "Фамилия абонента:          " << lastName << "\n";
            fileOut << "Имя абонента:              " << firstName << "\n";
            fileOut << "Отчество абонента:         " << middleName << "\n";
            fileOut << "Домашний телефон:          " << homeNumber << "\n";
            fileOut << "Рабочий телефон:           " << workNumber << "\n";
            fileOut << "Мобильный телефон:         " << mobileNumber << "\n";
            fileOut << "Дополнительная информация: " << moreInformation << "\n";
            fileOut << "\n";
        }
        fileOut.close();
    }

    void readContactsFromFile(const string& fileName)
    {
        ifstream fileIn(fileName);                        // открыть файл для чтения
        if (!fileIn)                                      // проверяем, удалось ли открыть файл
        {
            cout << "Ошибка открытия файла!" << endl;
            return;
        }

        string line;

        //====================================================================================================================================================
        // проблема в том, что данный метод требует доработки, т.к. записывается только информация о последнем абоненте

        int lineCount = 0;  // счетчик строк

        // цикл по всем строкам файла
        while (getline(fileIn, line))
        {
            lineCount++;

            // определяем поля объекта PhoneBook, используя парсинг строк
            switch (lineCount)
            {
            case 1:
                lastName = line.substr(line.find(":") + 11);  // убираем "Фамилия абонента:  " и сохраняем фамилию
                break;
            case 2:
                firstName = line.substr(line.find(":") + 15);  // убираем "Имя абонента:      " и сохраняем имя
                break;
            case 3:
                middleName = line.substr(line.find(":") + 10);  // убираем "Отчество абонента: " и сохраняем отчество
                break;
            case 4:
                homeNumber = stoll(line.substr(line.find(":") + 2));  // убираем "Домашний телефон:  " и сохраняем домашний номер
                break;
            case 5:
                workNumber = stoll(line.substr(line.find(":") + 2));  // убираем "Рабочий телефон:   " и сохраняем рабочий номер
                break;
            case 6:
                mobileNumber = stoll(line.substr(line.find(":") + 2));  // убираем "Мобильный телефон: " и сохраняем мобильный номер
                break;
            case 7:
                moreInformation = line.substr(line.find(":") + 2);  // убираем "Дополнительная информация: " и сохраняем дополнительную информацию
                break;
            case 8:
                lineCount = 0;  // все поля объекта PhoneBook считаны, обнуляем счетчик
                break;
            default:
                break;
            }
        }

        //==================================================================================================================================================
        // Выводит всю информацию из файла без записи в память программы
        //while (getline(fileIn, line))                     // цикл чтения построчно из файла
        //{
        //    cout << line << endl;                         // выводим на экран
        //}
        //==================================================================================================================================================

        fileIn.close();                                   // закрыть файл

    }
        ~PhoneBook()                                      //деструктор для освобождения ресурсов памяти
        {
            //cout << "Абонент: " << lastName << " - удалён, ресурсы высвобождены" << "\n";
            //Деструктор по умолчанию не требуется, так как объект не использует динамическую память.
        }
};

int main()
{
    setlocale(LC_ALL, "Rus");
    SetConsoleCP(1251);                                 // устанавливаем кодировку Windows-1251
    SetConsoleOutputCP(1251);
    SetConsoleTitle(TEXT("Телефонная книга V1.0"));     // Установка заголовка консольного окна

    int choiceId = 0;                                   // переменная для выбора действия
    int countSubscriber = 0;                            // счетчик контактов

    PhoneBook* book = new PhoneBook[100];               // динамический массив объектов book класса PhoneBook - задание размерности телефонной книги (до 100)

    while (choiceId != 9)                               // цикл для основного меню, пока не будет нажата кнопка "выход"
    {
        system("cls");

        cout << "************************************************************************" << "\n";
        cout << "*            Приложение 'Телефонная книга' на классах V1.0             *" << "\n";
        cout << "************************************************************************" << "\n";

        cout << "\t\tВыберите действия с телефонной книгой:" << "\n\n";
        cout << "\t\t1 - добавить новых абонентов" << "\n";
        cout << "\t\t2 - вывести список всех абонентов" << "\n";
        cout << "\t\t3 - найти абонента по Фамилии" << "\n";
        cout << "\t\t4 - удалить абонента" << "\n";
        cout << "\t\t5 - очистить телефонную книгу" << "\n";
        cout << "\t\t6 - изменить данные абонента" << "\n";
        cout << "\t\t7 - сохранить список в файл" << "\n";
        cout << "\t\t8 - загрузить список из файла" << "\n";
        cout << "\t\t9 - Выход" << "\n";

        cin >> choiceId;

        while (choiceId<1 || choiceId>9)                // защита от некорректного ввода номера меню
        {
            cout << "Некорректный ввод данных. Попробуйте ещё раз. Выберите только указанные варианты цифр." << "\n";
            cin >> choiceId;
        }

        switch (choiceId)
        {
        case (1):                                        // добавление абонента
        {
            system("cls");
            PhoneBook subscriber;                        // инициализация объекта "абонент" класса "телефонная книга"
            subscriber.setSubscriberInformation();       // вызов метода класса "телефонная книга" для ввода данных об абоненте

            book[countSubscriber] = subscriber;          //записываем в телефонную книгу запись под номером "countSubscriber" с данными об абоненте
            countSubscriber++;                           //порядковый номер для следующего абонента в телефонной книге

            system("pause");
            break;
        }
        case (2):                                       // вывод списка абонентов в консоль
        {
            system("cls");
            if (countSubscriber == 0)                   //если порядковых номеров абонентов нет, значит книга пуста
            {
                cout << "Телефонная книга пуста\n";
                system("pause");
                break;
            }

            cout << "В телефонной книге " << countSubscriber << " абонент(а, ов)." << "\n";
            cout << "Список всех контактов в телефонной книге: \n\n";

            for (int i = 0; i < countSubscriber; i++) // проверка по всему списку телефонной книги
            {
                cout << "# " << i + 1 << "\n";
                book[i].getSubscriberInformation();    //вызов метода класса вывода информации об абонентах
            }
            system("pause");
            break;
        }

        case (3):                                     // поиск абонента по фамилии
        {
            system("cls");
            cout << "Введите фамилию абонента для поиска: ";
            string searchLastName;
            cin >> searchLastName;
            cout << "\n";
            bool found = false;                       // переменная found типа bool

            for (int i = 0; i < countSubscriber; i++) // проверка по всему списку телефонной книги
            {
                if (book[i].searchSubscriberByLastName(searchLastName)) //если вызов метода класса вывода информации об абонентах для объекта совпадает с введенной фамилией
                {
                    found = true;                     // то переменная found - правда
                }
            }
            if (!found)                               // условие if(!found) означает "если элемент не найден".
            {
                cout << "Контакт с фамилией '" << searchLastName << "' не найден" << "\n";
            }
            system("pause");
            break;
        }
        case (4):                                     // удаление выбранного абонента
        {
            system("cls");
            cout << "Введите фамилию абонента для удаления: " << "\n";
            string deleteLastName;
            cin >> deleteLastName;
            int subscriberIndex = -1;                // задание отрицательного индекса в списке абонентов

            for (int i = 0; i < countSubscriber; i++)// проверка по всему списку телефонной книги
            {
                if (book[i].deleteSubscriberByLastName2(deleteLastName)) // поиск индекса абонента с заданной фамилией
                {
                    subscriberIndex = i;             // индекс равен номеру в массиве
                    break;
                }
            }

            if (subscriberIndex != -1)               // если индекс не равен -1
            {
                for (int i = subscriberIndex; i < countSubscriber - 1; i++) // то сдвигаем массив, на удаленном месте абонента
                {
                    book[i] = book[i + 1];           // i-й элемент перезаписывается последующим
                }
                countSubscriber--;                   // количество абонентов становится на 1 меньше
                cout << "Контакт успешно удален." << "\n";
            }
            else
            {
                cout << "Контакт с фамилией '" << deleteLastName << "' не найден" << "\n";
            }
            system("pause");
            break;
        }
        case (5):                                    // полная очистка телефонной книги
        {
            system("cls");
            cout << "Вы уверены, что хотите очистить телефонную книгу? (Y/N)\n";
            char ch;                                 // инициализация переменной ch типа char;
            cin >> ch;
            if (ch == 'Y' || ch == 'y')              // если введены символы y или Y, то
            {
                countSubscriber = 0;                 // обнуляется количество записей об абонентах
                cout << "Телефонная книга очищена\n";
            }
            system("pause");
            break;
        }

        case (6):                                    // изменение информации об абоненте
        {
            system("cls");
            cout << "Введите фамилию абонента для редактирования: " << "\n";
            string editLastName;
            cin >> editLastName;
            cout << "\n";
            bool found = false;

            for (int i = 0; i < countSubscriber; i++) // проверка по всему списку телефонной книги
            {
                if (book[i].searchSubscriberByLastName(editLastName)) //если введенная фамилия соответствует фамилии абонента
                {
                    found = true;
                    book[i].editSubscriberByLastName(editLastName);   //то вызывается метод правки информации этого абонента
                }
            }
            if (!found)                               // условие if(!found) означает "если элемент не найден", то
            {
                cout << "Контакт с фамилией '" << editLastName << "' не найден" << "\n";
            }
            system("pause");
            break;
        }


        case (7):                                     // сохранение списка абонентов в файл целиком
        {
            system("cls");
            string fileName;
            cout << "Введите имя файла в формате 'имяФайла.txt': " << "\n";
            cin >> fileName;
            for (int i = 0; i < countSubscriber; i++) // проверка по всему списку телефонной книги
            {
                book[i].saveToFile(fileName);         // вызывается метод записи информации в конец файла (в данном случае не перезапись! (см. метод класса выше))
            }
            cout << "Запись списка абонентов 'Телефонной книги' выполнен успешно!" << "\n";
            system("pause");
            break;
        }


        case (8):                           // загрузка списка абонентов из файла 
        {
            system("cls");
            string fileName;
            cout << "Введите имя файла в формате 'имяФайла.txt': " << "\n";
            cin >> fileName;

            PhoneBook myPhoneBook;
            myPhoneBook.readContactsFromFile(fileName);
            
            book[countSubscriber] = myPhoneBook;          //записываем в телефонную книгу запись по номером "countSubscriber" с данными об абоненте
            countSubscriber++;                           //порядковый номер для следующего абонента в телефонной книге
            
            cout << "Загрузка списка абонентов из файла выполнено успешно!" << "\n";
            system("pause");
            break;
        }
        case (9):                           // выход
        {
            break;
        }
        default:
            break;

        }
    }
        delete[]book;                       // обязательная очистка памяти при создании динамических массивов

        return 0;

    
}

