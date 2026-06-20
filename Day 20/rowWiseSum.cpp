#include <iostream>
using namespace std;

int main() {
    int row, col;

    cout << "Enter number of rows and columns: ";
    cin >> row >> col;

    int A[row][col];

    cout << "Enter matrix elements:\n";
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            cin >> A[i][j];
        }
    }

    cout << "\nRow-wise Sum:\n";

    for(int i = 0; i < row; i++) {
        int sum = 0;

        for(int j = 0; j < col; j++) {
            sum += A[i][j];
        }

        cout << "Sum of Row " << i + 1 << " = " << sum << endl;
    }

    return 0;
}