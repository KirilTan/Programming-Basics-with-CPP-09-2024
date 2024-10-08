#include <iostream>
using namespace std;

int main()
{
    double age;
    string gender;

    cin >> age >> gender;

    if (gender == "m")
        if (age >= 16.0)
            cout << "Mr." << endl;
        else
            cout << "Master" << endl;
    else if (gender == "f")
        if (age >= 16.0)
            cout << "Ms." << endl;
        else
            cout << "Miss" << endl;
    else
        cout << "Error" << endl;

    return 0;
}
