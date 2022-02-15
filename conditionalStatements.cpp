#include <iostream>
using namespace std;

int main()
{
    //user enters an integer number
	// program to write out if the number is even or odd 

	int number;
	cout << "Enter a whole number" << endl;
	cin >> number;
	if (number % 2 == 0)
	{
		cout << "The number you have chosen is an even number" << endl;
	}
	else
	{
		cout << "the number is an odd number" << endl;
	}
	system("pause>0");
}

