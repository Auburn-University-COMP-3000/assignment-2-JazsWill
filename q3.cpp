#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// Assignment 2 - Exercise 3
// This program prompts the user to enter a running pace and convert it to miles per hour.

double convertToMPH(double minutes, double seconds)
{
    double time = minutes * 60 + seconds;
    double mph = 3600 /*seconds*/ / time;
    return mph;
}

double convertToMPH(double kph)
{
    double mph = kph / 1.61;
    return mph;
}

int main()
{
  // Assignment 2 - Exercise 3

         double mileMinutes, mileSeconds, kilometersPerHour;

         cout << "Assignment 2 - Exercise 3\n";
         cout << "\nEnter the minutes of your running pace (mm:ss): ";
         cin >> mileMinutes;

         cout << "\nEnter the seconds of your running pace (mm:ss): ";
         cin >> mileSeconds;

         cout << "\nEnter the kilometers per hour: ";
         cin >> kilometersPerHour;

         cout << "\n Your " << mileMinutes << ":" << mileSeconds << " mile is " << convertToMPH(mileMinutes, mileSeconds) << " MPH.\n";
         cout << " The running pace " << kilometersPerHour << " KPH is " << convertToMPH(kilometersPerHour) << " MPH.\n";

         return 0;
}
