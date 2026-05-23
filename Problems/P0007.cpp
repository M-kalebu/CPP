#include <iostream>
using namespace std;

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    cout << "Enter your three numbers: ";
    cin >> a >> b >> c;
    int d = (a + b + c) / 3;
    cout << "Average of three numbers: " << d << endl;
}