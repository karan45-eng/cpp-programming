#include<iostream>
using namespace std;

class animal{
    private:
    string name = "Elephant";
    public:
    void get(){
        cout<<"The name of 1st animal is:"<<name<<endl;

    }

};
class cat : public animal{
    private:
    string name_cat = "meow";
    public:
    void display(){
        cout<<"The name of 2nd animal is "<<name_cat<<endl;
    }


};
class dog : public animal{
    private:
    string name_dog = "sheru";
    public:
    void show(){
        cout<<"The name of 3rd animal is "<<name_dog<<endl;
    }

};

int main(){
    cat c1;
    c1.get();
    c1.display();
    
    dog d1;
    d1.get();
    d1.show();

}