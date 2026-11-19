#include<iostream>
using namespace std;

class employee{
    int id;
    static int count;

    public:
    void setValue(void){
        cout<<"Enter the id: "<<endl;
        cin>>id;
        count++;
    }

    void getValue(void){
        cout<<"The id of Employee is "<<id<<" And employee number is: "<<count<<endl;
    }

    static void getcount(void){
        cout<<"The value of count is: "<<count<<endl;
    }

};
// count is a static data member of class employee
int employee:: count; // Defaul value count is zero

int main(){
    employee rahul , karan, lokendra;

    rahul.setValue();
    rahul.getValue();
    employee::getcount();
    // rahul.getcount();
    
    karan.setValue();
    karan.getValue();
    employee::getcount();
    
    lokendra.setValue();
    lokendra.getValue();
    employee::getcount();
}