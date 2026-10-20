#include <iostream>
using namespace std;
 
int main()
{
    int a = 4, b = 5;
    // Operator in C++ 
    // Arthmatic operator 
    cout << "The value of a + b is " << a + b << endl;
    cout << "The value of a - b is " << a - b << endl;
    cout << "The value of a * b is " << a * b << endl;
    cout << "The value of a / b is " << a / b << endl;
    cout << "The value of a % b is " << a % b << endl;
    cout << "The value of a++ is " << a++ << endl;
    cout << "The value of a-- is " << a-- << endl;
    cout << "The value of ++a is " << ++a << endl;
    cout << "The value of --a is " << --a << endl;
    cout<<endl;


    // assignment operator --> use to assign values to variable
    // int a=2, b=3; 
    // char c='b';

    // comparison operator 
    cout << "The value of a == b is " <<(a == b) << endl;
    cout << "The value of a != b is " << (a != b) << endl;
    cout << "The value of a <= b is " << (a <= b) << endl;
    cout << "The value of a >= b is " << (a >= b) << endl;
    cout << "The value of a < b is " << (a < b) << endl;
    cout << "The value of a > b is " << (a > b) << endl;
    cout<<endl;

    // Logical operator 

    cout << "The value of a && b is " << (a && b) << endl;
    cout << "The value of a || b is " << (a || b) << endl;
    cout << "The value of !a is " << (!a) << endl;

    return 0;
    
}