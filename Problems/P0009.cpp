#include <iostream>
using namespace std;

int main()
{
    int length, width, area;
    cout << "Enter a length and width: ";
    cin >> length;
    cin >> width;
    area = length * width;
    cout << "Area of rectangle: " << area << endl;
    return 0;
}