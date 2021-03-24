#include <iostream>

using namespace std;

int main() {
    int x;
    int small=0;
    float avg;
    int total = 0;
    int great = 0;
    int i=0;
    char select;
    do{
        i++;
        cout<<"\nEnter number: ";
        cin>>x;
        total = total + x;
        avg=total/i;
        
        if (x>great){
            great = x;
        }
        
        if (small==0){
            small = x;
        }
        else if(x<small){
            small=x;
        }
        cout<<"Continue? Enter 'y' to continue or 'n' to terminate....";
        cin>>select;
    }
    while (select=='y');
    cout<<"\nTotal is "<<total<<endl;
    cout<<"Greatest number is "<<great<<endl;
    cout<<"Smallest number is "<<small<<endl;
    cout<<"Average is "<<avg<<endl;
}