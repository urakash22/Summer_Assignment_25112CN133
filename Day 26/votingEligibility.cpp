#include <iostream>
using namespace std;

int main()
{
    int age;

    cout << "Enter your age: ";
    cin >> age;

    if (age < 0)
    {
        cout << "Invalid age!";
    }
    else if (age >= 18)
    {
        cout << "Eligible for voting.";
    }
    else
    {
        cout << "Not eligible for voting.";
    }

    return 0;
}