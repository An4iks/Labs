#include <iostream>

using namespace std;


int main(){

setlocale (LC_ALL, "rus");
    string name, surname, nameOfDad, sex, birthday, adress, numberOfPhone, placeOfTeaching, classSchool, hobby;

    cout << "���� �������?=";
    cin >> name;
    cout << "\n���?=";
    cin >> surname;
    cout << "\n��������?=";
    cin >> nameOfDad;
    cout << "\n��� ���?=";
    cin >> sex;
    cout << "\n����� �� ��������?=";
    cin >> birthday;
    cout << "\n��� �����?=";
    cin >> adress;
    cout << "\n��� ����� ��������?=";
    cin >> numberOfPhone;
    cout << "\n���� ����� �����?=";
    cin >> placeOfTeaching;
    cout << "\n� ����� �� ������?=";
    cin >> classSchool;
    cout << "\n����� � ��� �����?=";
    cin >> hobby;

    cout << endl;

    cout << "\t\t\t � � � � � � \n\n";
    cout << "�������\t\t���\t\t��������\n";
    cout << "-------\t\t---\t\t--------\n";
    cout << surname << "\t\t" << name << "\t\t" << nameOfDad << "\n\n";
    cout << "���\t\t���� ��������\t\t����� ��������\n";
    cout << "-------\t\t---\t\t\t--------\n";
    cout << sex << "\t\t" << birthday << "\t\t" << numberOfPhone << "\n\n";
    cout << "�����\n\n";
    cout << "-----\n\n";
    cout << adress;
    cout << "\n����� �����\t\t�����\n";
    cout << "-----------\t\t-----\n";
    cout << "�����\n";
    cout << "-----\n";
    cout << hobby;
}