#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int length;
    cout << "length: \n";
    cin >> length;
    char symbol;
    cout << "symbol: \n";
    cin >> symbol;

    for (int i = 1; i <= length; i++) {
        for (int j = 1; j <= i; j++) {
            cout << setw(2) << symbol;

        } 
        cout << endl;
    }

    cout << endl << endl;

    //Reverse triangle

    /* or, for (int i = length; i >= 1; i--) {
        for (int j = 1; j <= i; j++)*/


    for (int i = 1; i <= length ; i++) {
        for (int j = length ; j >= i ; j--) {
            cout << setw(2) << symbol;

        }
        cout << endl;
    }
}
