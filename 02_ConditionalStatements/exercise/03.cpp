#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Hours and minutes input
    constexpr int MINUTES_TO_ADD = 15;

    int hours, minutes;
    cin >> hours >> minutes;

    // Convert to minutes and add the required minutes
    int newMinutes = (hours * 60) + minutes + MINUTES_TO_ADD;

    // Calculate the new hours and minutes
    int newHours = newMinutes / 60;
    newMinutes %= 60;

    // If hours go beyond 24, adjust them
    if (newHours >= 24)
        newHours -= 24;

    // Output the new time
    cout << newHours << ":" << setw(2) << setfill('0') << newMinutes << endl;

    return 0;
}