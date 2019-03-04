/*
Complete the function definition to output the hours given minutes. Output for sample program:

3.5
*/

#include <iostream>
using namespace std;

void OutputMinutesAsHours(double origMinutes) {

   /* Your solution goes here  */
   cout << origMinutes / 60;
}

int main() {

   OutputMinutesAsHours(210.0); // Will be run with 210.0, 3600.0, and 0.0.
   cout << endl;

   return 0;
}
