#include<iostream>
using namespace std;

union income
{
    int salary;//4
    char business;//1
    float rent;//4
    
};

int main(){
    union income e1;
    e1.salary = 151652;
    e1.business = 'k';
    cout<<e1.salary;
    // cout<<"the value is :  "<<e1.business;
    
}