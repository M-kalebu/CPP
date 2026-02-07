// #include <iostream>
// using namespace std;
// int main()
// {
//     int score = 100;
//     int update_score;
//     // int update_score = score + 200;
//     score = update_score + 200;  // if incase we dont assign a value then its comes the garrabbage value
//     cout << update_score;
//     cout << score;
//     return 0;
// }
//

// #include <iostream>

// using namespace std;

// int main()
// {
//     int score;
//     float over = 16.5;
//     score = 100;
//     score = score + 6;
//     score = score + score + 6;
//     cout << score << endl;
//     cout << over;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int a, b;

//     a = 100;
//     b = 50;

//     a = b;

//     cout << a << endl;
//     cout << b;
// }

#include <iostream>
using namespace std;

int main()
{
    int a, b;
    a = 100;
    b = 50;
    a = b;
    a = a + a;
    b = b + a;
    cout << a << endl;
    cout << b << endl;

    a = a * a;
    b = a + 100;

    cout << a << endl;
    cout << b;
}