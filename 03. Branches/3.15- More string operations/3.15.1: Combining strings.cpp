/*
Retype and correct the code provided to combine two strings separated by a space. 
Hint: What type of parameter does push_back expect?

   secretID.push_back(spaceChar);
   secretID.push_back(lastName);
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
   string secretID;
   string lastName;
   char spaceChar;

   secretID = "Barry";
   lastName = "Allen";
   spaceChar = ' ';

   /* Your solution goes here  */
   secretID.push_back(spaceChar);
   secretID = secretID + lastName;

   cout << secretID << endl;
   return 0;
}
