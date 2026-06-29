#include <iostream>
using namespace std;

struct Student
{
    int rollNo;
    string name;
    float marks;
};

int main()
{
    Student s[100];
    int n = 0, choice;

    do
    {
        cout << "\n===== Student Management System =====";
        cout << "\n1. Add Student";
        cout << "\n2. Display Students";
        cout << "\n3. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "\nEnter Roll Number: ";
            cin >> s[n].rollNo;

            cout << "Enter Name: ";
            cin >> s[n].name;

            cout << "Enter Marks: ";
            cin >> s[n].marks;

            n++;
            cout << "Student added successfully!\n";
            break;

        case 2:
            if (n == 0)
            {
                cout << "\nNo student records found.\n";
            }
            else
            {
                cout << "\n----- Student Records -----\n";
                for (int i = 0; i < n; i++)
                {
                    cout << "\nStudent " << i + 1 << endl;
                    cout << "Roll No : " << s[i].rollNo << endl;
                    cout << "Name    : " << s[i].name << endl;
                    cout << "Marks   : " << s[i].marks << endl;
                }
            }
            break;

        case 3:
            cout << "\nExiting program...";
            break;

        default:
            cout << "\nInvalid choice!";
        }

    } while (choice != 3);

    return 0;
}