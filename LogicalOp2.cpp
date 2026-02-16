#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    a = 10;
    b = 20;
    c = 30;

    cout << ((a < b) && (a > b)) << endl;
    cout << ((a < c) && (c > b)) << endl;
    cout << ((a >= c) && (a >= b)) << endl;
    cout << !((a >= c) && (a <= b));
}
