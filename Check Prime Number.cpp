
#include <iostream>
using namespace std;

bool isPrimeNumber(int number) {

    bool isPrimeflag = true;
    for (int i = 2; i < number; i++) {

        if (number % i == 0) 
            return false;
    }
    return isPrimeflag;
}

int main()
{
    int number;
    cout << "enter a number" << endl;
    cin >> number;

    /*bool isPrimeflag = true;
    for (int i = 2; i < number; i++) {
        
        if (number % i == 0) {
            isPrimeflag = false;
            break;
        }
     }*/

    bool isPrimeflag = isPrimeNumber(number);

    if (isPrimeflag)
        cout << "The number is prime number";
    else
        cout << "number is not a prime number";

    //to get all the prime numbers between 1 and the given number 

    for (int i = 1; i <= number; i++) {
        bool isPrime = isPrimeNumber(i);

        if (isPrime)
            cout << i << " is prime number" << endl;
    }
}
