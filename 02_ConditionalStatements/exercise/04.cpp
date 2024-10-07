#include <iostream>
#include <iomanip>
#include <cmath> // For abs() function

using namespace std;

int main()
{
    // Prices
    constexpr double PUZZLE = 2.60;
    constexpr double TALKING_TOY = 3.0;
    constexpr double PLUSHY = 4.10;
    constexpr double MINION = 8.20;
    constexpr double TRUCK = 2.0;

    // Input vacation cost
    double vacationCost;
    cin >> vacationCost;

    // Input quantity of each item
    int puzzleQuantity, talkingToyQuantity, plushyQuantity, minionQuantity, truckQuantity;
    cin >> puzzleQuantity >> talkingToyQuantity >> plushyQuantity >> minionQuantity >> truckQuantity;

    // Calculate total cost of each item
    double puzzleTotalCost = PUZZLE * puzzleQuantity;
    double talkingToyTotalCost = TALKING_TOY * talkingToyQuantity;
    double plushyTotalCost = PLUSHY * plushyQuantity;
    double minionTotalCost = MINION * minionQuantity;
    double truckTotalCost = TRUCK * truckQuantity;

    // Calculate total cost of all items
    double totalCost = puzzleTotalCost + talkingToyTotalCost + plushyTotalCost + minionTotalCost + truckTotalCost;

    // Calculate total quantity of items
    int totalQuantity = puzzleQuantity + talkingToyQuantity + plushyQuantity + minionQuantity + truckQuantity;

    // Calculate discount if applicable
    double discount = 0;
    if (totalQuantity >= 50)
        discount = totalCost * 0.25;

    // Calculate the final total cost after discount
    double totalCostAfterDiscount = totalCost - discount;

    // Calculate rent
    double rent = totalCostAfterDiscount * 0.1;

    // Calculate profit after rent
    double profit = totalCostAfterDiscount - rent;

    // Check if she has enough money for the vacation
    if (profit >= vacationCost)
    {
        double moneyLeft = profit - vacationCost;
        cout << fixed << setprecision(2) << "Yes! " << moneyLeft << " lv left." << endl;
    }
    else
    {
        double moneyNeeded = vacationCost - profit;
        cout << fixed << setprecision(2) << "Not enough money! " << moneyNeeded << " lv needed." << endl;
    }

    return 0;
}
