#include <iostream>
#include <string>

using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    string phrase;

    cout << "������� ����� �����: ";
    getline(cin, phrase);

    cout << "\n�����: " << phrase;
}