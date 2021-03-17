#include <iostream>
#include <string>
using namespace std;

int main() {
    int weather, warm;
    
    cout<<"Is the weather is good? 1 for yes, 0 for no\n";
    cin>>weather;
    
    if(weather==1){
        cout<<"Is it warm? 1 for yes, 0 for no\n";
        cin>>warm;
        if(warm==1){
            cout<<"sit in the sun\n";
        }
        else { cout<<"sit in shade\n";}
    }
    else {cout<<"Sit indoor\n";}
    
    cout <<"Drink more lemonade";
} 