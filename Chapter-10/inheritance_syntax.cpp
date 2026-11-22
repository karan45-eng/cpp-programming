#include<iostream>
using namespace std;


// Base Class
class employee{
    public:
    int id;
    float salary;

    employee(int inpId){
        id = inpId;
        salary = 35.51;

    }
    employee(){}
};

// Derived Class Syntax
/*class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class members/methods/etc......
}

Note:
1. Default visibility mode is private
2. Public visibility mode: Public members of base class becomes Pulilc members of derived class 
3. Private visibility mode: Public members of base class becomes Private members of derived class 
4. Private members are never inherited
*/

// Creating a programmer Class derived from employee base class 

class programmer : private employee{
    public:
    int lalnguageCode ;
    programmer(int inpId){
        id = inpId;
        lalnguageCode = 56;
    }
    void display(){
        cout<<id;
    }

};

int main(){
    employee karan(98), rahul(100);
    cout<<karan.salary<<endl;
    cout<<rahul.salary<<endl;

    programmer loki(22);
    cout<<loki.lalnguageCode<<endl;
    loki.display();

    return 0;
}
