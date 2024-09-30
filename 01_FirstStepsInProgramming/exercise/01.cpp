#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const double exchangeRate = 1.79549;

    double usd;
    cin >> usd;

    double bgn = usd * exchangeRate;

    // cout.setf(ios::fixed);
    // cout.precision(2);

    cout << fixed << setprecision(2) << bgn << endl;

    return 0;
}