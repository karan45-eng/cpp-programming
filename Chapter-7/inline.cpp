#include<iostream>
using namespace std;



inline int product(int a, int b){
    // Not recommended to use below inline functions
    //static int c=0; // This execute only one time
    //c = c + 1; // Next time this function will run, the value of c will be retained
    return a*b ;
}

int main(){

    int a=5, b=6;
    cout<<"the product of a and b is: "<<product(a,b)<<endl;


    return 0;
}