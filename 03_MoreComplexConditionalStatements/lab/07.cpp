#include <iostream>
using namespace std;

int main()
{
    int hour;
    string day;

    cin >> hour >> day;

    if (hour >= 10 && hour <= 18 && day != "Sunday")
        cout << "open" << endl;
    else
        cout << "closed" << endl;

    return 0;
}
