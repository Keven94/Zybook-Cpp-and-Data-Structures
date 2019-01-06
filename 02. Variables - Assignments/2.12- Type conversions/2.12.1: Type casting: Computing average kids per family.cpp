/*
Compute the average kids per family. Note that the integers should be type cast to doubles. 
*/


#include <iostream>
using namespace std;

int main() {
   int numKidsA;
   int numKidsB;
   int numKidsC;
   int numFamilies;
   double avgKids;

   numKidsA = 1;
   numKidsB = 4;
   numKidsC = 5;
   numFamilies = 3;

   /* Your solution goes here  */
   avgKids = static_cast<double>((numKidsA + numKidsB + numKidsC)) / numFamilies;

   cout << "Average kids per family: " << avgKids << endl;

   return 0;
}
