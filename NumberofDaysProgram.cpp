# The program calculates the number of days in a certain month of a year
#include <iostream>
using namespace std;

int main()
{
    //formula for calculating leapyear: (year % 4==0 && year%100 != 0 || year % 400 ==0)
    int year, month;
    cout << "Enter year and month: " << endl;
    cin >> year >> month;

    switch (month)
    {
    case 2: (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) ?
        cout << "29 Days month" : cout << "28 days month"; break;
    case 4:
    case 6:
    case 9:
    case 11: cout << "30 days month"; break;

    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12: cout << "31 days month"; break;

    default: cout << "Not a valid month"; break;

    }
    system("pause>0");
}

