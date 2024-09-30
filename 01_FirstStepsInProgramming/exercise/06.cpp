#include <iostream>
using namespace std;

int main()
{
    // Material quantities input
    int nylon, paint, paintSeparator, laborHours;
    cin >> nylon >> paint >> paintSeparator >> laborHours;

    // Prices
    constexpr double pricePerNylon = 1.5;
    constexpr double pricePerPaint = 14.5; // per liter
    constexpr double pricePerPaintSeparator = 5.0; // per liter
    constexpr double laborRate = 0.3; // percent of total cost per hour

    // Extra materials
    const double extraNylon = 2;
    const double extraPaintPercentage = 0.1; // per liter
    const double bags = 0.4;

    // Total cost before labor
    const double nylonCost = (nylon + extraNylon) * pricePerNylon;
    const double paintCost = (paint + extraPaintPercentage * paint) * pricePerPaint;
    const double paintSeparatorCost = paintSeparator * pricePerPaintSeparator;

    const double totalCostBeforeLabor = nylonCost + paintCost + paintSeparatorCost + bags;

    // Labor cost
    const double laborCost = (totalCostBeforeLabor * laborRate) * laborHours;

    // Total cost
    const double totalCost = totalCostBeforeLabor + laborCost;

    // Output
    cout << totalCost << endl;

    return 0;
}
