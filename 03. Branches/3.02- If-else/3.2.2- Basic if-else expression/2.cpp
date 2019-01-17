/*
Write an expression that will cause the following code to print "less than -10" if the value of userNum is less than -10.
*/


#include <iostream>
using namespace std;

int main() {
   int userNum;

   cin >> userNum; // Program will be tested with values: -9, -10, -11, -12.

   if (userNum < -10) {
      cout << "less than -10" << endl;
   }
   else {
      cout << "-10 or more" << endl;
   }

   return 0;
}
