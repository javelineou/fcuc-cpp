#include <iostream>

using namespace std;

int addNum(int x, int y){
    return x+y;
}
double addNum(double x, double y){
    return x+y;
}

int main() {
    int num1 = addNum(4,9);
    double num2 = addNum(4.5,8.2);
    cout<<num1<<endl;
    cout<<num2<<endl;
}