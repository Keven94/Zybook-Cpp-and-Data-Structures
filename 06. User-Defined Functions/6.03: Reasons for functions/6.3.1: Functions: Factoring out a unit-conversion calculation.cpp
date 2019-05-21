/*
Write a function so that the main() code below can be replaced by the simpler code that calls function MphAndMinutesToMiles(). 
Original main():

int main() {
   double milesPerHour = 70.0;
   double minutesTraveled = 100.0;

   double hoursTraveled;
   double milesTraveled;

   hoursTraveled = minutesTraveled / 60.0;
   milesTraveled = hoursTraveled * milesPerHour;

   cout << "Miles: " << milesTraveled << endl;

   return 0;
}
*/

#include <iostream>
using namespace std;

/* Your solution goes here  */
double MphAndMinutesToMiles(double milesPerHour, double minutesTraveled)
{
   return (minutesTraveled / 60.0) * milesPerHour;
}

int main() {
   double milesPerHour = 70.0;
   double minutesTraveled = 100.0;

   cout << "Miles: " << MphAndMinutesToMiles(milesPerHour, minutesTraveled) << endl;

   return 0;
}
