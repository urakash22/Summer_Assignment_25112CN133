#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 5};
    int n = 5;   // Numbers should be from 1 to 5

    int sum = 0;
    for(int i = 0; i < n - 1; i++) {
        sum += arr[i];
    }

    int expectedSum = n * (n + 1) / 2;
    int missing = expectedSum - sum;

    cout << "Missing Number = " << missing;

    return 0;
}