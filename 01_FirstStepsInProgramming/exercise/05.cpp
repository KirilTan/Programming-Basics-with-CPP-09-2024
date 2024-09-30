#include <iostream>
using namespace std;

int main()
{
    double pricePerPen = 5.80;
    double pricePerMarker = 7.20;
    double pricePerLiterPaint = 1.20;

    int amountPens, amountMarkers, amountLitersPaint, discount;
    cin >> amountPens >> amountMarkers >> amountLitersPaint >> discount;

    double discountPercentage = discount / 100.0;

    const double totalCostPens = amountPens * pricePerPen;
    const double totalCostMarkers = amountMarkers * pricePerMarker;
    const double totalCostPaint = amountLitersPaint * pricePerLiterPaint;

    double totalCostBeforeDiscount = totalCostPens + totalCostMarkers + totalCostPaint;
    double totalCostAfterDiscount = totalCostBeforeDiscount * (1 - discountPercentage);

    cout << totalCostAfterDiscount << endl;

    return 0;
}