/*
Complete the expression so that userPoints is assigned with 0 if userStreak is less than 20 (second branch). 
Otherwise, userPoints is assigned with 10 (first branch).
*/

#include <iostream>
using namespace std;

int main() {
   int userStreak;
   int userPoints;

   userStreak = 0;
   userPoints = 0;

   cin >> userStreak; // Program will be tested with values: 15, 20, 25, 30, 35.

   if (userStreak >= 20) {
      userPoints = 10;
   }
   else {
      userPoints = 0;
   }

   cout << userPoints;

   return 0;
}
