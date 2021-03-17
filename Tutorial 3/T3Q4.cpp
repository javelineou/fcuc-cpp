#include <iostream>

using namespace std;

int main() {
    char selection;
    int num1, num2;
    do {
        cout<<"Enter two numbers: "<<endl;
        cin>>num1>>num2;
        cout<<"Their product is "<<num1*num2<<endl;
        cout<<"Do you want to do it again? y for yes,n for no"<<endl;
        cin>>selection;
    }
    while ( selection=='y' || selection=='Y');
    return 0;
}