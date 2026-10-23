#include<iostream>
using namespace std;

int main(){
    //int marks[5]={5,6,8,9,2};

    /*marks[3]=10; // we can change the value of array  
    cout<<"marks of 0 is "<<marks[0]<<endl;
    cout<<"marks of 1 is "<<marks[1]<<endl;
    cout<<"marks of 2 is "<<marks[2]<<endl;
    cout<<"marks of 3 is "<<marks[3]<<endl;
    cout<<"marks of 4 is "<<marks[4]<<endl;

    int mathmarks[5];
    mathmarks[0]=5556;
    mathmarks[1]=5225;
    mathmarks[2]=4965;
    mathmarks[3]=5955;
    mathmarks[4]=8755;

    for (int i = 0; i < 5; i++)
    {
        cout<<mathmarks[i]<<endl;
    }  */

    int marks[] = {99, 100, 15, 47, 45};
    int *p = marks;
    //cout << "The value of marks[0] is " << *p << endl;

    cout<<"the value of marks 0 is " <<*p<<endl;
    cout<<"the value of marks 1 is " <<*(p+1)<<endl;
    cout<<"the value of marks 2 is " <<*(p+2)<<endl;
    cout<<"the value of marks 3 is " <<*(p+3)<<endl;
    cout<<"the value of marks 4 is " <<*(p+4)<<endl;
    
}