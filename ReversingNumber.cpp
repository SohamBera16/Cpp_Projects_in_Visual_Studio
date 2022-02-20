#include <iostream>
using namespace std;

//program to reverse number

int main()
{
    int number, reversedNumber=0;
    cout << "enter the number" << endl;
    cin >> number;

    while (number != 0)
    {
        reversedNumber *= 10;
        reversedNumber += (number % 10);//int lastDigit = number % 10,get the lastDigit of the number
                                        //and add to the reversedNumber
        number /= 10;

    }
    cout << "the reversed number is " << reversedNumber << "\n";
    system("pause>0");

}
