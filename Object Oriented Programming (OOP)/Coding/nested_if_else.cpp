#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter the numbers to be compared : " << endl;
    cin >> a >> b >> c;
    if (a < b) { //* if-else statement
        if (c < b) { //^ nested if-else statement
            cout << "b is greatest.";
        }
        else {
            cout << "c is greatest.";
        }
    }
    else {
        if (c < a) { //^ nested if-else statement
            cout << "a is greatest.";
        }
        else {
            cout << "c is greatest.";
        }
    }
}