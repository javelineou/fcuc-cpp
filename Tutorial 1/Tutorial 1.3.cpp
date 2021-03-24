#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double base, height, area;
    const float half = 0.5;
    cout << "Calculate the area of triangle \n";
    cout << "Insert the base: \n";
    cin >> base;
    cout << "Insert the height: \n";
    cin >> height;
    area = half * base * height;
    cout << "The area is " << area << "\n";


    return 0;
}