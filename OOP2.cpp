#include <iostream>
using namespace std;
int MAX_STUDENTS = 50;
class ALLstudents{
    private:
    int rollNumber,div,year,month,day;
    string telephone,drivingLicenseNo,name,className,division,dateOfBirth,bloodGroup,contactAddress;
    static int numStudents;

    public:
    friend class Student;
};
class Student {
    public:
    Student() {
        numStudents++;
    }
    // Copy constructor
    Student( Student& other) {
        rollNumber = other.rollNumber;
        div = other.div;
        year = other.year;
        month = other.month;
        day = other.day;
        telephone = other.telephone;
        drivingLicenseNo = other.drivingLicenseNo;
        name = other.name;
        className = other.className;
        division = other.division;
        dateOfBirth = other.dateOfBirth;
        bloodGroup = other.bloodGroup;
        contactAddress = other.contactAddress;
    }
    ~Student() {
        numStudents--;
    }
    void inputStudent() {
        cout << "Enter the name: ";
        cin >> name;
        cout << "Enter the roll number: ";
        cin >> rollNumber;
        cout << "Enter the class: ";
        cin >> className;
        cout << "Enter the division: ";
        cin >> div;
        cout << "Enter the Date of birth (YYYY/DD/MM):" << endl;
        cout << "Enter year: ";
        cin >> year;
        cout << "Enter day: ";
        cin >> day;
        cout << "Enter month: ";
        cin >> month;
        cout << "Enter the blood group: ";
        cin >> bloodGroup;
        cout << "Enter the address: ";
        cin >> contactAddress;
        cout << "Enter the phone number: ";
        cin >> telephone;
        cout << "Enter the driving license number: ";
        cin >> drivingLicenseNo;
        cout << endl;
    }
    void displayInfo() { 
        cout << "__________________info_________________________" << endl;
        cout << "Name=" << name << endl;
        cout << "Roll number=" << rollNumber << endl;
        cout << "Class=" << className << endl;
        cout << "Division=" << div << endl;
        cout << "Date of birth=" << year << "/" << day << "/" << month << endl;
        cout << "Blood group=" << bloodGroup << endl;
        cout << "Address=" << contactAddress << endl;
        cout << "Phone number=" << telephone << endl;
        cout << "Driving license number=" << drivingLicenseNo << endl;
        cout << "_______________________________________________" << endl;
    }

public:
    int rollNumber,div,year,month,day;
    string telephone,drivingLicenseNo,name,className,division,dateOfBirth,bloodGroup,contactAddress;
    static int numStudents;

    inline int NOstudent(){ // inline function
        return numStudents;
    }
    static void menu(Student students[], int& numStudents) {
        int choice;
        while (true) {
            cout << "\nMenu:\n";
            cout << "1. Add Student\n";
            cout << "2. Display Students\n";
            cout << "3. Exit\n";
            cout << "Enter your choice: ";
            cin >> choice;
            if (choice == 1) {
                if (numStudents < MAX_STUDENTS) {
                    students[numStudents].inputStudent();
                    cout << "Student added successfully.\n";
                    numStudents++;
                } else {
                    cout << "Database is full. Cannot add more students.\n";
                }
            } else if (choice == 2) {
                if (numStudents > 0) {
                    cout << "\nStudent Records:\n";
                    for (int i = 0; i < numStudents; ++i) {
                        students[i].displayInfo();
                    }
                } else {
                    cout << ".....No students to display.....\n";
                }
            } else if (choice == 3) {
                cout << "Exiting program.\n";
                break;
            } else {
                cout << "Invalid choice. Please try again.\n";
            }
        }
    }
};
int Student::numStudents = 0;//Initialize the static member variable
int main() {
    Student students[MAX_STUDENTS];
    int numStudents = 0;
    Student n;
    n.menu(students,numStudents);
    //or
    //Student::menu(students, numStudents);
    cout << "Number of students:" << numStudents << endl; 
    return 0;
}