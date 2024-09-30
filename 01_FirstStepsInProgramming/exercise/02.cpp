#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double rad;
    cin >> rad;

    const double deg = rad * 180/M_PI;

    cout << round(deg) << endl;
}