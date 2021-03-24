#include <iostream>

using namespace std;
void insert(int);

int main() {
    int x;
    cout<<"Insert number :";
    cin>>x;
    insert(x);
}

void insert(int x){
    int total = 0;
    
    for (int i=1; i<=x; i++) {
        total += i;
    }
    cout<<total;
}