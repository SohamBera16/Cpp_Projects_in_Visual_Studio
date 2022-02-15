#include <iostream>
using namespace std;

//factorial of a number

int main()
{
    int number, factorial = 1;
    cout << "Enter the number : \n";
    cin >> number;

    if (number < 0)
        cout << "The number is invalid!\n";
    else if (number == 0)
        cout << "the factorial is 1\n";
        else {

        for (int i = 1; i <= number; i++)//declaration & initialization,boundary condition,looping parameter
        //or, for(int i = number; i > 0; i--)

            {
            factorial = factorial * i;
            
            }
        cout << "The factorial of the number " << number << "is: " << factorial << endl;
    }
}
