#include<iostream>
using namespace std;

/*
Case1:
class B: public A{
    // Order of execution of constructor -> first A() then B().   
};

Case2:
class A : public B , public C{
    // Order of execution of constructor -> first B() then C() and A()
};

Case3:
class A : public B, virtual public C{
    // Order of execution of constructor -> first C() then B() and A()
};
*/

class Base1{
    int data1;
    public:
    Base1(int i){
        data1 = i;
        cout<<"Base1 class constructor called!"<<endl;
    }
    void printBase1data(){
        cout<<"The value of data1 is: "<<data1<<endl;
    }
};
class Base2{
    int data2;
    public:
    Base2(int i){
        data2 = i;
        cout<<"Base2 class constructor called!"<<endl;
    }
    void printBase2data(){
        cout<<"The value of data2 is: "<<data2<<endl;
    }
};

class derived : public Base1 , public Base2{
    int derived1 , derived2;
    public:
    derived(int a , int b, int c, int d): Base1(a) , Base2(b){
        derived1 = c;
        derived2 = d;
        cout<<"derived class constructor called!"<<endl;
    }
    void printDataDerived(){
        cout<<"The value of derived1 is "<<derived1<<endl;
        cout<<"The value of derived2 is "<<derived2<<endl;
    }
};

int main(){
    derived karan(4,5,9,6);
    karan.printBase1data();
    karan.printBase2data();
    karan.printDataDerived();
}