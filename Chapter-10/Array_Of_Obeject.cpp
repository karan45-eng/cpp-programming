#include<iostream>
using namespace std;

class employee {
    int salary;
    int id;
    public:
    void setData(void){
        salary=90000;
        cout<<"Enter your id: "<<endl;
        cin>>id;
    }

    void getData(void){
        cout<<"salary is: "<<salary<<" And employee ID is: "<<id<<endl;;
    }
};

int main(){
    employee suho[5];
    for (int i = 0; i < 5; i++)
    {
        suho[i].setData();
        suho[i].getData();
    }

    return 0;
    
}
