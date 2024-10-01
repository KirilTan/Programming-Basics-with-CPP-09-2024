#include <iostream>
using namespace std;

int main()
{
    // User input
    float speed;
    cin >> speed;

    // Output based on the speed
    if (speed <= 10.0f)
    {
        cout << "slow";
    }
    else if (speed <= 50.0f)
    {
        cout << "average";
    }
    else if (speed <= 150.0f)
    {
        cout << "fast";
    }
    else if (speed <= 1000.0f)
    {
        cout << "ultra fast";
    }
    else
    {
        cout << "extremely fast";
    }

    return 0;
}
