#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++) {
        // Print spaces
        for(int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        // Print characters
        for(int j = 1; j <= 2 * i - 1; j++) {
            cout << char('A' + i - 1);
        }

        cout << endl;
    }

    return 0;
}