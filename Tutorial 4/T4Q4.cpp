#include <iostream>
#include <cmath>

using namespace std;

void powerNum (int x, int y, int &total){ // &total pass by reference into variable a
    total = pow(x,y);
}

int main() {
    int x,y,a;
    cout<<"Input two numbers: ";
    cin>>x>>y;
    powerNum(x,y,a); 
    cout<<x<<" to the power of "<<y<<" is "<<a; 
}

