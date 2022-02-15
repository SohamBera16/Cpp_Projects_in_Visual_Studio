
#include <iostream>
using namespace std;

//function overloading

int sum(int a, int b);
double sum(double a, double b);
float sum(float a, float b, float c);

int main()
{
    cout << sum(5, 7) << endl;
    cout << sum(529.62292, 638.72442) << endl;
    cout << sum(2.3, 4.5, 1.6) << endl;
}

int sum(int  a, int b) {
    return a + b;
}
double sum(double a, double b) {
    return a + b;
}
float sum(float a, float b,float c) {
    return a + b + c;
}
