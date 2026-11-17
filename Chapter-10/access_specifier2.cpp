#include<iostream>// header file
using namespace std;

class person
{
    // acess specifier
    public:
    string sirname;
    private: // agr private na likha ho to by default private hoga
    string name;
    protected:
    int age;


    public:
    void getname(string n)
    {
        name = n;
    }
    void getAge(int a)
    {
        age = a;
    }
    

    void set()
    {
        cout<<"name is "<<name<<" "<<sirname<<" "<<"and age is "<<age;
    }

};
int main()
{
    person obj;
    obj.sirname = "sankhla";
    obj.getname("karan");
    obj.getAge(12);
    obj.set();
}
