
#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "rus"); 

	int A, B, C; 

	cout << "������� � � �: ";
	cin >> A >> B;	//������������ ������ ��� �����
	cout << "A = " << A << endl << "B = " << B << endl;

	// � ��� � � � ��������� ������� 

	C = A;
	A = B;
	B = C;

	cout << "A = " << A << endl << "B = " << B;
	return 0;
}