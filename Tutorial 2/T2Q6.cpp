#include <iostream>
#include <string>
using namespace std;

int main() {
    int age;
    string citizen;
    
    cout<<"How old are you?\n";
    cin>>age;
    cout<<"Are you Malaysian? type yes or no \n";
    cin>>citizen;
    
    if (age>18 && citizen=="yes")
        cout<<"You are eligible to vote";
    else cout<<"You are not eligible to vote";

    return 0;
}