# include<iostream>
using namespace std;

int main() 
/*    //^ Pointers are special type of variables that stores the address of another variable.
{
    int x = 14;
    int *p = &x; //! & sign is used for determining the address of a variable.
    cout << "The address of variable x=14 is: " << p << endl;
    cout << *p; //* * is derefrence operator.
}
*/

{
    int x = 65;
    int *p1 = &x;
    int *p2;
    p2 = p1;
    cout << "The address of p1 pointer is: " << p1 << endl;
    cout << "The address of p2 pointer is: " << p2 << endl << endl;
    cout << "The value of variable stored in p1 is: "<< *p1 << endl;
    cout << "The value of variable stored in p2 is: "<< *p2;
}
