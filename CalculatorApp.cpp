#include <iostream>
using namespace std;

int main()
{
	float num1, num2;
	char operation;
	cout << "Welcome to Soham's calculator!" << endl;
	cin >> num1 >> operation >> num2;

	switch (operation)
	{
	case '+':
		cout << num1 + num2 << endl;
		break;
	case '-':
		cout << num1 - num2 << endl; break;
		break;
	case '*':
		cout << num1 * num2 << endl; break;
	case '/':
		cout << num1 / num2 << endl; break;
	case '%':
		bool isNum1Int, isNum2Int;
		isNum1Int = ((int)num1 == num1);
		isNum2Int = ((int)num2 == num2);
		if (isNum1Int && isNum2Int)
			cout << (int)num1 % (int)num2 << endl;
		else
			cout << "Invalid calculation!" << endl;
		break;
	default:
		cout << "Not a valid operation!" << endl; //break; if needed 
	}
}
