#include<iostream>
using namespace std;

int main(){

    int age;
    cout<<"tell me your age"<<endl;
    cin>>age;
    if (age<18)
    {
        cout<<"you can not come to my party!!"<<endl;
    } else if(age==18 && age<28){
        cout<<"you can join my party,enjoy!"<<endl;
   
    }else{
        cout<<"good by";
    }
    
    return 0;
}