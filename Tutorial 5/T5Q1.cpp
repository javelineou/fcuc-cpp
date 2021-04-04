#include <iostream>
using namespace std;

void absolute(int a,int &x){
    x=abs(a);
}

int main(){
    int a, x;
    cout<<"Input numbers : ";
    cin>>a;
    absolute(a,x);
    cout<<"Absolute number is "<<x;
}