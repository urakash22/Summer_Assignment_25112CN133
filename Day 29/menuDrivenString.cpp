#include <iostream>
using namespace std;

int main()
{
    char str[100], temp[100];
    int choice, i, len;

    cout << "Enter a string: ";
    cin.getline(str, 100);

    do
    {
        cout << "\n===== STRING MENU =====";
        cout << "\n1. Display String";
        cout << "\n2. Find Length";
        cout << "\n3. Reverse String";
        cout << "\n4. Convert to Uppercase";
        cout << "\n5. Convert to Lowercase";
        cout << "\n6. Copy String";
        cout << "\n7. Exit";

        cout << "\nEnter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "String: " << str;
                break;

            case 2:
                len = 0;
                while(str[len] != '\0')
                    len++;

                cout << "Length = " << len;
                break;

            case 3:
                len = 0;
                while(str[len] != '\0')
                    len++;

                cout << "Reversed String: ";
                for(i = len - 1; i >= 0; i--)
                    cout << str[i];
                break;

            case 4:
                for(i = 0; str[i] != '\0'; i++)
                {
                    if(str[i] >= 'a' && str[i] <= 'z')
                        str[i] = str[i] - 32;
                }
                cout << "Uppercase String: " << str;
                break;

            case 5:
                for(i = 0; str[i] != '\0'; i++)
                {
                    if(str[i] >= 'A' && str[i] <= 'Z')
                        str[i] = str[i] + 32;
                }
                cout << "Lowercase String: " << str;
                break;

            case 6:
                for(i = 0; str[i] != '\0'; i++)
                    temp[i] = str[i];

                temp[i] = '\0';

                cout << "Copied String: " << temp;
                break;

            case 7:
                cout << "Program Exited!";
                break;

            default:
                cout << "Invalid Choice!";
        }

    } while(choice != 7);

    return 0;
}