#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // Input the time in seconds
    int time1, time2, time3;
    cin >> time1 >> time2 >> time3;

    // Calculate minutes and seconds
    const int totalTime = time1 + time2 + time3;
    const int minutes = totalTime / 60;
    const int seconds = totalTime % 60;

    // Output in format mm:ss
    cout << minutes << ":" << setw(2) << setfill('0') << seconds << endl;

    return 0;
}