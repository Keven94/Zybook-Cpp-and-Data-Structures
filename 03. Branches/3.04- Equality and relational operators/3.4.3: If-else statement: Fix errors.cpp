/*
Find and fix the error in the if-else statement.
*/


#include <iostream>
using namespace std;

int main() {
   int userNum;

   cin >> userNum;    // Program will be tested with values: 1, 2, 3, 4.

   if (userNum <= 2) {
      cout << "Num is less or equal to two" << endl;
   }
   else {
      cout << "Num is greater than two" << endl;
   }

   return 0;
}
