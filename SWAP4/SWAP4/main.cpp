#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    int A, B, C, D;
    cout << "A=";
    cin >> A;
    cout << "B=";
    cin >> B;
    cout << "C=";
    cin >> C;
    cout << "D=";
    cin >> D;

    int temp;
    temp = A;
    A = B;
    B = C;
    C = D;
    D = temp;

    cout << "A=" << A << " B=" << B << " C=" << C << " D=" << D << endl;
}