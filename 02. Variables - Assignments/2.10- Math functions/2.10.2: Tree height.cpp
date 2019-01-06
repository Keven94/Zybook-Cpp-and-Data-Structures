/*
Simple geometry can compute the height of an object from the object's shadow length and shadow angle using the formula: 
tan(angleElevation) = treeHeight / shadowLength.
1. Using simple algebra, rearrange that equation to solve for treeHeight.
2. Write a statement to assign treeHeight with the height calculated from an expression using angleElevation and shadowLength. 
*/


#include <iostream>
#include <cmath>
using namespace std;

int main( ) {
   double treeHeight;
   double shadowLength;
   double angleElevation;

   angleElevation = 0.11693706; // 0.11693706 radians = 6.7 degrees
   shadowLength   = 17.5;

   /* Your solution goes here  */
   treeHeight = shadowLength * tan(angleElevation);

   cout << "Tree height: " << treeHeight << endl;

   return 0;
}
