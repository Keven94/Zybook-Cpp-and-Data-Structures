/*
Replace any space ' ' with '_' in 2-character string passCode. Sample output for the given program:

1_
*/

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
   string passCode;

   passCode = "1 ";

   /* Your solution goes here  */
   if ((passCode.at(0) == ' ') && (passCode.at(1) == ' '))
   {
      passCode.at(0) = '_';
      passCode.at(1) = '_';
   }
   else if (passCode.at(0) == ' ')
   {
      passCode.at(0) = '_';
   }
   else if (passCode.at(1) == ' ')
   {
      passCode.at(1) = '_';
   }

   cout << passCode << endl;
   return 0;
}
