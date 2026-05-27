#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter your age: ";
    cin >> age;

    string IsEligibleToVote;

    IsEligibleToVote = (age >= 18) ? "This person is eligible to vote" : "This person is not eligible to vote";

    cout << IsEligibleToVote << endl;

    return 0;
}