#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    int randomNum{};

    cout << "������� ��������� �����: ";
    cin >> randomNum;

    cout << "\n��������� ���������� (x-���� �����) : ( (x*10) /2 +x ) /3 +4) /2 -2 =x \n";
    cout << "��� � ��� ����������? ";

    int inNum;
    cin >> inNum;

    int x = ((randomNum * 10) / 2 + randomNum) / 3 + 4) / 2 - 2;

    cout << "���������� �����: " << x << "\n ���� �����: " << inNum;
}
