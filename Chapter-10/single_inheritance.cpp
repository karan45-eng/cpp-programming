#include<iostream>
using namespace std;

class super{
    private:
    int a;
    public:
    void get(){
        cout<<"The value of a is:"<<endl;
        cin>>a;

    }
    void set(){
        cout<<"The value of a is:"<<a<<endl;

    }
};

class child : public super{
    private:
    int b=4;
    public:
    void display(){
        cout<<"The value of b is:"<<b;
    }


};

int main(){
    child c;
    c.get();
    c.set();
    c.display();
}



//************************If visibility mode is private*************************************** */
// class child :super{
//     private:
//     int b=4;
//     public:
//     void display(){
//         get();
//         set();
//         cout<<"The value of b is:"<<b;
//     }


// };

// int main(){
//     child c;
//     // c.get();
//     // c.set();
//     c.display();
// }