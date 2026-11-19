#include <iostream>
using namespace std;

class Student
{
    int roll;

public:

    // Constructor
    Student(int x)
    {
        roll = x;
        cout << "Constructor called for Roll No: " << roll << endl;
    }

    // Destructor
    ~Student()
    {
        cout << "Destructor called for Roll No: " << roll << endl;
    }
};

int main()
{
    Student s1(101);
    Student s2(102);

    cout << "Inside main()" << endl;

    return 0;
}












