#include <iostream>
using namespace std;

int main()
{
    int number;
    cin >> number;

    bool isValid = ((100 <= number && number <= 200) || number == 0);
    if (!isValid)
        cout << "invalid" << endl;

    return 0;
}
