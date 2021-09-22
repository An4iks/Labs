#include <iostream>

using namespace std;


int main(){

setlocale (LC_ALL, "rus");
    string name, surname, nameOfDad, sex, birthday, adress, numberOfPhone, placeOfTeaching, classSchool, hobby;

    cout << "Ваша фамилия?=";
    cin >> name;
    cout << "\nИмя?=";
    cin >> surname;
    cout << "\nОтчество?=";
    cin >> nameOfDad;
    cout << "\nВаш пол?=";
    cin >> sex;
    cout << "\nКогда Вы родились?=";
    cin >> birthday;
    cout << "\nВаш адрес?=";
    cin >> adress;
    cout << "\nВаш номер телефона?=";
    cin >> numberOfPhone;
    cout << "\nВаше место учебы?=";
    cin >> placeOfTeaching;
    cout << "\nВ каком Вы классе?=";
    cin >> classSchool;
    cout << "\nКакое у Вас хобби?=";
    cin >> hobby;

    cout << endl;

    cout << "\t\t\t А Н К Е Т А \n\n";
    cout << "Фамилия\t\tИмя\t\tОтчество\n";
    cout << "-------\t\t---\t\t--------\n";
    cout << surname << "\t\t" << name << "\t\t" << nameOfDad << "\n\n";
    cout << "Пол\t\tДата Рождения\t\tНомер телефона\n";
    cout << "-------\t\t---\t\t\t--------\n";
    cout << sex << "\t\t" << birthday << "\t\t" << numberOfPhone << "\n\n";
    cout << "Адрес\n\n";
    cout << "-----\n\n";
    cout << adress;
    cout << "\nМесто учебы\t\tКласс\n";
    cout << "-----------\t\t-----\n";
    cout << "Хобби\n";
    cout << "-----\n";
    cout << hobby;
}