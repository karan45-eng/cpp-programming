#include <iostream>
using namespace std;

class super
{
public:
    void get()
    {
        cout << "I am super class" << endl;
    }
};

class base1 : virtual public super
{
public:
    void set()
    {
        cout << "I am base1 class" << endl;
    }
};
class base2 : virtual public super
{
public:
    void show()
    {
        cout << "I am base2 class" << endl;
    }
};
class base3 : public base1, public base2
{

public:
    void display()
    {
        cout << "I am base3 class" << endl;
    }
};

int main()
{
    base3 kar;
    kar.get();
    kar.set();
    kar.show();
    kar.display();
}