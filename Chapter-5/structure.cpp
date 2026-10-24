#include<iostream>
using namespace std;

// struct student
// {
//     int roll;
//     char name;
//     int age;
// };

typedef struct student
{
    int roll;
    char name;
    int age;
} st;

int main(){
    st s1;
    s1.roll = 98;
    s1.name = 'k';
    s1.age = 18;

    cout<<"the value is: "<<s1.roll<<endl;
    cout<<"the value is: "<<s1.name<<endl;
    cout<<"the value is: "<<s1.age<<endl;
}