#include <iostream>
using namespace std;

int main()
{
    double depositSum, rate;
    int lengthInMonths;
    cin >> depositSum >> lengthInMonths >> rate;

    const double sum = depositSum + lengthInMonths * ((depositSum * (rate / 100)) / 12);

    cout << sum << endl;

    return 0;
}
