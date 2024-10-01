#include <iostream>
using namespace std;

int main()
{
    // User input
    int number;
    cin >> number;

    // Check number range and output message
    if (number < 100)
        cout << "Less than 100" << endl;
    else if (100 <= number && number <= 200)
        cout << "Between 100 and 200" << endl;
    else
        cout << "Greater than 200" << endl;

    return 0;
}