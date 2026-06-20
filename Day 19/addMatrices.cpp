#include <iostream>
using namespace std;

int main() {
    int row, col;

    cout << "Enter number of rows and columns: ";
    cin >> row >> col;

    int A[row][col], B[row][col], Sum[row][col];

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

    // Matrix Addition
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            Sum[i][j] = A[i][j] + B[i][j];
        }
    }

    cout << "Sum of matrices:\n";
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            cout << Sum[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}