#include<iostream>
using namespace std;

class karan
{
    public:
    int num;
    string sub;


};
int main()
{
    karan obj;
    cout<<"enter the subject :";
    cin>>obj.sub;
    cout<<"enter the num :";
    cin>>obj.num;


    cout<<"subject is "<<obj.sub<<" "<<"and marks is "<<obj.num;

    return 0;

}