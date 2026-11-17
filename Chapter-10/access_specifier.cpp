#include<iostream>// header file
using namespace std;

class person
{
    // acess specifier
    protected:
    string sirname;
    private: // agr private na likha ho ya acess specifier nhi diya ho to by default private hoga
    string name;
    public:
    int age;

    void get()
    {
        // cout<<"enter the age :";
        // cin>>age;
        cout<<"enter the name :";
        cin>>name;
        cout<<"enter the sirname :";
        cin>>sirname;
    }
    void set()
    {
        cout<<"name is "<<name<<" "<<sirname<<" "<<"and age is "<<age;
    }

};
int main()
{
    person obj;
    obj.age=18;
    // obj.name("karan");            // error
    // obj.sirname("karan");         // error bcoz we can not call value of private and protected access in main func
    obj.get();
    obj.set();

    return 0;
}
