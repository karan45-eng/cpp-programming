#include<iostream>
using namespace std;


int fib(int n){
    if (n<2)
    {
        return 1;
    }
    
    return fib(n-2) + fib(n-1);
}

// Step By Step 

// fib(5)😍
// fib(4) + fib(3)
// fib(3) + fib(2) + fib(2) + fib(1)
// fib(2) + fib(1) + fib(1) + fib(0) + fib(1) + fib(0) + fib(0)
// fib(1) + fib(0) + fib(1) + fib(1) + fib(0) + fib(1) + fib(0) + fib(0)
// 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1
// 8


int main(){

    int a;
    cout<<"Enter a number: "<<endl;
    cin>>a;

    cout<<"GIven number fibonacci series is: "<<fib(a)<<endl;

    return 0;
}