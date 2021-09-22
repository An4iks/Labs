#include <iostream>
#include <string>

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");

    string name;

    cout << "Как Вас зовут? ";
    cin >> name;

    cout << "\n Доброго времени суток," << name;

    return 0;
}