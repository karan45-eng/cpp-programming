#include<iostream>
using namespace std;

class karan{
    int a=10;

    public:

    friend void rahul( karan ss);
};
void rahul(karan ss){
    cout<<ss.a;
}

int main (){
    karan aj;
    rahul(aj);
    
}