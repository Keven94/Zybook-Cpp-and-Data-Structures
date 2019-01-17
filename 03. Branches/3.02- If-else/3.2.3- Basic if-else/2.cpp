/*
Write an if-else statement for the following:
If numDifference is less than -20, execute totalDifference = -25. Else, execute totalDifference = numDifference.
*/


#include <iostream>
using namespace std;

int main() {
   int totalDifference;
   int numDifference;

   cin >> numDifference; // Program will be tested with values: -19, -20, -21, -22.

   /* Your solution goes here */
   if (numDifference < -20)
   {
      totalDifference = -25;
   }
   else
   {
      totalDifference = numDifference;
   }

   cout << totalDifference << endl;

   return 0;
}
