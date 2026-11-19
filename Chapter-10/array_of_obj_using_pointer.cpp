#include<iostream>
using namespace std;

class shop{
    int id;
    float price;
    public:

    void setdata(int a, float b){
        id = a;
        price = b;
    }

    void getdata(void){
        cout<<"The id of the item is: "<<id<<endl;
        cout<<"The price of the item is: "<<price<<endl;
    }
};

int main(){
    int size = 3;
    shop *ptr = new shop[size];
    shop *ptrTemp = ptr;
    for (int i = 0; i < size; i++)
    {
        int p, q;
        cout<<"Enter the id and price of item "<<i+1<<endl;
        cin>>p>>q;
        // (*ptr).setdata(p, q);
        ptr->setdata(p, q);
        ptr++;
    }
    for (int i = 0; i < size; i++)
    {
        // (*ptr).getdata();
        ptrTemp->getdata();
        ptrTemp++;

    }
    return 0;
}