#include <iostream>

using namespace std;


int main(){

setlocale (LC_ALL, "rus");
    string name, surname, nameOfDad, sex, birthday, adress, numberOfPhone, placeOfTeaching, classSchool, hobby;

    cout << "Âàøà ôàìèëèÿ?=";
    cin >> name;
    cout << "\nÈìÿ?=";
    cin >> surname;
    cout << "\nÎò÷åñòâî?=";
    cin >> nameOfDad;
    cout << "\nÂàø ïîë?=";
    cin >> sex;
    cout << "\nÊîãäà Âû ðîäèëèñü?=";
    cin >> birthday;
    cout << "\nÂàø àäðåñ?=";
    cin >> adress;
    cout << "\nÂàø íîìåð òåëåôîíà?=";
    cin >> numberOfPhone;
    cout << "\nÂàøå ìåñòî ó÷åáû?=";
    cin >> placeOfTeaching;
    cout << "\nÂ êàêîì Âû êëàññå?=";
    cin >> classSchool;
    cout << "\nÊàêîå ó Âàñ õîááè?=";
    cin >> hobby;

    cout << endl;

    cout << "\t\t\t À Í Ê Å Ò À \n\n";
    cout << "Ôàìèëèÿ\t\tÈìÿ\t\tÎò÷åñòâî\n";
    cout << "-------\t\t---\t\t--------\n";
    cout << surname << "\t\t" << name << "\t\t" << nameOfDad << "\n\n";
    cout << "Ïîë\t\tÄàòà Ðîæäåíèÿ\t\tÍîìåð òåëåôîíà\n";
    cout << "-------\t\t---\t\t\t--------\n";
    cout << sex << "\t\t" << birthday << "\t\t" << numberOfPhone << "\n\n";
    cout << "Àäðåñ\n\n";
    cout << "-----\n\n";
    cout << adress;
    cout << "\nÌåñòî ó÷åáû\t\tÊëàññ\n";
    cout << "-----------\t\t-----\n";
    cout << "Õîááè\n";
    cout << "-----\n";
    cout << hobby;
}