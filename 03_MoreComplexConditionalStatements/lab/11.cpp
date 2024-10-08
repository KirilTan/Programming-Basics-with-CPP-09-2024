#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    string product, day;
    double quantity;

    cin >> product >> day >> quantity;

    bool weekDay = (day == "Monday" || day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Friday");
    bool weekend = (day == "Saturday" || day == "Sunday");

    double price = 0.0;

    if (weekDay)
    {
        if (product == "banana") price = 2.5;
        else if (product == "apple") price = 1.2;
        else if (product == "orange") price = 0.85;
        else if (product == "grapefruit") price = 1.45;
        else if (product == "kiwi") price = 2.7;
        else if (product == "pineapple") price = 5.50;
        else if (product == "grapes") price = 3.85;
    }
    else if (weekend)
    {
        if (product == "banana") price = 2.7;
        else if (product == "apple") price = 1.25;
        else if (product == "orange") price = 0.9;
        else if (product == "grapefruit") price = 1.6;
        else if (product == "kiwi") price = 3.0;
        else if (product == "pineapple") price = 5.6;
        else if (product == "grapes") price = 4.2;
    }

    if (price == 0.0)
        cout << "error" << endl;
    else
        cout << fixed << setprecision(2) << price * quantity << endl;

    return 0;
}
