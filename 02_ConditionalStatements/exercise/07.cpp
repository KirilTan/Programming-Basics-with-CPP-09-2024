#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // Input
    double budget;
    int gpuQuantity, cpuQuantity, ramQuantity;
    cin >> budget >> gpuQuantity >> cpuQuantity >> ramQuantity;

    // Calculate cost
    double gpuCost = gpuQuantity * 250.0;
    double cpuPricePerUnit = 0.35 * gpuCost;
    double cpuCost = cpuQuantity * cpuPricePerUnit;
    double ramPricePerUnit = 0.10 * gpuCost;
    double ramCost = ramQuantity * ramPricePerUnit;

    double totalCost = gpuCost + cpuCost + ramCost;

    // Check if discount is applicable
    double discount = 0.0;
    if (gpuQuantity > cpuQuantity)
        discount = 0.15 * totalCost;

    // Calculate final cost
    totalCost -= discount;

    // Output
    cout << fixed << setprecision(2);

    if (totalCost <= budget)
        cout << "You have " << abs(totalCost - budget) << " leva left!" << endl;
    else
        cout << "Not enough money! You need " << (totalCost - budget) << " leva more!" << endl;

    return 0;
}