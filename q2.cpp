#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// Assignment 2 - Exercise 2
   // This program prompts the user to enter an amount of change between 1 and 99 and prints out the coins needed.

void computeCoin(int coinValue, int& number, int& amountLeft)
{
    int amount = 0, pennies = 0, dimes = 0, quarters = 0;

    number = amountLeft / coinValue;
    amountLeft = amountLeft - (coinValue * number);
}

int main()
{
  // Assignment 2 - Exercise 2

         int coinValue, number, amountLeft, amount, quarter, dimes{}, pennies{};
         char answer;

         cout << "Assignment 2 - Exercise 2";

         do
         {
             do
             {
                 cout << "\nEnter the change you want between 1 and 99: ";
                 cin >> amount;
             } while (amount < 1 || amount > 100);

             cout << "\nThe change entered can be given as: \n";
             computeCoin(25, quarter, amount);
             computeCoin(10, dimes, amount);
             pennies = amount;
             cout << " " << quarter << " quarters\n";
             cout << " " << dimes << " dimes\n";
             cout << " " << pennies << " pennies\n\n"; 

             cout << "\nEnter 'Y' to calculate change again. If not enter 'N' to exit program.: ";
             cin >> answer;
         } while (answer == 'Y');
}
