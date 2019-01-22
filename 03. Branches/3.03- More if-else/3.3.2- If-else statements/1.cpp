/*
Write multiple if statements:
If carYear is before 1968, print "Probably has few safety features." (without quotes).
If after 1969, print "Probably has head rests.".
If after 1990, print "Probably has anti-lock brakes.".
If after 2000, print "Probably has airbags.".
End each phrase with period and newline. Ex: carYear = 1995 prints:

Probably has head rests.
Probably has anti-lock brakes.
*/


#include <iostream>
using namespace std;

int main() {
   int carYear;

   carYear = 2001;

   /* Your solution goes here */
   if (carYear < 1968)
   {
      cout << "Probably has a few safety features." << endl;
   }
   if (carYear > 1969)
   {
      cout << "Probably has head rests." << endl;
   }
   if (carYear > 1990)
   {
      cout << "Probably has anti-lock brakes." << endl;
   }
   if (carYear > 2000)
   {
      cout << "Probably has airbags." << endl;
   }

   return 0;
}
