#include<iostream>
using namespace std;

int moneyRecieved(int currentMoney, float factor = 1.04){
    return currentMoney*factor;
}
int main(){


    int money = 100000;

    cout<<"If you have "<<money<<" then you will recieve net money "<<moneyRecieved(money)<<" in one year";


    return 0;
}