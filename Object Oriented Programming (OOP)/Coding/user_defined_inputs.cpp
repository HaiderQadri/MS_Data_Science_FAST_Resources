#include <iostream>
using namespace std;

int main() //* Take two numbers from the user and add them
{
    int a, b, s;
    cout << "Enter two numbers: "<< endl;
    cin >> a >> b;
    s = a + b;
    cout << "The sum of two numbers "<< a << " and " << b << " is " << s;
}