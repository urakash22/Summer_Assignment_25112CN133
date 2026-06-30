#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, i, choice, roll, found = -1;

    cout << "Enter number of students: ";
    cin >> n;

    int Roll[100];
    string Name[100];
    float Marks[100];

    for(i = 0; i < n; i++)
    {
        cout << "\nEnter details of Student " << i + 1 << endl;

        cout << "Roll No: ";
        cin >> Roll[i];

        cin.ignore();

        cout << "Name: ";
        getline(cin, Name[i]);

        cout << "Marks: ";
        cin >> Marks[i];
    }

    do
    {
        cout << "\n===== STUDENT RECORD MENU =====";
        cout << "\n1. Display All Records";
        cout << "\n2. Search Student by Roll No";
        cout << "\n3. Update Marks";
        cout << "\n4. Exit";

        cout << "\nEnter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "\nStudent Records\n";
                cout << "-------------------------------------------\n";
                cout << "Roll\tName\t\tMarks\n";

                for(i = 0; i < n; i++)
                {
                    cout << Roll[i] << "\t"
                         << Name[i] << "\t\t"
                         << Marks[i] << endl;
                }
                break;

            case 2:
                cout << "Enter Roll Number: ";
                cin >> roll;

                found = -1;

                for(i = 0; i < n; i++)
                {
                    if(Roll[i] == roll)
                    {
                        found = i;
                        break;
                    }
                }

                if(found != -1)
                {
                    cout << "\nStudent Found\n";
                    cout << "Roll No : " << Roll[found] << endl;
                    cout << "Name    : " << Name[found] << endl;
                    cout << "Marks   : " << Marks[found] << endl;
                }
                else
                {
                    cout << "Student Not Found!" << endl;
                }
                break;

            case 3:
                cout << "Enter Roll Number: ";
                cin >> roll;

                found = -1;

                for(i = 0; i < n; i++)
                {
                    if(Roll[i] == roll)
                    {
                        found = i;
                        break;
                    }
                }

                if(found != -1)
                {
                    cout << "Enter New Marks: ";
                    cin >> Marks[found];

                    cout << "Record Updated Successfully!" << endl;
                }
                else
                {
                    cout << "Student Not Found!" << endl;
                }
                break;

            case 4:
                cout << "Program Exited!" << endl;
                break;

            default:
                cout << "Invalid Choice!" << endl;
        }

    } while(choice != 4);

    return 0;
}