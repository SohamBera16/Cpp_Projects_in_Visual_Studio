#include <iostream>
using namespace std;

int main()
{
	// check whether a triangle is equilateral, isosceles or scalene
	cout << "enter the three sides of the triangle: " << endl;
	float a, b, c;
	cin >> a >> b >> c;
	if (a == b && b == c)
		cout << "The triangle is equilateral" << endl;
	else
		if (a != b && b != c && c != a)
			cout << "the triangle is scalene";
		else
			cout << "the triangle is isosceles";

	system("pause>0");
}


