#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter a:";
    cin >> a;
    cout << "Enter b:";
    cin >> b;

    int arithmetic, substraction, multiplication, divison, modulo;

    arithmetic = a + b;
    substraction = a - b;
    multiplication = a * b;
    divison = a / b;
    modulo = a % b;

    cout << "Arithmetic:" << arithmetic << endl
         << "Subtraction:" << substraction << endl
         << "Multiplication: " << multiplication << endl
         << "Division:" << divison << endl
         << "Modulo:" << modulo << endl;

    return 0;
}