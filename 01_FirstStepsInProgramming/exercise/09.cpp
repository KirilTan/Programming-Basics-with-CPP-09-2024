#include <iostream>
using namespace std;

int main()
{
    // User input
    int length, width, height;
    double percent;

    cin >> length >> width >> height >> percent;

    // Calculation
    const double volumeCM3 = length * width * height;
    const double volumeL = volumeCM3 / 1000; // Convert cubic centimeters to liters
    const double result = volumeL * (1 - (percent / 100.0));

    // Output
    cout << result << endl;

    return 0;
}