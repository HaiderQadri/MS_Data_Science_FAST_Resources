#include <iostream>
using namespace std;

int main () {
    // size of the array
    int X, Y, Z;
    cout << "Enter the values of X, Y and Z: ";
    cin >> X >> Y >> Z;

    // memory allocation in the heap memory
    int ***ThreeDArray = new int**[X];
    for (int i = 0; i < X; i++) {
        ThreeDArray[i] = new int*[Y];
        for (int j = 0; j < Y; j++) {
            ThreeDArray[i][j] = new int[Z];
        }
    }

    // assign values to 3D array
    for (int i = 0; i < X; i++) {
        for (int j = 0; j < Y; j++) {
            for (int k = 0; k < Z; k++)
                ThreeDArray[i][j][k] = rand() % 100;
        }
    }

    // print 3D array
    for (int i = 0; i < X; i++) {
        for (int j = 0; j < Y; j++) {
            for (int k = 0; k < Z; k++)
                cout << ThreeDArray[i][j][k] << " ";
                cout << endl;
        }
        cout << endl;
    }

    // deallocate heap memory
    for (int i = 0; i < X; i++) {
        for (int j = 0; j< Y; j++) {
            delete[] ThreeDArray[i][j];
        }
        delete[] ThreeDArray[i];
    }
    delete[] ThreeDArray;

    return 0;
}