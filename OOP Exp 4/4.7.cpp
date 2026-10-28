#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int rollNo;

public:
    void accept()
    {
        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Roll Number: ";
        cin >> rollNo;
    }

    void display()
    {
        cout << "Student Details" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNo << endl;
    }
};

int main()
{
    Student s;

    s.accept();
    s.display();

    return 0;
}
