#include <iostream>
#include <cmath>

using namespace std;
void powerNum (int x, int y);

int main() {
    int x,y;
    cout<<"Input two numbers: ";
    cin>>x>>y;
    powerNum(x,y);
}

void powerNum (int x, int y){
    int total;
    total = pow(x,y);
    cout<<x<<" to the power of "<<y<<" is "<<total;
}