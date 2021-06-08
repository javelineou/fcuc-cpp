#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int question() {
    float bodyTemp;
    int day;
    string cough, breath, smell, notes;

    system("cls"); //clear the screen
    cout << "What day you want to insert? " << endl;
    cin >> day;
    while (cin.fail()) { //if the user input is not interger, error message will pops out
        cout << "Please input correct number of day!" << endl;
        cin.clear(); // clears the error flag on cin
        cin.ignore(); //clears input buffer
        cin >> day;
    }

    fstream count;
    count.open("count.txt", ios::out); // make and write count.txt. Later to use the number user have been updating
    count << day;
    count.close();

    fstream query;
    query.open("data.txt", ios::app); // append instead of overwrite 

    query << endl;
    query << "______________________________________________________\n";
    query << "----------------------- Day " << day << " ------------------------\n";
    query << "Body Temp   Coughness   Breath Problem   Loss of Smell\n";
    cout << "What is your temperature? (in Celsius) \n";
    cin >> bodyTemp;
    while (bodyTemp >= 44){ //pops out error message and insert again if body temperature is incorrect
        cout << "Insert the correct body temperature!" << endl;
        cin >> bodyTemp;
    }
    query << "   " << bodyTemp << "        ";
    cout << "Do you have any cough or sore throat? (Yes/No)\n";
    cin >> cough;
    query << cough << "           ";
    cout << "Do you have any shortness of breath or difficulty breathing? (Yes/No)\n";
    cin >> breath;
    query << breath << "                ";
    cout << "Do you have any loss of smell or taste? (Yes/No)\n";
    cin >> smell;
    query << smell << "  " << endl << endl;

    cout << "Additional notes: ";
    cin.ignore(); //used to clear one or more characters from the input buffer
    getline(cin, notes);
    query << "Additional notes: " << notes << endl;
    query.close(); //close file

    fstream avg("avg.txt", ios::app); //make or append avg.txt
    float arrTemp[] = {0};
    int len = sizeof(arrTemp) / sizeof(arrTemp[0]); //size of array
    for (int i = 0; i < len; i++) { //for loop to input bodyTemp. Later used to calculate average body temperature.
        arrTemp[i] = bodyTemp;
        avg << arrTemp[i] <<" ";
    }
    avg.close(); //close file

    return 0;
}