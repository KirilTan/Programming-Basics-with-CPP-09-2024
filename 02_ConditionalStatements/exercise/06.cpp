#include <iostream>
#include <iomanip>  // For fixed and setprecision
#include <cmath>    // For floor function

using namespace std;

int main()
{
    // Data input
    double recordInSeconds, distanceInMeters, speedPerMeterInSeconds;
    cin >> recordInSeconds >> distanceInMeters >> speedPerMeterInSeconds;

    // Calculate the time without delays
    double newTime = distanceInMeters * speedPerMeterInSeconds;

    // Calculate additional time due to water resistance (rounded down to nearest whole number of intervals)
    double additionalTime = floor(distanceInMeters / 15) * 12.5;
    newTime += additionalTime;

    // Output results formatted to 2 decimal places
    cout << fixed << setprecision(2);

    // Check if the new time is faster than the record
    if (newTime < recordInSeconds)
    {
        cout << "Yes, he succeeded! The new world record is " << newTime << " seconds." << endl;
    }
    else
    {
        double timeDifference = newTime - recordInSeconds;
        cout << "No, he failed! He was " << timeDifference << " seconds slower." << endl;
    }

    return 0;
}
