#include<iostream>
#include<string.h>
using namespace std;

class person
{
    public:
    int age;
    string name;

    void get(void);
    void set(void);

};

void person::get(void)// :: (resolution operator)
{
    cout<<"enter your name :";
    cin>>name;

    cout<<"enter your age :";
    cin>>age;
}
void person::set(void)
{
    cout<<"Name is :"<<name<<" "<<"and age is :"<<age<<endl;;

}

int main()
{
    person obj[3];

    for (int i = 0; i < 3; i++)
    {
        obj[i].get();
        obj[i].set();
    }

    return 0;
}
