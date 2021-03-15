#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int distance, time, speed, km, hour;
    cout << "Insert distance in meter: \n";
    cin >> distance;
    cout << "Insert time in minute: \n";
    cin >> time;
    km = distance * 0.001;
    hour = time / 60;
    speed = km / hour;
    cout << "Speed in km/h is " << speed << "\n";


    return 0;
}