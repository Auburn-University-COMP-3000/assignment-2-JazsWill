#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// Assignment 2 - Exercise 1
// This program prompts the user to enter a date and output the corresponding day of the week.

bool isLeapYear(int year)
{
    return((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0)));
}

int getCenturyValue(int year)
{
    int firstTwoDigits, centuryValue;
        
    firstTwoDigits = (year / 100);
    centuryValue = ((3 - (firstTwoDigits % 4)) * 2);
    return centuryValue;
}

int getYearValue(int year)
{
    int lastTwoDigits, yearValue;

    lastTwoDigits = (year % 100);
    yearValue = ((lastTwoDigits / 4) + lastTwoDigits);
    return yearValue;
}

int getMonthValue(int month, int year)
{
    int monthValue;
    
    if ((month == 1) && (isLeapYear(year)))
        return monthValue = 6;
    else if (month == 1)
        return monthValue = 0;
    else if ((month == 2) && (isLeapYear(year)))
        return monthValue = 2;
    else if (month == 2)
        return monthValue = 3;
    else if (month == 3)
        return monthValue = 3;
    else if (month == 4)
        return monthValue = 6;
    else if (month == 5)
        return monthValue = 1;
    else if (month == 6)
        return monthValue = 4;
    else if (month == 7)
        return monthValue = 6;
    else if (month == 8)
        return monthValue = 2;
    else if (month == 9)
        return monthValue = 5;
    else if (month == 10)
        return monthValue = 0;
    else if (month == 11)
        return monthValue = 3;
    else
        return monthValue = 5;
}
