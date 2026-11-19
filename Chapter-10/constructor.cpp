#include<iostream>
using namespace std;

class student{
    int roll;
    public:

    student(){
        cout<<"constructor called!!"<<endl;
    }
    student(int x);
};

student::student(int x){
    roll = x;
    cout<<roll;
}
int main(){
    student s1;
    student s2(5);
}