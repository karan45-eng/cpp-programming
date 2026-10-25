#include<iostream>
using namespace std;

// Function prototype
//return_datatype function_name(datatype_1 a, datatype_2 b);

int sum(int a, int b);
int sum(int a, int b){
        int c = a+b;
    return c;

    }


int main(){

    int s , p;
    cout<<"enter the value of s: "<<endl;
    cin>>s;

    cout<<"enter the value of p: "<<endl;
    cin>>p;

    cout<<"the sum of s and p is: "<<sum(s,p);





    return 0;
}