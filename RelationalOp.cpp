
#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter a value: ";
    cin >> a;
    cout << "Enter b value: ";
    cin >> b;

    int is_equal_to, not_equal_to, greaterthan, lessthan, greaterthan_equal_to, lessthan_equal_to;

    is_equal_to = a == b;
    not_equal_to = a != b;
    greaterthan = a > b;
    lessthan = a < b;
    greaterthan_equal_to = a >= b;
    lessthan_equal_to = a <= b;

    cout << "is Equal to: " << is_equal_to << endl
         << "not equal to: " << not_equal_to << endl
         << "greaterThan: " << greaterthan << endl
         << "lessthan: " << lessthan << endl
         << "greater than or equal to: " << greaterthan_equal_to << endl
         << "lessthan or equal to: " << lessthan_equal_to << endl;
}