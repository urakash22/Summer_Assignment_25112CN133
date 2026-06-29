#include <iostream>
using namespace std;

struct Book
{
    int bookId;
    string title;
    string author;
};

int main()
{
    Book b[100];
    int n = 0, choice;

    do
    {
        cout << "\n===== Library Management System =====";
        cout << "\n1. Add Book";
        cout << "\n2. Display Books";
        cout << "\n3. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "\nEnter Book ID: ";
            cin >> b[n].bookId;

            cout << "Enter Book Title: ";
            cin >> b[n].title;

            cout << "Enter Author Name: ";
            cin >> b[n].author;

            n++;

            cout << "Book added successfully!\n";
            break;

        case 2:
            if (n == 0)
            {
                cout << "\nNo books available.\n";
            }
            else
            {
                cout << "\n===== Book List =====\n";
                for (int i = 0; i < n; i++)
                {
                    cout << "\nBook " << i + 1 << endl;
                    cout << "Book ID : " << b[i].bookId << endl;
                    cout << "Title   : " << b[i].title << endl;
                    cout << "Author  : " << b[i].author << endl;
                }
            }
            break;

        case 3:
            cout << "\nThank you! Exiting Library Management System.\n";
            break;

        default:
            cout << "\nInvalid choice! Please try again.\n";
        }

    } while (choice != 3);

    return 0;
}