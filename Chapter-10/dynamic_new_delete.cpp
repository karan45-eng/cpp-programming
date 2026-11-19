#include<iostream>
using namespace std;

int main(){
    int *p = new int(40);
    cout<<"The value at address p is "<<*p<<endl;
    
    float *q = new float (40.5);
    cout<<"The value at address q is "<<*q<<endl;
    
    // delete p;
    // cout<<"The value at address p is "<<*p<<endl;
    delete q;
    cout<<"The value at address q is "<<*q<<endl;
    
    // q  = nullptr;
    // cout<<"The value at address q is "<<*q<<endl;

    // int *arr = new int [5];
    // arr[0] = 10;
    // arr[1] = 20;    
    // arr[2] = 30;
    // arr[3] = 40;
    // arr[4] = 50;
    // cout<<"The value of the arr[0] is: "<<arr[0]<<endl;
    // cout<<"The value of the arr[1] is: "<<arr[1]<<endl;
    // cout<<"The value of the arr[2] is: "<<arr[2]<<endl;
    // cout<<"The value of the arr[3] is: "<<arr[3]<<endl;
    // cout<<"The value of the arr[4] is: "<<arr[4]<<endl;



    int *ar = new int [5];
    ar[0] = 10;
    ar[1] = 20;    
    ar[2] = 30;
    ar[3] = 40;
    ar[4] = 50;

    for (int i = 0; i < 5; i++)
    {
        cout<<"The value of ar["<<i<<"] is: "<<ar[i]<<endl;
    }
    
    // delete[] ar;
    ar = nullptr;

    for (int i = 0; i < 5; i++)
    {
        cout<<"The value of ar["<<i<<"] is: "<<ar[i]<<endl;
    }

    

    // delete p;
    // delete q;
    // delete [] arr;
    return 0;
}