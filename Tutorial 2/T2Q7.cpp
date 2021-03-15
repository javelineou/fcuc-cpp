#include <iostream>
#include <string>
using namespace std;

int main() {
    char vowel;
    cout<<"Insert an alphabet\n";
    cin>>vowel;
    
    switch(vowel){
        case 'a':
            cout<<"\nIt is a vowel";
            break;
        case 'i':
            cout<<"\nIt is a vowel";
            break;
        case 'u':
            cout<<"\nIt is a vowel";
            break;
        case 'e':
            cout<<"\nIt is a vowel";
            break;
        case 'o':
            cout<<"\nIt is a vowel";
            break;
        default:
            cout<<"\nIt is not a vowel";
    }

    return 0;
}