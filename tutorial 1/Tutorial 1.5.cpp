#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double num1, num2, num3, num4, average;
	cout << "Insert 4 decimal values: \n";
	cin >> num1 >> num2 >> num3 >> num4;
	average = (num1 + num2 + num3 + num4) / 4;
	cout << "The average is " << average << "\n";
	return 0;
}