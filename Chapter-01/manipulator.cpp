#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    /*int a=56,b=8815,c=9916546;
    cout<<"the value of a without setw is: "<<a<<endl;
    cout<<"the value of b without setw is: "<<b<<endl;
    cout<<"the value of c without setw is: "<<c<<endl;


    cout<<"the value of a is: "<<setw(7)<<a<<endl;
    cout<<"the value of b is: "<<setw(7)<<b<<endl;
    cout<<"the value of c is: "<<setw(7)<<c<<endl;*/


    // Operator precedence

    int a=5,b=9;
    int c=(((a*5)+b)-3);
    cout<<"the value of c is: "<<c<<endl;
    return 0;
}
