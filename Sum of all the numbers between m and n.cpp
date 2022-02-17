
#include <iostream>
using namespace std;

//sum numbers between m and n

int recursiveSum(int m, int n) {
	if (m == n) //base case - must have to avoid infinite loop
		return m;
	return m + recursiveSum(m + 1, n);
}

int main()
{
	int m = 1, n = 20; // m and n can also be taken from user 
	cout << "Sum= " << recursiveSum(m, n); //invoking recursive function
	
	/*int sum = 0;
	for (int i = m; i <= n; i++) {
		sum += i;
	}
	cout << "sum = " << sum << endl;*/
}
