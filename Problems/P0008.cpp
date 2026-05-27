#include <iostream>
using namespace std;

int main()
{
    cout << "Welcome to Kalebu's calculator" << endl;
    cout << "a. Addition" << endl;
    cout << "b. Subtraction" << endl;
    cout << "c. Multiplication" << endl;
    cout << "d. Divison" << endl;

    cout << "choose your option" << endl;
    char option;
    cin >> option;

    cout << "Enter your two numbers: " << endl;
    int num1, num2;
    cin >> num1 >> num2;

    cout << "Your option is " << option << "  and your two numbers " << num1 << " " << num2 << endl;

    if (option == 'a')
    {
        cout << "Addition is: " << (num1 + num2) << endl;
    }
    if (option == 'b')
    {
        cout << "subtraction is: " << (num1 - num2) << endl;
    }
    if (option == 'c')
    {
        cout << "Addition is: " << (num1 * num2) << endl;
    }
    if (option == 'd')
    {
        cout << "Addition is: " << (num1 / num2) << endl;
    }

    return 0;
}