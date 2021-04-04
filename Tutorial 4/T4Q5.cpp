#include <iostream>
using namespace std;

int main(){
    float x, y;
    int select;
    
    cout<<"Insert first number: "<<endl;
    cin>>x;
    cout<<"Insert second number: "<<endl;
    cin>>y;
    
    do{
        cout<<"Please select: \n1. Addition\n2. Substraction\n3. Multiplication\n4. Division\n0. Exit\n";
        cout<<"Your selection: ";
        cin>>select;
        
        switch(select){
            case 1:
            cout<<x<<" + "<<y<<" = "<<x+y<<endl<<endl;
            break;
            case 2:
            cout<<x<<" - "<<y<<" = "<<x-y<<endl<<endl;
            break;
            case 3:
            cout<<x<<" x "<<y<<" = "<<x*y<<endl<<endl;
            break;
            case 4:
            cout<<x<<" / "<<y<<" = "<<x/y<<endl<<endl;
            break;
            case 0:
            cout<<"Exitting..."<<endl;
            return 0;
            default:
            cout<<"Wrong insert"<<endl<<endl;
        }
    }
    while(true);
    
}