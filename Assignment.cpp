#include <iostream>
#include <fstream>
#include <string>
#include <cstdio>
#include "question.h"
using namespace std;

int main() {
    char name[100];
    string gender;
    char selection, printResult;
    int age, birth_year, birth_month, birth_day;

    cout << "!===========! Welcome to Personal Covid-19 Management System !===========!" << endl << endl;
    cout << "Do you want to write a new record? Type 'Y' for yes, 'N' for no." << endl;
    cout << "Note: By making a new record, existing record will be deleted." << endl;
    cin >> selection;

    if (selection == 'Y' || selection == 'y') { //if selection is 'Y' or 'y', it returns true

        remove("avg.txt"); //resetting bodyTemp for calculating in avg.txt when a new record is created
        system("cls"); //clear the screen
        fstream data("data.txt", ios::out); //make and write data.txt with writing mode
        cin.ignore(); //used to clear one or more characters from the input buffer
        data << "       PERSONAL COVID-19 MANAGEMENT SYSTEM" << endl << endl;
        cout << "Please insert your name, age, date of birth, and gender" << endl;
        cout << "What is your name: ";
        cin.get(name, 100); //input sentence for name
        data << "Name: " << name << endl;
        cout << "How old are you: ";
        cin >> age;
        while (cin.fail()) { //if the user input is not interger, error message will pops out
            cout << "Please input correct age!" << endl;
            cin.clear(); // clears the error flag on cin
            cin.ignore(); //clears input buffer
            cin >> age;
        }
        data << "Age: " << age << endl;
        cout << "What is your gender? ";
        cin >> gender;
        data << "Gender: " << gender << endl;
        cout << "What is your year of birth? ";
        cin >> birth_year;
        while (cin.fail()) { //if the user input is not interger, error message will pops out
            cout << "Please input correct year of birth!" << endl;
            cin.clear(); // clears the error flag on cin
            cin.ignore(); //clears input buffer
            cin >> birth_year;
        }
        cout << "What is your month of birth? ";
        cin >> birth_month;
        while (cin.fail()) { //if the user input is not interger, error message will pops out
            cout << "Please input correct month of birth!" << endl;
            cin.clear(); // clears the error flag on cin
            cin.ignore(); //clears input buffer
            cin >> birth_month;
        }
        cout << "What is your day of birth? ";
        cin >> birth_day;
        while (cin.fail()) { //if the user input is not interger, error message will pops out
            cout << "Please input correct day of birth!" << endl;
            cin.clear(); // clears the error flag on cin
            cin.ignore(); //clears input buffer
            cin >> birth_day;
        }
        data << "Date of Birth: " << birth_day << "/" << birth_month << "/" << birth_year << endl;
        data.close(); //close file
    }
    
    while (question()); //while question() return 1, it repeats and vice versa

    system("cls"); //clear the screen
    cout << "Data saved successfully!";
    cout << endl << "Do you want to print the result? Type 'Y' for yes, 'N' for no." << endl;
    cin >> printResult;

    if (printResult == 'Y' || printResult == 'y') {     //if printResult is 'y' or 'Y'. it returns true
        system("cls"); //clear the screen
        string myText;

        fstream display;
        display.open("data.txt", ios::in); //open file with reading mode
        while (getline(display, myText)) {  //Use a while loop together with the getline() function to read the file line by line
            cout << myText << endl;
        }
        display.close(); //close file

        fstream calcAvg, counter;
        int len;
        float total = 0, avg, data;
        calcAvg.open("avg.txt"); //open avg.txt to count average
        counter.open("count.txt"); //open count.txt to count average
        counter >> len;
        for (int n = 0; n < len; n++) { //for loop until the length of array
            calcAvg >> data;
            total += data;
        }
        avg = total / len; //average is total of body temp devided by length of array
        cout << "\nAverage body temperature: " << avg << " Celsius" << endl;
        calcAvg.close(); //close file
        counter.close(); //close file

        cout << "\nThank you for using the program. Have a great day!" << endl;
        return 0;
    }
    else {
        system("cls"); //clear the screen
        cout << "Thank you for using the program. Have a great day!" << endl;
    }
    return 0;
}
