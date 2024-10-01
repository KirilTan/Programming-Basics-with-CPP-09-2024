#include <iostream>
using namespace std;

int main()
{
    // Password to check against
    const string passwordNeeded = "s3cr3t!P@ssw0rd";

    // User input
    string userPassword;
    cin >> userPassword;

    // Check if the password matches the required one
    if (userPassword == passwordNeeded)
        cout << "Welcome";
    else
        cout << "Wrong password!";

    return 0;
}