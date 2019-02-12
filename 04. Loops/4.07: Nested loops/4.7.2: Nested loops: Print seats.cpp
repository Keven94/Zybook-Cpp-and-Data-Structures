/*
Given numRows and numCols, print a list of all seats in a theater. 
Rows are numbered, columns lettered, as in 1A or 3E. 
Print a space after each seat, including after the last. Ex: numRows = 2 and numCols = 3 prints:

1A 1B 1C 2A 2B 2C 
*/

#include <iostream>
using namespace std;

int main() {
   int numRows = 2;
   int numCols = 3;

   // Note: You'll need to declare more variables
   int i;
   char j;
   /* Your solution goes here  */
   for (i = 1; i <= numRows; i++)
   {
      for (j = 'A'; j < 'A' + numCols; j++)
      {
         cout << i << j << " ";
      }
   }

   cout << endl;

   return 0;
}
