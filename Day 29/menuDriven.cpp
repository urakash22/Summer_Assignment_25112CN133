#include <iostream>
using namespace std;

int main()
{
    int choice;
    float num1, num2;

    do
    {
        cout << "\n===== MENU DRIVEN CALCULATOR =====";
        cout << "\n1. Addition";
        cout << "\n2. Subtraction";
        cout << "\n3. Multiplication";
        cout << "\n4. Division";
        cout << "\n5. Exit";

        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            cout << "Addition = " << num1 + num2 << endl;
            break;

        case 2:
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            cout << "Subtraction = " << num1 - num2 << endl;
            break;

        case 3:
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            cout << "Multiplication = " << num1 * num2 << endl;
            break;

        case 4:
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;

            if (num2 != 0)
                cout << "Division = " << num1 / num2 << endl;
            else
                cout << "Error! Division by zero is not allowed." << endl;
            break;

        case 5:
            cout << "Exiting Calculator..." << endl;
            break;

        default:
            cout << "Invalid Choice! Please try again." << endl;
        }

    } while (choice != 5);

    return 0;
}