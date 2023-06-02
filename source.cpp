// Mitchell Fontaine
// CS-210
// 05/18/2023
// Project 1 Chada Tech Clock

#include <iostream>
using namespace std;

// Function printClock sets up AM or PM and prints the clock to terminal
// printClock() Prints clock to Chada Tech Specs
void printClock(int currHour, int currMin, int currSec, int currAmPm) {
    cout << "**************************\t**************************" << endl;
    cout << "*     12-Hour Clock      *\t*     24-Hour Clock      *" << endl;

    // Adds extra zeros for formatting
    if (currHour < 10 && currMin < 10 && currSec < 10) {
        cout << "*     0" << currHour << ": 0" << currMin << ": 0" << currSec << " "; //1

        // Establishes whether it's AM or PM
        if (currAmPm > 11) { 
            cout << "PM      * \t";
            cout << "*     0" << currAmPm << ": 0" << currMin << ": 0" << currSec << "         *" << endl;
            cout << "**************************\t**************************" << endl;
        }
        else {
            cout << "AM      *\t";
            cout << "*     0" << currAmPm << ": 0" << currMin << ": 0" << currSec << "         *" << endl;
            cout << "**************************\t**************************" << endl;

        }
    }
    else if (currHour < 10 && currMin < 10) {
        cout << "*     0" << currHour << ": 0" << currMin << ": " << currSec << " ";//2

        if (currAmPm > 11) {
            cout << "PM      * \t";
            cout << "*     0" << currAmPm << ": 0" << currMin << ": " << currSec << "         *" << endl;
            cout << "**************************\t**************************" << endl;
        }
        else {
            cout << "AM      *\t";
            cout << "*     0" << currAmPm << ": 0" << currMin << ": " << currSec << "         *" << endl;
            cout << "**************************\t**************************" << endl;

        }
    }


    else if (currHour < 10 && currSec < 10) {
        cout << "*     0" << currHour << ": " << currMin << ": 0" << currSec << " ";

        if (currAmPm > 11) {
            cout << "PM      * \t";
            cout << "*     0" << currAmPm << ": " << currMin << ": 0" << currSec << "         *" << endl;
            cout << "**************************\t**************************" << endl;
        }
        else {
            cout << "AM      *\t";
            cout << "*     0" << currAmPm << ": " << currMin << ": 0" << currSec << "         *" << endl;
            cout << "**************************\t**************************" << endl;

        }
    }

    else if (currMin < 10 && currSec < 10) {
        cout << "*     " << currHour << ": 0" << currMin << ": 0" << currSec << " ";

        if (currAmPm > 11) {
            cout << "PM      * \t";
            cout << "*     " << currAmPm << ": 0" << currMin << ": 0" << currSec << "         *" << endl;
            cout << "**************************\t**************************" << endl;
        }
        else {
            cout << "AM      *\t";
            cout << "*     " << currAmPm << ": 0" << currMin << ": 0" << currSec << "         *" << endl;
            cout << "**************************\t**************************" << endl;

        }
    }
    else if (currHour < 10 && currMin >= 10 && currSec >= 10) {
        cout << "*     0" << currHour << ": 0" << currMin << ": 0" << currSec << " ";

        if (currAmPm > 11) {
            cout << "PM      * \t";
            cout << "*     0" << currAmPm << ": " << currMin << ": " << currSec << "         *" << endl;
            cout << "**************************\t**************************" << endl;
        }
        else {
            cout << "AM      *\t";
            cout << "*     0" << currAmPm << ": " << currMin << ": " << currSec << "         *" << endl;
            cout << "**************************\t**************************" << endl;

        }
    }

    else if (currHour >= 10 && currMin < 10 && currSec >= 10) {
        cout << "*     0" << currHour << ": 0" << currMin << ": 0" << currSec << " ";

        if (currAmPm > 11) {
            cout << "PM      * \t";
            cout << "*     " << currAmPm << ": 0" << currMin << ": " << currSec << "         *" << endl;
            cout << "**************************\t**************************" << endl;
        }
        else {
            cout << "AM      *\t";
            cout << "*     " << currAmPm << ": 0" << currMin << ": " << currSec << "         *" << endl;
            cout << "**************************\t**************************" << endl;

        }
    }

    else if (currHour >= 10 && currMin >= 10 && currSec < 10) {
        cout << "*     " << currHour << ": " << currMin << ": 0" << currSec << " ";

        if (currAmPm > 11) {
            cout << "PM      * \t";
            cout << "*     " << currAmPm << ": " << currMin << ": 0" << currSec << "         *" << endl;
            cout << "**************************\t**************************" << endl;
        }
        else {
            cout << "AM      *\t";
            cout << "*     " << currAmPm << ": " << currMin << ": 0" << currSec << "         *" << endl;
            cout << "**************************\t**************************" << endl;

        }
    }
}




// Function printMenu prints the menu to terminal with available choices
void printMenu() {
    cout << endl;
    cout << "**************************" << endl;
    cout << "* 1 - Add One Hour       *" << endl;
    cout << endl;
    cout << "* 2 - Add One Minute     *" << endl;
    cout << endl;
    cout << "* 3 - Add One Second     *" << endl;
    cout << endl;
    cout << "* 4 - Exit Program       *" << endl;
    cout << "**************************" << endl;
    cout << endl;
}

//Adds one hour to the 12hr clock
int addHour(int currHour) {
    currHour = currHour + 1;

    // If 12 it reverts back to 1
    if (currHour > 12) { 
        currHour = 1;
    }
    return currHour;
}
// Adds one hour to the 24 Hr Clock
int addHourMF(int currAmPm) {
    currAmPm += 1;
    // If 23 it reverts back to 00:00
    if (currAmPm > 23) {
        currAmPm = 0;
    }
    return currAmPm;
}
// Adds one Minute to 12 & 24 hour clocks
int addMin(int currMin) {
    currMin += 1;
    if (currMin > 59) {
        currMin = 0;
    }
    return currMin;
}
// Adds one second to 12 and 24 hour clocks
int addSec(int currSec) {
    currSec += 1;
    if (currSec > 59) {
        currSec = 0;
    }
    return currSec;

}
int main()
{
    // Default Values for clock
    int menuInput = 0; 
    int currHour = 1;
    int currMin = 0;
    int currSec = 0;
    int currAmPm = 1;

    // Checks for input that is not the exit key
    while (menuInput != 4) {

        // Prints the clock
        printClock(currHour, currMin, currSec, currAmPm);

        // Prints menu
        printMenu();

        // Get user input
        cin >> menuInput;

        // Determines which function to call based on user input
        switch (menuInput) {

        case 1:
            currHour = addHour(currHour);
            currAmPm = addHourMF(currAmPm);
            break;
        case 2:
            currMin = addMin(currMin);
            break;
        case 3:
            currSec = addSec(currSec);
            break;

        }
    }
    return (0); // Ends program
}
