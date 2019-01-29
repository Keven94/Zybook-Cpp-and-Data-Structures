/*
Create a conditional expression that evaluates to string "negative" if userVal is less than 0, 
and "non-negative" otherwise. Example output when userVal = -9 for the below sample program:

-9 is negative.

*/

#include <iostream>
#include <string>
using namespace std;

int main() {
   string condStr;
   int userVal;

   userVal = -9;

   condStr = (userVal < 0) ? "negative" : "non-negative";

   cout << userVal << " is " << condStr << "." << endl;

   return 0;
}
