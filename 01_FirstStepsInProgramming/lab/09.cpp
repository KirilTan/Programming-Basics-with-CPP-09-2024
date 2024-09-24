#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double pricePerMeterWithVAT = 7.61;
    double discountPercentage = 0.18;

    double area;
    cin >> area;

    double totalPrice = area * pricePerMeterWithVAT;
    double discountAmount = totalPrice * discountPercentage;
    double finalPrice = totalPrice - discountAmount;

    cout << fixed << setprecision(2);

    cout << "The final price is: " << finalPrice <<" lv." << endl;
    cout << "The discount is: " << discountAmount <<" lv." << endl;

    return 0;
}
