#include <iostream>
using namespace std;

int main()
{

    int a, b;

    cout << "Enter a value: ";
    cin >> a;
    cout << "Enter b value: ";
    cin >> b;

    cout << "a|b>?" << (a | b) << endl;
    cout << "a&b>?" << (a & b) << endl;
    cout << "a^?" << (a ^ b) << endl;
    cout << "a<<1>?" << (a << 1) << endl;
    cout << "a>>1?" << (a >> 1) << endl;
}