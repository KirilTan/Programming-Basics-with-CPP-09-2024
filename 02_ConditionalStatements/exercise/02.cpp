#include <iostream>
using namespace std;

int main()
{
    // Take input number
    int num;
    cin >> num;

    // Bonus points
    double bonusPoints = 0.0;
    if (num <= 100)
        bonusPoints += 5;
    else if (num <= 1000)
        bonusPoints += (num * 0.20);
    else if (num > 1000)
        bonusPoints += (num * 0.10);

    // Additional bonus points
    if (num % 2 == 0)
        bonusPoints += 1;

    if (num % 10 == 5)
        bonusPoints += 2;

    // Output the total bonus points
    cout << bonusPoints << endl;
    cout << num + bonusPoints << endl;

    return 0;
}
