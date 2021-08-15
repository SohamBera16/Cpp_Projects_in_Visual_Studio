
#include <iostream>
using namespace std;

int main()
{
	float weight, height, bmi;
	cout << "Enter your weight in Kgs and height in meters" << endl;
	cin >> weight >> height;
	bmi = weight / (height * height);

	if (bmi < 18.5)
		    cout << "You are underweight" << endl;
	else if (bmi > 25)
			cout << "you are overweight" << endl;
	else
	        cout << "you are of normal weight" << endl;

	cout << "your bmi is " << bmi << endl;
	
}

