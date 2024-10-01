#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    // User input - type of shape
    string shape;
    cin >> shape;

    // Calculate area based on the shape type
    float area = 0;
    if (shape == "square")
    {
        float side;
        cin >> side;

        area = side * side;
    }
    else if (shape == "rectangle")
    {
        float width, height;
        cin >> width >> height;

        area = width * height;
    }
    else if (shape == "circle")
    {
        float radius;
        cin >> radius;
        area = M_PI * radius * radius;
    }
    else if (shape == "triangle")
    {
        float base, height;
        cin >> base >> height;

        area = 0.5 * base * height;
    }

    // Return area formatted to 3 decimal places
    cout.setf(ios::fixed);
    cout.precision(3);
    cout << area << endl;

    return 0;
}