#include <iostream>
#include <string>

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");

    string name;
    int age;
    string Work;

    cout << "���: ";
    cin >> name;

    cout << "\n�������: ";
    cin >> age;

    cout << "\n����� ������:";
    cin >> Work;

    cout << "\n������������: " << name;
}
