#include <iostream>
#include <iomanip> //for getting better formatting functions
using namespace std;

int main()
{
    int height, width;
    char character;
    cout << "enter height and width: " << endl;
    cin >> height >> width;
    cout << "enter the symbol " << endl;
    cin >> character;

    for (int h = 0; h < height; h++) {
        for (int w = 0; w < width; w++) {
            cout << setw(3) << character; // setw sets the gap between two symbol in the matrix
        }
        cout << endl;
    }
}
