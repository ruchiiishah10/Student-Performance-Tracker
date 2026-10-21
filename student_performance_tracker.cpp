#include <iostream>
#include <string>
using namespace std;

struct Student {
    int rollNo;
    string name;
    float marks;
};

int main() {
    Student students[100];
    int n = 0, choice;

    do {
        cout << "\n===== Student Performance Tracker =====\n";
        cout << "1. Add Student Record\n";
        cout << "2. Display All Records\n";
        cout << "3. Search Student by Roll Number\n";
        cout << "4. Find Highest Marks\n";
        cout << "5. Sort Students by Marks (Descending)\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            if (n < 100) {
                cout << "Enter roll number: ";
                cin >> students[n].rollNo;
                cout << "Enter student name (one word): ";
                cin >> students[n].name;
                cout << "Enter marks: ";
                cin >> students[n].marks;
                n++;
                cout << "Student record added successfully.\n";
            } else {
                cout << "Student record limit reached.\n";
            }
            break;

        case 2:
            if (n == 0) {
                cout << "No student records available.\n";
            } else {
                for (int i = 0; i < n; i++) {
                    cout << "Roll Number: " << students[i].rollNo
                         << ", Name: " << students[i].name
                         << ", Marks: " << students[i].marks << '\n';
                }
            }
            break;

        case 3: {
            int searchRoll;
            bool found = false;
            cout << "Enter roll number to search: ";
            cin >> searchRoll;
            for (int i = 0; i < n; i++) {
                if (students[i].rollNo == searchRoll) {
                    cout << "Student found: " << students[i].name
                         << ", Marks: " << students[i].marks << '\n';
                    found = true;
                    break;
                }
            }
            if (!found) cout << "Student not found.\n";
            break;
        }

        case 4:
            if (n == 0) {
                cout << "No student records available.\n";
            } else {
                int highestIndex = 0;
                for (int i = 1; i < n; i++) {
                    if (students[i].marks > students[highestIndex].marks)
                        highestIndex = i;
                }
                cout << "Highest marks: " << students[highestIndex].name
                     << " - " << students[highestIndex].marks << '\n';
            }
            break;

        case 5:
            for (int i = 0; i < n - 1; i++) {
                for (int j = 0; j < n - i - 1; j++) {
                    if (students[j].marks < students[j + 1].marks) {
                        Student temp = students[j];
                        students[j] = students[j + 1];
                        students[j + 1] = temp;
                    }
                }
            }
            cout << "Students sorted by marks in descending order.\n";
            break;

        case 6:
            cout << "Exiting Student Performance Tracker. Goodbye!\n";
            break;

        default:
            cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 6);

    return 0;
}
