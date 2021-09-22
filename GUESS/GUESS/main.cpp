#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    int randomNum{};

    cout << "Введите случайное число: ";
    cin >> randomNum;

    cout << "\nПроведите вычисления (x-Ваше число) : ( (x*10) /2 +x ) /3 +4) /2 -2 =x \n";
    cout << "Что у Вас получилось? ";

    int inNum;
    cin >> inNum;

    int x = ((randomNum * 10) / 2 + randomNum) / 3 + 4) / 2 - 2;

    cout << "Правильное число: " << x << "\n Ваше число: " << inNum;
}
