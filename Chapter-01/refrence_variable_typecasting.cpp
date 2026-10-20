#include<iostream>
using namespace std;

int c=55; // Globle variable

int main()
{
    //****************************Build in data type****************************************** 
    /*int a, b , c;
    cout<<"enter the value of a: "<<endl;
    cin>>a;
    cout<<"enter the value of b: "<<endl;
    cin>>b;
    c=a+b;
    cout<<"the sum of a and b is: "<<c<<endl;
    cout<<"the globle variable value  is: "<<::c;*/


    //****************************float , double and long double literals****************************************** 


   /*float b=26.12f;
    long double e=26.12l;

    cout<<"the size of 26.12 is: "<<sizeof(26.12)<<endl; // bydefault double mana jata h
    cout<<"the size of 26.12f is: "<<sizeof(26.12f)<<endl;
    cout<<"the size of 26.12l is: "<<sizeof(26.12l)<<endl;
    cout<<"the size of 26.12F is: "<<sizeof(26.12F)<<endl;
    cout<<"the size of 26.12L is: "<<sizeof(26.12L)<<endl;
    //cout<<"the value of b is: "<<b<<endl<<"the value of e is: "<<e;*/


    //****************************Reference Variables****************************************** 


     /*float x=56;
     float &b=x;
     cout<<x<<endl;
     cout<<b;*/

    //****************************Typecasting****************************************** */

    int a=566;
    float b=165.55f;
    cout<<"the value of a is: "<<float(a)<<endl;
    cout<<"the value of b is: "<<int(b)<<endl;


    return 0;

}