#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // Multiples
    double decorationCostMultiple = 0.1;

    // Input the budget, number of extras, and single extra clothes cost
    double budget, singleExtraClothesCost;
    int extras;
    cin >> budget >> extras >> singleExtraClothesCost;

    // Declare variables
    bool discount = false;
    double totalClothesCost, totalDiscount = 0.0;

    // Discounts
    if (extras >= 150)
    {
        discount = true; // Set discount to true if there are 150 or more extras
    }

    // Calculate the total clothes cost
    if (discount)
    {
        totalClothesCost = extras * singleExtraClothesCost * 0.9; // Apply 10% discount
    }
    else
    {
        totalClothesCost = extras * singleExtraClothesCost; // No discount
    }

    // Calculate the decoration cost (10% of the budget)
    double decorationCost = budget * decorationCostMultiple;

    // Calculate total cost (clothing + decoration)
    double totalCost = totalClothesCost + decorationCost;

    // Determine if the budget is enough
    if (totalCost > budget)
    {
        double neededMoney = totalCost - budget;
        cout << "Not enough money!" << endl;
        cout << "Wingard needs " << fixed << setprecision(2) << neededMoney << " leva more." << endl;
    }
    else
    {
        double remainingMoney = budget - totalCost;
        cout << "Action!" << endl;
        cout << "Wingard starts filming with " << fixed << setprecision(2) << remainingMoney << " leva left." << endl;
    }

    return 0;
}
