
#include <iostream>

using namespace std;

bool isLeapYear(int year);

int main() {
    int year;

    while(true) {
        cout << "Enter a year or Q to quit: ";
        cin >> year;

        if (cin.fail()) break;

        if (isLeapYear(year)) cout << year << " is a leap year." << endl << endl;
        else cout << year << " is not a leap year." << endl << endl;

    } 
    return 0;
}

/**
isLeapYear – determines whether a given year is a leap year under the Gregorian calendar.
@param year the year; expected to be >= 1582
@return true if year is a leap year; false otherwise
*/
bool isLeapYear(int year) {
    if (year % 4 != 0) {
        return false;
    }
    else if (year % 100 != 0) {
        return true;
    }
    else if (year % 400 != 0) {
        return false;
    }
    else {
        return true;
    }
}