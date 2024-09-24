#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int dogFoodPackages, catFoodPackages;
    double dogFoodPrice = 2.5;
    double catFoodPrice = 4.0;

    cin >> dogFoodPackages;
    cin >> catFoodPackages;

    double totalCost = (dogFoodPackages * dogFoodPrice) + (catFoodPackages * catFoodPrice);

    cout << fixed << setprecision(2);
    cout << totalCost << " lv." << endl;

    return 0;
}
