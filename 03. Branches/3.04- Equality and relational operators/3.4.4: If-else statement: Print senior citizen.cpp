/*
Write an if-else statement that checks patronAge. 
If 55 or greater, print "Senior citizen", otherwise print "Not senior citizen" (without quotes). 
End with newline. 
*/


#include <iostream>
using namespace std;

int main() {
   int patronAge;

   patronAge = 55;

   /* Your solution goes here  */
   if (patronAge >= 55)
   {
      cout << "Senior citizen" << endl;
   }
   else
   {
      cout << "Not senior citizen" << endl;
   }

   return 0;
}
