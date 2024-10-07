#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
    // Input
    string seriesName;
    int episodeLength, breakLength;

    // Use getline to capture the series name
    getline(cin, seriesName);
    cin >> episodeLength >> breakLength;

    // Calculate lunch and rest time
    const double lunchTime = breakLength * 1.0 / 8;  // 1/8 of the break length
    const double restTime = breakLength * 1.0 / 4;   // 1/4 of the break length

    // Calculate remaining time after lunch and rest
    double remainingTime = breakLength - lunchTime - restTime;

    // Check if there is enough time to watch the episode
    if (remainingTime >= episodeLength)
    {
        // Calculate the free time left and round up
        cout << "You have enough time to watch " << seriesName << " and left with "
             << ceil(remainingTime - episodeLength) << " minutes free time." << endl;
    }
    else
    {
        // Calculate the additional time needed and round up
        cout << "You don't have enough time to watch " << seriesName << ", you need "
             << ceil(episodeLength - remainingTime) << " more minutes." << endl;
    }

    return 0;
}
