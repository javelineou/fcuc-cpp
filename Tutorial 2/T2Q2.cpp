#include <iostream>

using namespace std;

int main() {
    int temp;
    cout<<"What's your temperature?\n";
    cin>>temp;
    if (temp<0)
        cout<<"Category: Freezing Weather\n";
    else if (temp>=0 && temp<=9)
        cout<<"Category: Very Cold Weather\n";
    else if (temp>=10 && temp<=19)
        cout<<"Category: Cold Weather\n";
    else if (temp>=20 && temp<=29)
        cout<<"Category: Normal in Temp \n";
    else if (temp>=30 && temp<=39)
        cout<<"Category: It's hot\n";
    else if (temp>=40)
        cout<<"Category: Very Hot\n";
    else
        cout<<"Error input\n";

    return 0;
}