#include <iostream>
using namespace std;

int main()
{
    int arr[100], n, choice, pos, value, i;
    int found;

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter array elements:\n";
    for(i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    do
    {
        cout << "\n===== MENU =====";
        cout << "\n1. Display Array";
        cout << "\n2. Insert Element";
        cout << "\n3. Delete Element";
        cout << "\n4. Search Element";
        cout << "\n5. Find Maximum";
        cout << "\n6. Find Minimum";
        cout << "\n7. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Array Elements: ";
                for(i = 0; i < n; i++)
                    cout << arr[i] << " ";
                cout << endl;
                break;

            case 2:
                cout << "Enter position (1 to " << n + 1 << "): ";
                cin >> pos;
                cout << "Enter value: ";
                cin >> value;

                if(pos < 1 || pos > n + 1)
                {
                    cout << "Invalid Position!";
                }
                else
                {
                    for(i = n; i >= pos; i--)
                        arr[i] = arr[i - 1];

                    arr[pos - 1] = value;
                    n++;

                    cout << "Element Inserted Successfully!";
                }
                break;

            case 3:
                cout << "Enter position to delete (1 to " << n << "): ";
                cin >> pos;

                if(pos < 1 || pos > n)
                {
                    cout << "Invalid Position!";
                }
                else
                {
                    for(i = pos - 1; i < n - 1; i++)
                        arr[i] = arr[i + 1];

                    n--;
                    cout << "Element Deleted Successfully!";
                }
                break;

            case 4:
                cout << "Enter element to search: ";
                cin >> value;

                found = 0;
                for(i = 0; i < n; i++)
                {
                    if(arr[i] == value)
                    {
                        cout << "Element found at position " << i + 1 << endl;
                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    cout << "Element Not Found!";
                break;

            case 5:
            {
                int max = arr[0];
                for(i = 1; i < n; i++)
                {
                    if(arr[i] > max)
                        max = arr[i];
                }
                cout << "Maximum Element = " << max;
                break;
            }

            case 6:
            {
                int min = arr[0];
                for(i = 1; i < n; i++)
                {
                    if(arr[i] < min)
                        min = arr[i];
                }
                cout << "Minimum Element = " << min;
                break;
            }

            case 7:
                cout << "Program Exited!";
                break;

            default:
                cout << "Invalid Choice!";
        }

    } while(choice != 7);

    return 0;
}