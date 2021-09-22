#include <iostream>
#include <string>

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");

    string name;
    int age;
    string Work;

    cout << "Имя: ";
    cin >> name;

    cout << "\nВозраст: ";
    cin >> age;

    cout << "\nМесто работы:";
    cin >> Work;

    cout << "\nЗдравствуйте: " << name;
}
