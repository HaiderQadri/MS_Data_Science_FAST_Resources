#include <iostream>
using namespace std;

int main()
{
    int a = 20, b = 3;
    cout << "\n The sum of a and b is : "<< a+b;
    cout << "\n The difference of a and b is : "<< a-b;
    cout << "\n The multiplication of a and b is : "<< a*b;
    cout << "\n The division of a and b is : "<< a/b;
    cout << "\n The modulus operator of a and b is : "<< a%b << endl; //? modulus operator gives the remainder after division

    //! It it is important to note that if we take two integers then we will get only int value after division. Let's see an example below
    float c = 20.0, d = 3.0;
    cout << "\n The division of float c and d is : "<< c/d << endl << endl;

    //^ You can see then when a=20 and b=3 were int we get a/b = 6 but, when c=20.0 and d=3.0 were float we get c/d = 6.66667.
}
