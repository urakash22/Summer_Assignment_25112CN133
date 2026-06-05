// The largest Prime factor of a number n is the biggest prime number that divides n exactly.
// For n = 84
// Prime Factorisation --- 84 = 2*2*3*7
// The Prime Factor = 2,3,7
// Largest Prime Factors = 7
// *** APPROACH ***
// Start with factor = 2.
// While factor * factor <= n:
// If n is divisible by factor, divide n by factor.
// Otherwise, increment factor.
// After the loop:
// The remaining value of n is the largest prime factor.

#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;

    long long largest = -1;

    while (n % 2 == 0) {
        largest = 2;
        n /= 2;
    }

    for (long long i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            largest = i;
            n /= i;
        }
    }

    if (n > 2)
        largest = n;

    cout << "Largest Prime Factor = " << largest;

    return 0;
}
