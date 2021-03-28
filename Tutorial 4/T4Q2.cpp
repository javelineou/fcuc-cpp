#include <iostream>

using namespace std;
void printName(string name);

int main() {
    string x;
    cout<<"Whats your name? ";
    cin>>x;
    printName(x);
}

void printName(string name){
    cout<<"Hello "<<name;
}