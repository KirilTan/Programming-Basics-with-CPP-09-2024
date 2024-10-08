#include <iostream>
using namespace std;

int main()
{
    string product;
    cin >> product;

    string category = "unknown";
    if (product == "banana" || product == "apple" || product == "kiwi" || product == "cherry" ||
        product == "lemon" || product == "grapes")
        category = "fruit";
    else if (product == "tomato" || product == "cucumber" || product == "pepper" || product == "carrot")
        category = "vegetable";

    cout << category << endl;

    return 0;
}
