#include <iostream>
using namespace std;

int main()
{
    // Prices
    constexpr double priceShoesPercentYearlySubscription = 0.6;
    constexpr double priceClothesPercentShoesCost = 0.8;
    constexpr double priceBallPercentClothesCost = 0.25;
    constexpr double costAccessoriesPercentBallCost = 0.2;

    // Yearly subscription cost input
    double yearlySubscriptionCost;
    cin >> yearlySubscriptionCost;

    // Total cost calculation
    const double shoesCost = yearlySubscriptionCost * priceShoesPercentYearlySubscription;
    const double clothesCost = shoesCost * priceClothesPercentShoesCost;
    const double ballCost = clothesCost * priceBallPercentClothesCost;
    const double accessoriesCost = ballCost * costAccessoriesPercentBallCost;

    const double totalCost = yearlySubscriptionCost + shoesCost + clothesCost + ballCost + accessoriesCost;

    // Output
    cout << totalCost << endl;

    return 0;
}