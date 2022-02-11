#include <iostream>
using namespace std;

int main()
{
    // encrypting
    char c1, c2, c3, c4, c5;
    cout << "Enter 5 letters " << endl;
    cin >> c1 >> c2 >> c3 >> c4 >> c5;
    cout << " ASCII messsage: " << int(c1) << " " << int(c2) << " " << int(c3) << " " << int(c4) << " "
        << int(c5);

    // deciphering 
    int i1, i2, i3, i4, i5;
    cout << "enter 5 numbers: " << endl;
    cin >> i1 >> i2 >> i3 >> i4 >> i5;
    cout << "encrypted message: "<< char(i1) << " " << char(i2) << " " << char(i3) << " " << char(i4) 
        << " " << char(i5) << endl;
    system("pause>0");
    
}

