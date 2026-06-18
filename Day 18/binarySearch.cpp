#include <iostream>
using namespace std;

int main() {
    int n, key;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cin >> key;

    int start = 0, end = n - 1;

    while(start <= end) {
        int mid = start + (end - start) / 2;

        if(arr[mid] == key) {
            cout << "Element found at index " << mid;
            return 0;
        }
        else if(arr[mid] < key) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }

    cout << "Element not found";

    return 0;
}
