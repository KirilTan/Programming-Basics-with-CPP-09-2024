#include <iostream>
using namespace std;

int main()
{
    // Prices
    constexpr double priceChickenMenu = 10.35;
    constexpr double priceFishMenu = 12.40;
    constexpr double priceVegetarianMenu = 8.15;
    constexpr double desertCostPercentTotalBill = 0.2; // 20% of the total bill
    constexpr double deliveryFee = 2.50; // Added last

    // Quantity input
    int qtyChickenMenu, qtyFishMenu, qtyVegetarianMenu;
    cin >> qtyChickenMenu >> qtyFishMenu >> qtyVegetarianMenu;

    // Subtotal calculation
    const  double costChickenMenu = priceChickenMenu * qtyChickenMenu;
    const double costFishMenu = priceFishMenu * qtyFishMenu;
    const double costVegetarianMenu = priceVegetarianMenu * qtyVegetarianMenu;
    const double subtotal = costChickenMenu + costFishMenu + costVegetarianMenu;

    // Desert cost calculation
    const double desertCost = subtotal * desertCostPercentTotalBill;

    // Total bill calculation with delivery fee
    const double totalBill = subtotal + desertCost + deliveryFee;

    // Output
    cout << totalBill << endl;

    return 0;
}