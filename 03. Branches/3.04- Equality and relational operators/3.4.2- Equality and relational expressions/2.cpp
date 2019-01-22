/*
Write an expression that will cause "less or equal to -10" to print if the value of userNum is less than or equal to -10.
*/


#include <iostream>
using namespace std;

int main() {
   int userNum;

   userNum = 0;

   cin >> userNum; // Program will be tested with values: -8, -9, -10, -11.

   if (userNum <= -10) {
      cout << "less or equal to -10" << endl;
   }
   else {
      cout << "more than -10" << endl;
   }

   return 0;
}
