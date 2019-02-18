/*
Write a for loop to print all NUM_VALS elements of vector hourlyTemp. 
Separate elements with a comma and space. Ex: If hourlyTemp = {90, 92, 94, 95}, print:

90, 92, 94, 95

Note that the last element is not followed by a comma, space, or newline.
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
   const int NUM_VALS = 4;
   vector<int> hourlyTemp(NUM_VALS);
   int i;

   hourlyTemp.at(0) = 90;
   hourlyTemp.at(1) = 92;
   hourlyTemp.at(2) = 94;
   hourlyTemp.at(3) = 95;

   /* Your solution goes here  */
   for (i = 0; i < NUM_VALS -1; i++)
   {
      cout << hourlyTemp.at(i) << ", ";
   }
   
   cout << hourlyTemp.at(NUM_VALS - 1);

   cout << endl;

   return 0;
}
