#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double price1, price2, price3, price4, total;
	const double tax = 0.06;
	cout << "Input 4 item's prices: \n";
	cin >> price1 >> price2 >> price3 >> price4;
	total = (price1 + price2 + price3 + price4) + ((price1 + price2 + price3 + price4) * tax);
	cout << "Total is " << total << "\n";
	return 0;
}