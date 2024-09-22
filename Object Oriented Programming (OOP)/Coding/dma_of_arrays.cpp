# include <iostream>
using namespace std;

int main() {
    
    // size of the array
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    // memory allocation in heap 
    int *arr = new int[n];

    // insert values in the array
    cout << "Enter the values of the array" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // print the array
    cout << "Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    // deallocate heap memory
    delete[] arr;

    return 0;
}