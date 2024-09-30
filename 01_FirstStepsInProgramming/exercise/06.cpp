#include <iostream>
using namespace std;

int main()
{
    // Material quantities input
    int nylon, paint, paintSeparator, laborHours;
    cin >> nylon >> paint >> paintSeparator >> laborHours;

    // Prices
    double pricePerNylon = 1.5;
    double pricePerPaint = 14.5; // per liter
    double pricePerPaintSeparator = 5.0; // per liter
    double laborRate = 0.3; // percent of total cost per hour

    // Extra materials
    double extraNylon = 2;
    double extraPaintPercentage = 0.1; // per liter
    double bags = 0.4;

    // Total cost before labor
    double nylonCost = (nylon + extraNylon) * pricePerNylon;
    double paintCost = (paint + extraPaintPercentage * paint) * pricePerPaint;
    double paintSeparatorCost = paintSeparator * pricePerPaintSeparator;

    double totalCostBeforeLabor = nylonCost + paintCost + paintSeparatorCost + bags;

    // Labor cost
    double laborCost = (totalCostBeforeLabor * laborRate) * laborHours;

    // Total cost
    double totalCost = totalCostBeforeLabor + laborCost;

    // Output
    cout << totalCost << endl;

    return 0;
}
