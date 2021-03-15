#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int weight;
    double bmi, height;
    weight = 80;
    height = 1.5;
    bmi = weight / pow(height, 2);
    cout << "Bmi is " << round(bmi * 100) / 100 << "\n";


    return 0;
}