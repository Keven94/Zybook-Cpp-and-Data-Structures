/*
Write an expression that will cause the following code to print "less than 18" if the value of userAge is less than 18.
*/


#include <iostream>
using namespace std;

int main() {
   int userAge;

   cin >> userAge; // Program will be tested with values: 16, 17, 18, 19.

   if (userAge < 18) {
      cout << "less than 18" << endl;
   }
   else {
      cout << "18 or more" << endl;
   }

   return 0;
}
