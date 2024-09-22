#include <iostream>
using namespace std;

/*int main() {
    int arr[] = {1, 2, 3, 4, 2, 3, 5}; // Example array
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Duplicates in the array are: ";

    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                cout << arr[i] << " ";
                break; // Stop checking after finding a duplicate
            }
        }
    }

    cout << endl;
    return 0;
}*/
int main () {
    int arr[] = {1, 25, 64, 88, 43, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int max = *arr;
    for (int i = 0; i < size; i++) {
        if (*(arr + i) > max) {
            max = *(arr + i);
        }
    }
    cout << "The maximum of the array is "<< max << ".";

    return 0;
} 