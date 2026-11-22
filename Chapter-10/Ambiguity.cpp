#include<iostream>
using namespace std;

class b{
    public:
    void greet(){
        cout<<"Hello good morning!"<<endl;
    }

};
class c{
    public:
    void greet(){
        cout<<"Hello good Evening!"<<endl;
    }

};
class d : public b, public c{
    int a;
    public:
    void greet(){
        c::greet();
    }
};

class f{
    public:
    void greet(){
        cout<<"good Evening!"<<endl;
    }

};
class u:public f{
    public:
    // void greet(){
    //     cout<<"good morning!"<<endl;
    // }
};



int main(){
    // Ambiguity 1
    // b p;
    // p.greet();
    // c k;
    // k.greet();

    d s;
    s.greet();


    // Ambiguity 2

    u o;
    o.greet();
    return 0;
}