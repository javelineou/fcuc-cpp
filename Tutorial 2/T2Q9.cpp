#include <iostream>
#include <string>
using namespace std;

int main() {
    int score;
    cout<<"Score: ";
    cin>>score;
    
    if(score>=90){
        cout<<"Great score";
    }
    else if(score>=70&&score<90){
        cout<<"Good score";
    }
    else {
        cout<<"Retake the test";
    }
}