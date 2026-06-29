#include <iostream>
using namespace std;

int main()
{
    int accountNo, choice;
    string name;
    float balance = 0, amount;

    cout << "===== Bank Account System =====\n";

    cout << "Enter Account Number: ";
    cin >> accountNo;

    cout << "Enter Account Holder Name: ";
    cin >> name;

    do
    {
        cout << "\n===== MENU =====";
        cout << "\n1. Deposit";
        cout << "\n2. Withdraw";
        cout << "\n3. Display Account";
        cout << "\n4. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter Deposit Amount: ";
            cin >> amount;
            balance += amount;
            cout << "Amount Deposited Successfully!\n";
            break;

        case 2:
            cout << "Enter Withdraw Amount: ";
            cin >> amount;

            if (amount <= balance)
            {
                balance -= amount;
                cout << "Amount Withdrawn Successfully!\n";
            }
            else
            {
                cout << "Insufficient Balance!\n";
            }
            break;

        case 3:
            cout << "\n===== Account Details =====\n";
            cout << "Account Number : " << accountNo << endl;
            cout << "Account Holder : " << name << endl;
            cout << "Current Balance: " << balance << endl;
            break;

        case 4:
            cout << "Thank You! Visit Again.\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while (choice != 4);

    return 0;
}