#include <iostream>
using namespace std;

int main()
{
    // The architect <name> will need <projects * 3> hours to complete <projects> project/s.

    string name;
    cin >> name;

    int projects;
    cin >> projects;

    cout << "The architect " << name << " will need " << projects * 3 << " hours to complete " << projects << " project/s." << endl;
    return 0;
}