/*
Write an expression that will cause "Foot or more" to print if the value of numInches is greater than or equal to 12.
*/

#include <iostream>
using namespace std;

int main() {
   int numInches;

   numInches = 0;

   cin >> numInches; // Program will be tested with values: 10, 11, 12, 13.

   if (numInches >= 12) {
      cout << "Foot or more" << endl;
   }
   else {
      cout << "Less than a foot" << endl;
   }

   return 0;
}
