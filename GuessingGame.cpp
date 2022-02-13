#include <iostream>
using namespace std;

int main()
{
    int hostUserNum, guestUsernum;
    cout << "Enter the host user number" << endl;
    cin >> hostUserNum;
    system("cls");
    cout << "Enter the guest user number" << endl;
    cin >> guestUsernum;

    (hostUserNum == guestUsernum) ? cout << "passed!" : cout << "failed!"; //ternary operator

    /*if (hostUserNum == guestUsernum)
        cout << "passed!" << endl;
    else
        cout << "failed!" << endl;*/

    system("pause>0");


}

