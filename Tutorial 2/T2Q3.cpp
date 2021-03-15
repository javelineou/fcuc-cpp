#include <iostream>

using namespace std;

int main() {
    int day;
    cout<<"What day is today by the day numbers in a week?\n";
    cin>>day;
    if (day==1)
        cout<<"Today is Sunday";
    else if (day==2)
        cout<<"Today is Monday";
    else if (day==3)
        cout<<"Today is Tuesday";
    else if (day==4)
        cout<<"Today is Wednesday";
    else if (day==5)
        cout<<"Today is Thursday";
    else if (day==6)
        cout<<"Today is Friday";
    else if (day==7)
        cout<<"Today is Saturday";
    else
        cout<<"Type only 1-7";

    return 0;
}