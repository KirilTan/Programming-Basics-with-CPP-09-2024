#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    string city;
    double sales;
    cin >> city >> sales;

    double commission = -1.0; // Initial value to track if an error occurs

    if (sales >= 0)
    {
        if (city == "Sofia")
        {
            if (sales <= 500) commission = sales * 0.05;
            else if (sales <= 1000) commission = sales * 0.07;
            else if (sales <= 10000) commission = sales * 0.08;
            else commission = sales * 0.12;
        }
        else if (city == "Varna")
        {
            if (sales <= 500) commission = sales * 0.045;
            else if (sales <= 1000) commission = sales * 0.075;
            else if (sales <= 10000) commission = sales * 0.10;
            else commission = sales * 0.13;
        }
        else if (city == "Plovdiv")
        {
            if (sales <= 500) commission = sales * 0.055;
            else if (sales <= 1000) commission = sales * 0.08;
            else if (sales <= 10000) commission = sales * 0.12;
            else commission = sales * 0.145;
        }
    }

    if (commission == -1.0)
    {
        cout << "error" << endl;
    }
    else
    {
        cout << fixed << setprecision(2) << commission << endl;
    }

    return 0;
}
