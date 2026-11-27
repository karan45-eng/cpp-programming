#include<iostream>
using namespace std;

class base_class{
    public:
    int var_base;
    void display(){
        cout<<"This is base class value: "<<var_base<<endl;
    }
};
class derived_class: public base_class{
    public:
    int var_derived;
    void display(){
        cout<<"This is base class value: "<<var_base<<endl;
        cout<<"This is derived class value: "<<var_derived<<endl;
    }
};

int main(){
    
    base_class *base_class_pointer;
    base_class obj_base;
    derived_class obj_derived;

    base_class_pointer = &obj_derived; // pointer of base class can point to derived class object

    base_class_pointer->var_base = 10; // This will call the base class display function, not the derived class display function
    base_class_pointer->display(); // This will call the base class display function, not the derived class display function

    derived_class *derived_class_pointer;
    derived_class_pointer = &obj_derived; // pointer of derived class can point to derived class object

    derived_class_pointer->var_base = 100; // This will call the base class display function
    derived_class_pointer->var_derived = 20; // This will call the derived class display function
    derived_class_pointer->display(); // This will call the derived class display function


    return 0;
}