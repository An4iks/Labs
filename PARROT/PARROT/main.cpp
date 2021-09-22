#include <iostream>
#include <string>

using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    string phrase;

    cout << "Введите любую фразу: ";
    getline(cin, phrase);

    cout << "\nВывод: " << phrase;
}