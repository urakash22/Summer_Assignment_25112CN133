#include <iostream>
using namespace std;

int main() {
    int row, col;

    cout << "Enter number of rows and columns: ";
    cin >> row >> col;

    int A[row][col], B[row][col], Sub[row][col];

    cout << "Enter elements of first matrix:\n";
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            cin >> A[i][j];
        }
    }

    cout << "Enter elements of second matrix:\n";
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            cin >> B[i][j];
        }
    }

    // Matrix Subtraction
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            Sub[i][j] = A[i][j] - B[i][j];
        }
    }

    cout << "Subtraction of matrices:\n";
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            cout << Sub[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}