/*
Print "userNum1 is negative." 
if userNum1 is less than 0. 
End with newline.
Convert userNum2 to 0 if userNum2 is greater than 8. 
Otherwise, print "userNum2 is less than or equal to 8.". End with newline.
*/

#include <iostream>
using namespace std;

int main() {
   int userNum1;
   int userNum2;

   userNum1 = -1;
   userNum2 = 6;

   /* Your solution goes here */
   if (userNum1 < 0)
   {
      cout << "userNum1 is negative." << endl;
   }
   if (userNum2 > 8)
   {
      userNum2 = 0;
   }
   else 
   {
      cout << "userNum2 is less than or equal to 8." << endl;
   }

   cout << "userNum2 is " << userNum2 << endl;

   return 0;
}
