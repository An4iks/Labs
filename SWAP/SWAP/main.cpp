
#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "rus"); 

	int A, B, C; 

	cout << "Введите А и В: ";
	cin >> A >> B;	//Пользователь вводит два числа
	cout << "A = " << A << endl << "B = " << B << endl;

	// В ОЗУ А и В меняються местами 

	C = A;
	A = B;
	B = C;

	cout << "A = " << A << endl << "B = " << B;
	return 0;
}