#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter the values of a and b respectively, " << endl;
    cin >> a >> b;
    if (a < b) {
        cout << "a is less than b.";
    }
    else if (a > b) {
        cout << "a is greater than b.";
    }
    else {
        cout << "Both a and b are equal.";
    }
}