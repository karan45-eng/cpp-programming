#include<iostream>
using namespace std;

class A {
private:
    int x = 10;

    friend class B;
};

class B {
public:
    void display(A obj) {
        cout << "x = " << obj.x << endl;
    }
};

int main() {
    A obj;
    B b;

    b.display(obj);
}
