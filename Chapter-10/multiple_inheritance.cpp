#include<iostream>
using namespace std;

/*
Syntax for inheritance in multiple inheritance
class derivedC : visibility-mode base1 , visibility-mode base2{
class bosy of class derivedC
};
*/

class base1{
    protected:
    int base1int;

    public:
    void set_base1int(int a){
        base1int = a;  
    }
};

class base2{
    protected:
    int base2int;

    public:
    void set_base2int(int a){
        base2int = a;  
    }
};

class derived : public base1 ,public base2{
    public:
    void show(){
        cout<<"The value of base1 is : "<<base1int<<endl;
        cout<<"The value of base2 is : "<<base2int<<endl;
        cout<<"The sum of base1 & base2 is : "<<base1int+base2int<<endl;
    }
};

/*
For a protected member:
                            Public Derivation   Private Derivation   Protected Derivation
    1. Private members      Not inheritance     Not inheritance      Not inheritance
    2. Proptected members   Protected           Private              Protected
    3. Public members       Publicl             Private              Protected 
*/


/*
The inheritance derived class will look something like this:
Data members:
    base1int --> protected
    base2int --> protected

Member function:
    set_base1int() --> public
    set_base2int() --> public
    show() --> public
*/

int main(){
    derived karan;
    karan.set_base1int(45);
    karan.set_base2int(18);
    karan.show();
}