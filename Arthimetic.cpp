#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter a value: ";
    cin >> a;
    cout << "Enter b value: ";
    cin >> b;

    int addition, substraction, multiplication, modulo, divison;

    addition = a + b;
    substraction = a - b;
    multiplication = a * b;
    modulo = a % b;
    divison = a / b;

    cout << "addition " << addition << endl
         << "substraction " << substraction << endl
         << "multiplication " << multiplication << endl
         << "modulo " << modulo << endl
         << "divison" << divison << endl;

    return 0;
}