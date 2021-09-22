
#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    int A, B, C;
    cout << "A=";
    cin >> A;
    cout << "B=";
    cin >> B;
    cout << "C=";
    cin >> C;

    int temp;
    temp = A;
        A = B;
    B = C;
    C = temp;

    cout << "A=" << A << " B=" << B << " C=" << C << endl;
}