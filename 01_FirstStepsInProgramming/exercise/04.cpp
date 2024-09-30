#include <iostream>
using namespace std;

int main()
{
    int totalPages, readingSpeed, daysToComplete;
    cin >> totalPages >> readingSpeed >> daysToComplete;

    const int pagesPerDay = (totalPages / readingSpeed) / daysToComplete;

    cout << pagesPerDay << endl;

    return 0;
}