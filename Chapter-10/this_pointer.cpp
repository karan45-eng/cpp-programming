// This with class
#include<iostream>
using namespace std;

class parent{
    private:
    int rollNo =10;

    public:

    void get(int rollNo){
        this->rollNo=rollNo;
        cout<<"Roll number is: "<<rollNo<<endl;    // local data

    }

    void set()
    {
        cout<<"Roll number is: "<<rollNo<<endl;


    }

    parent(){
        cout<<"Default connstructor!"<<endl;
    }

    parent(int rollNo){
        cout<<"The roll number by constructer: "<<rollNo<<endl;
    }


};

class child : public parent
{
    int rollNo=20;
    public:
    void display(){

        cout<<"Roll number is: "<<rollNo<<endl;
    }
};

int main(){
    // this is a keyword which is a pointer which points to the object which invokes the member function. It is used to refer to the calling object.
    child c;
    c.set();
    c.get(50);
    c.display();
    parent k(5);

}