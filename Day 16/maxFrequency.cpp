#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 2, 4, 2, 5, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    int maxFreq = 0;
    int element;

    for (int i = 0; i < n; i++) {
        int count = 0;

        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        if (count > maxFreq) {
            maxFreq = count;
            element = arr[i];
        }
    }

    cout << "Maximum Frequency Element = " << element << endl;
    cout << "Frequency = " << maxFreq << endl;

    return 0;
}