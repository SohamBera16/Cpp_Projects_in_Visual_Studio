#include <iostream>
using namespace std;

//Finding out the average of 3 grades entered by the user

int main()
{
    float grade, sum = 0, average;
    for (int i = 0; i < 3; i++) {
        do {
            cout << "Enter the grade " << i+1 << endl;
            cin >> grade;

        } while (grade <1 || grade>4);
        sum += grade;
        
    }
    average = sum / 3;
    cout << "the sum is : " << sum << endl;
    cout << "the average is: " << average << endl;
    system("pause>0");
}
