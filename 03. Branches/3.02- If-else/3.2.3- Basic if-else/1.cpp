/*
Write an if-else statement for the following:
If userTickets is greater than 5, execute awardPoints = 10. Else, execute awardPoints = userTickets.

Ex: If userTickets is 14, then awardPoints = 10.
*/


#include <iostream>
using namespace std;

int main() {
   int awardPoints;
   int userTickets;

   cin >> userTickets; // Program will be tested with values: 4, 5, 6, 7.

   /* Your solution goes here */
   if (userTickets > 5)
   {
      awardPoints = 10;
   }
   else
   {
      awardPoints = userTickets;
   }
   
   cout << awardPoints << endl;
   return 0;
}
