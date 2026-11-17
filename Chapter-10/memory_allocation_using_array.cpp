#include<iostream>
#include<string.h>
using namespace std;

class shop
{

    int itemId[100];
    int itemPrice[100];
    public:

    void set(void);
    void get(void);

};

void shop::set(void)// :: (resolution operator)
{
    for (int i = 0; i < 5; i++)
    {
        
        cout<<"enter Id your item :";
        cin>>itemId[i];
    
        cout<<"enter price of your item :";
        cin>>itemPrice[i];
        
    }
    
}
void shop::get(void)
{
    for (int i = 0; i < 5; i++)
    {
        
        cout<<"Item Id is: "<<itemId[i]<<" "<<"and Price is :"<<itemPrice[i]<<endl;
    }
    
}

int main()
{
   shop dukan;
//    dukan.count();
   dukan.set();
   dukan.get();
   return 0;
}
