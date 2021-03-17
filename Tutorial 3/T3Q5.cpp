#include <iostream>

using namespace std;

int main() {
    int input;
    do {
        cout<<"Enter positive number: "<<endl;
        cin>>input;
        cout<<"You've entered: "<<input<<endl;
    }
    while ( input>0 );
    cout<<"Terminating the program!";
    return 0;
}