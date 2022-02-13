#include <iostream>
using namespace std;

int main()
{
    int userPin = 9876, inputPin, errorCounter = 0;

    do {
        cout << "Enter the PIN: " << endl;
        cin >> inputPin;
        if (inputPin != userPin)
            errorCounter++;
        
    } while (errorCounter < 3 && inputPin != userPin);

    if (errorCounter < 3)
        cout << "Application Loading....!" << endl;
    else
        cout << "you are blocked!" << endl;

    system("pause>0");

}
