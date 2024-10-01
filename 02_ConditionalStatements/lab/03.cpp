#include <iostream>
using namespace std;

int main ()
{
    // User input
    int a;
    cin >> a;

    // Output even or odd
    if (a % 2 == 0)
        cout << "even" << endl;
    else
        cout << "odd" << endl;

    return 0;
}