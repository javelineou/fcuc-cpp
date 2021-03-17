#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    float rhour, ohour, reguler, overtime, gross;
    
    cout<<"What is your name?\n";
    cin>>name;
    cout<<"Total hours of regular work?\n";
    cin>>rhour;
    cout<<"Total hours of overtime work?\n";
    cin>>ohour;
    
    reguler=rhour*30;
    overtime=(ohour*2)*20;
    gross=reguler+overtime;
    if((rhour+ohour)<=60){
        cout<<"Your name is: "<<name<<"\n";
        cout<<"Your total working hour is: "<<rhour+ohour<<"\n";
        cout<<"Total pay reguler time: RM"<<reguler<<"\n";
        cout<<"Total pay over time: RM"<<overtime<<"\n";
        cout<<"Total gross pay: RM"<<gross<<"\n";
    }
    else {"No more than 60 hours";
    }
}