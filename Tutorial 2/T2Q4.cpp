#include <iostream>

using namespace std;

int main() {
    int distance;
    const int basic = 10;
    cout<<"How long the distance?\n";
    cin>>distance;
    if (distance>0 && distance<=10)
        cout<<"Cost is "<<basic<<" RM";
    else if (distance>10 && distance<=30)
        cout<<"Cost is "<<basic+(5*distance)<<" RM";
    else if (distance>30 && distance<=50)
        cout<<"Cost is "<<basic+(7*distance)<<" RM";
    else if (distance>50 && distance<=100)
        cout<<"Cost is "<<basic+(9*distance)<<" RM";
    else cout<<"Error";

    return 0;
}