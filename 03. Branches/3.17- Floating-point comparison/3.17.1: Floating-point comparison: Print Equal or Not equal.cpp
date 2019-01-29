/*
Write an expression that will cause the following code to print "Equal" if the value of sensorReading is "close enough" to targetValue. Otherwise, print "Not equal". 
*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
   double targetValue;
   double sensorReading;

   targetValue = 0.3333;
   sensorReading = 1.0/3.0;

   if (fabs(sensorReading - targetValue) < .0001) {
      cout << "Equal" << endl;
   }
   else {
      cout << "Not equal" << endl;
   }

   return 0;
}
