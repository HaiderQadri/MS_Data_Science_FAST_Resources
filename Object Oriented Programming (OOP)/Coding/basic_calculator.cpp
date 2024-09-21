#include <iostream>
using namespace std;

int main()
{
    cout << "Enter + for Addition" << endl;
    cout << "Enter - for Subtraction" << endl;
    cout << "Enter * for Multiplication" << endl;
    cout << "Enter / for Division" << endl << endl;
    int a, b, r;
    char c;
    cout << "Enter the First number: ";
    cin >> a;
    cout << "Enter the Second number: ";
    cin >> b;
    cout << "Enter the Operator: ";
    cin >> c;
    if (c == '+')
    {
        r = a + b;
        cout << "The Sum of two numbers is: " << r; 
    }
    else if (c == '-')
    {
        r = a - b;
        cout << "The Difference of two numbers is: " << r; 
    }
    else if (c == '*')
    {
        r = a * b;
        cout << "The Product of two numbers is: " << r; 
    }
    else if (c == '/')
    {
        r = a / b;
        cout << "The Division of two numbers is: " << r; 
    }
    else 
    {
        cout << "Invalid Operator!";
    }
}