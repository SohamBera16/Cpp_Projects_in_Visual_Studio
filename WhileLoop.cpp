#include <iostream>
using namespace std;

int main()
{
    int counter = 100;

    while (counter <= 500)
    {
        if (counter % 3 == 0 && counter % 5 == 0)
            cout << counter << " is divisible by 3 and 5" << endl;

        counter++; // not putting this condition is gonna crash the program! Infinite Loop alert!
    }
}
