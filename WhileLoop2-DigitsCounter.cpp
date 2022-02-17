#include <iostream>
using namespace std;

int main()
{
    //count digits in a number
    int number;
    cout << "enter the  number: " << endl;
    cin >> number;

    if (number == 0)
        cout << "The number  is 0" << endl;
    else {

        if (number < 0)
            number = abs(number); // or, number = (-1) * number;
        int counter = 0;
        while (number > 0)
        {
            //number = number / 10;
            number /= 10;
            counter++;
        }
        cout << "the number contains " << counter << " digits \n";
    }

}

