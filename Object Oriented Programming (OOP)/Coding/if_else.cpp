#include <iostream>
using namespace std;

int main() //* Write a program to check that if student passed the examination or not
{
    int marks;
    cout << "Enter the marks of the student: ";
    cin >> marks;
    if (marks >= 50) {
        cout << "Student has passed the examination.";
    } 
    
    else {
        cout << "Student failed in the examination.";
    }
}