#include <iostream>
using namespace std;

int main()
{
    string name;
    cin >> name;

    string surname;
    cin >> surname;

    int age;
    cin >> age;

    string city;
    cin >> city;

    cout << "You are " << name << " " << surname << ", a " << age << "-years old person from " << city << "." << endl;
    return 0;
}