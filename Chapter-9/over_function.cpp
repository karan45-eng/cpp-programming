#include<iostream>
using namespace std;

int sum(int a, int b){
    cout<<"using function with 2 argument "<<endl;
    return a+b;
}

int sum(int a, int b, int c){

    cout<<"using function with 3 argument "<<endl;
    return a+b+c;
}

// Calculate the volume of a cylinder 
int volume(double r, int h){
    return (3.14*r*r*h);
}


// Calculate the volume of a cube
int volume(int a){
    return (a*a*a);
} 

// Calculate the volume of a rectanguler box
int volume(int l, int b, int h){
    return (l*b*h);
} 
int main(){

    cout<<"the sum of 5 and 4 is: "<<sum(5,4)<<endl;
    cout<<"the sum of 5 , 6 and 4 is: "<<sum(5,6,4)<<endl;
    cout<<"the volume of a cylinder of radius 5 and height 6 is: "<<volume(5,6)<<endl;
    cout<<"the volume of a cube of size 5: "<<volume(5)<<endl;
    cout<<"the volume of rectanguler box of length 5  ,width 6 and height 4 is: "<<volume(5,6,4)<<endl;

    return 0;
}