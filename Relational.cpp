#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter a value: ";
    cin >> a;
    cout << "Enter b value: ";
    cin >> b;

    cout << "Is A equal to B?: " << (a == b) << endl;
    cout << "Is A not equal to B:" << (a != b) << endl;
    cout << "Is A is greaterthan is B: " << (a > b) << endl;
    cout << "Is A is lessthan B: " << (a < b) << endl;
    cout << "Is A is greaterthan or equal to: " << (a >= b);
    cout << "Is A is lessthan or equal to: " << (a <= b);
}